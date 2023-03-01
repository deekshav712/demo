
#(1a)Read your name and print Hello message with name.
name=input("Enter the name : ")
print("Hello",name)
Enter the name : Navya
Hello Navya
#(1b) Read two numbers and print their sum, difference, product and division
a=int(input("Enter the First Number:"))
b=int(input("Enter the Second Number:"))
print("Addition of two number is =",a+b)
print("Difference of two number is =",a-b)
print("Multiplication of two number is =",a*b)
print("Division of two number is =",a/b)
Enter the First Number:10
Enter the Second Number:20
Addition of two number is = 30
Difference of two number is = -10
Multiplication of two number is = 200
Division of two number is = 0.5
# (1c)Word and character count of a given string
x=input("Enter a sentence:")
y=x.split()
print("Total number of words in the sentence :",len(y))
print("Total number of character in the sentence with space :",len(x))
if (len(x)==0):
    print("Total number of character in the sentence without space:",len(x)-len(y))
else:    
    print("Total number of characters in the sentence without space:",len(x)-len(y)+1)
Enter a sentence:vc is super
Total number of words in the sentence : 3
Total number of character in the sentence with space : 11
Total number of characters in the sentence without space: 9
# (1d)Area of a given shape (rectangle, triangle and circle) reading shape and appropriate values from standard input.

while True:

    print("***************************************")
    print("select the shape to calculate the area")
    print("""1.rectangle 2.Traingle3.Circle 4.exit """)
    choice=input()
    if(choice=='1'):
        width=int(input(("enter the width of rectangle ")))
        height=int(input(("enter the height of rectangle ")))
        print("area of rectangle is ",width*height,"square meters")
        continue
    elif(choice=='2'):
        base=int(input(("Enter the base value of the triangle")))
        height=int(input(("Enter the height value of the triangle")))
        print("area of given triangle is",0.5*base*height)
        continue
    elif(choice=='3'):
        radius=int(input(("Enter radius value of the circle")))
        print("area of given triangle is",3.14*radius*radius)
        continue
    elif(choice=='4'):
        break
    else:
        print("please enter the valid input menu")
    continue
    
***************************************
select the shape to calculate the area
1.rectangle 2.Traingle3.Circle 4.exit 
1
enter the width of rectangle 10
enter the height of rectangle 20
area of rectangle is  200 square meters
***************************************
select the shape to calculate the area
1.rectangle 2.Traingle3.Circle 4.exit 
2
Enter the base value of the triangle20
Enter the height value of the triangle0
area of given triangle is 0.0
***************************************
select the shape to calculate the area
1.rectangle 2.Traingle3.Circle 4.exit 
3
Enter radius value of the circle10
area of given triangle is 314.0
***************************************
select the shape to calculate the area
1.rectangle 2.Traingle3.Circle 4.exit 
5
please enter the valid input menu
***************************************
select the shape to calculate the area
1.rectangle 2.Traingle3.Circle 4.exit 
4
# (1e) Print a name ‘n’ times, where name and n are read from standard input, using for and while loops. 

while True:
    print("***************************************")   
    print("Select the loops to print the name")
    print("""1.for loop 2. while loop 3.Exit """)
    choice=input()
    if choice=='1':
        name=input("Enter the name:")
        n=int(input("Enter the n value:"))
        for i in range(n):
            print(name)
    elif choice=='2':
        name=input("Enter the name:")
        n=int(input("Enter the n value:"))
        i=1
        while i<=n:
            print(name)
            i+=1
    elif(choice=='3'):
        break   
***************************************
Select the loops to print the name
1.for loop 2. while loop 3.Exit 
1
Enter the name:Navya
Enter the n value:3
Navya
Navya
Navya
***************************************
Select the loops to print the name
1.for loop 2. while loop 3.Exit 
2
Enter the name:Navya
Enter the n value:3
Navya
Navya
Navya
***************************************
Select the loops to print the name
1.for loop 2. while loop 3.Exit 
3
#(1f)Handle Divided by Zero Exception. 

try:
    num1=int(input("Enter first value:"))
    num2=int(input("Enter second value:"))
    result=num1//num2
    print("Result:",result)


except ZeroDivisionError:
    print("Can't Divide by Zero")
except ValueError:
    print("Enter Integer Value")
Enter first value:20
Enter second value:0
Can't Divide by Zero
#(1g)Print current time for 10 times with an interval of 10 seconds.

import time
for i in range(10):
 d=time.localtime()
 time.sleep(10)
 print(d.tm_hour,d.tm_min,d.tm_sec)
22 16 51
22 17 1
22 17 11
22 17 21
22 17 31
22 17 41
22 17 51
22 18 1
22 18 11
22 18 21
