# Input : 4
# Output: * * * *

def Display(iNo):
    for i in range(1,iNo + 1,1):
        print("*", end=" ")
    print()
    
def main():
    print("Enter number")
    iValue = int (input())
    
    Display(iValue)
    
    
if __name__ == "__main__":
    main()