#include<stdio.h>
int main (){
  int n;
  char o,j;
  printf("Entre m pour Mois\n");
  printf("Entre j pour Jours\n");
  printf("Entre h pour Heures\n");
  printf("Entre k pour Minutes\n");
  printf(" Secondes\n");
  printf("Entre combien anne vous souhaitez convertir : ");
  scanf("%d",&n);
   printf(" ecrivez ce que vous voulez convertir j/h/m/s: ");
   scanf(" %c",&o);
   switch(o){
    case 'j':
    printf("Le nombres des jours dans l'anne est : %d",n*365);
    break;
    case 'h':
    printf("Le nombres des heures dans l'anne est : %d",n*8760);
    break;
    case 'm':
    printf("Le nombres des Minutes dans l'anne est : %d",n*525600);
    break;
    case 's':
    printf("Le nombres des secondes dans l'anne est : %d",n*31536000);
    break;
    case 'k':
    printf("Le nombres des mois dans l'anne est : %d",n*12);
    break;
    default : 
    printf("pardon entre un de mois,j,h,m,s");
   } 
   return 0;
}