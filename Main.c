#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <conio.h>
#include <windows.h>
#include "time.h"
#include "Bibliothèque_SousProgrammes.h"
#include <stdbool.h>
#define LIGNES 10
#define COLONNES 20
#define ECHAP 0x1B


int main() {
    int choix;
    while (choix != 6)
    {
        Color(3,0);
        centrerTexte(0);
        encadrerTitre(19);
        centrerTexte(0);
        Color(3, 0);
        printf("LA REVANCHE DE SNOOPY\n");
        centrerTexte(0);
        encadrerTitre(19);
        centrerTexte(-3);
        printf("********MENU********\n\n");
        centrerTexte(3);
        printf("Voir les regles du jeu : 1\n\n");
        centrerTexte(20);
        printf("Demarrer une nouvelle partie au niveau 1 : 2\n\n");
        centrerTexte(22);
        printf("Charger une partie (pas encore disponible) : 3\n\n");
        centrerTexte(14);
        printf("Mot de passe(pas encore disponible) : 4\n\n");
        centrerTexte(-13);
        printf("Scores : 5\n\n");
        centrerTexte(-6);
        printf("Sortir du jeu : 6\n\n");
        scanf("%d", &choix);
        switch (choix) {
            case 1 :
                RegleDuJeu();
                RevenirMenuPrincipale();
                break;
            case 2 :
                afficherSNOOPY();
                RevenirMenuPrincipale();
                break;
            case 3 :
                system("cls");
                printf("Choisir un ancien ficher de sauvegarde :\n");
                Color(4,0);
                printf("\n\n\n(Appuyer sur echap pour revenir au menu principal)");
                Color(3,0);
                RevenirMenuPrincipale();
                break;
            case 4 :
                system("cls");
                printf("Entrez un mot de passe pour lancer un jeu secret\n");
                Color(4,0);
                printf("\n\n\n(Appuyer sur echap pour revenir au menu principal)");
                Color(3,0);
                RevenirMenuPrincipale();
                break;
            case 5 :
                system("cls");
                printf("Le score de votre partie en cours est de :\n");
                ScoreMenu();
                RevenirMenuPrincipale();
                break;
            case 6 :
                system("cls");
                Color(2,0);
                printf("\n Vous avez decider de quitter le jeu ! A bientot ;)");
                sleep(1);
                break;
            default:
                Color(4,0);
                system("cls");
                printf("\nL'option que vous avez choisit n'est pas valide. Reessayer\n");
                break;
        }
    }
    return 0;
}
