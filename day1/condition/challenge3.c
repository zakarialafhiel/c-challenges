#include<stdio.h>
int main (){
  //Écrivez un programme C pour calculer la somme de deux valeurs entières données. Si les deux valeurs sont identiques, le programme doit renvoyer le triple de leur somme.//
   int num1,num2;
   printf("Entre le nombre 1 : ");
   scanf("%d",&num1);
   printf("Entre le nombre 2 : ");
   scanf("%d",&num2);
   //pour affiche la somme des deux nombres //
   if(num1==num2){
    printf("La somme de deux nombres %d",(num1+num2)*3);
   }else{
    printf("La somme de deux nombres %d",num1+num2);
   }
   return 0;
}