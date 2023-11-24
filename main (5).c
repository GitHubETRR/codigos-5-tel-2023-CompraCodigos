/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<math.h>
#define PI 3.14159265

int main()
{
    float frec;
    float Real;
    float Img;
    float ind;
    float res;
    float cap;

    
    printf("Bienvenid@ al programa \n");
    printf("Por favor escriba la frecuencia de trabajo \n");
    scanf("%f",&frec);
    printf("A continuacion coloque la impedancia de trabajo (parte real) \n");
    scanf("%f",&Real);
    printf("Ahora la parte imaginaria \n");
    scanf("%f",&Img);
    printf("Res= %f ", Real);
    if(Img>0){
        ind=(Img/2*PI*frec);
         printf("ind= %f", ind);
    }
    else if(Img<0){
        cap=-1/(Img*2*PI*frec);
        printf("Cap= %f", cap);
    } 
}

