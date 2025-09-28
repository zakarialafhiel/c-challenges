#include<stdio.h>
int main(){
  int i=10,n;
  printf("Entre un nombre : ");
  scanf("%d",&n);
  for(i=10;i>=1;i--){
    printf("%d*%d=%d\n",n,i,n*i);
  }

    return 0;
}