#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char name[30];
    int yearOfFoundation;
}footballClub;

typedef struct
{
    char name[30];
    int age;
    footballClub *club;
}footballPlayer;

int main()
{
    /*------------------------------------------------------------------------*/
    footballClub *MC = (footballClub *)malloc(sizeof(footballClub));

    strcpy(MC->name, "Manchester City");
    MC->yearOfFoundation = 1880;
    /*------------------------------------------------------------------------*/
    footballPlayer EH;

    strcpy(EH.name, "Erling Haaland");
    EH.age = 22;
    EH.club = MC;
    /*------------------------------------------------------------------------*/
    footballPlayer KDB;

    strcpy(KDB.name, "Kevin De Bruyne");
    KDB.age = 31;
    KDB.club = MC;
    /*------------------------------------------------------------------------*/
    printf("Player Info: %s %d %s\n", EH.name, EH.age, EH.club->name);
    printf("Player Info: %s %d %s\n", KDB.name, KDB.age, KDB.club->name);
    /*------------------------------------------------------------------------*/

    free(MC);

    system("pause");
    return 1;
}