#include<stdio.h>
#include<string.h>
int min(int a , int b){
int index=a-b;
if (index>0){
    return b;
}
return a;

}
int main (){
    int a=4,b=7;
 int index=min(a , b);
 printf("%d",index);

    return 0;
}