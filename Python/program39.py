def Check_Perfect(iNo):
    
    if(iNo < 0):
        iNo = -iNo 
        
    sum = 0
    for iCnt in range(1,(iNo // 2) + 1):
        if((iNo % iCnt) == 0):
            sum = sum + iCnt
    
    if(iNo == sum):
        return True
    else:
        return False
        
           
def main():
    
    iValue = int(input("Enter number\n"))
    
    bRet = Check_Perfect(iValue)
    
    if(bRet == True):
        print(iValue, " is perfect number\n")
    else:
        print(iValue, " is not perfect number\n")

if __name__ == "__main__":
    main()
