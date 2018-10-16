/*
 * Write a program that ask the user for three (3) numbers.  This program should:
    * Use a function to swap the given numbers in order to get the smallest value in the first variable, and the greatest value in the third variable.
    * Such function should use parameters passed by reference.
 * If you perform everything within the main function, the assignment will be graded with 0 (zero).
 */

 #include <stdio.h>

 void orderNumbers(double a, double b, double c){
     if(a < b && a < c){
         if(b<c){
             printf("The order from least to greatest is %lf, %lf and %lf",a, b, c);
         }
         if(c<b){
             printf("The order from least to greatest is %lf, %lf and %lf",a, c, b);
         }
     }

     if(b < a && b < c){
         if(a<c){
             printf("The order from least to greatest is %lf, %lf and %lf",b, a, c);
         }
         if(c<a){
             printf("The order from least to greatest is %lf, %lf and %lf",b, c, a);
         }
     }

     if(c < a && c < b){
         if(a<b){
             printf("The order from least to greatest is %lf, %lf and %lf",c, a, b);
         }
         if(b<a){
             printf("The order from least to greatest is %lf, %lf and %lf",c, b, a);
         }
     }

     if(a==b){
         if(a<c){
             printf("The order from least to greatest is %lf, %lf and %lf",a, b, c);
         }

         if(a>c){
             printf("The order from least to greatest is %lf, %lf and %lf",c, a, b);
         }
         if(a==c){
             printf("The order from least to greatest is %lf, %lf and %lf, they are the same number.",a, b, c);
         }
     }

     if(a==c){
         if(a<b){
             printf("The order from least to greatest is %lf, %lf and %lf",a, c, b);
         }

         if(a>b){
             printf("The order from least to greatest is %lf, %lf and %lf",b, a, c);
         }
     }
 }

int main() {
    double numberOne;
    double numberTwo;
    double numberThree;

    printf("Give me 3 numbers: ");
    scanf("%lf %lf %lf", &numberOne, &numberTwo, &numberThree);
    orderNumbers(numberOne, numberTwo, numberThree);
    return 0;
}