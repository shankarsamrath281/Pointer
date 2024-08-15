#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void print(char* c)
{
    //Here we passes the arrray of character as pointer with base adresss only and it keep increment it's value untill it encounter null character.
    while(*c!='\0')
    {
        printf("%c",*c);
        c++;
    }
    printf("\n");
}
int main(){
    char c[10]="Abhishek";//Here wastage of  memeory is happpening as given size is larger than required one. But we can access the random character from anywhere in the array, but if we use pointer instead this lavrage will be lost but we will save the wastage of memeory.
    print(c);
    //To overcome above wastage of memory we initialize string to array of pointer.
    char* d="Shankar";//Here only that much of memeory is given as much is required, but we can't ahve random access.
    print(d);
    return 0;
}