#include<stdio.h>
int main(){
  int et,max=0,i=0;
  int tab[et];
  printf("Entre combien nombers qui tu veux dans le tableau : ");
  scanf("%d",&et);
  for(i=0;i<et;i++){
    printf("Entre la valeur de tab[%d] : ",i);
    scanf("%d",&tab[i]);
  }
  for(i=0;i<et;i++){
    if(max<tab[i]){
        max=tab[i];
    }
  }
  printf("le Maximum est %d",max);
return 0;
}