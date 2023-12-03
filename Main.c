int main() {
    int choix;
    char matrice[LIGNES][COLONNES];
    int tempsRestant, PositionInitX, PositionInitY, positionBalleX, positionBalleY, ViesRestantes, scorePartie;
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
        centrerTexte(0);
        printf("Charger une partie : 3\n\n");
        centrerTexte(0);
        printf("Mot de passe secret : 4\n\n");
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
                InformationsPartie partie;
                char nomFichier[50];
                printf("Entrez le nom du fichier de sauvegarde : ");
                scanf("%s", nomFichier);
                printf("Nom du fichier : %s\n", nomFichier);
                chargerPartie(&partie, nomFichier);
                printf("Chargement termine.\n");
                printf("Matrice[0][0] : %c\n", partie.matrice[0][0]);
                printf("Temps restant : %d\n", partie.tempsRestant);
                break;
            case 4 :
                system("cls");
                JouerNiveauMdp();
                RevenirMenuPrincipale();
                break;
            case 5 :
                system("cls");
                printf("Le score de votre partie en cours est de :\n");
                ScoreMenu();
                Color(4,0);
                printf("\n(Appuyer sur echap pour revenir au Menu Principal)\n");
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
