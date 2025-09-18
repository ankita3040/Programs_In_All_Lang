class Digit:
    _No = 0
    
    def __init__(self, iNo):
        self._No = iNo
           
    def Reverese(self):
        
        if(self._No < 0):
            self._No = -self._No
            
        iRev = 0
        while(self._No > 0):
            
            iDigit = self._No % 10
            iRev = iRev * 10 + iDigit
            self._No = self._No // 10 
            
        return iRev
    
def main(): 
    
    iValue = int (input("Enter number : "))
        
    sobj = Digit(iValue)
    iRet = sobj.Reverese()
    
    print("Reverse number is ",iRet)
    
if __name__ == "__main__":
    main()