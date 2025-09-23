#include<stdio.h>
int main (){
   /*Écrivez un programme qui demande la température en Celsius et affiche l'état de l'eau à cette température (solide, liquide, gaz). Règle :
C < 0 : Solide
0 <= C < 100 : Liquide
C >= 100 : Gaz*/
  //pour demande de l'utilisateur pour entre la température en Celsius//
  double c;
  printf("Entre la température en Celsius : ");
  scanf("%lf",&c);
  printf("==================\n==================\n\n");
  //pour affiche l'état de l'eau//
  if(c < 0){
  printf("l'état de l'eau à cette température est solide");
  }else if (0 <= c < 100){
printf("l'état de l'eau à cette température est liquide");
  }else{
printf("l'état de l'eau à cette température est gaz");
  } 
return 0;
}