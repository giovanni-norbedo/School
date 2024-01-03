class StrutturaSelettiva():
    def __init__(self, dati, quale):
        self.dati=dati
        self.quale=quale
    
    def __iter__(self):
        return IteratoreStruttura(self.dati,self.quale)


class IteratoreStruttura(StrutturaSelettiva):
    def __init__(self, dati, quale):
        super().__init__(dati, quale)
        self.i = 0
        if self.quale == 1:
            self.i = 1
    
    def __next__(self):
        if self.i > len(self.dati) - 1:
            raise StopIteration
        
        self.i += 2
        return self.dati[self.i - 2]


for i in StrutturaSelettiva([1, 2, 3, 4, 5], 1):
    print(i)