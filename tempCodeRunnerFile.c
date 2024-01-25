#include<stdio.h>
#include<stdlib.h>
typedef struct {
    char description[200];
    char priorite[30];
    }Tache;
    Tache T;
void menu(int choix ){
    printf("#############<<To Do List>>############### \n "); 
    printf("veuillez choisir : \n 1- Ajouter une tache \n 2- Afficher la liste des Taches \n 3- Modifier une Tache \n 4-Supprimer une Tache ");
    switch (choix){
        case 1:  
               Ajouter();
               break; 
        case 2: 
                
                break; 
        case 3: 
                break; 
        case 4 : 
                break; 

    }

}
void Ajouter(){
    
    printf("entrer la description de la tache \n ");
    gets(T.description);
    strcpy(T.priorite ," Urgent "); 
    printf ("vous avez ajoute la tache \n "); 
    printf("%s  \n", T.description); 
    printf("%s \n", T.priorite);

}
int main(int argc, char const *argv[])
{
    int choix;
    menu(choix);
    return 0;
}
