class CSVFile():
    def __init__(self, name):
        self.name = name

    def get_data(self):
        with open(self.name, 'r') as f:
            next(f)
            return [line.strip().split(',') for line in f]
