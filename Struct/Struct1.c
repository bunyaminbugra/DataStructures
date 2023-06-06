#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct student
{
    char name[30];
    int age;
    float mark;
};

typedef struct
{
    char name[30];
    int age;
    float experience;
}teacher;


int main()
{
    /*------------------------------------------------------------------------*/
    struct  student Bugra;
    
    strcpy(Bugra.name, "Bunyamin Bugra Korkmazer");
    Bugra.age = 23;
    Bugra.mark = 92.5;

    printf("Ogreci Bugra: %s %d %.1f\n",Bugra.name, Bugra.age, Bugra.mark);

    /*------------------------------------------------------------------------*/
    struct student *Bilal = (struct student *)malloc(sizeof(struct student));

    strcpy(Bilal->name, "Bilal Korkmazer");
    Bilal->age = 25;
    Bilal->mark = 95.2;

    printf("Ogrenci Bilal: %s %d %.1f\n",Bilal->name,Bilal->age,Bilal->mark);

    /*------------------------------------------------------------------------*/
    teacher *Bilal_Aydin = (teacher *)malloc(sizeof(teacher));

    strcpy(Bilal_Aydin->name, "Bilal Aydin");
    Bilal_Aydin->age = 49;
    Bilal_Aydin->experience = 25;

    printf("Ogretmen Bilal: %s %d %.1f\n", Bilal_Aydin->name, Bilal_Aydin->age, Bilal_Aydin->experience);
    /*------------------------------------------------------------------------*/
    teacher Omer;

    strcpy(Omer.name,"Omer Korkmazer");
    Omer.age = 43;
    Omer.experience = 18;

    printf("Ogretmen Omer: %s %d %.1f\n", Omer.name, Omer.age, Omer.experience);
    /*------------------------------------------------------------------------*/

    free(Bilal);
    free(Bilal_Aydin);

    system("pause");
    return 1;
}