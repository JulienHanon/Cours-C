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
    bool lettreEstTrouver = false;
    bool Partie = false;
    MotATrouver = std::string("OUI");
    TailleMot = MotATrouver.size();
    NbLettreATrouver = TailleMot;
    motCacher = MotATrouver;
    for(int i=0; i<(TailleMot); i++)	{
		motCacher[i] = '_';

	}
    do{
        bool lettreDejaEssayee =true;
        cout <<"Mot a chercher :"<<motCacher<<endl;
        cout <<"Il vous reste "<<NbLettreATrouver<<" Lettres a trouver"<<endl;
        cout <<"Saisir une lettre :";
        cin >> LettreUser;
        for(int i=0;i<=25;i++)	{
            if(lettresAEssayer[i] == LettreUser){

                lettreDejaEssayee = false;
                lettresAEssayer[i] = '_';
                cout<<lettreDejaEssayee<<endl;
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
                        cout<<"nb erreur :"<<endl;
                        nbErreur++;
                        cout<<nbErreur<<endl;
                }

        }
        if(nbErreur == 6){
            cout<<"C'est perdu"<<endl;
            cout<<"La reponse etait :"<<MotATrouver<<"."<<endl;
            Partie = true;
        }
        if(NbLettreATrouver == 0){
            cout<<"C'est gagner !"<<endl;
            Partie = true;
        }
        else  if (lettreDejaEssayee==true){
            cout << "Vous avez deja essayer cette lettre !!!!!! !"<<endl;
        }
    }while(Partie = true);

    cout<<"Partie terminer";

}









