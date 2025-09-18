class Digit:
    _No = 0
    
    def __init__(self, iNo):
        self._No = iNo
           
    def Display_Even_Digits(self):
        
        if(self._No < 0):
            self._No = -self._No
        print("Even digits are ")
        while(self._No > 0):
            if(((self._No % 10) % 2) == 0):
                print(self._No % 10)
            
            self._No = self._No // 10
            
       
    
def main(): 
    
    iValue = int (input("Enter number : "))
        
    sobj = Digit(iValue)
    sobj.Display_Even_Digits()
    
if __name__ == "__main__":
    main()