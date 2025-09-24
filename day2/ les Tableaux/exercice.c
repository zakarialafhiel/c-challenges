#include<stdio.h>
int main (){
    float e[4],mt=0;
    int i;
    for(i=0;i<4;i++){
   printf("Entre la moyenne de etudiant %d : ",i+1);
   scanf(" %f",&e[i]);
   mt=mt+e[i];
  }
    //calculer le moyenne et affiche le moyenne des notes //
    printf("Le myenne des notes est %.2f",mt/4);
    return 0;
}