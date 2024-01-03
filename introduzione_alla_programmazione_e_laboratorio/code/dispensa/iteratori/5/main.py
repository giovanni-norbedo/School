class MyIter:
    def __init__(self, a, b, delta):
        self.a = a
        self.b = b
        self.delta = delta
        
    def __iter__(self):
        self.i = self.a
        return self
    
    def __next__(self):
        x = self.a + (self.i - 1) * self.delta
        if x > self.b:
            raise StopIteration
        self.i += 1
        return self.f(x)
    
    def f(self, x):
        return x * x

for i in MyIter(1, 10, 1):
    print(i)