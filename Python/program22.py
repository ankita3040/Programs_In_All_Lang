def main():
    
    iValue = int(input("Enter number \n"))
    
    bRet = Check_bool(iValue)
    
    if(bRet == True):
        print("Even number")
    else:
        print("Odd Number")
    
def Check_bool(iNo):
    return((iNo % 2) == 0)


    
    
if __name__ == "__main__":
    main()