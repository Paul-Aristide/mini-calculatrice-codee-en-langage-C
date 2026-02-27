/* Ici nous definissons une fonction ( ou du moins une procedure ) qui permet de simplifier une fraction
   Pour ce fait nous allons utiliser la fonction gcd qui calcule le PGCD de deux valeurs
    et pour les simplifier nous allons diviser chaque valeur par leur PGCD */
# include <stdio.h>
# include "CalPGCD.c"
# include "DeclStruct.c"
void simp ( struct frac f )
{
    int ValFin1, ValFin2;
    /* imposons b positive */
    if ( f.denom < 0)
    {
        printf("\nVeuillez entrer une valeur positive au denominateur\n");
    }
    else
    {
        if ( f.denom == 0)         /* Le denominateur d'une fraction doit toujours etre different de 0*/
        {
            printf("\nImpossible d'effectuer l'operation !!!");
            printf("\nLe denomiteur doit etre different de zero\n");
        }
        else
        {           /* Si le PGCD de deux valeurs est egal 1 ==> le numerateur etle denominateur sont premiers etre eux d'ou irreductibles
                        Mais si le PGCD est different de 1 alors le numerateur et le denominateur seront simplifies par la valeur du PGCD */
            if ( gcd( f.num, f.denom ) != 1 )
            {
                ValFin1 = f.num / gcd( f.num , f.denom );
                ValFin2 = f.denom / gcd( f.num , f.denom );
                if ( ValFin2 == 1)
                    {
                        printf("%d\n", ValFin1 );
                    }
                else
                    {
                        printf("%d/%d\n", ValFin1 , ValFin2 );
                    }
            }
            else
            {
                if ( f.denom == 1)     /* Remarque : toute valeur entiere a peut aussi s'ecrire comme suite a/1 = a */
                {
                    printf("%d\n", f.num );
                }
                else
                {
                    printf("%d/%d\n", f.num , f.denom );
                }

            }
        }
    }
}
/* Fin de notre programme*/
