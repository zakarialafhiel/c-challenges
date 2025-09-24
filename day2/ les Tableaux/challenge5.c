#include<stdio.h>
int main(){
   int en,i=0,min;
   int tab[en];
   printf("Entre combien nombres tu veux dans le tableau : ");
   scanf("%d",&en);
   for(i=0;i<en;i++){
    printf("Entre le nombre de tab[%d] : ",i);
    scanf("%d",&tab[i]);
   }
   min=tab[0];
   for(i=0;i<en;i++){
    if(min>tab[i]){
        min == tab[i];
   }
   

}
printf("le minimum nomber de tableau est %d",min);
return 0;
}