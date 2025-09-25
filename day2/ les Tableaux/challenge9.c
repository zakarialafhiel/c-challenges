#include<stdio.h>
int main(){
 /*Écrivez un programme C qui inverse les éléments d'un tableau d'entiers. Par exemple, si le tableau est [1, 2, 3, 4, 5], il doit devenir [5, 4, 3, 2, 1]. Affichez le tableau inversé.*/
    int i=5,y=0,tab[5]={2,1,3,4,5};
    printf("Le tablaux avant : ");
    for(i=0;i<5;i++){
        printf("%d ",tab[i]);
    }  
    printf("\n\n");
    printf("Le tablaux apres : ");
    for(i=4;i>0;i--){
        printf("%d ",tab[i]);
    }  
 return 0;
}