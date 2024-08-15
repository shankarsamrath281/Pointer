/*Pointers are variables that stores addresses of another variables.*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    //Declaration of pointer is by simple variable but with dereference operator (*).
    int a=2;
    int *p; //It is a pointer declartion called as pointer to integer (Similarlly we can have pointer to character, double etc).
    p=&a ; //Unary operator (&) rteurns the memory address of its operand, here it will return the address of the operand a to variable p.
    printf("%d\n",p); //Here o/p will be address of the variable a, as in above line address is given to p.
    printf("%d\n",a); //It will simply print 2,the value of a.
    printf("%d\n",&a); //It will print adress of the variable as unary operator gives adress of operand(same as o/p of 1st print line.).
    printf("%d\n",&p);//It will print the address of the operand p, as unary operator always print adress of the operand.
    printf("%d\n",*p);//It will print the value of the adress stored in pointer p i.e. the value of variable a.

}