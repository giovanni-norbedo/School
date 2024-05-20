class MyIter:
    def __init__(self, x, y):
        self.x = x
        self.y = y
    
    def __iter__(self):
        self.i = 0
        return self
    
    def __next__(self):
        while self.i < len(self.x):
            if not self.is_in_list(self.x[self.i], self.y):
                self.i += 1
                return self.x[self.i - 1]
            self.i += 1
        raise StopIteration
    
    def is_in_list(self, el, y):
        r = False
        for i in range(len(y)):
            if el == y[i]:
                r = True
        return r

for i in MyIter([1, 2, 3, 4, 5], [2, 5, 8]):
    print(i)