# Input : 4
# Output :
'''
    1 * 3 *
    1 * 3 *
    1 * 3 *
    1 * 3 *
'''
class Pattern:

    def __init__(self,iRow,iCol):
        self.Row = iRow
        self.Col = iCol
            
    def Display(self):
        for i in range(1,self.Row + 1):
            for j in range(1,self.Col + 1):
                if((j % 2) == 0):
                    print("*\t", end="")
                else:
                    print(j, "\t", end="")
            print()
            
def main():
    print("Enter number of rows ")
    iValue1 = int(input())
        
    print("Enter number of columns ")
    iValue2 = int(input())
    
    pobj = Pattern(iValue1,iValue2)
        
    pobj.Display()
   
if __name__ == "__main__":
    main()