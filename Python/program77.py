# Input : 4
# Output: 1 2 3 4 

def Display(iNo):
    if(iNo < 0):
        iNo = -iNo
        
    for i in range(1, iNo+1,1):
        print(i,"\t", end="")
    print()
    
def main():
    print("Enter number")
    iValue = int (input())
    
    Display(iValue)
    
    
if __name__ == "__main__":
    main()