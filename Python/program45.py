def main():
    iValue = 751
    iDigit = 0
    
    iDigit = iValue % 10
    print("updated digit is ",iDigit)
    iValue = iValue // 10
    
    iDigit = iValue % 10
    print("updated digit is ",iDigit)
    iValue = iValue // 10
    
    iDigit = iValue % 10
    print("updated digit is ",iDigit)
    iValue = iValue // 10
    
if __name__ == "__main__":
    main()