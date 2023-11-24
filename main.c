#include <stdio.h>
#define STR_LENGHT 50

int main()
{
    char Palabra [STR_LENGHT];
    printf("Hola, bienvenid@ a su programa favorito para pasar palabras de minúsculas a mayúsculas \n");
    gets(Palabra);
    int tipo;
    for(int i=0;Palabra[i]!=0;i++){
        if(Palabra[i]<='z'&&Palabra[i]>='a'){
            Palabra[i]-=32;
    .<    }
    }
    printf("%s", Palabra);
    return 0;
}
