class MyIter:
    def __init__(self, x, y, delta):
        self.x = x
        self.y = y
        self.delta = delta
        self.ultimo = False
    
    def __iter__(self):
        self.i = self.x
        return self
    
    def __next__(self):
        if self.i > self.y:
            if not self.ultimo:
                self.ultimo = True
                return self.y
            raise StopIteration
        else:
            self.i += self.delta
            return self.i - self.delta


for i in MyIter(1, 10, 2):
    print(i)