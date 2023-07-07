import sys
import os
import math


__name__ == "__main__"


class index(float) :
    def scan():
        sc = input("")
        return sc    

class sum(index):

 def main():
  while(True):
    print("enter numbers which you want to add :~~")
    a = index.scan()
    print("+")
    b = index.scan()
    c = float(a) + float(b)
    print("=   " , c)
    
    print("do you want to quit or you want to go to the menu(if yes enter 'y' else enter 'n' )" + "(for menu enter m)")
    str = index.scan()
    if str == "y":
      print("Bye :)")
      exit(0)

    elif str == "n":
        continue

    elif str == "m":
       os.execv(sys.executable, ['python3'] + sys.argv)
       
     

    else:
        print("Wrong Input :(")
        print("try again :)")
        exit(0)


class diff(index):

 def main():
  while(True):
    print("enter numbers which you want to subtract :~~")
    a = index.scan()
    print("-")
    b = index.scan()
    c = float(a) - float(b)
    print("=   " , c)
    
    print("do you want to quit or you want to go to the menu(if yes enter 'y' else enter 'n' )" + "(for menu enter m)")
    str = index.scan()
    if str == "y":
      exit(0)

    elif str == "n":
        continue

    elif str == "m":
       os.execv(sys.executable, ['python3'] + sys.argv)
       

    else:
        print("Wrong Input :(")
        print("try again :)")
        exit(0)


class divide(index):

 def main():
  while(True):
    print("enter the two want to divide billow :~~")
    a = index.scan()
    print("/")
    b = index.scan()
    c = float(a) / float(b)
    print("=   " , c)
    
    print("do you want to quit or you want to go to the menu(if yes enter 'y' else enter 'n' )" + "(for menu enter m)")
    str = index.scan()
    if str == "y":
      print("Bye :)")
      exit(0)

    elif str == "n":
        continue

    elif str == "m":
       os.execv(sys.executable, ['python3'] + sys.argv)
       
     

    else:
        print("Wrong Input :(")
        print("try again :)")
        exit(0)


class multiply(index):

 def main():
  while(True):
    print("enter the number want to multiply billow :~~")
    a = index.scan()
    print("x")
    b = index.scan()
    c = float(a) * float(b)
    print("=   " , c)
    
    print("do you want to quit or you want to go to the menu(if yes enter 'y' else enter 'n' )" + "(for menu enter m)")
    str = index.scan()
    if str == "y":
      print("Bye :)")
      exit(0)

    elif str == "n":
        continue

    elif str == "m":
       os.execv(sys.executable, ['python3'] + sys.argv)
       
     

    else:
        print("Wrong Input :(")
        print("try again :)")
        exit(0)


class evenOdd(index):

 def main():
  while(True):
    print("enter the number you want to check :~~ ")
    a = int(index.scan())
    if (a % 2) == 0 :
       print(a, " is even")
    else :
       print(a, " is odd")
    
    print("do you want to quit or you want to go to the menu(if yes enter 'y' else enter 'n' )" + "(for menu enter m)")
    str = index.scan()
    if str == "y":
      print("Bye :)")
      exit(0)

    elif str == "n":
        continue

    elif str == "m":
       os.execv(sys.executable, ['python3'] + sys.argv)
       
     

    else:
        print("Wrong Input :(")
        print("try again :)")
        exit(0)


class factorial(index):

 def main():
  while(True):
    print("enter the number want to calculate the factorial of :~~")
    a = int(index.scan())
    facto = math.factorial(a)
    print("factorial of ",a,"=  " , facto)
    print("do you want to quit or you want to go to the menu(if yes enter 'y' else enter 'n' )" + "(for menu enter m)")
    str = index.scan()
    if str == "y":
      print("Bye :)")
      exit(0)

    elif str == "n":
        continue

    elif str == "m":
       os.execv(sys.executable, ['python3'] + sys.argv)
       
     

    else:
        print("Wrong Input :(")
        print("try again :)")
        exit(0)


class option(index):
 
 def option():
    print("lets do some calculations")
    print("what do you want to do ")
    print("Here are your options")
    print("0- Exit")
    print("1- Sum")
    print("2- Difference")
    print("3- Divide")
    print("4- Multiply")
    print("5- Check even or odd")
    print("6- To calculate factorial")
    print("enter any number listed above to continue :)")

    a = index.scan()

    while(True):
        if a == "0":
            print("Bye :) ")
            exit(0)
            
        elif a == "1":
             print("ok, good choice. Lets do some additions :)")
             exec(sum.main())

            
        elif a == "2":
             print("ok, good choice lets find some difference  ;) ")
             exec(diff.main())

        elif a == "3":
             print("ok, good choice lets do some divisions  :] ")
             exec(divide.main())

        elif a == "4":
             print("ok, good choice lets do some multiplication :) ")
             exec(multiply.main())

        elif a == "5":
             print("lets check even odd")
             exec(evenOdd.main())

        elif a == "6":
             print("Factorials ! cool !")
             exec(factorial.main())

        else:
             print("Invalid Input :(")
             os.execv(sys.executable, ['python3'] + sys.argv)
            
                

        
 option()   
       

        
            
            











