class NonFactor:
    _No = 0
    
    def __init__(self, iNo):
        self._No = iNo
           
    def DisplayNonFactor(self):
        print("Non Factors are : ")
        for iCnt in range(1,self._No,1):
            if((self._No % iCnt) != 0): 
                print(iCnt)
           
 
    
def main(): 
    
    iValue = int (input("Enter number : "))
        
    sobj = NonFactor(iValue)
    sobj.DisplayNonFactor()
    


if __name__ == "__main__":
    main()