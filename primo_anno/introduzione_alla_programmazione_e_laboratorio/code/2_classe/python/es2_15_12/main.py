class DivX:
    def __init__(self, a, b, x):
        self.a = a
        self.b = b
        self.x = x
    
    def __iter__(self):
        # self.i = self.get_first(self.a, self.x)
        self.i = self.a + self.x - self.a % self.x
        return self
    
    def __next__(self):
        if self.i <= self.b:
            self.i += self.x
            return self.i - self.x
        raise StopIteration
    
    def get_first(self, a, x):
        if a % x == 0:
            return a
        return self.get_first(a + 1, x)

myIter = DivX(1, 12, 3)

for i in myIter:
    print(i)