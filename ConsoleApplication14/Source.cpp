#include <stdio.h>
#include <locale.h>
#include <iostream>
#include <stdint.h>
#include <time.h>


using namespace std;

int q;

void main()

{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));

	int nz;

	do
	{
		cout << "Введите номер задания: ";
		cin >> nz;
		switch (nz)
		{
		case 2:
		{
			//2.	Даны названия двух стран.Присвоить эти названия 
			//переменным величинам s1 и s2, после чего название s2 
			//присвоить величине t1, название s1 — величине t2.

			char s1[20] = "Дания";
			char s2[20] = "Чехия";
			printf("до: Первая страя %s, вторая страна %s\n\n", s1, s2);
			char temp[20] = {};
			strcpy(temp, s1);
			strcpy(s1, s2);
			strcpy(s2, temp);
			printf("после: Первая страя %s, вторая страна %s\n\n", s1, s2);
		}break;

		case 3:
		{
			//3.	Дано слово.Вывести на экран его последний символ.
			char Word[20];
			scanf("%s", Word);
			int count = strlen(Word);
			printf("последний символ вашего слова: %c \n\n ", Word[count - 1]);
		}break;

		case 4:
		{
			//	4.	Дано слово.Вывести на экран его k - й символ
			char Word[20];
			scanf("%s", Word);
			int count;
			printf("введите номер символа, чтобы узнать какая это буква в слове: \n");
			scanf("%d", &count);
			//int numb = 0;
			//numb = atoi(count);
			printf("это буква: %c \n\n ", Word[count - 1]);
		}break;

		case 5:
		{
			//5.	Дано слово.Определить, одинаковы ли второй и четвертый символы 
			//в нем.
			char Word[20];
			scanf("%s", Word);
			printf("вторая буква: %c, четвертая: %c \n\n", Word[2], Word[4]);
			if (Word[2] == Word[4])
				//if (strcmp(&Word[2], &Word[4]) == 0)
				printf("второй и четвертый символы одинаковые\n");
			else
				printf("второй и четвертый НЕ символы одинаковые\n");
		}break;

		case 6:
		{
			//6.Дано слово. Верно ли, что оно начинается и оканчивается на 
			//одну и ту же букву?
			char Word[20];
			scanf("%s", Word);
			int count = strlen(Word);
			if (Word[0] == Word[count - 1])
				printf("первый и последний символы одинаковые\n");
			else
				printf("первый и последний символы НЕ одинаковые\n");
		}break;

		case 7:
		{
			//7.Дано слово.Получить и вывести на экран буквосочетание, 
			//состоящее из его второго и четвертого символа
			char Word[20];
			scanf("%s", Word);
			char newWord[1];


			strcpy(&newWord[0], &Word[1]);
			strcpy(&newWord[1], &Word[3]);
			newWord[2] = '\0';
			//strncmp(newWord, Word, 1);
			printf("буквосочетание из второго и четвертого символов: %s \n", newWord);
		}break;

		case 8:
		{
			//8.Дано слово.Получить и вывести на экран буквосочетание, 
			//состоящее из его третьего и последнего символа
			char Word[20];
			scanf("%s", Word);
			char newWord[3];
			int count = strlen(Word);

			strcpy(&newWord[0], &Word[2]);
			strcpy(&newWord[1], &Word[count - 1]);
			newWord[2] = '\0';
			printf("буквосочетание из третьего и последнего символов: %s \n", newWord);
		}break;

		case 9:
		{
			//9.Дано слово. Получить его часть, образованную второй,
			//третьей и четвертой буквами
			char Word[20];
			scanf("%s", Word);
			char newWord[4];

			strcpy(&newWord[0], &Word[1]);
			strcpy(&newWord[1], &Word[2]);
			strcpy(&newWord[2], &Word[3]);

			newWord[3] = '\0';
			printf("буквосочетание из 2,3,4 букв: %s \n", newWord);
		}break;

		case 10:
		{
			//10.Дано слово, состоящее из четного числа букв. 
			//Вывести на экран его первую половину, не используя 
			//оператор цикла.
			char Word[20];
			scanf("%s", Word);
			int count = strlen(Word);

			count = ((count - 1) / 2) + 1;
			Word[count] = '\0';
			printf("первая половина вашего слова: %s \n\n", Word);
		}break;

		case 11:
		{
			//11.	Введите массив символов из 10 элементов. 
			//Замените символы-цифры на символ '*'.
			/*for (int i = 0; i <= 256; i++)
			{
				printf("%d - %c\t", i, i);
			}*/


			char text[] = "account: KZT14848641454";

			for (int i = 0; i < strlen(text); i++)
			{
				int code = (int)text[i];
				if (code >= 48 && code <= 57)
					text[i] = '*';
			}

			printf("после: %s\n\n", text);

			/*for (int i = 48; i < 58; i++)
			{
				printf("%d - %c\t", symbol[i]);

			}
*/
		}break;

		case 12:
		{
			//12.	Введите массив символов из 11 элементов. Переведите все 
			//строчные буквы-символы в верхний регистр
			/*for (int i = 0; i <= 256; i++)
			{
				printf("%d - %c\t", i, i);
			}*/

			char text[11];
			scanf("%s", text);
			for (int i = 0; i < strlen(text); i++)
			{
				int code = (int)text[i];
				if (code >= 65 && code <= 90)
					text[i] = code + 32;
			}
			printf("после: %s\n\n", text);

		}break;

		case 13:
		{
			//13.Дан массив символов, содержащий английский текст. 
			//Найти количество слов, начинающихся с буквы b.
			char * text = "bnyone who reads Old and Middle English literary texts will be familiar with the mid-brown volumes of the EETS, with the symbol of Alfred's jewel embossed on the front cover. Most of the works attributed to King Alfred or to Aelfric, along with some of those by bishop";
			//scanf("%s", text);
			int count = 0;

			while (*text != '\0')
			{
				if (*text == ' ')
					if (*(text + 1) == 'b')
					{
						text++;
						while (*text != ' ')
						{
							putchar(*text);
							text++;
						}
						printf("\n");

						count++;
					}
				text++;
			}

			cout << count << endl;
		}break;

		case 16:
		{
			//16В заданной строке удалить последний символ « » (пробел), который найдется в строке
			char * text = "Anyone who reads Old and Middle English literary texts will be familiar with the mid-brown volumes of the EETS, with the symbol of Alfred's jewel embossed on the front cover. Most of the works attributed to King Alfred or to Aelfric, along with some of those by bishop";
			//scanf("%s", text);
			int count = 0;
			int mas[100];

			while (*text != '\0')
			{
				if (*text == ' ')
					mas[count] = ' ';

				//	count++;

			}
		}break;

		
		}


		cout << "Хотите продолжить 1/0?";
		cin >> q;


		switch (q)
		{
		case 1:
			system("cls");
			break;
		default:
		{
			cout << "ошибка" << endl;
		}
		}
	} while (nz > 0);


}