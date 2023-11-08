#include <stdio.h>


int main() {
    int choix;
    while(choix!=6){
        printf("1. Regles du jeu \n2. Lancer un nouveau Jeu à partir du niveau 1\n3. Charger une partie\n4. Mot de passe\n5. Scores\n6. Quitter\n");
        scanf("%d", &choix);

        switch (choix) {
            case 1 :
                printf("1\n");
                break;
            case 2 :
                printf("1\n");
                break;
            case 3 :
                printf("1\n");
                break;
            case 4 :
                printf("1\n");
                break;
            case 5 :
                printf("1\n");
                break;
            case 6 :
                printf("1\n");
                return 0;
        }
    }

    return 0;
}

#include <stdio.h>
#include "Bibliothèques_programmes.h"
#include <unistd.h>
#include <time.h>
#define LongueurMatrice 5
#define LargeurMatrice 5


int main() {
    int choix;
    while (choix != 6) {
        printf("1. Regles du jeu \n2. Lancer un nouveau Jeu a partir du niveau 1\n3. Charger une partie\n4. Mot de passe\n5. Scores\n6. Quitter\n");
        scanf("%d", &choix);

        switch (choix) {
            case 1 :
                printf("1\n");
                break;
            case 2 :
                printf("1\n");
                break;
            case 3 :
                printf("1\n");
                break;
            case 4 :
                printf("1\n");
                break;
            case 5 :
                printf("1\n");
                break;
            case 6 :
                printf("1\n");
                return 0;
        }

        


            int secondes = 120;
            time_t startTime = time(NULL);

            while (secondes > 0) {
                // Calcul du temps écoulé
                time_t currentTime = time(NULL);
                int tempsEcoule = difftime(currentTime, startTime);

                printf("Temps restant : %d secondes\n", secondes - tempsEcoule);

                sleep(1);  // Pause d'une seconde
            }

            printf("Temps écoulé !\n");
        }

    }
