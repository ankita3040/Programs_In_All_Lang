class Digit:
    _No = 0
    
    def __init__(self, iNo):
        self._No = iNo
           
    def Count_digit_Frequency(self):
        
        if(self._No < 0):
            self._No = -self._No
        iCount = 0
        while(self._No > 0):
            iDigit = self._No % 10
            if(iDigit == 5):
                iCount += 1
            self._No = self._No // 10
            
        return iCount
    
def main(): 
    
    iValue = int (input("Enter number : "))
        
    sobj = Digit(iValue)
    iRet = sobj.Count_digit_Frequency()
    
    print("Frequency of 5 is  ",iRet)

if __name__ == "__main__":
    main()