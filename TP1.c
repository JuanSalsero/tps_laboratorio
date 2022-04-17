/*
 ============================================================================
 Name        : TP.c
 Author      : Jaeger Juan Carlos
 Version     :1° G
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


#include <stdio.h>
#include <stdlib.h>
#include <conio.h>



int main()
{
    int menu;
    int flagkm = 0;
    int flagAero = 0;
    int eleccion;
    char continuar = 's';
    float km = 7090;
    float btc = 4606954.55;
    float precioAero = 162965;
    float precioLatam = 159339;
    float debitoAero;
    float debitoLatam;
    float creditoAero;
    float creditoLatam;
    float pagobtcAero;
    float pagobtcLatam;
    float difPrecios;
    float unitAero;
    float unitLatam;
    float difPrecio;


    do{

    system ("cls");
    printf("1.- Ingresar los kilometros del viaje\n");
    printf("2.- Ingresar precios de vuelos Aerolineas y Latam\n");
    printf("3.- Calcular todos los costos\n");
    printf("4.- Informar resultados\n");
    printf("5.- Carga forzada\n");
    printf("6.- Salir 6\n");


    scanf("%d", &menu);

        switch(menu)
        {
            case 1:
                printf("Ingrese los kilometros del viaje\n");
                scanf("%f", &km);
                flagkm = 1;

                break;
            case 2:
                if(flagkm == 0){
                    printf("Primero debe cargar los kilometros\n");
                    printf("Presione una tecla para continuar\n");
                    getch ();
                    menu = 6;
                }
                else {
                    printf("2.- Ingrese precios de vuelos Aerolineas\n");
                    scanf("%f", &precioAero);
                    printf(" Ingrese precio de vuelo de Latam\n");
                    scanf("%f", &precioLatam);
                    printf("Presione una tecla para continuar");
                    flagAero=1;

                }

                break;
            case 3:
                if (flagkm==0 && flagAero==0){
                    printf("Primero debe cargar los kilometros y precios \n");
                    printf("Presione una tecla para continuar");
                    getch();
                    menu = 6;
                }else {
                    debitoAero = descuentoAero (precioAero);
                    debitoLatam = descuentoLatam (precioLatam);
                    creditoAero = interesAero (precioAero);
                    creditoLatam= interesLatam (precioLatam);
                    pagobtcAero = btcAero (precioAero, btc);
                    pagobtcLatam = btcLatam (precioLatam, btc);
                    difPrecio = diferencia (precioLatam, precioAero);
                    unitAero = unitA (precioAero,km);
                    unitLatam = unitL (precioLatam,km);

                    }

                break;
            case 4:
                if (flagkm==0 || flagAero==0){
                    printf("Primero debe cargar los kilometros y precios \n");
                    menu = 6;
                }
                else
                    printf("Informe de resultados Aerolineas 1 o Latam 2\n");
                scanf("%d", &eleccion);
                if(eleccion == 1){
                    printf ("Precio Aerolineas: $%.2f\n", precioAero);
                    printf ("a) Precio con tarjeta de debito: $%.2f\n", debitoAero);
                    printf ("b) Precio con tarjeta de credito: $%.2f\n", creditoAero);
                    printf ("c) Precio pagando con Bitcoin : %.2f\n", pagobtcAero );
                    printf ("d) Mostrar precio unitario: $%.2f\n" , unitAero);
                }
                else if(eleccion == 2){
                    printf ("Precio Latam: $%.2f\n", precioLatam);
                    printf ("a) Precio con tarjeta de debito: $%.2f\n", debitoLatam);
                    printf ("b) Precio con tarjeta de credito: $%.2f\n", creditoLatam);
                    printf ("c) Precio pagando con Bitcoin : %.2f\n", pagobtcLatam);
                    printf ("d) Mostrar precio unitario: $%.2f\n" , unitLatam);
                }

                printf("Presione una tecla para continuar");
                getch ();
                break;
            case 5:
                    debitoAero = descuentoAero (precioAero);
                    debitoLatam = descuentoLatam (precioLatam);
                    creditoAero = interesAero (precioAero);
                    creditoLatam= interesLatam (precioLatam);
                    pagobtcAero = btcAero (precioAero, btc);
                    pagobtcLatam = btcLatam (precioLatam, btc);
                    difPrecio = diferencia (precioLatam, precioAero);
                    unitAero = unitA (precioAero,km);
                    unitLatam = unitL (precioLatam,km);

                printf ("Kilometros ingresados %.0f\n\n", km);
                printf ("Precio Aerolineas: $%.2f\n", precioAero);
                printf ("a) Precio con tarjeta de debito: $%.2f\n", debitoAero);
                printf ("b) Precio con tarjeta de credito: $%.2f\n", creditoAero);
                printf ("c) Precio pagando con Bitcoin : %.2f\n", pagobtcAero );
                printf ("d) Mostrar precio unitario: $%.2f\n\n" , unitAero);
                printf ("Precio Latam: $%.2f\n", precioLatam);
                printf ("a) Precio con tarjeta de debito: $%.2f\n", creditoLatam);
                printf ("b) Precio con tarjeta de credito: $%.2f\n", creditoLatam);
                printf ("c) Precio pagando con Bitcoin : %.2f\n", pagobtcLatam);
                printf ("d) Mostrar precio unitario: $%.2f\n\n" , unitLatam);
                printf ("La diferencia de precio es: $%.2f", difPrecio);

                printf(" Precione una tecla para continuar");
                getch();

                break;
            case 6:
                continuar = 'n';
                break;

            }

    }while(continuar == 's');



    return 0;
}
