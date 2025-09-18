def DisplayFactor(iNo):
    for iCnt in range(1,iNo):
        if((iNo % iCnt) == 0):
            print(iCnt)
        
           
def main():
    
    iValue = int(input("Enter number\n"))
    
    DisplayFactor(iValue)

if __name__ == "__main__":
    main()
