# Iteration with Iteration 


def Display(iRow,iCol):
    for i in range(iRow):
        for j in range(iCol):
            print("*\t", end=" ")
        print()
       
def main():

    print("Enter rows : ")
    iValue1 = int (input())
    
    print("Enter column : ")
    iValue2 = int (input())
    
    Display(iValue1,iValue2)
    
    
if __name__ == "__main__":
    main()