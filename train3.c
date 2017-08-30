#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<time.h>

int main()

{srand(time(NULL));
	int  rep = 0;
	int nm = ( (rand()%100)+1 );
	int i = 5;

printf("		Bienvenue dans le jeu du numéro mystère, ce nombre est compris entre 1 et 100.\n\n");
printf(" 				..........   Vous avez \%d vies   ..........\n\n\n", i);


printf("Jtebez");


do
{

printf("					Entrez un nombre entre 1 et 100.\n\n\n");
scanf("%d",&rep);

if (rep == nm)
{
printf("				Bravo vous avez trouvé le numéro mystère !!!\n\n\n");
}

else if (rep < nm)
{
printf("					     Dommage c'est PLUS !\n\n");
i--;
printf(" 				..........   Vous avez \%d vies   ..........\n\n\n", i);
}
if (rep > nm)
{
printf("					      Dommage, c'est MOINS ! \n\n\n");
i--;
printf("				 ..........   Vous avez \%d vies   ..........\n\n\n", i);
}
else if (rep == 0)
{
printf("					il était écrit un nombre entre 1 et 100 !!\n\n\n");
}
if (i == 0)
{
printf("\a\a\a\a\a\a\a\"");
return EXIT_SUCCESS;
}
}while (rep != nm);
}

