#include <stdio.h>
int main (){
    int a,b,c;
    printf("Entre la valeur de a :");
    scanf("%d",&a);
    printf("Entre la valeur de b :");
    scanf("%d",&b);
    printf("Entre la valeur de c :");
    scanf("%d",&c);
    if (a+b>c||c+b>a||c+a>b){
        if(a==b&& b==c && c==a){
            printf("motasawi adla3");
        }else if(a==b||b==c||c==a){
                printf("motasawi sa9ayn");
            }else{
                printf("9aim zawiya");
            }
        
    }else{
        printf("no triangle");
    }
return 0;
}
    

   