#include <stdio.h>
#include <stdlib.h>
int soma(int x, int y);
int main( void ){
    int a, b;

    printf("digite dois numeros\n");
    printf(":");
    fflush(stdin);
    scanf("%d",&a);
    printf(":");
    fflush(stdin);
    scanf("%d",&b);
    printf("soma: %d + %d = %d\n", a, b, soma(a,b));
    system("pause");
    return 0;

}
int soma (int x, int y)
{

    return x+y;
}
