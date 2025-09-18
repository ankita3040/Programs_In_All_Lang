def main():
    
    iValue = int(input("Enter number \n"))
    
    bRet = Check_Divisible(iValue)
    
    if(bRet == True):
        print("Number is divisble by 3 and  5 ")
    else:
        print("Number is not divisble by 3 and  5 ")
    
def Check_Divisible(iNo):
    bflag = False
    if((iNo % 5) == 0) and ((iNo % 3)== 0):
        bflag = True
    else:
        bflag = False
    return bflag
    

    
    
if __name__ == "__main__":
    main()