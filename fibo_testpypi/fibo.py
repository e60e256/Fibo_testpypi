class Fibo:
    def __init__(self):
        self.fibo_dict = dict()

    def fibo(self, x):
        if (x <= 0):
            raise ValueError("x must be a positive interger")
            return

        if (x in self.fibo_dict):
            return self.fibo_dict[x]
        if (x == 1 or x == 2):
            return 1
        else:
            ans = self.fibo(x-1) + self.fibo(x-2)
            self.fibo_dict[x] = ans
            return ans
    
