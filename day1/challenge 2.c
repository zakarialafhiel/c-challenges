#include<stdio.h>
int main(){
  //Écrivez un programme qui demande la température en Celsius et la transforme en Kelvin.//
  //pour demande de l'utilisateur pour entre la valeur de la temperature en celsius//
  double c;
  printf("Entre la valeur de la temperature en celsuis : ");
  scanf("%lf",&c);
  //pour affiche la valeur de temperature en kelvin//
  printf("==========================\n==========================\n\n");
  printf("La valeur de temperature en kelvin est %.2lf",c + 273.15); 
  return 0;
}