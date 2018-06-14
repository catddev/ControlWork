#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
#include<time.h>
#include <Windows.h>
#include <iostream>

using namespace std;

void main()
{
	srand(time(NULL));

	setlocale(LC_ALL, "Rus");

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 15);

	int answer = 0;
	printf("После каждого вопроса вводите ответ в формате 1(ДА), 0(НЕТ), 2(НЕ ЗНАЮ)\n ");

	printf("Start!\n");
	printf("Хотите стать профессиональным музыкантом?\n");
	scanf("%d", &answer);
	if (answer == 1)
	{
		printf("Вы богаты?\n");
		scanf("%d", &answer);
		if (answer == 1)
		{
		start1:

			printf("Любите отрываться?\n");
			scanf("%d", &answer);
			if (answer == 1)
			{
				printf("Пьете пиво?\n");
				scanf("%d", &answer);
				if (answer == 1)
				{
					printf("Хотите играть классику?\n");
					scanf("%d", &answer);
					if (answer == 1)
					{
						printf("Готовы работать круглые сутки?\n");
						scanf("%d", &answer);
						if (answer == 1)
						{
							printf("ГОБОЙ\n");
						}
						else
						{
							printf("Готовы к тому, что будут проблемы с работой, даже если вы круто играете?\n");
							scanf("%d", &answer);
							if (answer == 1) printf("КЛАРНЕТ\n");
							else printf("ВАЛТОРНА\n");
						}
					}
					else if (answer == 2) printf("ТРОМБОН\n");
					else
					{
						printf("...а джаз?\n");
						scanf("%d", &answer);
						if (answer == 1) printf("САКСОФОН\n");
						else
						{
							printf("У вас есть немецкие корни?\n");
							scanf("%d", &answer);
							if (answer == 1) printf("ТРУБА\n");
							else printf("ДУДУК\n");
						}
					}
				}
				else
				{
					printf("Вы страстная натура?\n");
					scanf("%d", &answer);
					if (answer == 1) printf("ВИОЛОНЧЕЛЬ\n");
					else printf("ДОМБРА\n");
				}
			}
			else
			{
				printf("Готовы заниматься по 8 часов в день?\n");
				scanf("%d", &answer);
				if (answer == 1)
				{
					printf("Хотите учить детей\n");
					scanf("%d", &answer);
					if (answer == 1) printf("ФЛЕЙТА\n");
					else printf("СКРИПКА\n");
				}
				else
				{
					printf("Ноты знаете?\n");
					scanf("%d", &answer);
					if (answer == 1) printf("АРФА\n");
					else printf("АЛЬТ\n");
				}
			}
		}
		else
		{
			printf("Любите деньги?\n");
			scanf("%d", &answer);
			if (answer == 1) printf("ЗАБУДЬТЕ О МУЗЫКЕ\n");
			else goto start1;
		}
	}
	else
	{
		printf("Хотите встречаться с девушками?\n");
		scanf("%d", &answer);
		if (answer == 1)
		{
			printf("Любите глупышек?\n");
			scanf("%d", &answer);
			if (answer == 1)
			{
				printf("Любите выпить?\n");
				scanf("%d", &answer);
				if (answer == 1) printf("ГИТАРА\n");
				else printf("ФОРТЕПИАНО\n");
			}
			else
			{
			start2:

				printf("Вы парень?\n");
				scanf("%d", &answer);
				if (answer == 1) printf("ОПЕРНЫЙ ПЕВЕЦ\n");
				else printf("УДАРНЫЕ\n");
			}
		}
		else
		{
			printf("Хотите встречаться с парнями?\n");
			scanf("%d", &answer);
			if (answer == 1) goto start2;
			else printf("ФАГОТ\n");
		}
	}



}