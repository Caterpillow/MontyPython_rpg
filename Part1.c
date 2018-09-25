#include <stdio.h>
#include "headers.h"
int cry=-1;
int AGE=0;
int experiment=0;
void Part1_v1()
{
	dashes();
	printf("Część I: CUD NARODZIN\n");
	dashes();
	printf("Słyszysz, z oddali głosy. \nCo to za maszyna?\n"
	 		"To maszyna, która robi ping!.\n"
	 		"Słyszysz dźwięk, który rzeczywiście brzmi jak ping.\n"
	 		"To oznacza, że Pani dziecko nadal żyje!\n"
	 		"Nowy spanikowany głos:Idzie dyrektor, doktorze!\nNa salę porodową chodzi dyrektor z tłumem zwiedzających szpital reporterów.\n"
	 		"Dyrektor: Dzień dobry, panowie!\nCo się tu dzisiaj odbywa?\n"
			"Doktor:Poród, panie dyrektorze.\nDyrektor:A cóż to takiego?\n"
			"Doktor:Wyjmujemy nowe dziecko z brzucha kobiety.\nDyrektor:To się nazywa siła nowoczesności!\n"
			"Oh! Widzę też maszynę, która robi ping!\n"
			"Dyrektor naciska czerwony guzik i znów słyszysz odgłosk ping!\n"
			"Dyrektor: Wydaliśmy na nią kilka milionów po wygranym przetargu.\n"
			"Słyszysz owacje reporterów.\n"
			"Doktor: O! Rodzi się!\n"
			"Razi Cię jasne światło.\n"
			"Znajomy ciepły damski głos: Chłopiec czy dziewczynka?\n"
			"Naciśnij 1 lub 2 i ENTER.\n"
			"1)Zaczynam płakać w niebogłosy.\n"
			"2)Jestem zbyt zdziwiony, by coś powiedzieć.\n");
	int tick=0;
	while(cry!=2 && cry!=1)
	{
		if(tick==1)Err();
		tick=1;
		scanf("%d",&cry);
	}	
	printf("\n");
	if(cry==1) 
	{
		Health-=1;
		printf("Od razu widać, że Pani dziecko będzie miało depresję.\nInstrukcję obsługi dziecka znajdzie Pani na naszej stronie internetowej.\n");
	}
	else if(cry==2)
	{
		Spirit+=1;
		printf("To chyba za wcześnie na nadawanie dziecku ról społecznych!");
	}
	int e = IfEnd(Health,Spirit);
	if(e==1)
		End();
	else
	{
		Part2();
	}
}

void Part1_v2()
{
	dashes();
	printf("Część I: CUD NARODZIN\n");
	dashes();
	printf("Z oddali słyszysz głos:\n"
			"Mam coś do zakomunikowania całej rodzinie. Jest Was za dużo.\n"
			"Zamknęli fabryki. Nie ma już pracy.\n"
			"Niestety muszę was sprzedać na eksperymenty naukowe.\n"
			"Taki los, moi drodzy.\n"
			"Naciśnij 1 lub 2 i ENTER.\n"
			"1)Przechodzi Cię dreszcz\n"
			"2)Nie ruszasz się\n"); 
	int tick=0;
	int out=-1;
	while(out!=2 && out!=1)
	{
		if(tick==1)Err();
		tick=1;
		scanf("%d",&out);
	}
	printf("\n");
	if(out==1)
	{
		experiment=1;
		Health-=2;
		printf("Zaczynasz się ruszać i nagle błysk Cię oślepia. Widzisz nad sobą mnóstwo twarzy.\n Słyszysz ten sam głos:\nNiestety Ciebie mały też czeka taki los");
	}
	else
	{
		printf("Szkoda tylko, że nasz najmłodszy nie będzie miał rodzeństwa.\n");
	}
	int e = IfEnd(Health,Spirit);
	if(e==1)
		End();
	else
	{
		Part2();
	}
}

