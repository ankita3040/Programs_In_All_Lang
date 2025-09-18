class Student:

    def main(): 
        iValue = int(input("Enter integer number "))
        print("Entered number is ",iValue)
        
        fValue = float(input("Enter float number "))
        print("Enter number number is ",fValue)
        
        str = input("Enter string ")
        print("Entered string is ",str)
        
        my_list = input("Enter list data ")
        my_list =my_list.split(",") # convert string to list
        print(my_list)
        
        #Require changes 
        ''' my_tuple = input("Enter tuple data ") 
        my_tuple = my_tuple.split(",") # convert tuple to integer
        print(my_tuple)
        
        my_dict = input("Enter key:value pairs ")
        my_dict = dict(item.split(":")
        for item in my_dict.split(","))   
        print(my_dict)     
        '''

    if __name__ == "__main__":
            main()