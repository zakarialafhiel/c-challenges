#include<stdio.h>
int main(){
  /*Écrivez un programme C qui permet de calculer les solutions possibles d’une équation du deuxième degré.*/
   int a,b,c,rd=0;
   double x0,x1,x2,delta;
   x0=b*-1/2*a; 
   delta=b*b-4*a*c;
   x1=(b*-1-rd)/2*a;
   x2=(b*-1+rd)/2*a;
  while(rd<=delta){
    rd++;
    if(rd*rd==rd){
    break;
    }
  }
  if(delta==0){
    printf("L'equation a une unique solution %lf",x0);
  }else if(delta>0){
    printf("L'equation a deux solution %lf et %lf",x1,x2);
  }else{
    printf("L'equation na pas de solution reelle");
  }

  
  return 0;
}