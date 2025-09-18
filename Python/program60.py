class Even:
    _No = 0
    
    def __init__(self, iNo):
        self._No = iNo
           
    def CheckEven(self):
        
        if((self._No % 2) == 0): 
            return True
        else:
            return False
    
def main(): 
    
    iValue = int (input("Enter number : "))
        
    sobj = Even(iValue)
    bRet = sobj.CheckEven()
    
    if(bRet == True):
        print("Number is even ")
    else:
        print("Number is odd ")
    

if __name__ == "__main__":
    main()