class MyIter:
    def __init__(self, max):
        self.max = max
    
    def __iter__(self):
        self.i = 0
        return self
    
    def __next__(self):
        if self.i >= self.max:
            raise StopIteration
        self.i += 1
        return (2**(self.i - 1))/(2*(self.i - 1) - 1)

for i in MyIter(10):
    print(i)
