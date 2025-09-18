
# Input : 4, 4
# Output :
'''
A	A	A	A	
B	B	B	B	
C	C	C	C	
D	D	D	D
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