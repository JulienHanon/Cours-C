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
    MotATrouver = std::string("TEST");
    TailleMot = MotATrouver.size();
    NbLettreATrouver = TailleMot;
    motCacher = MotATrouver;
    for(int i=0; i<(TailleMot*2); i=i+2)	{
		motCacher[i] = '_';
		motCacher[i+1] = '_';
	}

    cout <<"Mot a chercher :"<<motCacher<<endl;
    cout <<"Il vous reste "<<NbLettreATrouver<<" Lettres a trouver"<<endl;
    cout <<"Saisir une lettre :";
    cin >> LettreUser;
    do{
        for(int i=0;i<=25;i++)	{ // parcours la tableau des lettres utilisable
            if(lettresAEssayer[i] == LettreUser){

                lettreDejaEssayee = false;
                lettresAEssayer[i] = '_';
            }

        }
        if(lettreDejaEssayee == false){
            for(int i = 0; i<TailleMot; i++){ //
                if(MotATrouver[i] == LettreUser){
                    lettreEstTrouver = true;
                    motCacher[i*2] = MotATrouver[i];
                    NbLettreATrouver--; //reduit de le nombre de lettre a trouver
                }
            }
                if (lettreEstTrouver == false){
                        cout<<"nb erreur +1";
                        nbErreur++;
                }

//                if (NbLettreATrouver == 0){
//                    cout<<"C'est gagner";
//                }


        }
        else{
            cout << "Vous avez deja essaye cette lettre !";
        }
    }while(nbErreur !=6);
    cout<<"C'est perdu !";
    cout<<"La reponse etait :"<<MotATrouver<<"."<<endl;
}









