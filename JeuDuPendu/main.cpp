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
    char LettreUser;
    bool Partie = false;
    MotATrouver = std::string("OUI");
    TailleMot = MotATrouver.size();
    NbLettreATrouver = TailleMot;
    motCacher = MotATrouver;
    for(int i=0; i<(TailleMot); i++)	{
		motCacher[i] = '_';

	}
	auto debutPartie = std::chrono::system_clock::now();
    do{
        bool lettreEstTrouver = false;
        bool lettreDejaEssayee =true;

        cout<<"nb erreur :"<<nbErreur<<endl;
        cout <<"Mot a chercher :"<<motCacher<<endl;
        cout <<"Il vous reste "<<NbLettreATrouver<<" Lettres a trouver"<<endl;
        cout <<"Saisir une lettre :";
        cin >> LettreUser;

        for(int i=0;i<=25;i++)	{
            if(lettresAEssayer[i] == LettreUser){

                lettreDejaEssayee = false;
                lettresAEssayer[i] = '_';
            }

        }

        if(lettreDejaEssayee == false){
            for(int i = 0; i<TailleMot; i++){ //
                if(MotATrouver[i] == LettreUser){
                    lettreEstTrouver = true;
                    motCacher[i] = MotATrouver[i];
                    NbLettreATrouver--;
                }
            }
                if (lettreEstTrouver == false){
                        nbErreur++;

                }

        }
        if(nbErreur == 6){
            cout<<"C'est perdu"<<endl;
            cout<<"La reponse etait :"<<MotATrouver<<"."<<endl;
            Partie = true;
        }
        if(NbLettreATrouver == 0){
            cout<<"Vous avez trouver :"<<MotATrouver<<"."<<endl;
            cout<<"C'est gagner !"<<endl;
            Partie = true;
        }
        else  if (lettreDejaEssayee==true){
            cout << "Vous avez deja essayer cette lettre !"<<endl;
        }
    }while(Partie == false);
    auto finPartie = std::chrono::system_clock::now();
    auto duree = std::chrono::duration_cast<Duree>(finPartie - debutPartie);
    cout << "Dur�e de la partie : " << duree.count() << "s" << endl;

    cout<<"Partie terminer";

}









