#include<stdio.h>
#include<math.h>

struct reg_ponto{
 float x;
 float y;
};

void leitura(struct reg_ponto *p);
void imprimir(struct reg_ponto p,struct reg_ponto p2);
float distancia (struct reg_ponto p,struct reg_ponto p2);

int main()
{
    float r=0;
struct reg_ponto p;
struct reg_ponto p2;
leitura(&p);

leitura(&p2);

imprimir(p,p2);

distancia(p,p2);

r=distancia (p,p2);
printf("A distancia eh:%.2f",r);


return 0;
}
void leitura(struct reg_ponto *p)
{

    printf("entre com o valor para x: \n");
    scanf("%f",&p->x);
    printf("entre com valor para y: \n");
    scanf("%f",&p->y);
}
void imprimir(struct reg_ponto p,struct reg_ponto p2)
{
  printf("\nAs coordenada de \nXa:%.1f\nYa:%.1f\n",p.x,p.y);
  printf("\nAs coordenada de \nXb:%.1f\nYb:%.1f\n",p2.x,p2.y);
}

float distancia (struct reg_ponto p,struct reg_ponto p2)
{
  float D=0;

  D=sqrt(pow(p.x-p.y,2)+pow(p2.x-p2.y,2));

return D;
}
