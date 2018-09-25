#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "headers.h"
int PATH=-1;
int Health=0;
int Spirit=0;

int main()
{
	srand(time(NULL));
	Spirit = (rand()%10)+1;
	Health = (rand()%10)+1;

	printf("Otwierasz oczy. Oślepia Cię światło. Przed sobą widzisz dwie kolejki ludzi.\n"
		"W której się ustawiasz?\n"
		"1)W dłuższej.\n2)W krótszej.\nNaciśnij numer i ENTER.\n");
	int tick=0;
	while(PATH!=2 && PATH!=1)
	{
		if(tick==1)Err();
		tick=1;
		scanf("%d",&PATH);
	}
	dashes();
	printf("Nagle z nieba nadlatuje olbrzymia stopa i Cię miażdży.\n");
	dashes();
	if(PATH==1)
	{
		Part1_v1();
	}
	else if(PATH==2)
	{
		Part1_v2();
	}
}