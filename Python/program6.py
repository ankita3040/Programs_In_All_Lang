def main():
    total = int (input("Enter total "))
    obtained = int (input("Enter obtanied "))
    
    calculate_percentage(total,obtained)
    
def calculate_percentage(Total,Obtanied):
    percentage = float(Obtanied) / float (Total) *100
    print("Percentage is : ",percentage)


if __name__ == "__main__":
    main()
    