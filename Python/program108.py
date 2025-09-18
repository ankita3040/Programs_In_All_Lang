
# Input : 4, 4
# Output :
'''
    0 * * *
    0 0 * * 
    0 0 0  *
    0 0  0 0

'''

class Pattern:

    def __init__(self,iRow,iCol):
        self.Row = iRow
        self.Col = iCol
            
    def Display(self):
        no = 1
        for i in range(1,self.Row + 1):
            for j in range(1,self.Col + 1,):
                if (i >= j):
                    print("0",end= " ")
                else:
                    print("*",end= " ")

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