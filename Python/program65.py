class FcatorNonFactor:
    _No = 0
    
    def __init__(self, iNo):
        self._No = iNo
           
    def SumFactorNonFactor(self):
        sum1 = 0
        sum2 = 0
        for iCnt in range(1,self._No,1):
            if((self._No % iCnt) == 0): 
                sum1 = sum1 + iCnt
            else:
                sum2 = sum2 + iCnt
        return sum1,sum2
        
           
 
    
def main(): 
    
    iValue = int (input("Enter number : "))
        
    sobj = FcatorNonFactor(iValue)
    iRet = sobj.SumFactorNonFactor()
    
    print("Summation of factor and  NON factor is ",iRet)

if __name__ == "__main__":
    main()