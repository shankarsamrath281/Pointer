#include<stdlib.h>
#include<stdio.h>
int SumOfElement(int *A,int n){
    //We need to pass the array size of array as argument in fun because array passes as pointer in fun argument. So if we calculate size of array inside a fun then it will be wrong always. So i passesd the array A as pointer A though normal passing as A[] is valid here.
    int i,sum=0;
    int size=sizeof(A)/sizeof(A[0]);
    printf("SOE- of A =%d, size of A[0]=%d\n",sizeof(A),sizeof(A[0]));
    /*But above line will print not the actuall size of array instead of that it will print 4 and 4 because  it will looked as single elment in the stack and allocated size of that is shown here i.e. for int is 4.*/ 
    for(i=0;i<n;i++){
        sum+=A[i];
    }
    return sum;
}
int main(){
int A[]={1,2,3,4,5,6,7};
int size=sizeof(A)/sizeof(A[0]);
int total=SumOfElement(A,total);
printf("Sum of the elments are=%d",total);
printf("Main -size of A=%d , size of A[0]=%d\n",sizeof(A),sizeof(A[0]));
return 0;
}