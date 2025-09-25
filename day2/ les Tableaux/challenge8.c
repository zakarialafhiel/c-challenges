#include<stdio.h>
int main(){
 /*Écrivez un programme C qui copie.*/
    int i=5,y=0,tab[5]={4,3,2,1,6},num[5],copie;
    printf("Le tablaux avant : ");
    for(i=0;i<5;i++){
        printf("%d ",tab[i]);
    }  
    printf("\n\n Le tablaux apres : ");
    for(i=0;i<5;i++){
        num[i]=tab[i];
        printf("%d ",num[i]);
        if(num[i]=tab[i]){
            copie==1;
        }
    }  
    if( copie==1){
     printf("oui tab[5] = num[5]");
    }else{
printf("no tab[5]!= num[5]");
    }
    return 0;
}