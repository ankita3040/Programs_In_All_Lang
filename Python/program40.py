def Check_Prime(iNo):
    
    if(iNo < 0):
        iNo = -iNo 
    
    bFlag = True
    for iCnt in range(2,(iNo // 2) + 1):
        if((iNo % iCnt) == 0):
            bFlag = False
            break
        
    return bFlag

           
def main():
    
    iValue = int(input("Enter number\n"))
    
    bRet = Check_Prime(iValue)
    
    if(bRet == True):
        print(iValue, " is prime number\n")
    else:
        print(iValue, " is not prime number\n")

if __name__ == "__main__":
    main()
