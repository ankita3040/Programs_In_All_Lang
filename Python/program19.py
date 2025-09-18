def main():
    numbers = int(input("How many elemnts you want enter "))
    my_list = []
    
    for _ in range(numbers):
        num = int(input("Enter numbers: "))
        my_list.append(num)
    
    Display_list(my_list)
    
    
    
def Display_list(list_value):
    print(list_value[0])
    print(list_value[1])
    print(list_value[2])
    
    
    
if __name__ == "__main__":
    main()