#include <iostream>
#include "Headers.h"
#include "Jeu.h"

using namespace std;
/************************************************************************************************************************************************/

enum class ChoixMenu
{
    JOUER = 'a',
    JOUER_FACILE = 'b',
    JOUER_TROIS_PARTIES = 'c',
    QUITTER = 'q',
    INCORRECT
};

void demanderProposition(int &proposition)
{
    cin >> proposition;
}

ChoixMenu demanderChoixMenu()
{
    char saisieChoix;
    cin >> saisieChoix;
    if (saisieChoix == static_cast<char>(ChoixMenu::JOUER) || saisieChoix == static_cast<char>(ChoixMenu::JOUER_FACILE) || saisieChoix == static_cast<char>(ChoixMenu::JOUER_TROIS_PARTIES) || saisieChoix == static_cast<char>(ChoixMenu::QUITTER))
    {
        return static_cast<ChoixMenu>(saisieChoix);
    }
    else
    {
        return ChoixMenu::INCORRECT;
    }
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
        cout << "partie terminée! "
             << "en " << nombreTentatives << " tentatives" << endl;
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

void afficherMenu()
{
    cout << static_cast<char>(ChoixMenu::JOUER) << ": jouer" << endl;
    // on ajoute les choix possible à l'affichage
    cout << static_cast<char>(ChoixMenu::JOUER_FACILE) << ": jouer" << endl;
    cout << static_cast<char>(ChoixMenu::JOUER_TROIS_PARTIES) << ": jouer" << endl;
    cout << static_cast<char>(ChoixMenu::QUITTER) << ": quitter" << endl;
}

int main()
{
    const auto BORNE_MIN{0};
    const auto BORNE_MAX{10'000};
    cout << "Bienvenue au juste prix" << endl;

    // on créé un booléen continuer
    bool continuer(true);
    // ici on insert la boucle while
    while (continuer)
    {

        afficherMenu();

        auto choix = demanderChoixMenu();

        switch (choix)
        {
            // on met à jour le switch aussi
        case ChoixMenu::JOUER:
            jouerPartie(3000, BORNE_MAX);
            break;
        case ChoixMenu::JOUER_FACILE:
            jouerPartie(250, BORNE_MAX_FACILE);
            break;
        case ChoixMenu::JOUER_TROIS_PARTIES:
            jouerTroisParties();
            break;
        case ChoixMenu::QUITTER:
            cout << "Au revoir " << endl;
            continuer = false;
            break;
        case ChoixMenu::INCORRECT:
        default:
            return EXIT_FAILURE;
        }
    }
    return EXIT_SUCCESS;
}

