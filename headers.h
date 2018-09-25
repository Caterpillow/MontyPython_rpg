extern int AGE;
extern int SENS;
extern int cry;
extern int Health;
extern int Spirit;
extern int experiment;
extern int kidney;
extern int goodbye;
void Part1_v1();
void Part1_v2();
void Part2();
void f1();
void f2();
void Part3_v2();
void Part3_v1();
void Part4();
void Part5();
static void correct()
{
	printf("Wpisz, proszę, poprawny numer. To Twój życiowy wybór!");
}
static void dashes()
{
	printf("\n___________________________________________\n");
}
static void Err()
{
	printf("\nWalczysz o swój sens życia! Wpisz 1 lub 2 i ENTER.\n");
}
static int IfEnd(int H,int S)
{
	if(H<=0 || S<=0)
		return 1;
	return 0;
}
static void End()
{
	printf("Gratulacje! Umarłeś w wieku %d lat!",AGE);
	if(Health<=0)
		printf("Zabrakło ci zdrowia na trudy życiowe.\n");
	if(Spirit<=0)
		printf("Nie miałeś dość siły ducha na to życie\n");
	printf("Ale to nieważne. Nie znalazłeś sensu życia. PRZEGRAŁEŚ.\n");
}

