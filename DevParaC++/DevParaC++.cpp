// DevParaC++.cpp : définit le point d'entrée de l'application.
//

#include "DevParaC++.h"

#define NAMEFILE "config.ini"

using namespace std;

int main()
{
	Cconfiguration config;
    string varTempo1, varTempo2;
    int varMenu = 0;
    

    if (!config.charger(NAMEFILE))
    {
        if (!config.creerFichierIni(NAMEFILE))
        {
            return 0;
        }
        config.charger(NAMEFILE);
    }
    

    do 
    {
        cout << "1.Ajouter un parametre\n2.Lire un parametre\n3.supprimer un parametre\n15.Quitter\n#";
        cin >> varMenu;
        cout << endl;
        switch (varMenu)
        {
        case 1:
            cout << "Quelle parametre voulez ajouter ? : ";
            cin >> varTempo1;
            cout << endl;
            cout << "Quelle est sa valeur ? : ";
            cin >> varTempo2;
            cout << endl;
            config.definirParametre(varTempo1, varTempo2);
            config.sauvegarder(NAMEFILE);
            varTempo1 = "";
            varTempo2 = "";
            break;
        case 2 :
            cout << "Quelle cles voulez lire ? : ";
            cin >> varTempo1;
            cout << endl;
            varTempo2 = config.obtenirParametre(varTempo1);
            cout << varTempo2 << endl;
            break;
        case 15 :
            cout << "Quit" << endl;
            break;
        default:
            break;
        }
    } while (varMenu != 15);

	return 0;
}
