#include<stdio.h>
int main (){
  int et,i=1,s=0;
  int tab[et];
  printf("Entre qui tu veux combien nombres dans tableax : ");
    scanf("%d",&et);
  for(i=0;i<et;i++){
    printf("Entre le nombre de tab [%d] : ",i);
    scanf("%d",&tab[i]);
    s=s+tab[i];
  }
  printf("La somme des nombres de tableaux : %d",s);
    return 0;
}