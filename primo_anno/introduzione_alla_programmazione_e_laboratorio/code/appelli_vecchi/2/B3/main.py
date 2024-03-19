class MyPower:
    def __init__(self, a):
        self.a = a
    
    def __iter__(self):
        self.n = 1
        self.media = 0
        return self
    
    def __next__(self):
        if (self.n > self.a):
            raise StopIteration
        self.n += 1
        tmp = 3 ** (self.n) / (self.n - 1)
        self.media += tmp
        return tmp
    
    def mean_pow_a(self):
        return self.media / self.a


myiter = MyPower(4)
for i in myiter:
    print(i)
print(myiter.mean_pow_a())