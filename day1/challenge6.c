#include<stdio.h>
int main(){
    //Deux nombres réels, a et b, sont saisis au clavier. Calculez et affichez a + b, a - b, a * b, et a / b avec précision décimale.//
    //pour demande de l'utilisateur pour entre deux nombres reels//
    int a,b;
    double a1,ba;
    printf("Entre le nombre a : ");
    scanf("%d",&a);
    printf("Entre le nombre b : ");
    scanf("%d",&b);
    printf("===================\n===================\n");
     printf("%d + %d = %d\n\n",a,b,a + b);
     printf("%d - %d = %d\n\n",a,b,a - b);
     printf("%d * %d = %d\n\n",a,b,a * b);
    a1=(double)a;
    ba=(double)b;
     printf("%.2lf / %.2lf = %.2lf\n\n",a1,ba,a1 / ba);
    return 0;
}