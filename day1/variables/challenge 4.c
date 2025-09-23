#include<stdio.h>
int main(){
  //Écrivez un programme qui demande la vitesse en kilomètres par heure (km/h) et la transforme en mètres par seconde (m/s). //
   //pour demande de l'utilisateur pour entre la distance et le temp//  
  double km,h;
    printf("Entre la distance en km : ");
    scanf("%lf",&km);
    printf("Entre le temp en h : ");
    scanf("%lf",&h);
    printf("_______________________\n_______________________\n");
    //pour affiche la vitesse en mettre par seconde//
    printf("La vitesse en mettre par seconde est %.2lf m/s",km/h * 0.27778);
  return 0;
}