// https://docs.google.com/drawings/d/18SkoDWm2Zq68ETd5Tws8QHi-K00BY6bCdPmKrHfM-g8/edit?usp=sharing En este link dse puede ver la esquematizacio�n

#include <stdio.h>

int main()
{
    int opcion;
    
    while(opcion!=10)
    {
        printf("===Arbol Genealogico===");
        printf("\n Elija una opcion\n");
        printf("\n Generaci�n 1");
        printf("\n Generaci�n 2");
        printf("\n Generaci�n 3");
        printf("\n Generaci�n 4");
        printf("\n Generaci�n 5");
        printf("\n Generaci�n 6\n");
        scanf("%d", &opcion);
        
        if(opcion==1)
        {
        printf("\n Mis tatarabuelos");
        printf("\n Gustavo y Ernestina");
        }
        if (opcion==2)
        {
        printf("\n Mis bisabuelos");
        printf("\n Sirina y Margarito");
        }
        if (opcion==3)
        {
        printf("\n Mis abuelos: ");
        printf("\n Jos� y Dolores");
        }
        if (opcion==4)
        {
        printf("\n Mis padres: ");
        printf("\n Carmen y Fernando\n");
        printf("\n Mis t�os: ");
        printf("\n Daniel y Ang�lica");
        }
        if (opcion==5)
        {
        printf("\n Yo: ");
        printf("\n Luis\n");
        printf("\n Mis primos: ");
        printf("\n Daniel, Diego y Paulina");
        }
        if(opcion==6)
        {
        printf("\n Mis hijos: ");
        printf("\n Luisa y Fernando");
        }
    }
}
