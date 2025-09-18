# Input : 4 #
# Output: # # # #

# Input : 4 *
# Output: * * * *


def Display(iNo,Ch):
    if(iNo < 0):
        iNo = -iNo
        
    for i in range(iNo+1, 0, -1 ):
        print(Ch,"\t", end="")
    print()
    
def main():
    print("Enter number")
    iValue = int (input())
    
    print("Enter charcter")
    cValue =input()
    
    Display(iValue,cValue)
    
    
if __name__ == "__main__":
    main()