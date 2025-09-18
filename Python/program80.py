# Input : 4
# Output: 4 * 3 * 2 *  1 * 

def Display(iNo):
    if(iNo < 0):
        iNo = -iNo
        
    for i in range(iNo , 0, -1 ):
        print(i,"\t*\t", end="")
    print()
    
def main():
    print("Enter number")
    iValue = int (input())
    
    Display(iValue)
    
    
if __name__ == "__main__":
    main()