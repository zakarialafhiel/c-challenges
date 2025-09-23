#include<stdio.h>
int main(){
    //Écrivez un programme qui demande la distance en kilomètres et la transforme en yards//
    //pour demander de l'utilisateur pour entre un distance en km//
    double km;
    printf("Entre un distance en km : ");
    scanf("%lf",&km);
    printf("------------------------\n------------------------\n");
     //pour Affiche la distance en yards//
     printf("la distance en yards est %.2lf",km * 1093.61);
    return 0;
}