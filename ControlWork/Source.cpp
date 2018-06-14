#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include <Windows.h>
#include <iostream>

using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 15);

	int answer = 0;
	printf("После каждого вопроса вводите ответ в формате 1(ДА), любое другое целое число(НЕТ)\n ");

start:

	printf("\n\nStart!\n\n");
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
					printf("Хотите играть классику?\n(Три варианта - 1-да, -0-нет, 2-не знаю)\n");
					scanf("%d", &answer);
					if (answer == 1)
					{
						printf("Готовы работать круглые сутки?\n");
						scanf("%d", &answer);
						if (answer == 1)
						{
							SetConsoleTextAttribute(hConsole, 11);
							printf("ГОБОЙ\n");
							SetConsoleTextAttribute(hConsole, 15);
						}
						else
						{
							printf("Готовы к тому, что будут проблемы с работой, даже если вы круто играете?\n");
							scanf("%d", &answer);
							SetConsoleTextAttribute(hConsole, 11);
							if (answer == 1) printf("КЛАРНЕТ\n");
							else printf("ВАЛТОРНА\n");
							SetConsoleTextAttribute(hConsole, 15);
						}
					}
					else if (answer == 2)
					{
						SetConsoleTextAttribute(hConsole, 11);
						printf("ТРОМБОН\n");
						SetConsoleTextAttribute(hConsole, 15);
					}
					else
					{
						printf("...а джаз?\n");
						scanf("%d", &answer);
						if (answer == 1)
						{
							SetConsoleTextAttribute(hConsole, 11);
							printf("САКСОФОН\n");
							SetConsoleTextAttribute(hConsole, 15);
						}
						else
						{
							printf("У вас есть немецкие корни?\n");
							scanf("%d", &answer);
							if (answer == 1)
							{
								SetConsoleTextAttribute(hConsole, 11);
								printf("ТРУБА\n");
								SetConsoleTextAttribute(hConsole, 15);
							}
							else
							{
								SetConsoleTextAttribute(hConsole, 11);
								printf("ДУДУК\n");
								SetConsoleTextAttribute(hConsole, 15);
							}
						}
					}
				}
				else
				{
					printf("Вы страстная натура?\n");
					scanf("%d", &answer);
					if (answer == 1)
					{
						SetConsoleTextAttribute(hConsole, 11);
						printf("ВИОЛОНЧЕЛЬ\n");
						SetConsoleTextAttribute(hConsole, 15);
					}
					else
					{
						SetConsoleTextAttribute(hConsole, 11);
						printf("ДОМБРА\n");
						SetConsoleTextAttribute(hConsole, 15);
					}
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
					if (answer == 1)
					{
						SetConsoleTextAttribute(hConsole, 11);
						printf("ФЛЕЙТА\n");
						SetConsoleTextAttribute(hConsole, 15);
					}
					else
					{
						SetConsoleTextAttribute(hConsole, 11);
						printf("СКРИПКА\n");
						SetConsoleTextAttribute(hConsole, 15);
					}
				}
				else
				{
					printf("Ноты знаете?\n");
					scanf("%d", &answer);
					if (answer == 1)
					{
						SetConsoleTextAttribute(hConsole, 11);
						printf("АРФА\n");
						SetConsoleTextAttribute(hConsole, 15);
					}
					else
					{
						SetConsoleTextAttribute(hConsole, 11);
						printf("АЛЬТ\n");
						SetConsoleTextAttribute(hConsole, 15);
					}
				}
			}
		}
		else
		{
			printf("Любите деньги?\n");
			scanf("%d", &answer);
			if (answer == 1)
			{
				SetConsoleTextAttribute(hConsole, 11);
				printf("ЗАБУДЬТЕ О МУЗЫКЕ\n");
				SetConsoleTextAttribute(hConsole, 15);
			}
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
				if (answer == 1)
				{
					SetConsoleTextAttribute(hConsole, 11);
					printf("ГИТАРА\n");
					SetConsoleTextAttribute(hConsole, 15);
				}
				else
				{
					SetConsoleTextAttribute(hConsole, 11);
					printf("ФОРТЕПИАНО\n");
					SetConsoleTextAttribute(hConsole, 15);
				}
			}
			else
			{
			start2:

				printf("Вы парень?\n");
				scanf("%d", &answer);
				if (answer == 1)
				{
					SetConsoleTextAttribute(hConsole, 11);
					printf("ОПЕРНЫЙ ПЕВЕЦ\n");
					SetConsoleTextAttribute(hConsole, 15);
				}
				else
				{
					SetConsoleTextAttribute(hConsole, 11);
					printf("УДАРНЫЕ\n");
					SetConsoleTextAttribute(hConsole, 15);
				}

			}
		}
		else
		{
			printf("Хотите встречаться с парнями?\n");
			scanf("%d", &answer);
			if (answer == 1) goto start2;
			else
			{
				SetConsoleTextAttribute(hConsole, 11);
				printf("ФАГОТ\n");
				SetConsoleTextAttribute(hConsole, 15);
			}
		}
	}
	goto start;
}