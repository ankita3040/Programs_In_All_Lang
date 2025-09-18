def main():
    Value = int (input("Enter number"))
    
    Display(Value)
    
def Display(no):
    
    for iCnt in range(no, 0, -1): # will run backward 11 - 1
        print(iCnt)
    
    
if __name__ == "__main__":
    main()