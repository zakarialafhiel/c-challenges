#include<stdio.h>
int main(){
    int y=0,i=0,n;
    printf("Entre un nombre : ");
    scanf("%d",&n);
      /*for(i=0;i<=n;i+=2){
      printf("%d ",i);
      }*/
         for(i=2;i<=n*2;i++){
          if(i%2==0){
            printf("%d ",i);
          }
         }   
    return 0;
    }