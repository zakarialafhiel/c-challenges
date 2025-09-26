#include<stdio.h>
int main (){
 int i=0,et,o,n;
 printf("Entre la taille de tableau : ");
 scanf("%d",&et);
 int tab[et];
 for(i=0;i<et;i++){
  printf("Entre la valeur de tab[%d] : ",i);
  scanf("%d",&tab[i]);
 }
  printf("entre le nombre qui tu veux suprimme : ");
  scanf("%d",&o);
  printf("entre le nombre qui tu veux ajoute : ");
  scanf("%d",&n);
 for(i=0;i<et;i++){
  if(o==tab[i]){
    tab[i]=n;
  }
 }
  printf("Le tableux apres : ");
  for(i=0;i<et;i++){
  printf(" %d ",tab[i]);
 }
 

 return 0;
}