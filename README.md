# fibo_testpypi2
This is a test library to upload on test.pypi.org.
It provides a method to calculate fibonacci numbers.
I changed the name of the library.

### Fibo:
The class.
### Fibo.fibo(x):
Calculate x th fibonacci number. x must be a positive interger.
### Fibo.fibo_squared(x): 
```
fibo_squared(x) = fibo_squared(x-1)**2 + fibo_squared(x-2)**2
fibo_squared(1) = fibo_squared(2) = 1
```
Diverges very quickly.

### Usage
```python
from fibo_testpypi2.fibo import Fibo
Fiboo = Fibo()
print(Fiboo.fibo(1)) # 1
print(Fiboo.fibo(3)) # 2
print(Fiboo.fibo(5)) # 5

print(Fiboo.fibo_squared(5)) # 29
print(Fiboo.fibo_squared(6)) # 866

# Test for including C Extension
from fibo_testpypi2.fibo import add
print(add(10, 20)) # 30
print(add(100, 200)) # 300

