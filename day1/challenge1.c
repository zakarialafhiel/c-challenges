#include<stdio.h>
int main(){
    //Écrivez un programme en C qui va permettre d'afficher vos informations personnelles : nom, prénom, âge, sexe, et adresse email. Les données sont saisies à partir du clavier.//
  int age;
   char nome[10],prenom[10],email[30],sex[10];
   printf("Entre ton nome  :");
   scanf("%s",nome);
   printf("Entre ton prenom :");
   scanf("%s",prenom);
   printf("Entre ton age :");
   scanf("%d",&age);
   printf("Entre ton sex :");
   scanf("%s",sex);
   printf("Entre ton email :");
   scanf("%s",email);
   printf("________________________________________________\n________________________________________________\n\n");
  printf("Entre ton nome  : %s\n",nome);
printf("Entre ton nome  : %s\n",prenom);
printf("Entre ton nome  : %d\n",age);
printf("Entre ton nome  : %s\n",sex);
printf("Entre ton nome  : %s\n",email);
   return 0;
}