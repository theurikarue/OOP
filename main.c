/*do not use math.h
1)folder called calculator 
2)let there be header files calculator.h
3)have the following functions:
    add 
    divide 
    multiply 
    subtract 
    squareroot(binary search)
4)main.c
    ask user for option eg
        1 for add 
        2for subtraction etc etc
    ask for the two numbers 
    print the output 
ones program should allow for decimals (floats)
when's the deadline?  


read on:
    fn overloading 
    recursion(focus more on this)
    variadic


*/

#include "calculator.h"
#include <stdio.h>
#include <stdlib.h>



int main(){

    float option=0;
    float num1,num2;

    while (1)
    {
        printf("Pick an option from the calculator menu below: \n");
        printf("1. Addition \n");
        printf("2. Subtraction \n");
        printf("3. Multiplication \n");
        printf("4. Division \n");
        printf("5. Quit \n");
        scanf("%f", &option);


        if (option == 5 ){
            printf("Goodbye! \n");
            break;
            }

        switch ((int)option) {
            case 1:
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                printf("Result: %f \n", add(num1,num2));
                break;
            case 2:
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                printf("Result: %f \n", sub(num1, num2));
                break;
            case 3:
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                printf("Result: %f \n", multiplication(num1,num2));
                break;
            case 4:
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                if(num2==0)
                    printf("ERROR!!! ");
                else
                    printf("Result: %f \n", division(num1,num2));
                break;
            default:
                printf("Obsolete option");
    
        }


    }


    return 0;



}