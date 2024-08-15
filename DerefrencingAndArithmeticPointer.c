#include<stdio.h>
#include<stdlib.h>
int main(){
    //Deferencing concept-- In this method we modify the valuse of actuall variable by using pointer.
    int a;
    int *p;
    a=5;
    p=&a;
    printf("%d\n",a);//Here o/p will be 5 as there is no modification.
    printf("%d\n",p);//Here o/p will be the address of a as it is pointing to address of a.
    *p=10;//Dereferencing
    printf("%d\n",a);//Hrer value of a will change to 10 though we didn't changed it directly. we change it through the changing in value of pointer pointing to it's adress.
    printf("%d\n",p);//Here o/p will be the address of a as it is pointing to address of a and no change made in adress , change is only in value stored.
    int b=13;
    *p=b;//Dereferencing
    printf("%d\n",a);//Here o/p will be 12, as the value of a is changed by pointer pointing to it's adress.
    printf("%d\n",p);//Here the p is still pointing to address of a so no change in value of addess of a, so o/p will be same.
    //Pointer arithmetic.
    printf("Adress pointed by the pointer is %d\n",p); //It will print adress of variable a.
    printf("Increasing in adress of pointer by 1 increase it's value by 4, %d\n",p+1);//It will increase the value of p by 4 because size of single integer variable is 4 bytes.
    printf("%d\n",*(p+1));//here it will show same random garbage value because increse in value here is no meaning (we will use this concept in array of pointer.).
return 0;

}