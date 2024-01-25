#include <stdio.h>
#include <string.h>
typedef struct {
    char description[200];
    char priorite[30];
}Tache;
int main() {
Tache T;
printf("entrer la description de la tache \n ");
gets(T.description);
strcpy(T.priorite ," Urgent "); 
printf ("vous avez ajoute la tache \n "); 
printf("%s  \n", T.description); 
printf("%s \n", T.priorite);



    return 0;
}