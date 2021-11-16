#include "Jeu.h"
#include <iostream>
#include <chrono>
#include <array>
#include <string>
#include "Constantes.h"

void VerifierLettre(){

for(int i=0;i<=25;i++)	{
    if(lettresAEssayer[i] == LettreUser){
        lettreDejaEssayee = false;
        lettresAEssayer[i] = '_';
    }
}

}

