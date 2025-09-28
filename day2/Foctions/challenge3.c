#include<stdio.h>
#include<string.h>
int max(int a, int b){
    int index=a-b;
    if(index>0){
        return a;
    }
    return b;
}
int main(){
    int a=6,b=5;
    int index = max(a , b);
    printf("%d",index);
}