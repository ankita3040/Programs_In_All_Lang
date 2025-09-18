
# Input : 4, 4
# Output :
'''
    a a a a
    B B B B
    c c c c
    D D D D
'''

class Pattern:

    def __init__(self,iRow,iCol):
        self.Row = iRow
        self.Col = iCol
            
    def Display(self):
        ch1 = 'a'
        ch2 = 'A'
        for i in range(1,self.Row + 1):
            for j in range(1,self.Col + 1):
                if(i % 2) == 0:
                    print(ch2,"\t", end ="")
                else:
                    print(ch1,"\t", end ="")
                
            ch1 =  chr(ord(ch1) + 1) 
            ch2 =  chr(ord(ch2) + 1)    

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