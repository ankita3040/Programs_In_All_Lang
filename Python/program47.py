   
def CountDigit(iNo):
    iCount = 0
    while(iNo != 0):
        iDigit = iNo % 10
        iCount += 1
        iNo = iNo // 10
    return iCount

def main():
    
    print("Enter number ")
    iValue = int(input())
    
    iRet = CountDigit(iValue)
    
    print("Number of digits are ",iRet)
    
 
    
if __name__ == "__main__":
    main()