def main():
    
    iValue = int(input("Enter number \n"))
    
    bRet = Check_Divisible(iValue)
    
    if(bRet == True):
        print("Number is divisble by 5 ")
    else:
        print("Number is not divisble by 5 ")
    
def Check_Divisible(iNo):
    bflag = False
    if((iNo % 5) == 0):
        bflag = True
    else:
        bflag = False
    return bflag
    

    
    
if __name__ == "__main__":
    main()