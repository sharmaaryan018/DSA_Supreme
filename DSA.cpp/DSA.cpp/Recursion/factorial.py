def factorial(n):
    if(n==1 or n==0):
        return 1
    else:
        return n*factorial(n-1)

def fib(n):
    if(n==0):
        return 0
    elif(n==1):
        return 1
    else:
        return fib(n-1)+fib(n-2)
print(fib(6))