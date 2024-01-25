#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
    char description[200];
    char priorite[30];
} Tache;
Tache T[10];
int taille = 0;
void menu()
{
    int choix;

    while (choix = !0)
    {
        printf("#############<<To Do List>>############### \n ");
        printf("veuillez choisir : \n 1- Ajouter une tache \n 2- Afficher la liste des Taches \n 3- Modifier une Tache \n 4-Supprimer une Tache ");
        scanf("%d", &choix);
        switch (choix)
        {
        case 1:
            Ajouter();
            break;
        case 2:
            Afficher();
            break;
        case 3:
            break;
        case 4:
            break;
        }
    }
}
Afficher()
{
    printf("%d      ======", taille);
    printf("les tache sont \n ");
    for (int i = 0; i <= taille; i++)
    {

        printf("%s  \n", T[i].description);
        printf("%s \n", T[i].priorite);
    }
}
Ajouter()
{
    getchar();

    int i;
    for (i = taille; i < taille + 1; i++)
    {
        printf("entrer la description de la tache \n ");
        gets(T[i].description);
        strcpy(T[i].priorite, " Urgent ");

        // printf ("vous avez ajoute la tache \n ");
        // printf("%s  \n", T[i].description);
        printf("%s \n", T[i].priorite);
    }
    taille++;
}
int main(int argc, char const *argv[])
{

    menu();
    return 0;
}
