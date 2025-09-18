def main():
    
    iValue = int(input("Enter number \n"))
    
    bRet = Check_bool(iValue)
    
    if(bRet == True):
        print("Even number")
    else:
        print("Odd Number")
    
def Check_bool(iNo):
    if((iNo % 2) == 0):
        return True
    else:
        return False
    

    
    
if __name__ == "__main__":
    main()