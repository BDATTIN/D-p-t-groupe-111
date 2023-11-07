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
