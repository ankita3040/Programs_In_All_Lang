# Input : 4
# Output :
'''
   * * * *
   # # # #
   * * * *
   # # # # 
'''

def Display(iRow,iCol):
    for i in range(1,iRow+1,1):
        for j in range(1,iCol+1,1):
            if((i % 2 ) == 0):
                print("#", end=" ")
            else:
                print("*", end=" ")
        print()
       
def main():

    print("Enter rows : ")
    iValue1 = int (input())
    
    print("Enter column : ")
    iValue2 = int (input())
    
    Display(iValue1,iValue2)
    
    
if __name__ == "__main__":
    main()