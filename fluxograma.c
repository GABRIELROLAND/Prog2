#include<stdio.h>

int main()
{
     int vet[10];
     int y,n=10;
     int i;
     for(i=0;i<10;i++)
     {
          print("Digite um valor para posiçao %d",i);
          scanf("%d",&vet[10]);
     }
          printf("\nQual posiçao deseja Saber");
          scanf("%d",&y);
          if(y<n)
          {
                 for(i=0;i<10;i++)
                 {
                  if(vet[i]==y)
                  {
                   printf("\nOvalor de i eh:%d",i);
                   }
                       else
                       {
                         printf("a busca falhou");
                       }


      return 0;
      }
