#include<stdio.h>
int main(){
  int base,exposant,n,i;
  printf("Entre la valeur de la base : ");
  scanf("%d",&base);
  printf("Entre la valeur de la exposant : ");
  scanf("%d",&exposant);
  n=base;
  for(i=1;i<exposant;i++){
   base=base*n;
}
 printf("La valeur de %d^%d = %d",n,exposant,base);
    return 0;
}