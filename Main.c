#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <conio.h>
#include <windows.h>
#include "time.h"
#include "Bibliothèque_SousProgrammes.h"

int main()
{
    char matrice[10][20];

    while (1)
    {

        system("cls");

        creationMatrice(matrice);

        Chronometre();

        usleep(100000);


    }

    return 0;

}
