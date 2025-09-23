#include<stdio.h>
int main(){
  /*ktb programme y5ali utilisateur yda5l un entier ol programme y affichih bi binaire olhexadecemal
  pour demander de l'utilisateur pour entre un entier*/
//pour donner la permission a l'utilisateur de entre un entier//
int n,i=0;
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
  //pour transforme la valeur de n en hexadecimal//
    
return 0;

}