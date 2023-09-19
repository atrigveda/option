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
    printf("Do you want to continue ? \n");
    printf("---- ---- ---- ---- \n");
    printf("y = Yes \n");
    printf("n = Exit \n");
    printf("m = Return to Menu \n");
    printf("---- ---- ---- ---- \n");
    scanf(" %c", &choice);
    return choice;
}

char err(){
  printf("Wrong Input :()\n Try again :) \n");
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

float evenodd(){
  while(true){
    
     int n;
     printf("Enter an integer: ");
     scanf("%d", &n);
     (n % 2 == 0) ? printf("%d is even. \n", n) : printf("%d is odd. \n", n);
     return n;
  }
}

float factorial(){
  while(true){
    int n, i;
    unsigned long long fact = 1;
    printf("Enter an integer: ");
    scanf("%d", &n);
    if (n < 0)
        printf("Error! Factorial of a negative number doesn't exist. \n");
    else {
        for (i = 1; i <= n; ++i) {
            fact *= i;
        }
        printf("Factorial of %d = %llu \n", n, fact);
    }

    return fact;
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
         printf("Bye :)");
         exit(0);
       }
       if(choice == 1){
          while(true){
             plus();
             char d;
             d = scanc();
              if(d == 'y'){
                continue;
              }
              if(d == 'n'){
                printf("Bye :)");
                exit(0);
              }
              if(d == 'm'){
                main();
              }
              else{
                err();
                continue;
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
              if(d == 'n'){
                printf("Bye :)");
                exit(0);
              }
              if(d == 'm'){
                main();
              }
              else{
                err();
                continue;
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
              if(d == 'n'){
                printf("Bye :)");
                exit(0);
              }
              if(d == 'm'){
                main();
              }
              else{
                err();
                continue;
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
              if(d == 'n'){
                printf("Bye :)");
                exit(0);
              }
              if(d == 'm'){
                main();
              }
              else{
                err();
                continue;
              }
            }

        }
        if(choice == 5){
        while(true){
             evenodd();
             char d;
             d = scanc();
              if(d == 'y'){
                continue;
              }
              if(d == 'n'){
                printf("Bye :)");
                exit(0);
              }
              if(d == 'm'){
                main();
              }
              else{
                err();
                continue;
              }
            }

        }
        if(choice == 6){
        while(true){
             factorial();
             char d;
             d = scanc();
              if(d == 'y'){
                continue;
              }
              if(d == 'n'){
                printf("Bye :)");
                exit(0);
              }
              if(d == 'm'){
                main();
              }
              else{
                err();
                continue;
              }
            }

        }
        else{
         err();
         while(true){
             char d;
             printf("Retry ? \n");
             printf("--- --- \n");
             printf("y = yes \n");
             printf("n = no \n");
             printf("--- --- \n");
             scanf(" %c", &d);
             d = scanc();
              if(d == 'y'){
                main();
              }
              if(d == 'n'){
                printf("Bye :)");
                exit(0);
              }
              else{
                err();
                continue;
              }
            }

        }
    }

}