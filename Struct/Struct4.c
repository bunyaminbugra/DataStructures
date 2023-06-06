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

footballClub createFutballClub(char *name, int yearOfFoundation)
{
    footballClub FC;

    strcpy(FC.name, name);
    FC.yearOfFoundation = yearOfFoundation;

    return FC;
}

footballPlayer createPlayer(char *name, int age, footballClub *FC)
{
    footballPlayer FP;

    strcpy(FP.name, name);
    FP.age = age;
    FP.club = FC;

    return FP;
}

int main()
{
    footballClub FB;
    footballClub MC;

    footballPlayer ADS;
    footballPlayer EH;
    footballPlayer DK;
    footballPlayer KDB;

    FB = createFutballClub("Fenerbahce SK", 1907);
    MC = createFutballClub("Manchester City", 1880);

    ADS = createPlayer("Alex De Souza", 45, &FB);
    DK = createPlayer("Dirk Kuyt", 42, &FB);

    EH = createPlayer("Erling Haaland", 22, &MC);
    KDB = createPlayer("Kevin De Bruyne", 31, &MC);

    printf("Oyuncu Info: %s %s\n", ADS.name, ADS.club->name);
    printf("Oyuncu Info: %s %s\n", DK.name, DK.club->name);
    printf("Oyuncu Info: %s %s\n", EH.name, EH.club->name);
    printf("Oyuncu Info: %s %s\n", KDB.name, KDB.club->name);



    system("pause");
    return 0;
}