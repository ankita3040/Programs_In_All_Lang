def main():
    Value = int (input("Enter number"))
    
    Display(Value)
    
def Display(no):
    
    for iCnt in range(no): # will run from 0 to no-1 0-10
        print(iCnt)
    
    
if __name__ == "__main__":
    main()