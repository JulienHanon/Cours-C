#include <iostream>
#include <chrono>
#include <array>
#include <string>
#include "Constantes.h"



using namespace std;

int main()
{

    cout << "Bienvenue dans le jeu du pendu !"<<endl;

    int TailleMot(0), nbErreur(0), NbLettreATrouver(0);
    string MotATrouver, motCacher;
    char LettreUser;
    bool lettreDejaEssayee =true;
    bool lettreEstTrouver = false;
    MotATrouver = std::string("hexakosioihexekontahexaphobie");
    TailleMot = MotATrouver.size();
    NbLettreATrouver = TailleMot;
    motCacher = MotATrouver;
    for(int cpt=0; cpt<(TailleMot*2); cpt=cpt+2)	{
		motCacher[cpt] = '_';
		motCacher[cpt+1] = '_';
	}

    cout << MotATrouver<<endl;
    cout <<TailleMot<<endl;


        cout <<"Mot a chercher :"<<motCacher<<endl;
        cout <<"Il vous reste "<<TailleMot<<" Lettres a trouver"<<endl;
        cout <<"Saisir une lettre :";
        cin >> LettreUser;
        cout <<LettreUser<<endl;

        for(int i=0;i<=25;i++)	{ // parcours la tableau des lettres utilisable
			if(lettresAEssayer[i] == LettreUser){

                lettreDejaEssayee = false;
                lettresAEssayer[i] = '_';
                //cout<<lettresAEssayer;
			}


		}
		if(lettreDejaEssayee == false){ //si la lettre n'est pas deja essayer
            for(int i = 0; i<TailleMot; i++){ //
                if(MotATrouver[i] == LettreUser){
                    lettreEstTrouver = true;
                    NbLettreATrouver--; //reduit de le nombre de lettre a trouver
                }
            }
            if (lettreEstTrouver == false){
                    nbErreur++;
            }
            if (nbErreur == 6 ){
                cout<<"C'est perdu !";
                cout<<"La reponse etait :"<<MotATrouver<<"."<<endl;
            }
            if (NbLettreATrouver == 0){
                cout<<"C'est gagner";
            }


		}
		else{
            cout << "Vous avez deja essaye cette lettre !";
		}

}








