def main():
    numbers = input("Enter numbers :\n ")
    my_list = list(map(int,numbers.split()))
    
    Display_list(my_list)
    
def Display_list(list_value):
    for item in (list_value): 
        print(item)
        
    
    
    
if __name__ == "__main__":
    main()