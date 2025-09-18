def Summation(Arr,length):
    sum = 0
    for i in Arr:
        sum = sum + i
    return sum
    

def main():
    #initialize an empty list (dynamic memory)
    Arr_list = []
    
    print("Enter how many elements you want to enter in array\n")
    size = int(input())
    
    print("Enter array elemnts :")  
    for i in range(0,size):
        no = int(input())
        #append elements dynamically
        Arr_list.append (no) 
    iRet = Summation(Arr_list,size)
    
    print("Summation of all array element is :",iRet)
    


if __name__ == "__main__":
    main()