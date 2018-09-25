#include <stdio.h>
#include "headers.h"

void f1()
{
	printf("Widzisz na sobie wzrok dyrektora\n");
	if(Spirit<=4)
	{
		printf("Wyrywa się z Ciebie głos: Tak, ja to zrobiłem!\n");
		if(Spirit<=3)
		{
			printf("Jak mogłeś! Takim zachowaniem nigdy nic nie osiągniesz!\n"
				"...nic nie osiągniesz\n"
				"...nic nie osiągniesz\n"
				"...nic nie osiągniesz\n"
				"...nic nie osiągniesz\n");
			Spirit-=2;
		}
		else
		{
			Spirit+=1;
			printf("Och, na pewno kryjesz kolegów.\nDobry z Cibie dzieciak.\nDużo w życiu osiągniesz.\n");
		}
	}
	else
	{
		printf("To nie moja sprawka.\n");
	}
	int e = IfEnd(Health,Spirit);
	if(e==1)
		End();
	else
	{
		dashes();
		printf("Część III: WALKA\n");
		dashes();
		Part3_v2();
	}
}

void f2()
{
	if(experiment==0)
	{
		printf("Siedzisz w szkolnej ławce. Obok Ciebie Twój przyjaciel Tomek.\n"
			"Budzisz go?\n"
			"1)Tak\n"
			"2)Nie\n");
			int wake=-1;
		int tick=0;
		while(wake!=2 && wake!=1)
		{
			if(tick==1)Err();
			tick=1;
			scanf("%d",&wake);
		}	
		printf("\n");
		if(wake==1)
		{
			printf("Tomek: Oszalałeś? Przez całą noc nacierałem tego sztucznego kormorana olejem!\n"
				"Złapali Tomka. To przez Ciebie. Zapamiętasz to do końca życia.\n");
		}
		else
		{
			printf("Wiesz, że to Tomek jest winny. Zamiast niego złapali Ciebie. Gratulacje.\n");
			Spirit-=1;
		}
		int e = IfEnd(Health,Spirit);
		if(e==1)
			End();
		else
		{
			dashes();
			printf("Część III: WALKA\n");
			dashes();
			Part3_v1();
		}
	}
	else
	{
		f1();
	}
}

void Part2()
{
	AGE=7;
	dashes();
	printf("Część II: NAUKA I DORASTANIE\n");
	dashes();
	printf("Ze snu wyrywa Cię głos dyrektora.\n"
			"1)Rozglądam się\n"
			"2)Nie rozglądam się\n");
	int look=-1;
	int tick=0;
	while(look!=2 && look!=1)
	{
		if(tick==1)Err();
		tick=1;
		scanf("%d",&look);
	}	
	printf("\n");
	printf("Szukamy winnych! Jakieś łobuzy były widziane, jak nacierały szkolnego kormorana olejkiem lnianym.\n"
		"Niektórzy z was uważają może, że kormoran nie odgrywa ważnej roli w życiu szkoły\n"
		 "Pragnę wam jednak przypomnieć, że otrzymaliśmy go od władz miasta\n"
		  "dla upamiętnienia wszystkich tych, którzy tak dzielnie oddali życie\n"
		    "we wszystkich bezsensownych wojnach, jakie zgotowała sobie ludzkość\n"
		     "Tak więc od tej chwili do kormorana nie wolno się zbliżać!\n");
	if(look==1)
	{
		if(Spirit<=5)
		{
			f1();
		}
		else
		{
			f2();
		}
	}
	else
	{
		f1();
	}
}
