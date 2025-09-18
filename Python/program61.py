class Factor:
    _No = 0
    
    def __init__(self, iNo):
        self._No = iNo
           
    def DisplayFactor(self):
        print("Factors are : ")
        for iCnt in range(1,(self._No // 2) + 1,1):
            if((self._No % iCnt) == 0): 
                print(iCnt)
           
 
    
def main(): 
    
    iValue = int (input("Enter number : "))
        
    sobj = Factor(iValue)
    sobj.DisplayFactor()
    


if __name__ == "__main__":
    main()