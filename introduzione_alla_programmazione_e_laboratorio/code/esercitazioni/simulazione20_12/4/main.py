class P:
    def __init__(self, x, z):
        self.x = x
        self.z = z
    
    def __iter__(self):
        self.i = self.x
        return self
    
    def __next__(self):
        if self.fib(self.i) > self.fib(self.z):
            raise StopIteration
        self.i += 1
        return self.fib(self.i - 1)
    
    def fib(self, n):
        if n == 0: return 0
        if n == 1: return 1
        return self.fib(n - 1) + self.fib(n - 2)

for i in P(3, 6):
    print(i)