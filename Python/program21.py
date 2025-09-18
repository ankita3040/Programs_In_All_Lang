def main():
    
    iValue = int(input("Enter number \n"))
    
    bRet = Check_bool(iValue)
    
    if(bRet == True):
        print("Even number")
    else:
        print("Odd Number")
    
def Check_bool(iNo):
    bflag = False
    if((iNo % 2) == 0):
        bflag = True
    else:
        bflag = False
    return bflag
    

    
    
if __name__ == "__main__":
    main()