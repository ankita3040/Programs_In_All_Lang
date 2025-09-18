class Student:
    def __init__(self,name,age):
        self.name = name #instance variable
        self.age = age
    def display_info(self):
        print("Name : ",self.name)
        print("Age : ",self.age)
 
    #create an object of the student class  
def main():     
    stud = Student("Krishna",16)
    # call the method using the object
    stud.display_info()

if __name__ == "__main__":
     main()