def DisplayEvenFactor(iNo):
    
    if(iNo < 0):
        iNo = -iNo 
    
    for iCnt in range(1,(iNo // 2) + 1):
        if(((iNo % iCnt) == 0) and((iCnt % 2)== 0)):
            print(iCnt)
        
           
def main():
    
    iValue = int(input("Enter number\n"))
    
    DisplayEvenFactor(iValue)

if __name__ == "__main__":
    main()
