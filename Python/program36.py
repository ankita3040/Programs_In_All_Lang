def DisplayFactorNonfactor(iNo):
    
    if(iNo < 0):
        iNo = -iNo 
    
    for iCnt in range(1,iNo):
        if((iNo % iCnt) == 0):
            print("Factor is ",iCnt)
        else:
            print("Non Facator is ",iCnt)
        
           
def main():
    
    iValue = int(input("Enter number\n"))
    
    DisplayFactorNonfactor(iValue)

if __name__ == "__main__":
    main()
