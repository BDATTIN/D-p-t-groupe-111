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


int main()
{

    _beginthread(afficherHorloge, 0, NULL);
    afficherSNOOPY();

    return 0;
}
