def main():
    Value = int (input("Enter number"))
    
    Ret = Calculate(Value)
    print("Sum of all number upto this number is ",Ret)
    
def Calculate(no):
    sum = 0
    for iCnt in range(1,no+1): # start from 1 to that no 
        sum = sum + iCnt
        
    return sum
    
    
if __name__ == "__main__":
    main()