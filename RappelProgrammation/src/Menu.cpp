#include "Menu.h"

#include <iostream>

using namespace std;

enum class ChoixMenu
{
    JOUER = 'a',
    JOUER_FACILE = 'b',
    JOUER_TROIS_PARTIES = 'c',
    QUITTER = 'q',
    SCORES = 's',
    INCORRECT
};

void afficherMenu()
{
    cout << static_cast<char>(ChoixMenu::JOUER) << ": jouer" << endl;
    // on ajoute les choix possible à l'affichage
    cout << static_cast<char>(ChoixMenu::JOUER_FACILE) << ": jouer facile" << endl;
    cout << static_cast<char>(ChoixMenu::JOUER_TROIS_PARTIES) << ": jouer 3 parties" << endl;
    cout << static_cast<char>(ChoixMenu::SCORES) << ": afficher scores" << endl;
    cout << static_cast<char>(ChoixMenu::QUITTER) << ": quitter" << endl;
}

void afficherScore(){

    int scores[3] = {5, 3, 2};
    int scoresSize = sizeof(scores)/sizeof(scores[0]);
    cout << "Score : ";
        for (int i=0; i<scoresSize; i++){

            cout << scores[i] <<", ";

        }
    cout << endl;
}


ChoixMenu demanderChoixMenu()
{
    char saisieChoix;
    cin >> saisieChoix;
    if (saisieChoix == static_cast<char>(ChoixMenu::JOUER) || saisieChoix == static_cast<char>(ChoixMenu::JOUER_FACILE) || saisieChoix == static_cast<char>(ChoixMenu::JOUER_TROIS_PARTIES)|| saisieChoix == static_cast<char>(ChoixMenu::SCORES) || saisieChoix == static_cast<char>(ChoixMenu::QUITTER))
    {
        return static_cast<ChoixMenu>(saisieChoix);
    }
    else
    {
        return ChoixMenu::INCORRECT;
    }
}
