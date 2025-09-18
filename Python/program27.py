def main():
    
    iValue = int(input("Enter number \n"))
    
    iRet = Factorial(iValue)
    
    print("Factorial  is ", iRet)
    
def Factorial(iNo):
    Fact = 1
    if(iNo < 0):
        print("Invalid Input\n")
        return -1
    
    for iCnt in range(1,iNo + 1):
        Fact = Fact * iCnt
    return Fact
    

    
    
if __name__ == "__main__":
    main()