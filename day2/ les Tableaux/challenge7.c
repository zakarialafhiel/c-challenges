#include<stdio.h>
int main(){
int et,i=0,cup,echenge;

printf("Entre un combien nombre dans le tableau : ");
scanf("%d",&et);
int tab[et];
for(i=0;i<et;i++){
  printf("Entre la valeur de tab[%d] : ",i);
  scanf("%d",&tab[i]);
}
printf("le tableau initial : ");
for(i=0;i<et;i++){
  printf("%d ",tab[i]);
}
do{
  echenge=0;
  for(i=0;i<et-1;i++){
    if(tab[i]>tab[i+1]){
      cup=tab[i];
      tab[i]=tab[i+1];
      tab[i+1]=cup;
      echenge=1;
    } 
  }
}while (echenge==1);
printf("\n\n le tableux apres : ");
for(i=0;i<et;i++){
  printf("%d ",tab[i]);
}
  return 0;
}