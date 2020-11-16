#include <stdio.h>
#include <stdlib.h>
typedef struct{
    int id;
    char nombre[20];
    int infectados;
    int recuperados;
    int muertos;

}ePais;
void quitarVocales(char string[]);
void ordenarCaracteres(char string[]);
void actualizarMuertos(ePais pais[], int muertosXDia);

int main()
{
    char string[100];
    gets(string);
    quitarVocales(string);
    ordenarCaracteres(string);
    printf("%s",string);

    ePais pais;
    int muertosDia = 3000;
    pais.muertos = 72000;

    actualizarMuertos(&pais, muertosDia);

    printf("Las muertes actuales son %d\n", pais.muertos);

    return 0;


}
//-----------------------------------------------------------------------
void quitarVocales(char string[])
{
    int tam=strlen(string);
    char aux;

    for(int i=0; i<tam-1; i++)
    {

        if((string[i]!='a' && string[i]!='e' && string[i]!='i' && string[i]!='o' && string[i]!='u'))
        {
            printf("%c",string[i]);
        }
    }
}
//------------------------------------------------------------------------------------
void  ordenarCaracteres(char string[])
{
    int tam=strlen(string);
    char aux;

    for(int i = 0; i < tam-1; i++)
    {
        for(int j = i + 1; j < tam; j++)
        {
            if(string[i]>string[j])
            {
                aux = string[i];
                string[i] = string[j];
                string[j] = aux;
            }
        }
    }
    printf("%s\n",string);
}
//-----------------------------------------------------------------------------------------
void actualizarMuertos(ePais pais[], int muertosXDia)
{
    pais->muertos = muertosXDia + pais->muertos;
}
