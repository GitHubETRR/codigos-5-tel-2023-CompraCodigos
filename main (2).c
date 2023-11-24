/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
#define PI 3.14159265
#define POLAR 1
#define CART 0
int main()
{
    float Real1;
    float Real2;
    float Img1;
    float Img2;
    float Eleccion;
    float Angulo;
    float Modulo;
    float RealTotal;
    float ImagTotal;
    
    printf("Hola, Bienvenid@ al sumador de números complejos\n");
    printf("Por favor, ingrese la parte real de su primer numero complejo\n");
    
    scanf("%f",&Real1);
    printf("A continuacion escriba la parte imaginaria de su primer numero complejo\n");
    scanf("%f",&Img1);
    
    printf("Ahora haga lo mismo con su segundo numero complejo\n");
    scanf("%f",&Real2);
    scanf("%f",&Img2);
    
    printf("A continuacion elija en que formato desea ver el resultado, pulse 1 para ver en formato polar y 0 para verlo en cartesiana\n");
    scanf("%f",&Eleccion);
    
    RealTotal=Real1+Real2;
    ImagTotal=Img1+Img2;
    
    if(Eleccion==POLAR){
        Modulo=sqrt(RealTotal*RealTotal+ImagTotal*ImagTotal);
        Angulo=atan2(ImagTotal, RealTotal)*PI/180;
        
        printf("El módulo de su número complejo es %f \n", Modulo);
        printf("El ángulo de su número complejo es %f \n",Angulo);
        
    }else if(Eleccion==CART){
        
        printf("Real total= %f \n", RealTotal);
        printf("Imaginario total= %f \n", ImagTotal);
    }
    
    return 0;
}



