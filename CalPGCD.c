/* Le PGCD est une fonction qui permet de determiner le plus grand entier qui divise au moins deux valeurs.
Ici nous allons voir le cas de deux valeurs en utilisant la formule d'Euclide. Cette foncton ramene une valeur entiere positive*/
# include <stdio.h>
int gcd( int a, int b )
{
    if ( b == 0 )
    {                       /* La valeur b = 0 est la condition d'arret da la fonction recursive gcd */
        return ( a );
    }
    else
    {          /* Nous allons faire dependre le signe de la fonction gcd a travers a.
                  En ce qui concerne la valeur de b nous allons l'imposer dans le programme principal*/
        if ( a < 0 )
        {
            return ( gcd ( b , -a%b ));
        }
        else
        {
            return ( gcd ( b , a%b ));
        }
    }
}
/* Ainsi prend fin fonction recursive gcd */
