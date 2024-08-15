#include<stdio.h>
#include<stdlib.h>
int main(){
    int a[]={2,4,6,8,10};//Here pointer can be seen as array also.
    printf("Adress =%d, value=%d\n",a,*a);
   printf("Adress =%d, value=%d\n",a+1,*(a+1));
   printf("Adress =%d, value=%d\n",a+3,*(a+3));  //Here in above eg we had accesed the array directly in the way we access the pointer. so we can aslo use pointer as array.  
   return 0;
}