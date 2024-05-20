class P:
    def __init__(self, x, y):
        self.x = x
        self.y = y
    
    def __iter__(self):
        self.z = self.x
        return self
    
    def __next__(self):
        if self.z < self.y - self.x:
            self.z += 1
            return self.z - 1
        raise StopIteration

myIterator = P(3, 11)

for i in myIterator:
    print(i)