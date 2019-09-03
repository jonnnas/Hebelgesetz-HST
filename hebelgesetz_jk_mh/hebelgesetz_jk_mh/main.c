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

short getDrehMnt(short force1, short length1){
    return(force1*length1);
}

short getKraftAmp(short length1, short length2){
    return(length1/length2);
}

short getKraft(short force2, short length1, short length2){
    return(force2*length2/length1);
}

short getKraftAmpDGZ(short force1, short length1, short length2, short length3, short length4){
    return(force1*length1/length2*length3/length4);
}


int main()
{
    short length1 = 30;
    short length2 = 2;
    short length3 = 4;
    short length4 = 3;
    short force1 = 5;
    short force2 = 20;
    short force3;
    short summe;

    //summe = getDrehMnt(force,length1);

    //summe = getKraftAmp(length1,length2);

    //summe = getKraft(force2, length2, length1);

    summe = force1/getKraftAmpDGZ(force1, length1, length2, length3, length4);

    printf("%d",summe);



    return 0;
}
