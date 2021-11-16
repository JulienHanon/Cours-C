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
    string MotATrouver, motTravail;
    char LettreUser;
    bool lettreDejaEssayee =true;
    MotATrouver = std::string("hexakosioihexekontahexaphobie");
    TailleMot = MotATrouver.size();
    NbLettreATrouver = TailleMot;
    motTravail = MotATrouver;

    cout << MotATrouver<<endl;
    cout <<TailleMot<<endl;

    //do{
        cout <<"Il vous reste "<<TailleMot<<" Lettres a trouver"<<endl;
        cout <<"Saisir une lettre :";
        cin >> LettreUser;
        cout <<LettreUser<<endl;

        for(int i=0;i<=25;i++)	{
			if(lettresAEssayer[i] == LettreUser){

                    lettreDejaEssayee = false;
                    lettresAEssayer[i] = '_';
                    cout<<lettresAEssayer;
			}

		}
		if(lettreDejaEssayee == false){
            bool lettreEstTrouver = false;
            for(int i = 0; i<TailleMot; i++){
                if(MotATrouver[i] == LettreUser){
                    lettreEstTrouver = true;
                    NbLettreATrouver--;
                }
            }
        if (lettreEstTrouver == false){
                nbErreur++;
        }


		}



//		if (!LettreUser){
//            bool lettreEstTrouver=false;
//            for(int i = 0; i<TailleMot;i++){
//                if (MotATrouver[i]== LettreUser){
//                    lettreEstTrouver = true;
//                    motTravail[i*2] = MotATrouver[i];
//                    TailleMot--;
//                }
//            }
//            if(lettreEstTrouver){
//                nbErreur++;
//            }
//            for(int j=0; j<=25;j++)	{
//				if(lettresAEssayer[j] == LettreUser)
//					lettresAEssayer[j] = '_';
//			}
		}

    //}







//}


