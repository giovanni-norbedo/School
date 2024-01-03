class CSVFile:
    def __init__(self, name):
        if not isinstance(name, str):
            raise ValueError('Il nome del file deve essere una stringa')
        
        self.name = name
        self.can_read = True

        try:
            with open(self.name, 'r') as my_file:
                my_file.readline()

        except Exception as e:
            self.can_read = False
            print('Errore in apertura del file: "{}"'.format(e))

    def get_data(self, start=None, end=None):
        if not self.can_read:
            print('Errore, file non aperto o illeggibile')
            return None

        with open(self.name, 'r') as f:
            all_lines = f.readlines()
            start_was_none = False
            
            if not all_lines:
                return []
            
            if start == 1:
                start = 2
            if start is None:
                start_was_none = True
                start = 2
            if end is None:
                end = len(all_lines)
                
            if not isinstance(start, int) or not isinstance(end, int):
                try:
                    start = int(start)
                    end = int(end)
                except:
                    raise Exception('Errore, i valori di start e end devono essere numeri interi')
            
            if start == 0: 
                raise Exception('Errore, il valore di start non deve essere 0')
            
            if start < 0:
                raise Exception('Errore, il valore di start non deve essere negativo')
            
            if start > len(all_lines) and not start_was_none:
                print("start: " + str(start) + " end: " + str(end) + " len(all_lines): " + str(len(all_lines)))
                raise Exception('Errore, il valore di start non deve essere maggiore della lunghezza del file')
            
            if end > len(all_lines):
                raise Exception('Errore, il valore di end non deve essere maggiore della lunghezza del file')
            
            if end < start and not start_was_none: 
                raise Exception('Errore, il valore di end non deve essere minore di start')
            
            selected_lines = all_lines[start-1:end]
            
            return [line.strip().split(',') for line in selected_lines]

class NumericalCSVFile(CSVFile):
    def get_data(self, *args, **kwargs):
        string_data = super().get_data(*args, **kwargs)
        
        numerical_data = []
        
        for string_row in string_data:
            numerical_row = []
            
            for i, element in enumerate(string_row):
                
                if i == 0:
                    numerical_row.append(element)
                    
                else:
                    try:
                        numerical_row.append(float(element))
                    except Exception as e:
                        print('Errore in conversione del valore "{}" a numerico: "{}"'.format(element, e))
                        break
            
            if len(numerical_row) == len(string_row):
                numerical_data.append(numerical_row)
        
        return numerical_data