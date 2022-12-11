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

// Définitions de deux foncteurs utilisés dans le cadre du travail pratique 4

class Inverser
{
public:
    int operator()(int valeur)
    {
        int inverse = 0, reste;

        while (valeur != 0)
        {
            reste = valeur % 10;
            inverse = inverse * 10 + reste;
            valeur /= 10;
        }
        return inverse;
    }
};

class DivisiblePar5
{
public:
    bool operator()(int valeur)
    {
        if (valeur % 5 == 0)
            return true;
        else
            return false;
    }
};