#include<stdio.h>
int main(){
  int nt,i=0,n;
  int tab[nt];
  printf("Entre combien nombre qui tu veux dans le tableau : ");
  scanf("%d",&nt);
  for(i=0;i<nt;i++){
   printf("Entre le nombre de tab[%d] :",i);
   scanf("%d",&tab[i]);
   printf("entre facteur de multiplication : ");
    scanf("%d",&n);
  }
  
for(i=0;i<nt;i++){
   printf(" tab[%d] = %d\n",i,tab[i]*n);
  }
    return 0;
}