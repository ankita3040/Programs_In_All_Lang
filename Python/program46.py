def main():
    iValue = 751
    
    DisplayDigit(iValue)
   
def DisplayDigit(iNo):
    while(iNo != 0):
        iDigit = iNo % 10
        print(iDigit)
        iNo = iNo // 10
    
 
    
if __name__ == "__main__":
    main()