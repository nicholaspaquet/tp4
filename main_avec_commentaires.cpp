/**************************************************************************************************
 *                                                                                                *
 *       Titre :                   Orienté objet - Travail pratique 4                             *
 *       Auteur :                  Nicholas Paquet                                                *
 *       Date de création :        05 décembre 2022                                               *
 *       Dernière modification :   11 décembre 2022                                               *
 *       Date de remise :          12 décembre 2022                                               *
 *       But :                     Le but de ce travail pratique est d'utiliser des algorithmes   *
 *                                 de la STL avec des itérateurs et des conteneurs.               *
 *                                                                                                *
 **************************************************************************************************/

#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include "tp4.h"

using namespace std;

int main()
{
    vector<int> nombres;
    vector<int>::iterator it;
    Inverser inv;
    DivisiblePar5 div;

    cout << "Entrez des nombres (ctrl + d pour mettre fin a la saisi): " << endl;
    // copy_n(istream_iterator<int>(cin), nombres.size(), nombres.begin());
    copy(istream_iterator<int>(cin), istream_iterator<int>(), back_inserter(nombres));

    // Copier les nombres divisibles par 5, puis les placer dans leur propre conteneur
    vector<int> divisible_par_5(nombres.size());
    it = copy_if(nombres.begin(), nombres.end(), divisible_par_5.begin(), div);
    // Resize du vector pour éliminer les éléments indésirables
    divisible_par_5.resize(distance(divisible_par_5.begin(), it));
    // Utilisation de l'algo distance qui calcule la distance entre le début du vector et
    // un itérateur.

    // Inversion des nombres entrés
    vector<int> inverses(nombres.size());
    transform(nombres.begin(), nombres.end(), inverses.begin(), inv);

    // Triage de la liste initiale
    sort(nombres.begin(), nombres.end());

    // Affichage des résultats
    cout << "\nAffichage de la liste initiale triee :\n\n";
    copy(nombres.begin(), nombres.end(), ostream_iterator<int>(cout, "\n"));
    cout << endl;
    cout << "Affichage de la liste initiale inversee :\n\n";
    copy(inverses.begin(), inverses.end(), ostream_iterator<int>(cout, "\n"));
    cout << endl;
    cout << "Affichage des nombres divisibles par 5 :\n\n";
    copy(divisible_par_5.begin(), divisible_par_5.end(), ostream_iterator<int>(cout, "\n"));
    cout << endl;
}
// Références
// référence copy_if https://cplusplus.com/reference/algorithm/copy_if/?kw=copy_if
// https://cs.smu.ca/~porter/csc/ref/stl/programs/iterators/stream_iterators.cpp2html
// https://users.cs.northwestern.edu/~riesbeck/programming/c++/stl-iterators.html
// https : // openclassrooms.com/fr/courses/7137751-programmez-en-oriente-objet-avec-c/7532761-utilisez-les-iterateurs-sur-les-flux
