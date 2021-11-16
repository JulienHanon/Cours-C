#include "Jeu.h"
#include "Constante.h"

#include <iostream>

using namespace std;

inline demanderProposition(int &proposition){

    cin >> proposition;

}

void jouerPartie(int leJustePrix, int max)
{
    auto proposition{0};
    auto nombreTentatives{0};
    do
    {
        cout << "Proposition? ";
        demanderProposition(proposition);

        cout << proposition;

        if (proposition >= BORNE_MIN && proposition < max)
        {
            nombreTentatives++;
            if (proposition == leJustePrix)
            {
                cout << "Bravo! " << endl;
            }
            else if (proposition > leJustePrix)
            {
                cout << "C'est moins ! " << endl;
            }
            else
            {
                cout << "C'est plus ! " << endl;
            }
        }
    } while (proposition != leJustePrix && proposition >= BORNE_MIN);

    if (proposition == leJustePrix)
    {
        int scores[3] = {5, 3, 2};
        int scoresSize = sizeof(scores)/sizeof(scores[0]);
        cout << "partie terminée! "
             << "en " << nombreTentatives << " tentatives" <<endl
             << "Score : ";
              for (int i=0; i<scoresSize; i++){

                    cout << scores[i] <<", ";

              }
              cout << endl;
    }
    else
    {
        cout << "partie abandonnée ";
    }
}

void jouerTroisParties()
{
    cout << "C'est parti ! " << endl;
    for (auto aDeviner : {208, 42, 1984})
    {
        jouerPartie(aDeviner, BORNE_MAX);
    }
}



