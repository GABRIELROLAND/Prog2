#include<stdio.h>
#include<math.h>
struct reg_ponto{
 float x;
 float y;
};
int main()
{
float xa,ya,xb,yb;
struct reg_ponto p;
leitura(&p);
xa=p.x;
ya=p.y;
leitura(&p);
xb=p.x;
yb=p.y;
imprimir(&xa,&ya,&xb,&yb);
distancia(&xa,&ya,&xb,&yb);

return 0;
}
void leitura(struct reg_ponto *p)
{
    printf("\nPrimeiro Preencha Xa e Ya\nDepois Xb e Yb\n");
    printf("entre com o valor para x: \n");
    scanf("%f",&p->x);
    printf("entre com valor para y: \n");
    scanf("%f",&p->y);
}
void imprimir(float *xa, float *ya, float *xb ,float *yb)
{
  printf("\nAs coordenada de \nXa:%.1f\nYa:%.1f\n",*xa,*ya);
  printf("\nAs coordenada de \nXb:%.1f\nYb:%.1f\n",*xb,*yb);
}
void distancia(float *xa, float *ya, float *xb ,float *yb)
{
  float subxbxa,subybya,D=0;
  subxbxa=*xb-*xa;
  subybya=*yb-*ya;
  D=sqrt(pow(subxbxa,2)+pow(subybya,2));
printf("A distancia entre os pontos eh:\n%.2f",D);

}
