class ExamException(Exception):
    pass

class MovingAverage:
    def __init__(self, finestra):
        self.finestra = finestra
        
        # controllo che finestra sia un numero intero
        if not isinstance(self.finestra, int):
            raise ExamException('Errore, la finestra deve essere un numero intero')
        
        # controllo che finestra sia positiva
        if self.finestra <= 0:
            raise ExamException('Errore, la finestra deve essere positiva')
        
    def compute(self, lista):
        self.lista = lista
        
        # inizializzo il risultato
        self.result = []
        
        # controllo che l'input sia una lista o una sua sottoclasse
        if not isinstance(self.lista, list):
            raise ExamException('Errore, l\'input deve essere una lista')
        
        # definisco la lunghezza della lista
        len_lista = len(self.lista)
        
        # controllo che la lista non sia vuota
        if len_lista == 0:
            raise ExamException('Errore, la lista è vuota')
        
        # controllo che la finestra sia inferiore o uguale alla lunghezza della lista
        if self.finestra > len_lista:
            raise ExamException('Errore, la finestra supera la lunghezza della lista')
        
        # controllo che ogni elemento della lista sia un numero
        for el in self.lista:
            if not isinstance(el, int) and not isinstance(el, float):
                raise ExamException('Errore, la lista contiene valori non numerici')
        
        # calcolo la media mobile
        for i in range(len_lista - self.finestra + 1):
            tmp = sum(self.lista[i : i + self.finestra]) / self.finestra
            self.result.append(tmp)
            
        return self.result