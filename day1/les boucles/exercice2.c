/*exercice 2 */
#include <stdio.h>
int main (){
  int i=34,n;
  
  do{
      printf("Entre un nombre : ");
  scanf("%d",&n);
   if(n>i){
   printf("Trop grand\n");
   }else if(n<i){
   printf("Trop petit\n");
   }else{
    printf("bravo\n");
   }
  }while(n!=i);
    return 0;
}