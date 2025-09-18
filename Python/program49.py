   
def CountEvenDigit(iNo):
    iCount = 0
    while(iNo != 0):
        iDigit = iNo % 10
        if(iDigit % 2) == 0:
            iCount += 1
        iNo = iNo // 10
    return iCount

def main():
    
    print("Enter number ")
    iValue = int(input())
    
    iRet = CountEvenDigit(iValue)
    
    print("Number of  even digits are ",iRet)
    
 
    
if __name__ == "__main__":
    main()