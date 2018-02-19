#include<stdio.h>

int main()
 {
    int numero[10],maior=0;
    int i;

    for(i=0;i<10;i++)
    {
    printf("Entre com um Numero\n");
    scanf("%d",&numero[i]);
    if(numero[i]>maior)
        {
        maior=numero[i];
        }
     }
    printf("o numero maior eh %d",maior);

    return 0;
}
