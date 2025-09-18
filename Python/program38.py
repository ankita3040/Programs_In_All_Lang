def SumFactor(iNo):
    
    if(iNo < 0):
        iNo = -iNo 
    sum = 0
    for iCnt in range(1,(iNo // 2) + 1):
        if((iNo % iCnt) == 0):
            sum = sum + iCnt
    return sum
        
           
def main():
    
    iValue = int(input("Enter number\n"))
    
    iRet = SumFactor(iValue)
    
    print("Summation of factor is ",iRet)

if __name__ == "__main__":
    main()
