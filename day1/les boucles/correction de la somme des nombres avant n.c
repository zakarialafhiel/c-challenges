#include<stdio.h>
//5=> 1+2+3+4+5==15// 
int main (){
  int i=1,n,s=0;
  printf("Entre un nombre : ");
  scanf("%d",&n);
  while(i<=n){
    
    s=s+i;
  i++;  
}
  printf("la somme des nombres avant%d",s);
  
    return 0;
}