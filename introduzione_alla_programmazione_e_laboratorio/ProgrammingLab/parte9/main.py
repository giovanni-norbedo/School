from matplotlib import pyplot as plt

plt.spring


class Model():
    def fit(self, data):
        raise NotImplementedError('Metodo non implementato')
    def predict(self, data):
        raise NotImplementedError('Metodo non implementato')


class TrendModel(Model):
    def predict(self, data):
        if type(data) is not list:
            raise TypeError('Input data must be a list')
        if len(data) <= 1:
            raise ValueError('Input data must contain at least two elements')
        
        prev_value = None
        mean = 0
        counter = 0
        last = 0
        
        for item in data:
            if type(item) is not int:
                raise TypeError('Input data must be a list of integers')
            
            if prev_value is None:
                prev_value = item
                continue
            
            mean += item - prev_value
            prev_value = item
            counter += 1
            last = item
        
        if counter == 0:
            return last
        
        mean /= counter
        prediction = last + mean
        
        return prediction


class FitIncrementModel(TrendModel):
    def __init__(self):
        self.global_avg_increment = 0
    
    def fit(self, data):
        pass


myModel = TrendModel()

data = [50, 52, 60]

prediction = myModel.predict(data)

plt.plot(data + [prediction], color='tab:red', linewidth=3)
plt.plot(data, color='tab:blue', linewidth=3)
plt.show()