#include<stdio.h>
int main (){
    int ne,i=0;
    printf("Entre combien des elements tu veux : ");
    scanf("%d",&ne);
    int tab[ne];
  for(i=0;i<ne;i++){
     printf("Entre un le nombre [%d] : ",i);
     scanf("%d",&tab[i]);
     
    }
    for(i=0;i<ne;i++){
     printf("tab[%d] = %d\n",i,tab[i]);
     
    }
   
  
    return 0;
}