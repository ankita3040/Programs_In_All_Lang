   
def SumDigit(iNo):
    iSum = 0
    while(iNo != 0):
        iDigit = iNo % 10
        iSum =  iSum + iDigit
        iNo = iNo // 10
    return iSum

def main():
    
    print("Enter number ")
    iValue = int(input())
    
    iRet = SumDigit(iValue)
    
    print("Sum of digits is ",iRet)
    
 
    
if __name__ == "__main__":
    main()