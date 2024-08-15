#include<stdio.h>
#include<stdlib.h>
int main(){
    //Pointer to pointer- It is concept required when we need to store or refer the value of the pointer variable.
    int x=5;
    int *p;
    p=&x;
    *p=6;// derefrencing
    int** q=&p;//Here we are storing the adress of pointer pto the pointer of pointer.
    int *** r=&q;//Here it is same way to store adress of q, using pointer of pointer concept.
    printf("%d\n",*p);//Give the modified value of x.
    printf("%d\n",*q);//Give the adress of pointer p.
    printf("%d\n",**q);//Give the value pointed by p i.e. value of x.
    printf("%d\n",**r);//Give adress of pointer p.
    printf("%d\n",***r);//Give the value pointed by pointer p, i.e. value of x.
    ***r=10;//derefrencing.
    printf("%d\n",x);//o/p is 10.
    **q=*p+2;//derefrencing.
    printf("x=%d\n",x);//o/p is 12.
    return 0;
}
