#include <stdio.h>
int main (){
  /*Challenge 2 : Voyelle ou Non
Écrivez un programme en C qui vérifie si un caractère saisi par l'utilisateur est une voyelle ou non en utilisant l'instruction switch case.
les voyelles : a, e, i, o, u, y */
 //demmande l'utilisateur pour entre un character//
   char a;
   printf("Entre un alphabet : ");
   scanf("%c",&a);
   //pour affiche que la lettre est voyelle ou //
   switch(a){
    case 'a': 
    printf("%c est un voyelle",a);
    break; 
    case 'e': 
    printf("%c est un voyelle",a);
    break; 
    case 'i': 
    printf("%c est un voyelle",a);
    break;
    case 'o': 
    printf("%c est un voyelle",a);
    break;
    case 'u': 
    printf("%c est un voyelle",a);
    break;
    case 'y': 
    printf("%c est un voyelle",a);
    break;
    default : 
    printf("L'alphabet est pas d'un voyelle");
   }
 return 0;
}