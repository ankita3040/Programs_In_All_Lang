def Factorial(iNo):
    iFact = 1

    iCnt = 1
    while(iCnt < iNo + 1):
        iFact = iFact * iCnt
        iCnt += 1
    return iFact
        

def main():
    print("Enter number : ")
    iValue = int(input())

    iRet = Factorial(iValue)

    print("Factorial is : ",iRet)
    
if __name__ == "__main__":
     main()

