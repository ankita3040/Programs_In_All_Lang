def Array(Arr,length):
    print("Array elements are \n")
    i = 0
    print(Arr[i])
    i += 1
    print(Arr[i])
    i += 1
    print(Arr[i])
    i += 1
    

def main():
    Arr_list = []
    
    print("Enter how many elements you want to enter in array\n")
    size = int(input())
    
    print("Enter array elemnts :")  
    for i in range(0,size):
        no = int(input())
        Arr_list.append (no) 
    Array(Arr_list,size)
    


if __name__ == "__main__":
    main()