import random
import ctypes

target = ctypes.CDLL('./100-operations.so')
a = random.randint(-111, 111)
b = random.randint(-111, 111)
print("{} + {} = {}".format(a, b, target.add(a, b)))
print("{} - {} = {}".format(a, b, target.sub(a, b)))
print("{} x {} = {}".format(a, b, target.mul(a, b)))
print("{} / {} = {}".format(a, b, target.div(a, b)))
print("{} % {} = {}".format(a, b, target.mod(a, b)))
