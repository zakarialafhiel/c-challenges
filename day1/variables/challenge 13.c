#include<stdio.h>
int main(){
  /*ktb programme y5ali utilisateur yda5l un entier ol programme y affichih bi binaire olhexadecemal
  pour demander de l'utilisateur pour entre un entier*/
//pour donner la permission a l'utilisateur de entre un entier//
int n,i=0,h=0;
printf("Entre un entier : ");
scanf("%d",&n);
//pour transforme la valeur de n en binair//
printf("\n===========\n===========\n");
printf("La valeur de %d en binar est : ",n);

 while(i<=n){
 

  //117=1110101//
  //i++;//

  if(n%2!=0){
    i=1;
    printf("%d",i);
    n=n/2;
  }
    
  else {
    i=0;
    printf("%d",i);
     n=n/2;
  }
  }
  printf("\n___________\n___________\n");
  //pour transforme la valeur de n en hexadecimal//
   //5dm bil while odir fuh xart dyal i<=n ou xart tani 3la 7asab n//   
return 0;

}