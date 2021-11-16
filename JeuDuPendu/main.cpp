#include <iostream>
#include <chrono>
#include <array>
#include <string>
#include "Constantes.h"


using namespace std;

int main()
{

    cout << "Bienvenue dans le jeu du pendu !"<<endl;


    int TailleMot(0), nbErreur(0);
    string MotATrouver;
    char lettreAEssayer;
    MotATrouver = std::string("hexakosioihexekontahexaphobie");
    TailleMot = MotATrouver.size();


    cout <<"Il vous reste "<<TailleMot<<" Lettres a trouver"<<endl;
    cout <<"Saisir une lettre :";
    cin >> lettreAEssayer;










}


