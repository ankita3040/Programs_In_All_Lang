class Factor:
    _No = 0
    
    def __init__(self, iNo):
        self._No = iNo
           
    def SumFactor(self):
        sum = 0
        for iCnt in range(1,(self._No // 2) + 1,1):
            if((self._No % iCnt) == 0): 
                sum = sum + iCnt

        return  sum
           
 
    
def main(): 
    
    iValue = int (input("Enter number : "))
        
    sobj = Factor(iValue)
    iRet = sobj.SumFactor()
    
    print("Summation of factor is ",iRet)

if __name__ == "__main__":
    main()