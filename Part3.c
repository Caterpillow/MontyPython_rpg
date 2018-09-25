#include <stdio.h>
#include "headers.h"
int p1=-1;
int goodbye=-1;

void Part3_v1()
{
	AGE=24;
	printf("Nagle huk wybudza Cię ze wspominania sytuacji z kormoranem\n"
		"Jesteś na wojnie!\n"
		"Tutaj sytuacje są o wiele poważniejsze!\n"
		"Jesteś w centrum bitwy!\n"
		"Czy postanawiasz z innymi oficerami pożegnać się z waszym dowódcą\n"
		"na wypadek, gdybyscie się już nie zobaczyli?\n"
		"1)Tak\n"
		"2)Nie\n");
		int tick=0;
		while(goodbye!=2 && goodbye!=1)
		{
			if(tick==1)Err();
			tick=1;
			scanf("%d",&goodbye);
		}	
		printf("\n");
		if(goodbye==2)
		{
			Spirit-=1;
		}
		else
		{
			printf("Szefie, jeśli się już nie spotkamy\n"
				"To był zaszczyt walczyć u pana boku\n"
				"Dowódca: To nie czas ani miejsce na mowy pożegnalne!\n\n"
				"Dajecie mu prezent?\n"
				"1)Tak\n"
				"2)Nie\n");
			int tick=0;
			while(p1!=2 && p1!=1)
			{
				if(tick==1)Err();
				tick=1;
				scanf("%d",&p1);
			}	
			printf("\n");
			if(p1==2)
			{
				Spirit-=1;
			}
			else
			{
				printf("Pośród wybuchów bomb i walk przynosicie mu z okopów wielki ścienny zegar!\n"
					"To było wyjatkowo głupie.\n"
					"Zostajesz przez to postrzelony\n"
					"Za to nauczyłeś się, ile warte jest ludzkie życie.\n");
				dashes();
				Health-=4;
			}
		}
	int e = IfEnd(Health,Spirit);
	if(e==1)
		End();
	else
	{
		Part3_v2();
	}
}
void Part3_v2()
{
	AGE=24;
	printf("Znajdujesz sie w namiocie wojskowym.\n"
	 "Wyświetlają film instruktarzowy, jak nie zachowywać się w samym środku walki\n"
	 "Dowódca: Ale wojna to nie tylko zabawa. Wystarczy, zatrzymaj film.\n"
	 "Przyjemnie jest nabijać się z armii,\n"
	 "lecz biorąc pod uwagę sens życia\n"
	 "wszystko sprowadza się do różnicy światopogladów\n"
	 "Bez środków do obrony przed innymi swoich poglądów na życie\n"
	 "przed innymi, prawdopodobnie bardziej agresywnymi ideologiami,\n"
	 "ci najrozsądniejsi,\n"
	 "o umiarkowanych poglądach, mogliby po prostu wyginąć.\n"
	 "Dlatego włanie potrzebna jest armia.\n"
	 "I niech mnie piorun strzeli, jeśli jest innaczej!!\n\n"
	 "Wychodzisz z innymi żołnierzami na plac do maszerowania..\n"
	 "i widzisz, jak z nieba wysuwa się wielka dłoń i dowódcę strzela piorun!\n\n"
	 "Zastępca dowódcy: Gapicie się, jakbyscie nigdy boskiej ręki nie widzieli!!\n"
	 "Dziś pomaszerujemy wzdłuż i wszerz bez celu po placu!\n"
	 "Chyba, że, łajdaki, macie coś lepszego do roboty!!\n\n"
	 "Podnosisz rękę?\n"
	 "1)Tak\n"
	 "2)Nie\n");
	int hand=-1;
	int tick=0;
	while(hand!=2 && hand!=1)
	{
		if(tick==1)Err();
		tick=1;
		scanf("%d",&hand);
	}	
	printf("\n");
	if(hand==2)
	{
		Spirit-=2;
		printf("Ubywa Ci odwagi do życia.\n");
	}
	else
	{
		printf("To niby uważasz, że masz coś lepszego do roboty!!!\n"
			"Ty: Chciałbym posiedzieć w ogródku,\n"
			"poczytać książkę...\n"
			"Dowódca: Wiec idź! Tak, wynocha stąd!!\n"
			"Czy ktoś jeszcze chciałby porobić coś innego niż maszerować wzdłuż i wszerz tego placu..\n");
	}
	int e = IfEnd(Health,Spirit);
	if(e==1)
		End();
	else
	{
		Part4();
	}
}
