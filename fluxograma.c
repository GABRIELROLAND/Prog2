#include<stdio.h>

int main()
{
     int vet[10];
     int y=0;
     int x=0;
     int i;
     for(i=0;i<10;i++)
     {
          printf("Digite um valor\n");
          scanf("%d",&vet[i]);
     }
          printf("\nDigite o Numero Para saber a Posicao:\n");
          scanf("%d",&x);

            for(i=0;i<10;i++)
            {
            if(vet[i]==x)
            printf("\nOvalor alocado na posicao %d eh:%d",i+1,x);
            y++;
            }
            if(y==0)
            {
            printf("a busca falhou");
            }

      return 0;
}
