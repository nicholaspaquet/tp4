// Programme le plus simple possible et plus court possible
// Sans boucle
// Aller lire 20 nombres
// Modifier les 20 nombres
// Trier 20 nombres
// Afficher 20 nombres
// ptr lecture et ptr ecriture
// https : // openclassrooms.com/fr/courses/7137751-programmez-en-oriente-objet-avec-c/7532761-utilisez-les-iterateurs-sur-les-flux

#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int main()
{
    vector<int> tab(5);

    // https: // cs.smu.ca/~porter/csc/ref/stl/programs/iterators/stream_iterators.cpp2html
    // copy(istream_iterator<int>(cin), istream_iterator<int>(), tab.begin());

    cout << "Entrez des nombres : " << endl;
    copy_n(istream_iterator<int>(cin), tab.size(), tab.begin());
    cout << "Affichage de la liste :" << endl;
    copy(tab.begin(), tab.end(), ostream_iterator<int>(cout, "\n"));
}