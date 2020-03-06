#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <cstdlib>
#include <string.h>

int main(int argc, char *argv[])
{
    const int MAX = 100, MIN = 1; //La valeur généré aléatoirement sera entre 1 et 100
    int joueur = 0, joueur1 = 0, rng = 0, compteur, nombreJoueurs = 0, rejouer = 0;


    //Génération du nombre random
    srand(time(NULL));
    rng = (rand() % (MAX -MIN + 1)) + MIN;

    label3:
    printf("=== MENU ===\n 1. 1 joueur\n 2. 2 joueurs\n");
    scanf("%d",&nombreJoueurs);

    switch (nombreJoueurs)
    {
    case 1:
    //Tant que la valeur entrée par le joueur est différente de celle généré, la boucle se répéte
    for(compteur = 0; joueur != rng; compteur++)
    {
        printf("Entre un nombre entre 1 et 100\n");
        scanf("%d",&joueur);

        /*Si la valeur entrée par le joueur est supérieur à celle généré,
        afficher "plus", si inférieur "moins" et si égal "bien joué"*/
        if(joueur < rng)
        {
            printf("Plus!\n");
        }
        if(joueur > rng)
        {
            printf("Moins!\n");
        }
        if(joueur == rng)
        {
            printf("Bien joue! Vous avez trouve le juste prix en %d coups\n\n",compteur);
            printf("Veux tu rejouer?\n 1. Oui\n 2. Non\n");
            scanf("%d",&rejouer);
            if(rejouer == 1) goto label3;
        }
    }


    case 2:
        label101:
        printf("Le joueur 1 rentre un nombre entre 1 et 100 que le joueur 2 devra deviner\n");
        scanf("%d",&joueur1);
        system("cls"); //La console sera vidé
        if(joueur1>100) goto label101;

        for(compteur = 0; joueur != joueur1; compteur++)
    {
        printf("Le joueur 2 entre un nombre entre 1 et 100\n");
        scanf("%d",&joueur);

        /*Si la valeur entrée par le joueur est supérieur à celle généré,
        afficher "plus", si inférieur "moins" et si égal "bien joué"*/
        if(joueur < joueur1)
        {
            printf("Plus!\n");
        }
        if(joueur > joueur1)
        {
            printf("Moins!\n");
        }
        if(joueur == joueur1)
        {
            printf("Bien joue! Vous avez trouve le juste prix en %d coups\n\n",compteur);
            printf("Veux tu rejouer?\n 1. Oui\n 2. Non\n");
            scanf("%d",&rejouer);
            if(rejouer == 1) goto label3;
        }

    }
    default:
        printf("Choix invalide\n\n");
        goto label3;
    }
}
