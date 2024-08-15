#include<stdio.h>
#include<stdlib.h>
int main(){
    //Typecasting- It is a technique to conert the type of variable. We also do typecsting in case of pointer.
    int a=1025;
    int *p;
    p=&a;
    printf("Address=%d , value=%d\n",p,*p);//o/p is quite obivous it will give adress anfd value of a respectively.
    char *p1;
    p1=(char*)p;//Here we are type casting the p(adress of a) into vharacter type.
    printf("Adress=%d, value=%d\n",p1,*p1); //Here o/p is adress of a pointed by p but value o/p is 1. It is surprising because we had typecast int value into char, so it is taking only single byte. That's why it is important to note that pointer is use to store address only but still we need to intialize it with type.
    //Void pointer- Genric pointer
    void *p2;
    p2=p;// Here pointer p2 type is void so it will store or point to addresss only. It will show an error on demannding the value from void pointer.
    printf("%d id addresss\n",p2);
    //printf("%d is value\n",*p2); This line will shoe error as we are trying to get value from void pointer.
    return 0;
}
