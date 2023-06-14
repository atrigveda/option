import sys
import os
__name__ == "__main__"

class ScannerMain(float) :
    def scan():
        n = input("")
        return n
    

class sum(ScannerMain):

 def main():
  while(True):
    print("enter numbers which you want to add :~~")
    a = ScannerMain.scan()
    print("+")
    b = ScannerMain.scan()
    c = float(a) + float(b)
    print("=   " , c)
    
    print("do you want to quit or you want to go to the menu(if yes enter 'y' else enter 'n' )" + "(for menu enter m)")
    str = ScannerMain.scan()
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


class diff(ScannerMain):

 def main():
  while(True):
    print("enter numbers which you want to subtract :~~")
    a = ScannerMain.scan()
    print("-")
    b = ScannerMain.scan()
    c = float(a) - float(b)
    print("=   " , c)
    
    print("do you want to quit or you want to go to the menu(if yes enter 'y' else enter 'n' )" + "(for menu enter m)")
    str = ScannerMain.scan()
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



    
class option(ScannerMain):
 
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

    a = ScannerMain.scan()

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

        else:
            print("Invalid Input :(")
            os.execv(sys.executable, ['python3'] + sys.argv)
            
                

        
 option()   
       

        
            
            











