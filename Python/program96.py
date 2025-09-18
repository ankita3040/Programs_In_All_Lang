# Input : 4
# Output :
'''
    A B C D
    E F G H
    I J K L
    M N O P
'''
class Pattern:

    def __init__(self,iRow,iCol):
        self.Row = iRow
        self.Col = iCol
            
    def Display(self):
        ch = 'A'
        for i in range(1,self.Row + 1):
            for j in range(1,self.Col + 1):
                print(ch,"\t", end ="")
                ch =  chr(ord(ch) + 1)

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