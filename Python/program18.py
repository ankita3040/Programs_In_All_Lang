def main():
    numbers = int(input("How many elemnts you want enter "))
    my_list = []
    
    for _ in range(numbers):
        num = int(input("Enter numbers: "))
        my_list.append(num)
    
    Ret = Calculate_list(my_list)
    
    print("Sum of all elemnts in list ",Ret)
    
def Calculate_list(list_value):
    sum = 0
    for item in list_value:
        sum = sum + item
        
    return sum
    
    
if __name__ == "__main__":
    main()