#include<stdio.h>
/*Challenge 12 : Nombre entier à quatre chiffres en ordre inverse
Écrivez un programme C pour afficher un nombre entier à quatre chiffres dans l'ordre inverse sans utiliser de boucle. Par exemple, si le nombre entier est 1234, son inverse est 4321.

*/
//pour demande l'utilisateur pour entre un nombre //
int main(){
int n,i;
printf("Entre un nombre : ");
 scanf("%d",&n);
 //pour inversi le nombre qui entre par utilisateur//
  for(i=0;i<=n;i++){
    if((n-i)%10==0){
        printf("%d",i);
        n=n/10;
        i=0; 
    }
  }
 return 0;
}
