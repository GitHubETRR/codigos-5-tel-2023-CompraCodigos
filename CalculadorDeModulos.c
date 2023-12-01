/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

#define PI 3.14159265

int main()
{
    float Real;
    float Imaginario;
    float Modulo;
    float Angulo;
    
    printf("Bienvenid@ al programa que lo ayudará a calcular el módulo y angulo de su número complejo\n");
    printf("A continuacion escriba la parte real de su número complejo \n");
    scanf("%f",&Real);
    printf("A continuacion escriba la parte imaginaria de su numero complejo \n");
    scanf("%f", &Imaginario);
    
    Modulo=sqrt(Real*Real+Imaginario*Imaginario);
    Angulo=atan2(Imaginario, Real)*PI/180;
    
    printf("El módulo de su número complejo es %f \n", Modulo);
    printf("El angulo de su número complejo es %f",Angulo);
    
    
    return 0;
}


