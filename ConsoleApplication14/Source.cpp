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
		cout << "������� ����� �������: ";
		cin >> nz;
		switch (nz)
		{
		case 2:
		{
			//2.	���� �������� ���� �����.��������� ��� �������� 
			//���������� ��������� s1 � s2, ����� ���� �������� s2 
			//��������� �������� t1, �������� s1 � �������� t2.

			char s1[20] = "�����";
			char s2[20] = "�����";
			printf("��: ������ ����� %s, ������ ������ %s\n\n", s1, s2);
			char temp[20] = {};
			strcpy(temp, s1);
			strcpy(s1, s2);
			strcpy(s2, temp);
			printf("�����: ������ ����� %s, ������ ������ %s\n\n", s1, s2);
		}break;

		case 3:
		{
			//3.	���� �����.������� �� ����� ��� ��������� ������.
			char Word[20];
			scanf("%s", Word);
			int count = strlen(Word);
			printf("��������� ������ ������ �����: %c \n\n ", Word[count - 1]);
		}break;

		case 4:
		{
			//	4.	���� �����.������� �� ����� ��� k - � ������
			char Word[20];
			scanf("%s", Word);
			int count;
			printf("������� ����� �������, ����� ������ ����� ��� ����� � �����: \n");
			scanf("%d", &count);
			//int numb = 0;
			//numb = atoi(count);
			printf("��� �����: %c \n\n ", Word[count - 1]);
		}break;

		case 5:
		{
			//5.	���� �����.����������, ��������� �� ������ � ��������� ������� 
			//� ���.
			char Word[20];
			scanf("%s", Word);
			printf("������ �����: %c, ���������: %c \n\n", Word[2], Word[4]);
			if (Word[2] == Word[4])
				//if (strcmp(&Word[2], &Word[4]) == 0)
				printf("������ � ��������� ������� ����������\n");
			else
				printf("������ � ��������� �� ������� ����������\n");
		}break;

		case 6:
		{
			//6.���� �����. ����� ��, ��� ��� ���������� � ������������ �� 
			//���� � �� �� �����?
			char Word[20];
			scanf("%s", Word);
			int count = strlen(Word);
			if (Word[0] == Word[count - 1])
				printf("������ � ��������� ������� ����������\n");
			else
				printf("������ � ��������� ������� �� ����������\n");
		}break;

		case 7:
		{
			//7.���� �����.�������� � ������� �� ����� ��������������, 
			//��������� �� ��� ������� � ���������� �������
			char Word[20];
			scanf("%s", Word);
			char newWord[1];


			strcpy(&newWord[0], &Word[1]);
			strcpy(&newWord[1], &Word[3]);
			newWord[2] = '\0';
			//strncmp(newWord, Word, 1);
			printf("�������������� �� ������� � ���������� ��������: %s \n", newWord);
		}break;

		case 8:
		{
			//8.���� �����.�������� � ������� �� ����� ��������������, 
			//��������� �� ��� �������� � ���������� �������
			char Word[20];
			scanf("%s", Word);
			char newWord[3];
			int count = strlen(Word);

			strcpy(&newWord[0], &Word[2]);
			strcpy(&newWord[1], &Word[count - 1]);
			newWord[2] = '\0';
			printf("�������������� �� �������� � ���������� ��������: %s \n", newWord);
		}break;

		case 9:
		{
			//9.���� �����. �������� ��� �����, ������������ ������,
			//������� � ��������� �������
			char Word[20];
			scanf("%s", Word);
			char newWord[4];

			strcpy(&newWord[0], &Word[1]);
			strcpy(&newWord[1], &Word[2]);
			strcpy(&newWord[2], &Word[3]);

			newWord[3] = '\0';
			printf("�������������� �� 2,3,4 ����: %s \n", newWord);
		}break;

		case 10:
		{
			//10.���� �����, ��������� �� ������� ����� ����. 
			//������� �� ����� ��� ������ ��������, �� ��������� 
			//�������� �����.
			char Word[20];
			scanf("%s", Word);
			int count = strlen(Word);

			count = ((count - 1) / 2) + 1;
			Word[count] = '\0';
			printf("������ �������� ������ �����: %s \n\n", Word);
		}break;

		case 11:
		{
			//11.	������� ������ �������� �� 10 ���������. 
			//�������� �������-����� �� ������ '*'.
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

			printf("�����: %s\n\n", text);

			/*for (int i = 48; i < 58; i++)
			{
				printf("%d - %c\t", symbol[i]);

			}
*/
		}break;

		case 12:
		{
			//12.	������� ������ �������� �� 11 ���������. ���������� ��� 
			//�������� �����-������� � ������� �������
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
			printf("�����: %s\n\n", text);

		}break;

		case 13:
		{
			//13.��� ������ ��������, ���������� ���������� �����. 
			//����� ���������� ����, ������������ � ����� b.
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
			//16� �������� ������ ������� ��������� ������ � � (������), ������� �������� � ������
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


		cout << "������ ���������� 1/0?";
		cin >> q;


		switch (q)
		{
		case 1:
			system("cls");
			break;
		default:
		{
			cout << "������" << endl;
		}
		}
	} while (nz > 0);


}