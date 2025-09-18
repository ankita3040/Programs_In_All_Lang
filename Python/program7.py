'''
    start
         Accept percentage from user
            if percentage is less tha 0 and greater than 100
                Display as invalid input
            if percentage is greater than 0 and less than 35
                Display as fail
            if percentage is greater than 35 and less than 50
                Display as pass
            if percentage is greater than 50 and less than 60
                Display as second class
            if percentage is greater than 60 and less than 70
                Display as first class
            if percentage is greater than 70 and less than 100
                Display as first class with distinction
    Stop
    
'''
def main():
    percentage = int(input("Enter percentage :"))
    
    Display(percentage)
    
def Display(perc):
    if(perc < 0) or (perc > 100):
        print("Invalid input")
        
    if(perc > 0) and (perc < 35):
        print("Fail")
        
    if(perc >= 35) and (perc < 50):
        print("Pass")
        
    if(perc > 50) and (perc < 60):
        print("Second class")
        
    if(perc > 60) and (perc < 70):
        print("first class")
        
    if(perc > 70) and (perc <= 100):
        print("first class with distinction")
    
    
   
if __name__ == "__main__":
    main()
     