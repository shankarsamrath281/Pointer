#include<stdio.h>
#include<stdlib.h>
void swap_call_by_value(int x, int y);
void call_by_reference(int *x, int *y);
int main(){
    //pointer as function arguments- Call by refrence.
    /*Call by refrence is required when we need to chnage in actuall value of the data eg, swaping no , increase/decrease in value of no or any thing which changes the vlaue or data of the vraibale.*/
    int a=2,b=5;
    printf("Value of a=%d, and of b=%d\n",a,b);//It will print original given value of a and b.
    swap_call_by_value(a,b);//This fun passes call by value.
    printf("Value of a=%d, and of b=%d\n",a,b);//Here o/p will show no any swapping as variables were passes in call by value so no change in local variable of this fun, it will only change the value inside built in fun.
    swap_call_by_reference(&a,&b);//It is call by refrence. As variables are passed using call by refrence (see adresses are refered to fun instead of value directly.) so any change in built in fun will be visible to this fun akso.
    printf("Value of a=%d, and of b=%d\n",a,b);//In o/p values will be swapped.
    
 return 0;   
}
void swap_call_by_reference(int *x, int *y){
    int temp;
   temp=*x;
    *x=*y;
    *y=temp;
   

}
void swap_call_by_value(int x, int y){
   int temp=0;
    x=temp;
    x=y;
    y=temp;  
}