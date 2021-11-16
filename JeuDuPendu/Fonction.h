#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;

string LireFichier()
{
    ifstream FichierDictionnaire;
    vector<string> Dictionnaire(0);
    int i(0);
    string MotATrouver;

    FichierDictionnaire.open("D:/Florian Vande Mert/Documents/Projets personnels/Pendu/Pendu/Dictionnaire.txt", ios::in);
    if (FichierDictionnaire)
    {
        for (i = 0; !FichierDictionnaire.eof(); i++)
        {
            Dictionnaire.push_back("");
            getline(FichierDictionnaire, Dictionnaire[i]);
        }
        MotATrouver = Dictionnaire[rand() % Dictionnaire.size()]; //Insère une case du tableau "Dictionnaire" aléatoirement dans la variable "MotATrouver"
        return MotATrouver;
    }
    else
    {
        cout << "Impossible de trouver le fichier \"Dictionnaire.txt\"" << endl;
        system("pause");
        exit(-1);
    }
}
