#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct
{
    char name[30];
    int yearOfFoundation;
}footballClub;

typedef struct
{
    char name[30];
    int age;
    footballClub club;
}footballPlayer;


int main()
{
    /*------------------------------------------------------------------------*/
    footballPlayer alex;

    strcpy(alex.name, "Alex De Souza");
    alex.age = 45;
    strcpy(alex.club.name, "Fenerbahce SK");
    alex.club.yearOfFoundation = 1907;

    printf("Kulup Bilgileri: %s %d\n", alex.club.name, alex.club.yearOfFoundation);
    /*------------------------------------------------------------------------*/
    footballClub FB;

    strcpy(FB.name, "Fenerbahce SK");
    FB.yearOfFoundation = 1907;

    footballPlayer DK;

    strcpy(DK.name, "Dirk Kuyt");
    DK.age = 42;
    DK.club = FB;

    printf("Kulup Bilgileri: %s %d\n", DK.club.name, DK.club.yearOfFoundation);
    printf("Oyuncu Bilgileri: %s %d\n", DK.name, DK.age);
    /*------------------------------------------------------------------------*/


    system("pause");
    return 0;
}