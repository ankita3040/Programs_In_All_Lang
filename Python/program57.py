class Addition:
    
    def Addition(self,iNo1, iNO2):
        
        iAns = iNo1 + iNO2
        print("Addition is ",iAns)
        

def main(): 
    iValue1 = int(input("Enter first number :"))
    iValue2 = int (input("Enter second number : "))
        
    sobj = Addition()
    sobj.Addition(iValue1,iValue2)

if __name__ == "__main__":
    main()