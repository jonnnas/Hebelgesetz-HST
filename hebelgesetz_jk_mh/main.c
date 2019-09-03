/*-------------------------------------------------
| Name   : Jonas Kuster, Marc Haller
| Datum  : 03.089.2019
| Ort    : Berufsschule Uster
|
| Aufgabe: Ein Programm zur Aufgabe "Hebelgesetz"
|          11.9 Blatt schreiben
|--------------------------------------------------*/


#include <stdio.h>
#include <stdlib.h>

short getDrehMnt(short force, short length1){
    return(force*length1);
}

short getKraftAmp(short length1, short length2){
    return(length1/length2);
}

short getKraft(short force2, short length1, short length2){
    return(force2*length2/length1);
}


int main()
{
    short length1 = 2;
    short length2 = 2;
    short force1 = 3;
    short force2 = 5;
    short summe;

    //summe = getDrehMnt(force,length1);

    //summe = getKraftAmp(length1,length2);

    summe = getKraft(force2, length2, length1);

    printf("%d",summe);



    return 0;
}
