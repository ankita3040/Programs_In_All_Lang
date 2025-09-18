# Input : 4
# Output :
'''
    1 1 1 1
    2 2 2 2
    3 3 3 3
    4 4 4 4
'''

def Display(iRow,iCol):
    for i in range(1,iRow+1,1):
        for j in range(iCol):
            print(i, end=" ")
        print()
       
def main():

    print("Enter rows : ")
    iValue1 = int (input())
    
    print("Enter column : ")
    iValue2 = int (input())
    
    Display(iValue1,iValue2)
    
    
if __name__ == "__main__":
    main()