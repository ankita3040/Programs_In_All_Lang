def main():
    
    iValue = int(input("Enter number \n"))
    
    iRet = Factorial(iValue)
    
    if (iRet == -1):
        print("Invalid Input\n")
    else:
        print("Factorial  is ", iRet)
    
def Factorial(iNo):
    Fact = 1
    if(iNo < 0):
        return -1
    
    for iCnt in range(1,iNo + 1):
        Fact = Fact * iCnt
    return Fact
    

    
    
if __name__ == "__main__":
    main()