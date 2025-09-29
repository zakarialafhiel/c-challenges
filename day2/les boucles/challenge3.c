#include<stdio.h>
int main (){
 int i,y,n,isprime;
 printf("Entre un nombre : ");
 scanf("%d",&n);
 printf("Les nombres premiers avant %d est : ",n);
 for(i=1;i<n;i++){
    isprime = 1;
    for(y=2;y<i;y++){
        if(i%y == 0){
            isprime = 0;
             break;
        }
    }
    if(isprime){
        printf("%d ",i);
    }
 }

    return 0;
}