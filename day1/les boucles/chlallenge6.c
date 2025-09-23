#include<stdio.h>
int main(){
    int y=0,i=0,n;
    printf("Entre un nombre : ");
    scanf("%d",&n);
    while(i<1){
        while(y<n&&y%2==0){
            y++;
        printf("%d ",y);
        }

    }
    return 0;
}