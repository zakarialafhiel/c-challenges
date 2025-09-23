#include<stdio.h>
int main(){
   int n,i;
   printf("Entre un nombre ");
    scanf("%d",&n);
    printf("Table de Multiplication de %d\n",n);
    for(i=1;i<=10;i++){
      printf("%d * %d = %d\n",n,i,n*i);
    }
    return 0;
}