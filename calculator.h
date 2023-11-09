/*
Do not use math.h
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

read on:
    fn overloading 
    recursion(focus more on this)
    variadic


*/

float add(float num1,float num2 ){

    return num1+num2;
}


float sub(float num1,float num2){
    return num1-num2;

}

float multiplication(float num1,float num2){
    return num1*num2;

}

float division(float num1,float num2){
    return num1/num2;

}

// try defining a fn for finding square root (use binary search )