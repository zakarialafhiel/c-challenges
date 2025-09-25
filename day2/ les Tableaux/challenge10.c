#include<stdio.h>
int main(){
/*Challenge 10 : Rechercher un Élément
Écrivez un programme C qui recherche un élément spécifique dans un tableau d'entiers en utilisant une recherche linéaire. Le programme doit demander à l'utilisateur le nombre d'éléments, les éléments du tableau, et l'élément à rechercher, puis afficher si l'élément est présent ou non.*/
int i=0,fact,n;
int numbers[5]={2,3,1,4,5};
 printf("recherch : ");
 scanf("%d",&n);
for(i=0;i<5;i++){
    if(numbers[i]==n){
        fact=1;
        break;
    }
}
  if(fact==1){
printf("le nombre %d est trouve ",n);
  }else{
printf("le nombre %d est pas trouve ",n);
  }

    return 0;
}