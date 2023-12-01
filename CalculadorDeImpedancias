/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
#define PI 3.14159265

int main()
{
    float Vm,float Va,float Cm,float Ca,float frec,float impM,float impA,float Real,foat Imaginario,float ind,float cap;
    
    printf("Hola, Bienvenid@ al programa\n");
    printf("A continuacion escriba el modulo de su voltaje de trabajo\n");
    scanf("%f",&Vm);
    printf("Ahora el ángulo de su voltaje \n");
    scanf("%f",&Va);
     printf("A continuacion escriba el modulo de su corriente de trabajo\n");
    scanf("%f",&Cm);
    printf("Ahora el ángulo de su corriente \n");
    scanf("%f",&Ca);
    printf("Ahora escriba la frecuencia de trabajo \n");
    scanf("%f",&frec);
    
    impM=Vm/Cm;
    impA=Va-Ca;
    
    Real=cos(impA*PI/180)*impM;
    Imaginario=sin(impA*PI/180)*impM;
    
    if(Imaginario>0){
        ind=(Imaginario/(2*PI*frec));
        printf("ind= %f \n", ind);
        printf("La parte real de la impedancia es= %f ", Real);
        printf("\n La parte imaginaria de la impedancia es= %f ", Imaginario);
    }
    else if(Imaginario<0){
        cap=-1/(Imaginario*2*PI*frec);
        printf("Cap= %f \n", cap);
        printf("La parte real de la impedancia es= %f", Real);
        printf("\nLa parte imaginaria de la impedancia es= %f ", Imaginario);
    } 
    
    return 0;
}


