class NonFactor:
    _No = 0
    
    def __init__(self, iNo):
        self._No = iNo
           
    def SumNonFactor(self):
        sum = 0
        for iCnt in range(1,self._No,1):
            if((self._No % iCnt) != 0): 
                sum = sum + iCnt

        return  sum
           
 
    
def main(): 
    
    iValue = int (input("Enter number : "))
        
    sobj = NonFactor(iValue)
    iRet = sobj.SumNonFactor()
    
    print("Summation of NON factor is ",iRet)

if __name__ == "__main__":
    main()