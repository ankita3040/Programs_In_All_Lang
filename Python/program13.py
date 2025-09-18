def main():
    num = int (input("Enter number :"))
    
    bRet: bool = False
    bRet = CheckBool(num)
    
    if(bRet == True):
        print("Number is even")
    else:
        print("Number is odd")
    
    
def CheckBool(num) ->bool:
    bflag: bool = False
    
    if((num % 2) == 0):
        bflag = True
    else:
        bflag = False
    return bflag
        
        
if __name__ == "__main__":
    main()
    