#include <stdio.h>
#include <math.h>

float d,quadrato,cerchio,triangolo;
int main ()
{
printf("Inserisci un numero che sarà il lato di un quadrato, il diametro di un cerchio e il lato di un triangolo\n");
scanf ("%f",&d);
quadrato= d*d;
cerchio= M_PI*pow(d,2)/4;
triangolo= (sqrt(3)/4)*pow(d,2);
printf("L'area del quadrato è %.2f\n",quadrato);
printf("L'area del cerchio è %.2f\n",cerchio);
printf("L'area del triangolo è %.2f\n",triangolo);
return 0;
}
