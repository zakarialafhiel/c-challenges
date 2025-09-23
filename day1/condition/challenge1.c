#include <stdio.h>
/*Challenge 1 : Paire ou Impaire
Écrivez un programme qui demande un nombre et affiche si ce nombre est pair ou impair.*/ 
int main (){
 int n;
 printf("Enter un nombre : ");
 scanf("%d",&n);
 if (n%2==0){
    printf("Le nombre %d est pair",n);
 }else{
      printf("Le nombre %d est impair",n);
 }
    return 0;
}