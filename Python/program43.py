def Check_Prime(iNo):
    
    if(iNo < 0):
        iNo = -iNo 
    
    bFlag = True
    iCnt = 0
    for iCnt in range(2,(iNo // 2) + 1):
        if((iNo % iCnt) == 0):
            break
        
        if(iCnt > (iNo // 2) ):
            bFlag = True
        else:
            bFlag = False

           
def main():
    
    iValue = int(input("Enter number\n"))
    
    bRet = Check_Prime(iValue)
    
    if(bRet == True):
        print(iValue, " is prime number\n")
    else:
        print(iValue, " is not prime number\n")

if __name__ == "__main__":
    main()
