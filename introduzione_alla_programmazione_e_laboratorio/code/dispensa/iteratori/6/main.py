class Date:
    def __init__(self, dd, mm, yyyy, n):
        self.dd = dd
        self.mm = mm
        self.yyyy = yyyy
        self.n = n
        self.d_per_m = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
    
    def __str__(self):
        return f"{self.dd}/{self.mm}/{self.yyyy}"
    
    def __iter__(self):
        self.i = 0
        return self
    
    def __next__(self):
        if self.i > self.zn:
            raise StopIteration
        
        self.i += 1
        
        if self.is_bisestile(self.yyyy):
            self.d_per_m[1] = 29
            
        n_dd = self.d_per_m[self.mm - 1]
        
        if self.dd < n_dd:
            self.dd += 1
            return self
        if self.dd == n_dd and self.mm < 12:
            self.dd = 1
            self.mm += 1
            return self
        if self.dd == n_dd and self.mm == 12:
            self.dd = 1
            self.mm = 1
            self.yyyy += 1
            return self
        
    def is_bisestile(self, yyyy):
        if yyyy % 400 == 0 or (yyyy % 4== 0 and yyyy % 100 != 0):
            return True
        return False

for i in Date(11, 2, 2005, 1000):
    print(i)