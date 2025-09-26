/*tableau de demonsion*/
#include<stdio.h>
int main(){
  int garderobe,i=0,box,y=0;
  printf("Entre combien le nombre de  garderobe : ");
  scanf("%d",&garderobe);
  printf("Entre combien le nombre de box : ");
  scanf("%d",&box);
  int tab[garderobe][box];
  for(i=0;i<garderobe;i++){
    for(y=0;y<box;y++){
    printf("Entre le nombre de tab[%d][%d] : ",i,y);
    scanf("%d",&tab[i][y]);
  }
  }
   printf("Le tableau : ");
   for(i=0;i<garderobe;i++){
    printf("\n");
    for(y=0;y<box;y++){
    printf("%d ",tab[i][y]);
  }
  }
    return 0;
}