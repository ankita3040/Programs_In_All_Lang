def main():
    Arr_list = []
    
    print("Enter how many elements you want to enter in array\n")
    size = int(input())
    
    print("Enter array elemnts :")
    for i in range(0,size):
        no = int(input())
        Arr_list.append (no) 
    

    print("Array elements are :\n")
    
    for i in Arr_list:
        print(i)
    

if __name__ == "__main__":
    main()