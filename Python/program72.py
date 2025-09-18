class Digit:
    _No = 0
    
    def __init__(self, iNo):
        self._No = iNo
           
    def Count_Even(self):
        
        if(self._No < 0):
            self._No = -self._No
        iCount = 0
        while(self._No > 0):
            
            iDigit = self._No % 10
            if((iDigit % 2) == 0):
                iCount += 1
            self._No = self._No // 10
        
        return iCount
       
    
def main(): 
    
    iValue = int (input("Enter number : "))
        
    sobj = Digit(iValue)
    iRet = sobj.Count_Even()
    
    print("Number of even digits are ",iRet)
    
if __name__ == "__main__":
    main()