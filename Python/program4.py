def main():
    #List : ordered , multable, allows duplicates
    fruits = ["Apple","Banana","orange","Apple"]
    print("List values are : ",fruits)
    
    #Tuple :ordered , immutable,allws duplicates
    coordinates = (10,20)
    print("Tuple values are : ",coordinates)
    
    #Dictionary : unordered(as py 3.6+ it maintain insertion order )
    #             key-value paires, keys must be unique,mutable
    
    student =  {
        "name" : "Jhon",
        "age" : 21,
        "grade" : "A"
        
    }
    print("Dictonary values are : ",student)
    #set : unordered,mutable,no duplicates
    
    unique_numbers = {1,2,3,4,1,3,5,2}
    print("Set values are : ",unique_numbers)
    
    if __name__ == "__main__":
        main()