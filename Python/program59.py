class Addition:
    _No1 = 0
    _No2 = 0
    def __init__(self,iNo1,iNo2):
        self._No1 = iNo1
        self._No2 = iNo2
        
    def Addition(self):
    
        iAns = self._No1 + self._No2    
        print("Addition is ",iAns)
        

def main(): 
    iValue1 = int(input("Enter first number :"))
    iValue2 = int (input("Enter second number : "))
        
    sobj = Addition(iValue1,iValue2)
    sobj.Addition()

if __name__ == "__main__":
    main()