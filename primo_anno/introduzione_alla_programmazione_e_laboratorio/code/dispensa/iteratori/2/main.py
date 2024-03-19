class MyIter:
    def __init__(self, lista):
        self.lista = lista
    
    def __iter__(self):
        self.i = 0
        return self
    
    def __next__(self):
        while self.i < len(self.lista):
            if self.is_prime(self.lista[self.i]):
                self.i += 1
                return self.lista[self.i - 1]
            self.i += 1
        raise StopIteration
    
    def is_prime(self, x):
        if x <= 1: return False
        if x == 2: return True
        r = True
        for i in range(2, x // 2):
            if x % i == 0:
                r = False
        return r


for i in MyIter([1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11]):
    print(i)