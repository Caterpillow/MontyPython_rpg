#include <stdio.h>
#include "headers.h"

int open=-1;
void Part5()
{
	AGE=70;
	dashes();
	printf("Część V: ŚMIERĆ\n");
	dashes();
	printf("Jesteś w domu na kolacji z gośćmi. Słyszysz mocne pukanie do drzwi, jakby ktoś uderzał kosą.\n"
		"Otwierasz?\n"
		"1)Tak\n"
		"2)Nie\n");
		int tick=0;
		while(open!=2 && open!=1)
		{
			if(tick==1)Err();
			tick=1;
			scanf("%d",&open);
		}	
		printf("\n");
		if(open==2)
		{
			End();
		}
		else
		{
			printf("Widzisz czarną postać w kapturze z kosą\n"
				"Ty:Pan od żywopłotu?\n"
				"Postać:Jestem Śmiercią. Jestem Nieubłaganym Żniwiarzem.\n"
				"Zapraszasz ją do środka\n");
			dashes();
			printf("Moi drodzy, to pan Śmierć. Pan jest żniwiarzem.\n"
				"Chyba trudno pracować panu przy tej angielskiej pogodzie\n"
				"Śmiech zebranych\n"
				"Śmierć: Nie rozumiecie!\n"
				"Wszyscy jesteście martwi!\n\n");
			if(goodbye!=-1)
			{
				End();
				printf("TY WIDZIAŁEŚ JUŻ ŚMIERĆ, BYŁEŚ NA POLU WALKI\n"
					"Grzecznie wypraszasz tego przebierańca i kończycie kolację.\n"
					"Niestety, wszyscy zatruwacie się łososiem i umieracie.\n");
			}
			else
			{
				printf("Twoja żona: Przychodzi pan tutaj, psuje nam wieczór\n"
				"i jeszcze mówi, że jesteśmy...\n"
				"Śmierć: Milczeć! Pójdziecie ze mną\n"
				"I rzeczywiście wstajecie i wychodzicie za Śmiercią.\n"
				"Śmierć wprowadza Was w mgłę, a następnie pojawiacie się w teatrze.\n"
				"Dobry wieczór, zebrani. Oto sens życia:\n\n"
				"Bądź miły dla ludzi.\n"
				"Unikaj tłustych potraw.\n"
				"Czytaj książki, chadzaj na spacery\n"
				"I probuj żyć w zgodzie z ludźmi innych wyznań i narodowości\n\n"
				"GRATULACJE! WYGRAŁEŚ! POZNAŁEŚ SENS ŻYCIA!\n"
				"Teraz możesz skończyć grać i się poważnie zastanowić na swoim życiem.\n\n"
				"Do widzenia!\n");
				dashes();
			}
		}
}