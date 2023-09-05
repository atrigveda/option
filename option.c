#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

float scan(){
    float num;
    scanf("%f", &num);
    return num;
}

char scanc(){
    char choice;
    printf("Do you want to continue \n");
    scanf(" %c", &choice);
    return choice;
}

float plus(){
    while(true){

        float a, b, c;
        printf("Enter Number you want to add \n");
        a = scan();
        printf("+ \n");
        b = scan();
        c = a + b;
        printf("Answer of ans is %g \n", c);
        return c;

        






    }
}

float minus(){
    while(true){

        float a, b, c;
        printf("Enter Number you want to minus from \n");
        a = scan();
        printf("- \n");
        b = scan();
        c = a - b;
        printf("Answer of ans is %g \n", c);
        return c;

        






    }

}

float divide(){
    while(true){

        float a, b, c;
        printf("Enter Number you want to divide \n");
        a = scan();
        printf("/ \n");
        b = scan();
        c = a / b;
        printf("Answer of ans is %g \n", c);
        return c;

        






    }
}

float multiply(){
    while(true){

        float a, b, c;
        printf("Enter Number you want to multiply \n");
        a = scan();
        printf("x \n");
        b = scan();
        c = a * b;
        printf("Answer of ans is %g \n", c);
        return c;

        






    }
}


int options(){
    printf("lets do some calculations \n");
    printf("what do you want to do \n");
    printf("Here are your options \n");
    printf("0- Exit \n");
    printf("1- Sum \n");
    printf("2- Difference \n");
    printf("3- Divide \n");
    printf("4- Multiply \n");
    printf("5- Check even or odd \n");
    printf("6- To calculate factorial \n");
    printf("enter any number listed above to continue :) \n");

    float value;
    value = scan();
    return value;


}

int main(){
    int choice = options();
    while(true){

       if(choice == 0){
        printf("0");
         break;
        continue;
       }
       if(choice == 1){
          while(true){
             plus();
             char d;
             d = scanc();
              if(d == 'y'){
                continue;
              }
              if(d == 'm'){
                options();
              }
              else{
                printf("Bye :)");
                exit(0);
              }
            }
            
         
        }
       if(choice == 2){
        while(true){
             minus();
             char d;
             d = scanc();
              if(d == 'y'){
                continue;
              }
              else{
                printf("Bye :)");
                exit(0);
              }
            }

        }
        if(choice == 3){
        while(true){
             divide();
             char d;
             d = scanc();
              if(d == 'y'){
                continue;
              }
              else{
                printf("Bye :)");
                exit(0);
              }
            }

        }
        if(choice == 4){
        while(true){
             multiply();
             char d;
             d = scanc();
              if(d == 'y'){
                continue;
              }
              else{
                printf("Bye :)");
                exit(0);
              }
            }


        }
        if(choice == 5){
        printf("5");
         break;

        }
        if(choice == 6){
        printf("6");
         break;

        }
        else{
        printf("Wrong Input :()\n Try again :) \n");
         exit(0);

        }
    }


    






    
}