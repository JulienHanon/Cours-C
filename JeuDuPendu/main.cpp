#include <iostream>
#include <chrono>
#include <array>
#include <string>
#include "Constantes.h"



using namespace std;

int main()
{
    cout << "Bienvenue dans le jeu du pendu !"<<endl;
    using Duree = std::chrono::duration<double>;
    int TailleMot(0), nbErreur(0), NbLettreATrouver(0);
    string MotATrouver, motCacher;
    char LettreUser; //va stocker le caractere qu'on va proposer
    bool Partie = false; // si true alors fin de la partie
    MotATrouver = std::string("OUI"); // mot a trouver (sera changer par la suite pour avoir un mot aléatoire
    TailleMot = MotATrouver.size(); //stock la taille du mot a trouver
    NbLettreATrouver = TailleMot; // Nombre de lettres qu'il manque pour gagner
    motCacher = MotATrouver;
    for(int i=0; i<(TailleMot); i++)	{ // va remplacer les caractere du mot a deviner ____
		motCacher[i] = '_';

	}
	auto debutPartie = std::chrono::system_clock::now();
    do{
        bool lettreEstTrouver = false; //si la lettre est trouver alors true
        bool lettreDejaEssayee =true; //si la lettre a deja ete proposer alors true

        cout<<"nb erreur :"<<nbErreur<<endl;
        cout <<"Mot a chercher :"<<motCacher<<endl;
        cout <<"Il vous reste "<<NbLettreATrouver<<" Lettres a trouver"<<endl;
        cout <<"Saisir une lettre :";
        cin >> LettreUser;

        for(int i=0;i<=25;i++)	{ //va parcourir la liste de des caractere possible et remplacer cette derniere par "_"
            if(lettresAEssayer[i] == LettreUser){

                lettreDejaEssayee = false;
                lettresAEssayer[i] = '_';
            }

        }

        if(lettreDejaEssayee == false){ //Si la lettre n'est pas deja essayer alors va parcourir le mot a trouver pour remplacer les _ par la bonne lettre et va reduire le nombre de lettre par le nombre de lettre remplacer
            for(int i = 0; i<TailleMot; i++){ //
                if(MotATrouver[i] == LettreUser){
                    lettreEstTrouver = true;
                    motCacher[i] = MotATrouver[i];
                    NbLettreATrouver--;
                }
            }
                if (lettreEstTrouver == false){ // si la lettre n'est pas trouver alors rajouter 1 erreur
                        nbErreur++;

                }

        }
        if(nbErreur == 6){          // si le nombre d'erreur atteint 6 alors partie se termine
            cout<<"C'est perdu"<<endl;
            cout<<"La reponse etait :"<<MotATrouver<<"."<<endl;
            Partie = true;
        }
        if(NbLettreATrouver == 0){ // si le mot est trouver alors la partie se termine
            cout<<"Vous avez trouver :"<<MotATrouver<<"."<<endl;
            cout<<"C'est gagner !"<<endl;
            Partie = true;
        }
        else  if (lettreDejaEssayee==true){ //si la lettre rentrer a deja été faite alors renvoie le message suivant
            cout << "Vous avez deja essayer cette lettre !"<<endl;
        }
    }while(Partie == false);
    auto finPartie = std::chrono::system_clock::now();
    auto duree = std::chrono::duration_cast<Duree>(finPartie - debutPartie);
    cout << "Durée de la partie : " << duree.count() << "s" << endl; // affiche la durée de la partie

    cout<<"Partie terminer";

}









