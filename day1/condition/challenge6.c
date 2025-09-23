#include <stdio.h>
int main (){
  /*Écrivez un programme pour vérifier si le nombre donné est positif, négatif ou nul. Si le nombre est inférieur à zéro, alors le nombre est négatif et si le nombre est supérieur à zéro, alors le nombre est positif. Si les deux conditions sont fausses, le nombre est égal à zéro. */
   int n;
   printf("Entre un nombre : ");
   scanf("%d",&n);
   if(n>0){
   printf("le nombre %d est positif",n);
   }else if(n<0){
   printf("le nombre %d est negativ",n);
   }else{
    printf("le nombre %d est null",n);
   }
   return 0;
}