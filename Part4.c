#include <stdio.h>
#include "headers.h"

int kidney=-1;
void Part4()
{
	AGE=35;
	dashes();
	printf("Część IV: PRZESZCZEP ORGANÓW\n");
	dashes();
	if(cry==1)
	{
		printf("Cierpisz depresję i z tego powodu nie masz małżonki,\n"
		 "ale masz szansę przysłużyć się dobru ludzkiemu i znaleźć sens życia.\n"
		 "Czy podpisujesz, że w razie śmierci oddasz nerkę?\n"
		 "1)Tak\n"
		"2)Nie\n");
		int tick=0;
		while(kidney!=2 && kidney!=1)
		{
			if(tick==1)Err();
			tick=1;
			scanf("%d",&kidney);
		}	
		printf("\n");
		if(kidney==2)
		{
			Part5();
		}
		else
			printf("Twoja dobroduszność pomaga ci znaleźć żonę! Gratulacje!\n");
	}
	else
	{
		printf("Masz dobre serce i chcesz znaleźć sens życia\n"
				"Czy podpisujesz, że w razie śmierci oddasz nerkę?\n"
		 		"1)Tak\n"
				"2)Nie\n");
		int tick=0;
		while(kidney!=2 && kidney!=1)
		{
			if(tick==1)Err();
			tick=1;
			scanf("%d",&kidney);
		}	
		printf("\n");
		if(kidney==2)
		{
			Part5();
		}
	}

	if(kidney==1)
	{
		printf("Jest sobotni poranek. Słyszysz pukanie do drzwi.\n"
		"Otwierasz. Widzis dwóch podejrzanych facetów w garniturach\n"
		"Jeden z nich pyta o Twoje zdrowie\n");
		if(Health<=4)
		{
			printf("Ty:Ostatnio wysiadają mi nerki.\n"
				"Facet: A, to przepraszamy\n. I wychodzą\n");
			Part5();
		}
		else
		{
			printf("Ty:Czuję się bardzo dobrze!\n"
				"Facet: To poprosimy o nerkę.\n"
				"Ty: Ale ja podpisałem, że w razie mojej śmierci..\n"
				"Och, niech pan się nie martwi\n"
				"NIKT, KOMU WYCIĘLIŚMY NERKĘ NIE PRZEŻYŁ! HA!\n\n"
				"Podczas gdy drugi typ wyjmuje ci wnętrzności,\n"
				"Pierwszy rozmawia z twoją żoną.\n"
				"Żona: Wie pan, on nigdy mnie nie słucha\n"
				"Mówiłam mu, że to podejrzane, ale\n"
				"on zawsze te głupoty o poświęceniu i sensie życia.." );
			dashes();
			End();
		}
	}
}