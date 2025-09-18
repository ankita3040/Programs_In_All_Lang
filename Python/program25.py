def main():
    
    iValue = int(input("Enter number \n"))
    
    iRet = Summation(iValue)
    
    print("Summation  is ", iRet)
    
def Summation(iNo):
    sum = 0
    for iCnt in range(1,iNo + 1):
        sum = sum + iCnt
    return sum
    

    
    
if __name__ == "__main__":
    main()