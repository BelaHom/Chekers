#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h> 
#include <string.h> 
#include <conio.h> 
#include <locale.h> 
#include <stdlib.h> 
typedef struct comp comp;
struct comp {
	int koord1, koord2;
	comp*next;
};
char polana[8][8];
comp *head = NULL;
comp *tail = NULL;
comp*push(comp **top, comp *back, int koord1, int koord2)
{
	comp *tmp = (comp*)malloc(sizeof(comp));
	tmp->koord1 = koord1;// age = x; 
	tmp->koord2 = koord2;
	tmp->next = NULL;
	if (back != NULL)
		back->next = tmp;
	else
		(*top) = tmp;
	return tmp;
}
comp*pop(comp *top, comp **back, int *koord1, int *koord2)
{
	comp*tmp = NULL;
	if (top == NULL)
		return NULL;
	*koord1 = top->koord1;
	*koord2 = top->koord2;
	tmp = top->next;
	if (tmp == NULL)
		(*back) = NULL;
	free(top);
	return tmp;
}


typedef struct damkach damkach;
struct damkach {
	int koord1, koord2;
	damkach*next;
};
damkach *Dhead = NULL;
damkach *Dtail = NULL;
damkach*Dpush(damkach **top, damkach *back, int koord1, int koord2)
{
	damkach *tmp = (damkach*)malloc(sizeof(damkach));
	tmp->koord1 = koord1;
	tmp->koord2 = koord2;
	tmp->next = NULL;
	if (back != NULL)
		back->next = tmp;
	else
		(*top) = tmp;
	return tmp;
}
damkach*Dpop(damkach *top, damkach **back, int *koord1, int *koord2)
{
	damkach*tmp = NULL;
	if (top == NULL)
		return NULL;
	*koord1 = top->koord1;
	*koord2 = top->koord2;
	tmp = top->next;
	if (tmp == NULL)
		(*back) = NULL;
	free(top);
	return tmp;
}

typedef struct damkab damkab;
struct damkab {
	int koord1, koord2;
	damkab*next;
};
damkab *Bhead = NULL;
damkab *Btail = NULL;
damkab*Bpush(damkab **top, damkab *back, int koord1, int koord2)
{
	damkab *tmp = (damkab*)malloc(sizeof(damkab));
	tmp->koord1 = koord1;
	tmp->koord2 = koord2;
	tmp->next = NULL;
	if (back != NULL)
		back->next = tmp;
	else
		(*top) = tmp;
	return tmp;
}
damkab*Bpop(damkab *top, damkab **back, int *koord1, int *koord2)
{
	damkab*tmp = NULL;
	if (top == NULL)
		return NULL;
	*koord1 = top->koord1;
	*koord2 = top->koord2;
	tmp = top->next;
	if (tmp == NULL)
		(*back) = NULL;
	free(top);
	return tmp;
}


typedef struct chel chel;
struct chel {
	int koord1, koord2;
	chel*next;
};
chel *Chead = NULL;
chel *Ctail = NULL;
chel*Cpush(chel **top, chel *back, int koord1, int koord2)
{
	chel *tmp = (chel*)malloc(sizeof(chel));
	tmp->koord1 = koord1;// age = x; 
	tmp->koord2 = koord2;
	tmp->next = NULL;
	if (back != NULL)
		back->next = tmp;
	else
		(*top) = tmp;
	return tmp;
}
chel*Cpop(chel *top, chel **back, int *koord1, int *koord2)
{
	chel*tmp = NULL;
	if (top == NULL)
		return NULL;
	*koord1 = top->koord1;
	*koord2 = top->koord2;
	tmp = top->next;
	if (tmp == NULL)
		(*back) = NULL;
	free(top);
	return tmp;
}


void pole()
{
	printf("    _ _ _ _ _ _ _ _ \n");
	printf(" 8 |%c|%c|%c|%c|%c|%c|%c|%c| \n", polana[7][0], polana[7][1], polana[7][2], polana[7][3], polana[7][4], polana[7][5], polana[7][6], polana[7][7]);
	printf(" 7 |%c|%c|%c|%c|%c|%c|%c|%c| \n", polana[6][0], polana[6][1], polana[6][2], polana[6][3], polana[6][4], polana[6][5], polana[6][6], polana[6][7]);
	printf(" 6 |%c|%c|%c|%c|%c|%c|%c|%c| \n", polana[5][0], polana[5][1], polana[5][2], polana[5][3], polana[5][4], polana[5][5], polana[5][6], polana[5][7]);
	printf(" 5 |%c|%c|%c|%c|%c|%c|%c|%c| \n", polana[4][0], polana[4][1], polana[4][2], polana[4][3], polana[4][4], polana[4][5], polana[4][6], polana[4][7]);
	printf(" 4 |%c|%c|%c|%c|%c|%c|%c|%c| \n", polana[3][0], polana[3][1], polana[3][2], polana[3][3], polana[3][4], polana[3][5], polana[3][6], polana[3][7]);
	printf(" 3 |%c|%c|%c|%c|%c|%c|%c|%c| \n", polana[2][0], polana[2][1], polana[2][2], polana[2][3], polana[2][4], polana[2][5], polana[2][6], polana[2][7]);
	printf(" 2 |%c|%c|%c|%c|%c|%c|%c|%c| \n", polana[1][0], polana[1][1], polana[1][2], polana[1][3], polana[1][4], polana[1][5], polana[1][6], polana[1][7]);
	printf(" 1 |%c|%c|%c|%c|%c|%c|%c|%c| \n", polana[0][0], polana[0][1], polana[0][2], polana[0][3], polana[0][4], polana[0][5], polana[0][6], polana[0][7]);
	printf("\n    a b c d e f g h \n");
}


int check(int x, int y)
{
	if ((x == 0 && y == 1) || (x == 0 && y == 3) || (x == 0 && y == 5) || (x == 0 && y == 7) ||
		(x == 1 && y == 0) || (x == 1 && y == 2) || (x == 1 && y == 4) || (x == 1 && y == 6) ||
		(x == 2 && y == 1) || (x == 2 && y == 3) || (x == 2 && y == 5) || (x == 2 && y == 7) ||
		(x == 3 && y == 0) || (x == 3 && y == 2) || (x == 3 && y == 4) || (x == 3 && y == 6) ||
		(x == 4 && y == 1) || (x == 4 && y == 3) || (x == 4 && y == 5) || (x == 4 && y == 7) ||
		(x == 5 && y == 0) || (x == 5 && y == 2) || (x == 5 && y == 4) || (x == 5 && y == 6) ||
		(x == 6 && y == 1) || (x == 6 && y == 3) || (x == 6 && y == 5) || (x == 6 && y == 7) ||
		(x == 7 && y == 0) || (x == 7 && y == 2) || (x == 7 && y == 4) || (x == 7 && y == 6))
		return 0;
	return 1;
}



int main()
{
	FILE *load;
	setlocale(LC_ALL, "rus");
	char vibor[20]; int sovp = 0;
	int xod1 = -1, xod2 = -1; int eshe = 1; int kal = 0; int forch1 = 0, forch2 = 0;
	//char polana[8][8]; 
	int i = 0, j = 0;
	char chern = 'ч'; char bel = 'б';
	for (i = 0; i < 8; i++)
		for (j = 0; j < 8; j++)
			polana[i][j] = '_';


	char damkab = 'Б'; char damkach = 'Ч';
	//printf("%c %c", damkab, damkach); 

	printf("|||||Добро пожаловать в игру ШАШКИ|||||\n");
	printf("Меню\n");
	printf("Нажмите 1 - Выйти из игры!\n");
	printf("Нажмите 2 - Начать Новую игру!\n");
	printf("Нажмите 3 - Загрузить сохраненную игру!\n");

	scanf_s("%s", &vibor, 20);
	int tr = 0; int vybor = 0;
	while (tr != 1)
	{
		if ((vibor[0] == '1'|| vibor[0] == '2'|| vibor[0] == '3') && vibor[1] == '\0')
		{
		vybor = atoi(vibor);
		tr = 1;
		}
		else
		{
			printf("Мимо! Введите нужную команду\n");
			scanf_s("%s", &vibor, 20);
		}
	}
	//while (tr != 1) {
	//	if (vibor != 1 || vibor != 2 || vibor != 3) {
	//		printf("Мимо! Введите нужную команду\n");
	//		scanf_s("%s", &vibor, 20);
	//	}
	//	else {
	//		vybor = atoi(vibor);
	//		tr = 1;
	//	}
	//}
	switch (vybor)
	{
	case 1:
	{
		printf("Спасибо за игру:)\n");
		_getch();
		return 0;
	}
	case 2:       ///////////////////////////////////////////////ОБЫЧНАЯ ИГРА
	{

		int chet = 0;
		system("cls");
		//ЧЕРНЫЕ 
		polana[5][1] = chern; polana[5][3] = chern; polana[5][5] = chern; polana[5][7] = chern;
		polana[6][0] = chern; polana[6][2] = chern; polana[6][4] = chern; polana[6][6] = chern;
		polana[7][1] = chern; polana[7][3] = chern; polana[7][5] = chern; polana[7][7] = chern;

		//БЕЛЫЕ 
		polana[0][0] = bel; polana[0][2] = bel; polana[0][4] = bel; polana[0][6] = bel;
		polana[1][1] = bel; polana[1][3] = bel; polana[1][5] = bel; polana[1][7] = bel;
		polana[2][0] = bel; polana[2][2] = bel; polana[2][4] = bel; polana[2][6] = bel;

		printf("Для сохранения в файл введите 00\n");
		printf("Если вы хотите отменить выбор шашки, нажмите 77\n");
		pole();

		while (1)
		{
			int k1 = 0, k2 = 0;
			char mas1[2]; char mas2[2];
		CHEL:
			int srub1[4] = { -1,-1,-1,-1 }, srub2[4] = { -1,-1,-1,-1 }; int u = 0; int b = 0; int srubili = 0;


			chet = 0;
			for (int k = 7; k >= 0; k--)
				for (int p = 0; p < 8; p++)
				{
					if (polana[k][p] == damkab)
						Btail = Bpush(&Bhead, Btail, k, p);
				}
			while (Bhead != NULL)
			{
				int k, p; int schet = 0; char string[2];
				Bhead = Bpop(Bhead, &Btail, &k, &p);
				int dam1 = k, dam2 = p;
				if (polana[k + 1][p + 1] == '_' && k < 7 && p < 7)
					while (polana[dam1 + 1][dam2 + 1] != chern || polana[dam1 + 1][dam2 + 1] != damkach || polana[dam1 + 1][dam2 + 1] != bel || polana[dam1 + 1][dam2 + 1] != damkab || (dam1 + 1 >= 0 && dam1 + 1 <= 7) || (dam2 + 1 >= 0 && dam2 + 1 <= 7))
					{
						if ((polana[dam1 + 1][dam2 + 1] == chern || polana[dam1 + 1][dam2 + 1] == damkach) && polana[dam1 + 2][dam2 + 2] == '_' && dam1 + 2<8 && dam2 + 2<8)
						{
							srub1[chet] = k;
							srub2[chet] = p;
							chet++;
						}
						if (polana[dam1 + 1][dam2 + 1] == bel || polana[dam1 + 1][dam2 + 1] == damkab)
						{
							dam1 = k;
							dam2 = p;
							break;
						}
						dam1++;
						dam2++;
						if (dam1 == 7 || dam2 == 7)
						{
							dam1 = k;
							dam2 = p;
							break;

						}
					}
				if (polana[k + 1][p - 1] == '_' && k < 7 && p>0)
					while (polana[dam1 + 1][dam2 - 1] != chern || polana[dam1 + 1][dam2 - 1] != damkach || polana[dam1 + 1][dam2 - 1] != bel || polana[dam1 + 1][dam2 - 1] != damkab || (dam1 + 1 >= 0 && dam1 + 1 <= 7) || (dam2 - 1 >= 0 && dam2 - 1 <= 7))
					{
						if ((polana[dam1 + 1][dam2 - 1] == chern || polana[dam1 + 1][dam2 - 1] == damkach) && polana[dam1 + 2][dam2 - 2] == '_'  && dam1 + 2<8 && dam2 - 2>-1)
						{
							srub1[chet] = k;
							srub2[chet] = p;
							chet++;
						}
						if (polana[dam1 + 1][dam2 - 1] == bel || polana[dam1 + 1][dam2 - 1] == damkab)
						{
							dam1 = k;
							dam2 = p;
							break;
						}
						dam1++;
						dam2--;
						if (dam1 == 7 || dam2 == 0)
						{
							dam1 = k;
							dam2 = p;
							break;
						}
					}
				if (polana[k - 1][p + 1] == '_' && k > 0 && p < 7)
					while (polana[dam1 - 1][dam2 + 1] != chern || polana[dam1 - 1][dam2 + 1] != damkach || polana[dam1 - 1][dam2 + 1] != bel || polana[dam1 - 1][dam2 + 1] != damkab || (dam1 - 1 >= 0 && dam1 - 1 <= 7) || (dam2 + 1 >= 0 && dam2 + 1 <= 7))
					{
						if ((polana[dam1 - 1][dam2 + 1] == chern || polana[dam1 - 1][dam2 + 1] == damkach) && polana[dam1 - 2][dam2 + 2] == '_'  && dam1 - 2>-1 && dam2 + 2<8)
						{
							srub1[chet] = k;
							srub2[chet] = p;
							chet++;
						}
						if (polana[dam1 - 1][dam2 + 1] == bel || polana[dam1 - 1][dam2 + 1] == damkab)
						{
							dam1 = k;
							dam2 = p;
							break;
						}
						dam1--;
						dam2++;
						if (dam1 == 0 || dam2 == 7)
						{
							dam1 = k;
							dam2 = p;
							break;
						}
					}
				if (polana[k - 1][p - 1] == '_' && k > 0 && p > 0)
					while (polana[dam1 - 1][dam2 - 1] != chern || polana[dam1 - 1][dam2 - 1] != damkach || polana[dam1 - 1][dam2 - 1] != bel || polana[dam1 - 1][dam2 - 1] != damkab || (dam1 - 1 >= 0 && dam1 - 1 <= 7) || (dam2 - 1 >= 0 && dam2 - 1 <= 7))
					{
						if ((polana[dam1 - 1][dam2 - 1] == chern || polana[dam1 - 1][dam2 - 1] == damkach) && polana[dam1 - 2][dam2 - 2] == '_'  && dam1 - 2 > -1 && dam2 - 2 > -1)
						{
							srub1[chet] = k;
							srub2[chet] = p;
							chet++;
						}
						if (polana[dam1 - 1][dam2 - 1] == bel || polana[dam1 - 1][dam2 - 1] == damkab)
						{
							dam1 = k;
							dam2 = p;
							break;
						}
						dam1--;
						dam2--;
						if (dam1 == 0 || dam2 == 0)
						{
							dam1 = k;
							dam2 = p;
							break;
						}
					}
			}

			u = chet;

			for (int k = 7; k >= 0; k--)
				for (int p = 0; p < 8; p++)
				{
					if (polana[k][p] == bel)
						Ctail = Cpush(&Chead, Ctail, k, p);
				}
			while (Chead != NULL)
			{
				int k, p;
				Chead = Cpop(Chead, &Ctail, &k, &p);
				if (polana[k - 1][p - 1] == chern || polana[k - 1][p - 1] == damkach)
					if (polana[k - 2][p - 2] == '_' && k - 2>-1 && p - 2>-1)
					{
						srub1[u] = k; srub2[u] = p; u++;
					}
				if (polana[k + 1][p + 1] == chern || polana[k + 1][p + 1] == damkach)
					if (polana[k + 2][p + 2] == '_' && k + 2<8 && p + 2<8)
					{
						srub1[u] = k; srub2[u] = p; u++;
					}
				if (polana[k - 1][p + 1] == chern || polana[k - 1][p + 1] == damkach)
					if (polana[k - 2][p + 2] == '_' && k - 2>-1 && p + 2<8)
					{
						srub1[u] = k; srub2[u] = p; u++;
					}
				if (polana[k + 1][p - 1] == chern || polana[k + 1][p - 1] == damkach)
					if (polana[k + 2][p - 2] == '_' && k + 2<8 && p - 2>-1)
					{
						srub1[u] = k; srub2[u] = p; u++;
					}
			}
			if (eshe == 0)
				for (int o = 0; o < 4; o++)
				{
					if (srub1[o] == xod2 && srub2[o] == xod1)
					{
						kal = 1;
						break;
					}
					if (srub1[o] == -1 && srub2[o] == -1)
						goto D;

				}

			char bukvi[4] = { '\0' };
			if (u != 0)
			{
				u = 0;
				if (sovp == 2)
					goto D;
				printf("Шашки, которые должны рубить:\n");
				char string[2];
				if (kal == 1)
				{
					if (xod1 == 0)
						string[0] = 'a';
					if (xod1 == 1)
						string[0] = 'b';
					if (xod1 == 2)
						string[0] = 'c';
					if (xod1 == 3)
						string[0] = 'd';
					if (xod1 == 4)
						string[0] = 'e';
					if (xod1 == 5)
						string[0] = 'f';
					if (xod1 == 6)
						string[0] = 'g';
					if (xod1 == 7)
						string[0] = 'h';
					printf("%c%i", string[0], xod2 + 1);
				}
				else
					while (u != 4 && srub1[u] != -1)
					{
						if (srub2[u] == 0 && sovp == 0)
						{
							printf("a%i ", srub1[u] + 1);
							bukvi[u] = 'a';
						}
						if (srub2[u] == 1 && sovp == 0)
						{
							printf("b%i ", srub1[u] + 1);
							bukvi[u] = 'b';
						}
						if (srub2[u] == 2 && sovp == 0)
						{
							printf("c%i ", srub1[u] + 1);
							bukvi[u] = 'c';
						}
						if (srub2[u] == 3 && sovp == 0)
						{
							printf("d%i ", srub1[u] + 1);
							bukvi[u] = 'd';
						}
						if (srub2[u] == 4 && sovp == 0)
						{
							printf("e%i ", srub1[u] + 1);
							bukvi[u] = 'e';
						}
						if (srub2[u] == 5 && sovp == 0)
						{
							printf("f%i ", srub1[u] + 1);
							bukvi[u] = 'f';
						}
						if (srub2[u] == 6 && sovp == 0)
						{
							printf("g%i ", srub1[u] + 1);
							bukvi[u] = 'g';
						}
						if (srub2[u] == 7 && sovp == 0)
						{
							printf("h%i ", srub1[u] + 1);
							bukvi[u] = 'h';
						}
						for (int r = 1; r < 4; r++)
						{
							if (srub2[0] == srub2[r])
								for (int t = 1; t < 4; t++)
									if (srub1[0] == srub1[t])
										sovp = 1;
						}
						u++;
					}
				if (sovp == 1)
					sovp = 2;
			PEREVIBOR:
				printf("\nВведите координаты шашки для хода:\n");
				scanf_s("%s", &vibor, 20);
				if (vibor[0] == '0' && vibor[1] == '0' && vibor[2] == '\0')
				{
					load = fopen("Moves.txt", "w");
					for (int k = 0; k < 8; k++)
						for (int p = 0; p < 8; p++)
							fputc(polana[k][p], load);
					fclose(load);
					printf("Игра сохранена!!!\n");
					goto PEREVIBOR;
				}

				tr = 0; char n[1]; char m[1];
				int q = 0;
			KUDA:
				while (tr == 0)
				{
					if (vibor[2] != '\0')
					{
						printf("Введите правильные координаты!!!\n");
						scanf_s("%s", &vibor, 20);
						goto KUDA;
					}
					for (q = 0; q < 4; q++)
					{
						if (vibor[0] == bukvi[q] || vibor[0] == string[0])
						{
							n[0] = vibor[1];
							if (atoi(n) - 1 == srub1[q] && vibor[2] == '\0')
							{
								if (kal == 1)
									if (xod2 == atoi(n) - 1 && string[0] == vibor[0])
									{
										tr = 1;
										goto C;
									}
									else
									{
										printf("Введите правильные координаты!!!\n");
										scanf_s("%s", &vibor, 20);
										goto KUDA;
									}
								tr = 1;
								m[0] = vibor[0];
								forch1 = atoi(n) - 1;
								forch2 = m[0] - 97;
								goto C;
							}
							else
							{
								printf("Введите правильные координаты!!!\n");
								scanf_s("%s", &vibor, 20);
							}

						}
						else
						{
							if (bukvi[q + 1] == -1)
							{
								printf("Введите правильные координаты!!!\n");
								scanf_s("%s", &vibor, 20);
							}
							char n[1]; vibor[0]; int g = 0; n[0] = vibor[1]; int gogo = atoi(n) - 1;
							for (int b = 0; b < 4; b++)
							{
								if (vibor[0] != bukvi[b] || gogo != srub1[b])
									g++;
							}
							if (g == 4)
							{
								printf("Введите правильные координаты!!!\n");
								goto PEREVIBOR;
							}
						}
					}
				}
			C:
				tr = 0;
				while (tr == 0)
				{
					printf("Введите координаты, куда встанет шашка\n");
					scanf_s("%s", &vibor, 20);
					mas1[0] = vibor[0];
					mas2[0] = vibor[1];
					if (vibor[0] == '7' && vibor[1] == '7' && vibor[2] == '\0')
						goto PEREVIBOR;
					if (vibor[2] != '\0')
					{
						printf("Введите правильные координаты!\n");
						goto C;
					}
					k2 = atoi(mas2);
					if (mas1[0] == 'a')
						k1 = 1;
					if (mas1[0] == 'b')
						k1 = 2;
					if (mas1[0] == 'c')
						k1 = 3;
					if (mas1[0] == 'd')
						k1 = 4;
					if (mas1[0] == 'e')
						k1 = 5;
					if (mas1[0] == 'f')
						k1 = 6;
					if (mas1[0] == 'g')
						k1 = 7;
					if (mas1[0] == 'h')
						k1 = 8;
					k1--; k2--;
					if (k1 >= 0 && (k2 == 1 || k2 == 2 || k2 == 3 || k2 == 4 || k2 == 5 || k2 == 6 || k2 == 7 || k2 == 0))
					{
						if (polana[k2 + 2][k1 + 2] == bel && b != 1)
						{
							for (u = 0; u < 4; u++)
								if (srub2[u] == k1 + 2 && srub1[u] == k2 + 2)
								{

									polana[k2 + 2][k1 + 2] = '_';
									polana[k2][k1] = bel;
									polana[k2 + 1][k1 + 1] = '_';
									xod1 = k1;
									xod2 = k2;
									eshe = 0;
									tr = 1;
									b = 1;
									srubili = 1;
									break;
								}
						}
						if (polana[k2 + 2][k1 - 2] == bel && b != 1)
						{
							for (u = 0; u < 4; u++)
								if (srub2[u] == k1 - 2 && srub1[u] == k2 + 2)
								{
									polana[k2 + 2][k1 - 2] = '_';
									polana[k2][k1] = bel;
									polana[k2 + 1][k1 - 1] = '_';
									xod1 = k1;
									xod2 = k2;
									eshe = 0;
									tr = 1;
									b = 1;
									srubili = 1;
									break;
								}
						}
						if (polana[k2 - 2][k1 - 2] == bel && b != 1)
						{
							for (u = 0; u < 4; u++)
								if (srub2[u] == k1 - 2 && srub1[u] == k2 - 2)
								{
									polana[k2 - 2][k1 - 2] = '_';
									polana[k2][k1] = bel;
									polana[k2 - 1][k1 - 1] = '_';
									xod1 = k1;
									xod2 = k2;
									eshe = 0;
									tr = 1;
									b = 1;
									srubili = 1;
									break;
								}
						}
						if (polana[k2 - 2][k1 + 2] == bel && b != 1)
						{
							for (u = 0; u < 4; u++)
								if (srub2[u] == k1 + 2 && srub1[u] == k2 - 2)
								{
									polana[k2 - 2][k1 + 2] = '_';
									polana[k2][k1] = bel;
									polana[k2 - 1][k1 + 1] = '_';
									xod1 = k1;
									xod2 = k2;
									eshe = 0;
									tr = 1;
									b = 1;
									srubili = 1;
									break;
								}
						}
						if (polana[k2][k1] == '_')
						{
							int dam1 = k2, dam2 = k1; int chernkol = 0;
							if (forch1 > dam1 && forch2 > dam2)
							{
								while (polana[dam1][dam2] != polana[forch1][forch2])
								{
									if (polana[dam1][dam2] == bel || polana[dam1][dam2] == damkab)
									{
										printf("НЕПРАВИЛЬНЫЕ КООРД.\n");
										goto C;
									}
									if (polana[dam1][dam2] == chern || polana[dam1][dam2] == damkach)
										chernkol++;
									dam1++;
									dam2++;
								}
								if (chernkol != 1)
								{
									printf("НЕПРАВИЛЬНЫЕ КООРД.\n");
									goto C;
								}
								else
								{
									while (dam1 != k2 && dam2 != k1)
									{
										polana[dam1][dam2] = '_';
										dam1--;
										dam2--;
									}
									polana[dam1][dam2] = damkab;
									srubili = 1;
									tr = 1;
									b = 1;
									break;
								}
							}
							if (forch1 > dam1 && forch2 < dam2)
							{
								while (polana[dam1][dam2] != polana[forch1][forch2])
								{
									if (polana[dam1][dam2] == bel || polana[dam1][dam2] == damkab)
									{
										printf("НЕПРАВИЛЬНЫЕ КООРД.\n");
										goto C;
									}
									if (polana[dam1][dam2] == chern || polana[dam1][dam2] == damkach)
										chernkol++;
									dam1--;
									dam2++;
								}
								if (chernkol != 1)
								{
									printf("НЕПРАВИЛЬНЫЕ КООРД.\n");
									goto C;
								}
								else
								{
									while (dam1 != k2 && dam2 != k1)
									{
										polana[dam1][dam2] = '_';
										dam1++;
										dam2--;
									}
									polana[dam1][dam2] = damkab;
									srubili = 1; tr = 1;
									b = 1;
									break;
								}
							}
							if (forch1 < dam1 && forch2 < dam2)
							{
								while (polana[dam1][dam2] != polana[forch1][forch2])
								{
									if (polana[dam1][dam2] == bel || polana[dam1][dam2] == damkab)
									{
										printf("НЕПРАВИЛЬНЫЕ КООРД.\n");
										goto C;
									}
									if (polana[dam1][dam2] == chern || polana[dam1][dam2] == damkach)
										chernkol++;
									dam1--;
									dam2--;
								}
								if (chernkol != 1)
								{
									printf("НЕПРАВИЛЬНЫЕ КООРД.\n");
									goto C;
								}
								else
								{
									while (dam1 != k2 && dam2 != k1)
									{
										polana[dam1][dam2] = '_';
										dam1++;
										dam2++;
									}
									polana[dam1][dam2] = damkab;
									srubili = 1;
									tr = 1;
									b = 1;
									break;
								}
							}
							if (forch1< dam1 && forch2 > dam2)
							{
								while (polana[dam1][dam2] != polana[forch1][forch2])
								{
									if (polana[dam1][dam2] == bel || polana[dam1][dam2] == damkab)
									{
										printf("НЕПРАВИЛЬНЫЕ КООРД.\n");
										goto C;
									}
									if (polana[dam1][dam2] == chern || polana[dam1][dam2] == damkach)
										chernkol++;
									dam1--;
									dam2++;
								}
								if (chernkol != 1)
								{
									printf("НЕПРАВИЛЬНЫЕ КООРД.\n");
									goto C;
								}
								else
								{
									while (dam1 != k2 && dam2 != k1)
									{
										polana[dam1][dam2] = '_';
										dam1++;
										dam2--;
									}
									polana[dam1][dam2] = damkab;
									srubili = 1;
									tr = 1;
									b = 1;
									break;
								}
							}
						}
					}

				}
				pole();
				if (b == 1)
					goto CHEL;
				//goto D;
			}
			else
			{
				if (srubili == 1)
				{
					srubili = 0;
					goto D;
				}
			}


		A:
			printf("Введите координаты шашки для хода:\n");
			scanf_s("%s", &vibor, 20);
			tr = 0;
			if (vibor[0] == '0' && vibor[1] == '0' && vibor[2] == '\0')
			{
				load = fopen("lol.txt", "w");
				for (int k = 0; k < 8; k++)
					for (int p = 0; p < 8; p++)
						fputc(polana[k][p], load);
				fclose(load);
				printf("Игра сохранена!!!\n");
				goto A;
			}
			while (tr == 0)
			{
				mas1[0] = vibor[0];
				mas2[0] = vibor[1];
				k2 = atoi(mas2);
				if (vibor[2] != '\0')
				{
					printf("Введите правильные координаты!\n");
					goto A;
				}
				if (mas1[0] == 'a')
					k1 = 1;
				if (mas1[0] == 'b')
					k1 = 2;
				if (mas1[0] == 'c')
					k1 = 3;
				if (mas1[0] == 'd')
					k1 = 4;
				if (mas1[0] == 'e')
					k1 = 5;
				if (mas1[0] == 'f')
					k1 = 6;
				if (mas1[0] == 'g')
					k1 = 7;
				if (mas1[0] == 'h')
					k1 = 8;
				if (k1 != 0 && (k2 == 1 || k2 == 2 || k2 == 3 || k2 == 4 || k2 == 5 || k2 == 6 || k2 == 7 || k2 == 8) && ((polana[k2 - 1][k1 - 1] == bel) || (polana[k2 - 1][k1 - 1] == damkab)))
				{
					k1--;
					k2--;
					tr = 1;
				}
				else
				{
					printf("Введите правильные координаты!!!\n");
					scanf_s("%s", &vibor, 20);
				}
			}
		VVOD:
			printf("Введите коорднаты клетки, куда встанет ваша шашка:\n");
			int kuda1 = -1, kuda2 = -1;
			scanf_s("%s", &vibor, 20);
			if (vibor[0] == '7' && vibor[1] == '7' && vibor[2] == '\0')
			{
				goto A;
			}
			if (vibor[2] != '\0')
			{
				printf("Введите правильные координаты!\n");
				goto VVOD;
			}
			tr = 0;
			while (tr == 0)
			{
				if (vibor[2] != '\0')
				{
					printf("Введите правильные координаты!!!\n");
					goto VVOD;
				}
				if (polana[k2][k1] == damkab)                    /////////////////////////////////////////// ДАМКИ
				{
					mas1[0] = vibor[0];
					mas2[0] = vibor[1];
					kuda2 = atoi(mas2) - 1;
					if (mas1[0] >= 'a' && mas1[0] <= 'h')
						kuda1 = mas1[0] - 97;
					else
					{
						printf("НЕПРАВИЛЬНЫЕ КООРД.\n");
						goto VVOD;
					}
					if (kuda1 != -1 && (kuda2 >= 0 && kuda2 <= 7) && (polana[kuda2][kuda1] == '_'))
					{
						int diag1 = kuda1; int diag2 = kuda2;
						if (kuda1 > k1 && kuda2 > k2)
						{
							diag1--;
							diag2--;
							while (diag1 != k1 && diag2 != k2)
							{
								if (diag1 < 0 || diag2 < 0)
								{
									printf("НЕПРАВИЛЬНЫЕ КООРД.\n");
									goto VVOD;
								}
								if (polana[diag2][diag1] != '_')
								{
									printf("НЕПРАВИЛЬНЫЕ КООРД.\n");
									goto VVOD;
								}
								diag1--;
								diag2--;
							}
						}
						if (kuda1 < k1 && kuda2 < k2)
						{
							diag1++;
							diag2++;
							while (diag1 != k1 && diag2 != k2)
							{
								if (diag1 > 7 || diag2 > 7)
								{
									printf("НЕПРАВИЛЬНЫЕ КООРД.\n");
									goto VVOD;
								}
								if (polana[diag2][diag1] != '_')
								{
									printf("НЕПРАВИЛЬНЫЕ КООРД.\n");
									goto VVOD;
								}
								diag1++;
								diag2++;
							}
						}
						if (kuda1 > k1 && kuda2 < k2)
						{
							diag1--;
							diag2++;
							while (diag1 != k1 && diag2 != k2)
							{
								if (diag1 < 0 || diag2 > 7)
								{
									printf("НЕПРАВИЛЬНЫЕ КООРД.\n");
									goto VVOD;
								}
								if (polana[diag2][diag1] != '_')
								{
									printf("НЕПРАВИЛЬНЫЕ КООРД.\n");
									goto VVOD;
								}
								diag1--;
								diag2++;
							}
						}
						if (kuda1 < k1 && kuda2 > k2)
						{
							diag1++;
							diag2--;
							while (diag1 != k1 && diag2 != k2)
							{
								if (diag1 > 7 || diag2 < 0)
								{
									printf("НЕПРАВИЛЬНЫЕ КООРД.\n");
									goto VVOD;
								}
								if (polana[diag2][diag1] != '_')
								{
									printf("НЕПРАВИЛЬНЫЕ КООРД.\n");
									goto VVOD;
								}
								diag1++;
								diag2--;
							}
						}
						if (check(kuda2, kuda1) == 0)
						{
							printf("НЕПРАВИЛЬНЫЕ КООРД.\n");
							goto VVOD;
						}
						polana[k2][k1] = '_';
						polana[kuda2][kuda1] = damkab;

						pole();
						goto D;
					}
					else
					{
						printf("НЕПРАВИЛЬНЫЕ КООРД.\n");
						goto VVOD;
					}
				}
				mas1[0] = vibor[0];
				mas2[0] = vibor[1];
				kuda2 = atoi(mas2) - 1;
				if (mas1[0] >= 'a' && mas1[0] <= 'h') kuda1 = mas1[0] - 97;
				if (kuda1 != -1 && (kuda2 >= 0 && kuda2 <= 7) && (((kuda1 == k1 + 1) || (kuda1 == k1 - 1)) && (kuda2 == k2 + 1)) && (polana[kuda2][kuda1] == '_'))
				{
					tr = 1;
				}
				else
				{
					printf("Введите правильные координаты!!!\n");
					printf("Если вы хотите отменить выбор шашки, нажмите 77\n");
					scanf_s("%s", &vibor, 20);
					if (vibor[0] == '7' && vibor[1] == '7' && vibor[2] == '\0')
					{
						goto A;
					}


				}
			}
			polana[k2][k1] = '_';
			b = 1;
			polana[kuda2][kuda1] = bel;
			system("cls");
			pole();








		D:
			int ebl = 0; sovp = 0; eshe = 1; xod1 = -1; xod2 = -1; kal = 0; int srub = 0;
		B:
			//  Комп

			int a = 0;
			if (polana[7][1] == bel)
				polana[7][1] = damkab;
			if (polana[7][3] == bel)
				polana[7][3] = damkab;
			if (polana[7][5] == bel)
				polana[7][5] = damkab;
			if (polana[7][7] == bel)
				polana[7][7] = damkab;
			if (polana[0][0] == chern)
				polana[0][0] = damkach;
			if (polana[0][2] == chern)
				polana[0][2] = damkach;
			if (polana[0][4] == chern)
				polana[0][4] = damkach;
			if (polana[0][6] == chern)
				polana[0][6] = damkach;


			for (int k = 7; k >= 0; k--) ////////////////////////////////////ДАМКИ ОТ КОМПА
				for (int p = 0; p < 8; p++)
				{
					if (polana[k][p] == damkach)
						Dtail = Dpush(&Dhead, Dtail, k, p);
				}
			while (Dhead != NULL)
			{
				int k, p; int schet = 0;
				Dhead = Dpop(Dhead, &Dtail, &k, &p);
				int dam1 = k, dam2 = p;
				if (polana[k + 1][p + 1] == '_' && k < 7 && p < 7)
					while (polana[dam1 + 1][dam2 + 1] != chern || polana[dam1 + 1][dam2 + 1] != damkach || polana[dam1 + 1][dam2 + 1] != bel || polana[dam1 + 1][dam2 + 1] != damkab || (dam1 + 1 >= 0 && dam1 + 1 <= 7) || (dam2 + 1 >= 0 && dam2 + 1 <= 7))
					{
						if ((polana[dam1 + 1][dam2 + 1] == bel || polana[dam1 + 1][dam2 + 1] == damkab) && polana[dam1 + 2][dam2 + 2] == '_')
						{
							polana[k][p] = '_';
							polana[dam1 + 1][dam2 + 1] = '_';
							polana[dam1 + 2][dam2 + 2] = damkach;
							a = 1;
							goto DALSH;
						}
						if (polana[dam1 + 1][dam2 + 1] == chern || polana[dam1 + 1][dam2 + 1] == damkach)
						{
							dam1 = k;
							dam2 = p;
							break;
						}
						dam1++;
						dam2++;
						if (dam1 == 7 || dam2 == 7)
						{
							dam1 = k;
							dam2 = p;
							break;

						}
					}
				if (polana[k + 1][p - 1] == '_' && k < 7 && p>0)
					while (polana[dam1 + 1][dam2 - 1] != chern || polana[dam1 + 1][dam2 - 1] != damkach || polana[dam1 + 1][dam2 - 1] != bel || polana[dam1 + 1][dam2 - 1] != damkab || (dam1 + 1 >= 0 && dam1 + 1 <= 7) || (dam2 - 1 >= 0 && dam2 - 1 <= 7))
					{
						if ((polana[dam1 + 1][dam2 - 1] == bel || polana[dam1 + 1][dam2 - 1] == damkab) && polana[dam1 + 2][dam2 - 2] == '_')
						{
							polana[k][p] = '_';
							polana[dam1 + 1][dam2 - 1] = '_';
							polana[dam1 + 2][dam2 - 2] = damkach;
							a = 1;
							goto DALSH;
						}
						if (polana[dam1 + 1][dam2 - 1] == chern || polana[dam1 + 1][dam2 - 1] == damkach)
						{
							dam1 = k;
							dam2 = p;
							break;
						}
						dam1++;
						dam2--;
						if (dam1 == 7 || dam2 == 0)
						{
							dam1 = k;
							dam2 = p;
							break;
						}
					}
				if (polana[k - 1][p + 1] == '_' && k > 0 && p < 7)
					while (polana[dam1 - 1][dam2 + 1] != chern || polana[dam1 - 1][dam2 + 1] != damkach || polana[dam1 - 1][dam2 + 1] != bel || polana[dam1 - 1][dam2 + 1] != damkab || (dam1 - 1 >= 0 && dam1 - 1 <= 7) || (dam2 + 1 >= 0 && dam2 + 1 <= 7))
					{
						if ((polana[dam1 - 1][dam2 + 1] == bel || polana[dam1 - 1][dam2 + 1] == damkab) && polana[dam1 - 2][dam2 + 2] == '_')
						{
							polana[k][p] = '_';
							polana[dam1 - 1][dam2 + 1] = '_';
							polana[dam1 - 2][dam2 + 2] = damkach;
							a = 1;
							goto DALSH;
						}
						if (polana[dam1 - 1][dam2 + 1] == chern || polana[dam1 - 1][dam2 + 1] == damkach)
						{
							dam1 = k;
							dam2 = p;
							break;
						}
						dam1--;
						dam2++;
						if (dam1 == 0 || dam2 == 7)
						{
							dam1 = k;
							dam2 = p;
							break;
						}
					}
				if (polana[k - 1][p - 1] == '_' && k > 0 && p > 0)
					while (polana[dam1 - 1][dam2 - 1] != chern || polana[dam1 - 1][dam2 - 1] != damkach || polana[dam1 - 1][dam2 - 1] != bel || polana[dam1 - 1][dam2 - 1] != damkab || (dam1 - 1 >= 0 && dam1 - 1 <= 7) || (dam2 - 1 >= 0 && dam2 - 1 <= 7))
					{
						if ((polana[dam1 - 1][dam2 - 1] == bel || polana[dam1 - 1][dam2 - 1] == damkab) && polana[dam1 - 2][dam2 - 2] == '_')
						{
							polana[k][p] = '_';
							polana[dam1 - 1][dam2 - 1] = '_';
							polana[dam1 - 2][dam2 - 2] = damkach;
							a = 1;
							goto DALSH;
						}
						if (polana[dam1 - 1][dam2 - 1] == chern || polana[dam1 - 1][dam2 - 1] == damkach)
						{
							dam1 = k;
							dam2 = p;
							break;
						}
						dam1--;
						dam2--;
						if (dam1 == 0 || dam2 == 0)
						{
							dam1 = k;
							dam2 = p;
							break;
						}
					}
			}

		DALSH:
			while (Dhead != NULL)
			{
				int k, p; int schet = 0;
				Dhead = Dpop(Dhead, &Dtail, &k, &p);
			}

			if (a == 0)
			{
				for (int k = 7; k >= 0; k--)
					for (int p = 0; p < 8; p++)
					{
						if (polana[k][p] == chern)
							tail = push(&head, tail, k, p);
					}
				int komp1 = 0, komp2 = 0;
				while (head != NULL)
				{
					int k, p;
					head = pop(head, &tail, &k, &p);
				
					if (polana[k - 1][p - 1] == bel || polana[k - 1][p - 1] == damkab)
						if (polana[k - 2][p - 2] == '_' && k - 2 >= 0 && p - 2 >= 0 && k - 2 < 8 && p - 2 < 8)
						{
							polana[k - 2][p - 2] = chern;
							polana[k - 1][p - 1] = '_'; a = 1;
							polana[k][p] = '_';
							ebl = 1;
						}
					if (polana[k + 1][p + 1] == bel || polana[k + 1][p + 1] == damkab)
						if (polana[k + 2][p + 2] == '_' && k + 2 >= 0 && p + 2 >= 0 && k + 2 < 8 && p + 2 < 8)
						{
							polana[k + 2][p + 2] = chern;
							polana[k + 1][p + 1] = '_'; a = 1;
							polana[k][p] = '_';
							ebl = 1;
						}
					if (polana[k - 1][p + 1] == bel || polana[k - 1][p + 1] == damkab)
						if (polana[k - 2][p + 2] == '_' && k - 2 >= 0 && p + 2 >= 0 && k - 2 < 8 && p + 2 < 8)
						{
							polana[k - 2][p + 2] = chern;
							polana[k - 1][p + 1] = '_'; a = 1;
							polana[k][p] = '_';
							ebl = 1;
						}
					if (polana[k + 1][p - 1] == bel || polana[k + 1][p - 1] == damkab)
						if (polana[k + 2][p - 2] == '_' && k + 2 >= 0 && p - 2 >= 0 && k + 2 < 8 && p - 2 < 8)
						{
							polana[k + 2][p - 2] = chern;
							polana[k + 1][p - 1] = '_'; a = 1;
							polana[k][p] = '_';
							ebl = 1;
						}
				}
				if (a == 1)
					goto B;
				if (ebl == 1)
					a = 1;

			}
			if (ebl == 1)
				a = 1;
			if (a == 0 && srub == 0)
				for (int k = 0; k <= 7; k++)
				{
					for (int p = 7; p >= 0; p--)//ХОД!
					{
						if (polana[k][p] == chern)
						{
							if (polana[k - 1][p - 1] == '_' && k - 1 >= 0 && k - 1 < 8 && p - 1 >= 0 && p - 1 < 8 && (polana[k - 2][p - 2] == '_' || polana[k - 2][p - 2] == chern) && (polana[k - 2][p] == '_' || polana[k - 2][p] == chern) && (polana[k][p - 2] == '_' || polana[k][p - 2] == chern))
							{
								polana[k - 1][p - 1] = chern;
								polana[k][p] = '_';
								srub = 1;
								a = 1;
								break;
							}
							if (polana[k - 1][p + 1] == '_' && k - 1 >= 0 && k - 1 < 8 && p + 1 >= 0 && p + 1 < 8 && (polana[k - 2][p + 2] == '_' || polana[k - 2][p + 2] == chern) && (polana[k - 2][p] == '_' || polana[k - 2][p] == chern) && (polana[k][p + 2] == '_' || polana[k][p + 2] == chern))
							{
								polana[k - 1][p + 1] = chern;
								polana[k][p] = '_';
								srub = 1;
								a = 1;
								break;
							}
						}
					}
					if (a == 1)
						break;
				}
			if (a == 0 && srub == 0)
				for (int k = 0; k <= 7; k++)
				{
					for (int p = 7; p >= 0; p--)
					{
						if (polana[k][p] == chern)
						{
							if (polana[k - 1][p - 1] == '_' && k - 1 >= 0 && k - 1 < 8 && p - 1 >= 0 && p - 1 < 8)
							{
								polana[k - 1][p - 1] = chern;
								polana[k][p] = '_';
								srub = 1;
								a = 1;
								break;
							}
							if (polana[k - 1][p + 1] == '_' && k - 1 >= 0 && k - 1 < 8 && p + 1 >= 0 && p + 1 < 8)
							{
								polana[k - 1][p + 1] = chern;
								polana[k][p] = '_';
								srub = 1;
								a = 1;
								break;
							}
						}
					}
					if (a == 1)
						break;
				}


			if (polana[7][1] == bel)
				polana[7][1] = damkab;
			if (polana[7][3] == bel)
				polana[7][3] = damkab;
			if (polana[7][5] == bel)
				polana[7][5] = damkab;
			if (polana[7][7] == bel)
				polana[7][7] = damkab;
			if (polana[0][0] == chern)
				polana[0][0] = damkach;
			if (polana[0][2] == chern)
				polana[0][2] = damkach;
			if (polana[0][4] == chern)
				polana[0][4] = damkach;
			if (polana[0][6] == chern)
				polana[0][6] = damkach;

			pole();


			//if (a == 0)  //////////////////////////////////////////////// ХОД ДАМКИ ЕСЛИ НЕТ ХОДОВ БОЛЬШЕ
			//{
			//	for (int k = 0; k <= 7; k++)
			//		for (int p = 7; p >= 0; p--)
			//		{
			//			if (polana[k][p] == damkach)
			//			{




			//			}

			//		}




			//}


			if (a == 0)              /////////////////////////////////////////////// 1 условие победы
			{
				pole();
				printf("\nБЕЛЫЕ ПОБЕДИЛИ!!!");
				_getch();
				return 0;
			}
			int kolbel = 0; int kolchern = 0;
			for (int w = 0; w < 8; w++)
				for (int y = 0; y < 8; y++)
				{
					if (polana[w][y] == bel || polana[w][y] == damkab)
						kolbel++;
					if (polana[w][y] == chern || polana[w][y] == damkach)
						kolchern++;
				}
			if (kolbel == 0)
			{
				printf("\nЧЕРНЫЕ ПОБЕДИЛИ!!!");
				_getch();
				return 0;
			}
			if (kolchern == 0)
			{
				printf("\nБЕЛЫЕ ПОБЕДИЛИ!!!");
				_getch();
				return 0;
			}
		}
		break;
	}
	case 3: ///////////////////////////////ЗАГРУЗКА ИГРЫ
	{
		load = fopen("Moves.txt", "r");
		if (load == NULL)
		{
			printf("Файл пуст!");
			_getch();
			return 0;
		}

		for (int k = 0; k < 8; k++)
			for (int p = 0; p < 8; p++)
				polana[k][p] = fgetc(load);
		fclose(load);



		int chet = 0;
		system("cls");

		printf("Для сохранения в файл введите 00\n");
		printf("Если вы хотите отменить выбор шашки, нажмите 77\n");
		pole();

		while (1)
		{
			int k1 = 0, k2 = 0;
			char mas1[2]; char mas2[2];
		LCHEL:
			int srub1[4] = { -1,-1,-1,-1 }, srub2[4] = { -1,-1,-1,-1 }; int u = 0; int b = 0; int srubili = 0;


			chet = 0;
			for (int k = 7; k >= 0; k--)
				for (int p = 0; p < 8; p++)
				{
					if (polana[k][p] == damkab)
						Btail = Bpush(&Bhead, Btail, k, p);
				}
			while (Bhead != NULL)
			{
				int k, p; int schet = 0; char string[2];
				Bhead = Bpop(Bhead, &Btail, &k, &p);
				int dam1 = k, dam2 = p;
				if (polana[k + 1][p + 1] == '_' && k < 7 && p < 7)
					while (polana[dam1 + 1][dam2 + 1] != chern || polana[dam1 + 1][dam2 + 1] != damkach || polana[dam1 + 1][dam2 + 1] != bel || polana[dam1 + 1][dam2 + 1] != damkab || (dam1 + 1 >= 0 && dam1 + 1 <= 7) || (dam2 + 1 >= 0 && dam2 + 1 <= 7))
					{
						if ((polana[dam1 + 1][dam2 + 1] == chern || polana[dam1 + 1][dam2 + 1] == damkach) && polana[dam1 + 2][dam2 + 2] == '_' && dam1 + 2<8 && dam2 + 2<8)
						{
							srub1[chet] = k;
							srub2[chet] = p;
							chet++;
						}
						if (polana[dam1 + 1][dam2 + 1] == bel || polana[dam1 + 1][dam2 + 1] == damkab)
						{
							dam1 = k;
							dam2 = p;
							break;
						}
						dam1++;
						dam2++;
						if (dam1 == 7 || dam2 == 7)
						{
							dam1 = k;
							dam2 = p;
							break;

						}
					}
				if (polana[k + 1][p - 1] == '_' && k < 7 && p>0)
					while (polana[dam1 + 1][dam2 - 1] != chern || polana[dam1 + 1][dam2 - 1] != damkach || polana[dam1 + 1][dam2 - 1] != bel || polana[dam1 + 1][dam2 - 1] != damkab || (dam1 + 1 >= 0 && dam1 + 1 <= 7) || (dam2 - 1 >= 0 && dam2 - 1 <= 7))
					{
						if ((polana[dam1 + 1][dam2 - 1] == chern || polana[dam1 + 1][dam2 - 1] == damkach) && polana[dam1 + 2][dam2 - 2] == '_'  && dam1 + 2<8 && dam2 - 2>-1)
						{
							srub1[chet] = k;
							srub2[chet] = p;
							chet++;
						}
						if (polana[dam1 + 1][dam2 - 1] == bel || polana[dam1 + 1][dam2 - 1] == damkab)
						{
							dam1 = k;
							dam2 = p;
							break;
						}
						dam1++;
						dam2--;
						if (dam1 == 7 || dam2 == 0)
						{
							dam1 = k;
							dam2 = p;
							break;
						}
					}
				if (polana[k - 1][p + 1] == '_' && k > 0 && p < 7)
					while (polana[dam1 - 1][dam2 + 1] != chern || polana[dam1 - 1][dam2 + 1] != damkach || polana[dam1 - 1][dam2 + 1] != bel || polana[dam1 - 1][dam2 + 1] != damkab || (dam1 - 1 >= 0 && dam1 - 1 <= 7) || (dam2 + 1 >= 0 && dam2 + 1 <= 7))
					{
						if ((polana[dam1 - 1][dam2 + 1] == chern || polana[dam1 - 1][dam2 + 1] == damkach) && polana[dam1 - 2][dam2 + 2] == '_'  && dam1 - 2>-1 && dam2 + 2<8)
						{
							srub1[chet] = k;
							srub2[chet] = p;
							chet++;
						}
						if (polana[dam1 - 1][dam2 + 1] == bel || polana[dam1 - 1][dam2 + 1] == damkab)
						{
							dam1 = k;
							dam2 = p;
							break;
						}
						dam1--;
						dam2++;
						if (dam1 == 0 || dam2 == 7)
						{
							dam1 = k;
							dam2 = p;
							break;
						}
					}
				if (polana[k - 1][p - 1] == '_' && k > 0 && p > 0)
					while (polana[dam1 - 1][dam2 - 1] != chern || polana[dam1 - 1][dam2 - 1] != damkach || polana[dam1 - 1][dam2 - 1] != bel || polana[dam1 - 1][dam2 - 1] != damkab || (dam1 - 1 >= 0 && dam1 - 1 <= 7) || (dam2 - 1 >= 0 && dam2 - 1 <= 7))
					{
						if ((polana[dam1 - 1][dam2 - 1] == chern || polana[dam1 - 1][dam2 - 1] == damkach) && polana[dam1 - 2][dam2 - 2] == '_'  && dam1 - 2 > -1 && dam2 - 2 > -1)
						{
							srub1[chet] = k;
							srub2[chet] = p;
							chet++;
						}
						if (polana[dam1 - 1][dam2 - 1] == bel || polana[dam1 - 1][dam2 - 1] == damkab)
						{
							dam1 = k;
							dam2 = p;
							break;
						}
						dam1--;
						dam2--;
						if (dam1 == 0 || dam2 == 0)
						{
							dam1 = k;
							dam2 = p;
							break;
						}
					}
			}

			u = chet;

			for (int k = 7; k >= 0; k--)
				for (int p = 0; p < 8; p++)
				{
					if (polana[k][p] == bel)
						Ctail = Cpush(&Chead, Ctail, k, p);
				}
			while (Chead != NULL)
			{
				int k, p;
				Chead = Cpop(Chead, &Ctail, &k, &p);
				if (polana[k - 1][p - 1] == chern || polana[k - 1][p - 1] == damkach)
					if (polana[k - 2][p - 2] == '_' && k - 2>-1 && p - 2>-1)
					{
						srub1[u] = k; srub2[u] = p; u++;
					}
				if (polana[k + 1][p + 1] == chern || polana[k + 1][p + 1] == damkach)
					if (polana[k + 2][p + 2] == '_' && k + 2<8 && p + 2<8)
					{
						srub1[u] = k; srub2[u] = p; u++;
					}
				if (polana[k - 1][p + 1] == chern || polana[k - 1][p + 1] == damkach)
					if (polana[k - 2][p + 2] == '_' && k - 2>-1 && p + 2<8)
					{
						srub1[u] = k; srub2[u] = p; u++;
					}
				if (polana[k + 1][p - 1] == chern || polana[k + 1][p - 1] == damkach)
					if (polana[k + 2][p - 2] == '_' && k + 2<8 && p - 2>-1)
					{
						srub1[u] = k; srub2[u] = p; u++;
					}
			}
			if (eshe == 0)
				for (int o = 0; o < 4; o++)
				{
					if (srub1[o] == xod2 && srub2[o] == xod1)
					{
						kal = 1;
						break;
					}
					if (srub1[o] == -1 && srub2[o] == -1)
						goto LD;

				}

			char bukvi[4] = { '\0' };
			if (u != 0)
			{
				u = 0;
				if (sovp == 2)
					goto LD;
				printf("Шашки, которые должны рубить:\n");
				char string[2];
				if (kal == 1)
				{
					if (xod1 == 0)
						string[0] = 'a';
					if (xod1 == 1)
						string[0] = 'b';
					if (xod1 == 2)
						string[0] = 'c';
					if (xod1 == 3)
						string[0] = 'd';
					if (xod1 == 4)
						string[0] = 'e';
					if (xod1 == 5)
						string[0] = 'f';
					if (xod1 == 6)
						string[0] = 'g';
					if (xod1 == 7)
						string[0] = 'h';
					printf("%c%i", string[0], xod2 + 1);
				}
				else
					while (u != 4 && srub1[u] != -1)
					{
						if (srub2[u] == 0 && sovp == 0)
						{
							printf("a%i ", srub1[u] + 1);
							bukvi[u] = 'a';
						}
						if (srub2[u] == 1 && sovp == 0)
						{
							printf("b%i ", srub1[u] + 1);
							bukvi[u] = 'b';
						}
						if (srub2[u] == 2 && sovp == 0)
						{
							printf("c%i ", srub1[u] + 1);
							bukvi[u] = 'c';
						}
						if (srub2[u] == 3 && sovp == 0)
						{
							printf("d%i ", srub1[u] + 1);
							bukvi[u] = 'd';
						}
						if (srub2[u] == 4 && sovp == 0)
						{
							printf("e%i ", srub1[u] + 1);
							bukvi[u] = 'e';
						}
						if (srub2[u] == 5 && sovp == 0)
						{
							printf("f%i ", srub1[u] + 1);
							bukvi[u] = 'f';
						}
						if (srub2[u] == 6 && sovp == 0)
						{
							printf("g%i ", srub1[u] + 1);
							bukvi[u] = 'g';
						}
						if (srub2[u] == 7 && sovp == 0)
						{
							printf("h%i ", srub1[u] + 1);
							bukvi[u] = 'h';
						}
						for (int r = 1; r < 4; r++)
						{
							if (srub2[0] == srub2[r])
								for (int t = 1; t < 4; t++)
									if (srub1[0] == srub1[t])
										sovp = 1;
						}
						u++;
					}
				if (sovp == 1)
					sovp = 2;
			LPEREVIBOR:
				printf("\nВведите координаты шашки для хода:\n");
				scanf_s("%s", &vibor, 20);
				if (vibor[0] == '0' && vibor[1] == '0' && vibor[2] == '\0')
				{
					load = fopen("Moves.txt", "w");
					for (int k = 0; k < 8; k++)
						for (int p = 0; p < 8; p++)
							fputc(polana[k][p], load);
					fclose(load);
					printf("Игра сохранена!!!\n");
					goto LPEREVIBOR;
				}
				tr = 0; char n[1]; char m[1];
				int q = 0;
			LKUDA:
				while (tr == 0)
				{
					if (vibor[2] != '\0')
					{
						printf("Введите правильные координаты!!!\n");
						scanf_s("%s", &vibor, 20);
						goto LKUDA;
					}
					for (q = 0; q < 4; q++)
					{
						if (vibor[0] == bukvi[q] || vibor[0] == string[0])
						{
							n[0] = vibor[1];
							if (atoi(n) - 1 == srub1[q] && vibor[2] == '\0')
							{
								if (kal == 1)
									if (xod2 == atoi(n) - 1 && string[0] == vibor[0])
									{
										tr = 1;
										goto C;
									}
									else
									{
										printf("Введите правильные координаты!!!\n");
										scanf_s("%s", &vibor, 20);
										goto LKUDA;
									}
								tr = 1;
								m[0] = vibor[0];
								forch1 = atoi(n) - 1;
								forch2 = m[0] - 97;
								goto LC;
							}
							else
							{
								printf("Введите правильные координаты!!!\n");
								scanf_s("%s", &vibor, 20);
							}

						}
						else
						{
							if (bukvi[q + 1] == -1)
							{
								printf("Введите правильные координаты!!!\n");
								scanf_s("%s", &vibor, 20);
							}
							char n[1]; vibor[0]; int g = 0; n[0] = vibor[1]; int gogo = atoi(n) - 1;
							for (int b = 0; b < 4; b++)
							{
								if (vibor[0] != bukvi[b] || gogo != srub1[b])
									g++;
							}
							if (g == 4)
							{
								printf("Введите правильные координаты!!!\n");
								scanf_s("%s", &vibor, 20);
							}
						}
					}
				}
			LC:
				tr = 0;
				while (tr == 0)
				{
					printf("Введите координаты, куда встанет шашка\n");
					scanf_s("%s", &vibor, 20);
					mas1[0] = vibor[0];
					mas2[0] = vibor[1];
					if (vibor[0] == '7' && vibor[1] == '7' && vibor[2] == '\0')
						goto LPEREVIBOR;
					if (vibor[2] != '\0')
					{
						printf("Введите правильные координаты!\n");
						goto LC;
					}
					k2 = atoi(mas2);
					if (mas1[0] == 'a')
						k1 = 1;
					if (mas1[0] == 'b')
						k1 = 2;
					if (mas1[0] == 'c')
						k1 = 3;
					if (mas1[0] == 'd')
						k1 = 4;
					if (mas1[0] == 'e')
						k1 = 5;
					if (mas1[0] == 'f')
						k1 = 6;
					if (mas1[0] == 'g')
						k1 = 7;
					if (mas1[0] == 'h')
						k1 = 8;
					k1--; k2--;
					if (k1 >= 0 && (k2 == 1 || k2 == 2 || k2 == 3 || k2 == 4 || k2 == 5 || k2 == 6 || k2 == 7 || k2 == 0))
					{
						if (polana[k2 + 2][k1 + 2] == bel && b != 1)
						{
							for (u = 0; u < 4; u++)
								if (srub2[u] == k1 + 2 && srub1[u] == k2 + 2)
								{

									polana[k2 + 2][k1 + 2] = '_';
									polana[k2][k1] = bel;
									polana[k2 + 1][k1 + 1] = '_';
									xod1 = k1;
									xod2 = k2;
									eshe = 0;
									tr = 1;
									b = 1;
									srubili = 1;
									break;
								}
						}
						if (polana[k2 + 2][k1 - 2] == bel && b != 1)
						{
							for (u = 0; u < 4; u++)
								if (srub2[u] == k1 - 2 && srub1[u] == k2 + 2)
								{
									polana[k2 + 2][k1 - 2] = '_';
									polana[k2][k1] = bel;
									polana[k2 + 1][k1 - 1] = '_';
									xod1 = k1;
									xod2 = k2;
									eshe = 0;
									tr = 1;
									b = 1;
									srubili = 1;
									break;
								}
						}
						if (polana[k2 - 2][k1 - 2] == bel && b != 1)
						{
							for (u = 0; u < 4; u++)
								if (srub2[u] == k1 - 2 && srub1[u] == k2 - 2)
								{
									polana[k2 - 2][k1 - 2] = '_';
									polana[k2][k1] = bel;
									polana[k2 - 1][k1 - 1] = '_';
									xod1 = k1;
									xod2 = k2;
									eshe = 0;
									tr = 1;
									b = 1;
									srubili = 1;
									break;
								}
						}
						if (polana[k2 - 2][k1 + 2] == bel && b != 1)
						{
							for (u = 0; u < 4; u++)
								if (srub2[u] == k1 + 2 && srub1[u] == k2 - 2)
								{
									polana[k2 - 2][k1 + 2] = '_';
									polana[k2][k1] = bel;
									polana[k2 - 1][k1 + 1] = '_';
									xod1 = k1;
									xod2 = k2;
									eshe = 0;
									tr = 1;
									b = 1;
									srubili = 1;
									break;
								}
						}
						if (polana[k2][k1] == '_')
						{
							int dam1 = k2, dam2 = k1; int chernkol = 0;
							if (forch1 > dam1 && forch2 > dam2)
							{
								while (polana[dam1][dam2] != polana[forch1][forch2])
								{
									if (polana[dam1][dam2] == bel || polana[dam1][dam2] == damkab)
									{
										printf("НЕПРАВИЛЬНЫЕ КООРД.\n");
										goto LC;
									}
									if (polana[dam1][dam2] == chern || polana[dam1][dam2] == damkach)
										chernkol++;
									dam1++;
									dam2++;
								}
								if (chernkol != 1)
								{
									printf("НЕПРАВИЛЬНЫЕ КООРД.\n");
									goto LC;
								}
								else
								{
									while (dam1 != k2 && dam2 != k1)
									{
										polana[dam1][dam2] = '_';
										dam1--;
										dam2--;
									}
									polana[dam1][dam2] = damkab;
									srubili = 1;
									tr = 1;
									b = 1;
									break;
								}
							}
							if (forch1 > dam1 && forch2 < dam2)
							{
								while (polana[dam1][dam2] != polana[forch1][forch2])
								{
									if (polana[dam1][dam2] == bel || polana[dam1][dam2] == damkab)
									{
										printf("НЕПРАВИЛЬНЫЕ КООРД.\n");
										goto LC;
									}
									if (polana[dam1][dam2] == chern || polana[dam1][dam2] == damkach)
										chernkol++;
									dam1--;
									dam2++;
								}
								if (chernkol != 1)
								{
									printf("НЕПРАВИЛЬНЫЕ КООРД.\n");
									goto LC;
								}
								else
								{
									while (dam1 != k2 && dam2 != k1)
									{
										polana[dam1][dam2] = '_';
										dam1++;
										dam2--;
									}
									polana[dam1][dam2] = damkab;
									srubili = 1; tr = 1;
									b = 1;
									break;
								}
							}
							if (forch1 < dam1 && forch2 < dam2)
							{
								while (polana[dam1][dam2] != polana[forch1][forch2])
								{
									if (polana[dam1][dam2] == bel || polana[dam1][dam2] == damkab)
									{
										printf("НЕПРАВИЛЬНЫЕ КООРД.\n");
										goto LC;
									}
									if (polana[dam1][dam2] == chern || polana[dam1][dam2] == damkach)
										chernkol++;
									dam1--;
									dam2--;
								}
								if (chernkol != 1)
								{
									printf("НЕПРАВИЛЬНЫЕ КООРД.\n");
									goto LC;
								}
								else
								{
									while (dam1 != k2 && dam2 != k1)
									{
										polana[dam1][dam2] = '_';
										dam1++;
										dam2++;
									}
									polana[dam1][dam2] = damkab;
									srubili = 1;
									tr = 1;
									b = 1;
									break;
								}
							}
							if (forch1< dam1 && forch2 > dam2)
							{
								while (polana[dam1][dam2] != polana[forch1][forch2])
								{
									if (polana[dam1][dam2] == bel || polana[dam1][dam2] == damkab)
									{
										printf("НЕПРАВИЛЬНЫЕ КООРД.\n");
										goto LC;
									}
									if (polana[dam1][dam2] == chern || polana[dam1][dam2] == damkach)
										chernkol++;
									dam1--;
									dam2++;
								}
								if (chernkol != 1)
								{
									printf("НЕПРАВИЛЬНЫЕ КООРД.\n");
									goto LC;
								}
								else
								{
									while (dam1 != k2 && dam2 != k1)
									{
										polana[dam1][dam2] = '_';
										dam1++;
										dam2--;
									}
									polana[dam1][dam2] = damkab;
									srubili = 1;
									tr = 1;
									b = 1;
									break;
								}
							}
						}
					}

				}
				pole();
				if (b == 1)
					goto LCHEL;
				//goto D;
			}
			else
			{
				if (srubili == 1)
				{
					srubili = 0;
					goto LD;
				}
			}


		LA:
			printf("Введите координаты шашки для хода:\n");
			scanf_s("%s", &vibor, 20);
			tr = 0;
			if (vibor[0] == '0' && vibor[1] == '0' && vibor[2] == '\0')
			{
				load = fopen("Moves.txt", "w");
				for (int k = 0; k < 8; k++)
					for (int p = 0; p < 8; p++)
						fputc(polana[k][p], load);
				printf("Игра сохранена!!!\n");
				fclose(load);
				goto LA;
			}
			while (tr == 0)
			{
				mas1[0] = vibor[0];
				mas2[0] = vibor[1];
				k2 = atoi(mas2);
				if (mas1[0] == 'a')
					k1 = 1;
				if (mas1[0] == 'b')
					k1 = 2;
				if (mas1[0] == 'c')
					k1 = 3;
				if (mas1[0] == 'd')
					k1 = 4;
				if (mas1[0] == 'e')
					k1 = 5;
				if (mas1[0] == 'f')
					k1 = 6;
				if (mas1[0] == 'g')
					k1 = 7;
				if (mas1[0] == 'h')
					k1 = 8;
				if (vibor[2] != '\0')
				{
					printf("Введите правильные координаты!!!\n");
					goto LA;
				}
				if (k1 != 0 && (k2 == 1 || k2 == 2 || k2 == 3 || k2 == 4 || k2 == 5 || k2 == 6 || k2 == 7 || k2 == 8) && ((polana[k2 - 1][k1 - 1] == bel) || (polana[k2 - 1][k1 - 1] == damkab)))
				{
					k1--;
					k2--;
					tr = 1;
				}
				else
				{
					printf("Введите правильные координаты!!!\n");
					scanf_s("%s", &vibor, 20);
				}
			}
		LVVOD:
			printf("Введите коорднаты клетки, куда встанет ваша шашка:\n");
			int kuda1 = -1, kuda2 = -1;
			scanf_s("%s", &vibor, 20);
			if (vibor[0] == '7' && vibor[1] == '7' && vibor[2] == '\0')
			{
				goto LA;
			}
			if (vibor[2] != '\0')
			{
				printf("Введите правильные координаты!!!\n");
				goto LVVOD;
			}
			tr = 0;
			while (tr == 0)
			{
				if (polana[k2][k1] == damkab)                    /////////////////////////////////////////// ДАМКИ
				{
					mas1[0] = vibor[0];
					mas2[0] = vibor[1];
					kuda2 = atoi(mas2) - 1;
					if (mas1[0] >= 'a' && mas1[0] <= 'h')
						kuda1 = mas1[0] - 97;
					else
					{
						printf("НЕПРАВИЛЬНЫЕ КООРД.\n");
						goto LVVOD;
					}
					if (kuda1 != -1 && (kuda2 >= 0 && kuda2 <= 7) && (polana[kuda2][kuda1] == '_'))
					{
						int diag1 = kuda1; int diag2 = kuda2;
						if (kuda1 > k1 && kuda2 > k2)
						{
							diag1--;
							diag2--;
							while (diag1 != k1 && diag2 != k2)
							{
								if (diag1 < 0 || diag2 < 0)
								{
									printf("НЕПРАВИЛЬНЫЕ КООРД.\n");
									goto LVVOD;
								}
								if (polana[diag2][diag1] != '_')
								{
									printf("НЕПРАВИЛЬНЫЕ КООРД.\n");
									goto LVVOD;
								}
								diag1--;
								diag2--;
							}
						}
						if (kuda1 < k1 && kuda2 < k2)
						{
							diag1++;
							diag2++;
							while (diag1 != k1 && diag2 != k2)
							{
								if (diag1 > 7 || diag2 > 7)
								{
									printf("НЕПРАВИЛЬНЫЕ КООРД.\n");
									goto LVVOD;
								}
								if (polana[diag2][diag1] != '_')
								{
									printf("НЕПРАВИЛЬНЫЕ КООРД.\n");
									goto LVVOD;
								}
								diag1++;
								diag2++;
							}
						}
						if (kuda1 > k1 && kuda2 < k2)
						{
							diag1--;
							diag2++;
							while (diag1 != k1 && diag2 != k2)
							{
								if (diag1 < 0 || diag2 > 7)
								{
									printf("НЕПРАВИЛЬНЫЕ КООРД.\n");
									goto LVVOD;
								}
								if (polana[diag2][diag1] != '_')
								{
									printf("НЕПРАВИЛЬНЫЕ КООРД.\n");
									goto LVVOD;
								}
								diag1--;
								diag2++;
							}
						}
						if (kuda1 < k1 && kuda2 > k2)
						{
							diag1++;
							diag2--;
							while (diag1 != k1 && diag2 != k2)
							{
								if (diag1 > 7 || diag2 < 0)
								{
									printf("НЕПРАВИЛЬНЫЕ КООРД.\n");
									goto LVVOD;
								}
								if (polana[diag2][diag1] != '_')
								{
									printf("НЕПРАВИЛЬНЫЕ КООРД.\n");
									goto LVVOD;
								}
								diag1++;
								diag2--;
							}
						}
						if (check(kuda2, kuda1) == 0)
						{
							printf("НЕПРАВИЛЬНЫЕ КООРД.\n");
							goto LVVOD;
						}
						polana[k2][k1] = '_';
						polana[kuda2][kuda1] = damkab;

						pole();
						goto LD;
					}
					else
					{
						printf("НЕПРАВИЛЬНЫЕ КООРД.\n");
						goto LVVOD;
					}
				}
				mas1[0] = vibor[0];
				mas2[0] = vibor[1];
				kuda2 = atoi(mas2) - 1;
				if (mas1[0] >= 'a' && mas1[0] <= 'h') kuda1 = mas1[0] - 97;
				if (kuda1 != -1 && (kuda2 >= 0 && kuda2 <= 7) && (((kuda1 == k1 + 1) || (kuda1 == k1 - 1)) && (kuda2 == k2 + 1)) && (polana[kuda2][kuda1] == '_'))
				{
					tr = 1;
				}
				else
				{
					printf("Введите правильные координаты!!!\n");
					printf("Если вы хотите отменить выбор шашки, нажмите 77\n");
					scanf_s("%s", &vibor, 20);
					if (vibor[0] == '7' && vibor[1] == '7' && vibor[2] == '\0')
					{
						goto LA;
					}
				}
			}
			polana[k2][k1] = '_';
			b = 1;
			polana[kuda2][kuda1] = bel;
			system("cls");
			pole();








		LD:
			int ebl = 0; sovp = 0; eshe = 0; xod1 = -1; xod2 = -1; kal = 0;
		LB:
			//  Комп

			int a = 0;
			if (polana[7][1] == bel)
				polana[7][1] = damkab;
			if (polana[7][3] == bel)
				polana[7][3] = damkab;
			if (polana[7][5] == bel)
				polana[7][5] = damkab;
			if (polana[7][7] == bel)
				polana[7][7] = damkab;
			if (polana[0][0] == chern)
				polana[0][0] = damkach;
			if (polana[0][2] == chern)
				polana[0][2] = damkach;
			if (polana[0][4] == chern)
				polana[0][4] = damkach;
			if (polana[0][6] == chern)
				polana[0][6] = damkach;


			for (int k = 7; k >= 0; k--) ////////////////////////////////////ДАМКИ ОТ КОМПА
				for (int p = 0; p < 8; p++)
				{
					if (polana[k][p] == damkach)
						Dtail = Dpush(&Dhead, Dtail, k, p);
				}
			while (Dhead != NULL)
			{
				int k, p; int schet = 0;
				Dhead = Dpop(Dhead, &Dtail, &k, &p);
				int dam1 = k, dam2 = p;
				if (polana[k + 1][p + 1] == '_' && k < 7 && p < 7)
					while (polana[dam1 + 1][dam2 + 1] != chern || polana[dam1 + 1][dam2 + 1] != damkach || polana[dam1 + 1][dam2 + 1] != bel || polana[dam1 + 1][dam2 + 1] != damkab || (dam1 + 1 >= 0 && dam1 + 1 <= 7) || (dam2 + 1 >= 0 && dam2 + 1 <= 7))
					{
						if ((polana[dam1 + 1][dam2 + 1] == bel || polana[dam1 + 1][dam2 + 1] == damkab) && polana[dam1 + 2][dam2 + 2] == '_')
						{
							polana[k][p] = '_';
							polana[dam1 + 1][dam2 + 1] = '_';
							polana[dam1 + 2][dam2 + 2] = damkach;
							a = 1;
							goto LDALSH;
						}
						if (polana[dam1 + 1][dam2 + 1] == chern || polana[dam1 + 1][dam2 + 1] == damkach)
						{
							dam1 = k;
							dam2 = p;
							break;
						}
						dam1++;
						dam2++;
						if (dam1 == 7 || dam2 == 7)
						{
							dam1 = k;
							dam2 = p;
							break;

						}
					}
				if (polana[k + 1][p - 1] == '_' && k < 7 && p>0)
					while (polana[dam1 + 1][dam2 - 1] != chern || polana[dam1 + 1][dam2 - 1] != damkach || polana[dam1 + 1][dam2 - 1] != bel || polana[dam1 + 1][dam2 - 1] != damkab || (dam1 + 1 >= 0 && dam1 + 1 <= 7) || (dam2 - 1 >= 0 && dam2 - 1 <= 7))
					{
						if ((polana[dam1 + 1][dam2 - 1] == bel || polana[dam1 + 1][dam2 - 1] == damkab) && polana[dam1 + 2][dam2 - 2] == '_')
						{
							polana[k][p] = '_';
							polana[dam1 + 1][dam2 - 1] = '_';
							polana[dam1 + 2][dam2 - 2] = damkach;
							a = 1;
							goto LDALSH;
						}
						if (polana[dam1 + 1][dam2 - 1] == chern || polana[dam1 + 1][dam2 - 1] == damkach)
						{
							dam1 = k;
							dam2 = p;
							break;
						}
						dam1++;
						dam2--;
						if (dam1 == 7 || dam2 == 0)
						{
							dam1 = k;
							dam2 = p;
							break;
						}
					}
				if (polana[k - 1][p + 1] == '_' && k > 0 && p < 7)
					while (polana[dam1 - 1][dam2 + 1] != chern || polana[dam1 - 1][dam2 + 1] != damkach || polana[dam1 - 1][dam2 + 1] != bel || polana[dam1 - 1][dam2 + 1] != damkab || (dam1 - 1 >= 0 && dam1 - 1 <= 7) || (dam2 + 1 >= 0 && dam2 + 1 <= 7))
					{
						if ((polana[dam1 - 1][dam2 + 1] == bel || polana[dam1 - 1][dam2 + 1] == damkab) && polana[dam1 - 2][dam2 + 2] == '_')
						{
							polana[k][p] = '_';
							polana[dam1 - 1][dam2 + 1] = '_';
							polana[dam1 - 2][dam2 + 2] = damkach;
							a = 1;
							goto LDALSH;
						}
						if (polana[dam1 - 1][dam2 + 1] == chern || polana[dam1 - 1][dam2 + 1] == damkach)
						{
							dam1 = k;
							dam2 = p;
							break;
						}
						dam1--;
						dam2++;
						if (dam1 == 0 || dam2 == 7)
						{
							dam1 = k;
							dam2 = p;
							break;
						}
					}
				if (polana[k - 1][p - 1] == '_' && k > 0 && p > 0)
					while (polana[dam1 - 1][dam2 - 1] != chern || polana[dam1 - 1][dam2 - 1] != damkach || polana[dam1 - 1][dam2 - 1] != bel || polana[dam1 - 1][dam2 - 1] != damkab || (dam1 - 1 >= 0 && dam1 - 1 <= 7) || (dam2 - 1 >= 0 && dam2 - 1 <= 7))
					{
						if ((polana[dam1 - 1][dam2 - 1] == bel || polana[dam1 - 1][dam2 - 1] == damkab) && polana[dam1 - 2][dam2 - 2] == '_')
						{
							polana[k][p] = '_';
							polana[dam1 - 1][dam2 - 1] = '_';
							polana[dam1 - 2][dam2 - 2] = damkach;
							a = 1;
							goto LDALSH;
						}
						if (polana[dam1 - 1][dam2 - 1] == chern || polana[dam1 - 1][dam2 - 1] == damkach)
						{
							dam1 = k;
							dam2 = p;
							break;
						}
						dam1--;
						dam2--;
						if (dam1 == 0 || dam2 == 0)
						{
							dam1 = k;
							dam2 = p;
							break;
						}
					}
			}

		LDALSH:
			while (Dhead != NULL)
			{
				int k, p; int schet = 0;
				Dhead = Dpop(Dhead, &Dtail, &k, &p);
			}

			if (a == 0)
			{
				for (int k = 7; k >= 0; k--)
					for (int p = 0; p < 8; p++)
					{
						if (polana[k][p] == chern)
							tail = push(&head, tail, k, p);
					}
				int komp1 = 0, komp2 = 0;
				while (head != NULL)
				{
					int k, p;
					head = pop(head, &tail, &k, &p);
					if (polana[k - 1][p - 1] == bel || polana[k - 1][p - 1] == damkab)
						if (polana[k - 2][p - 2] == '_' && k - 2 >= 0 && p - 2 >= 0 && k - 2 < 8 && p - 2 < 8)
						{
							polana[k - 2][p - 2] = chern;
							polana[k - 1][p - 1] = '_'; a = 1;
							polana[k][p] = '_';
							ebl = 1;
						}
					if (polana[k + 1][p + 1] == bel || polana[k + 1][p + 1] == damkab)
						if (polana[k + 2][p + 2] == '_' && k + 2 >= 0 && p + 2 >= 0 && k + 2 < 8 && p + 2 < 8)
						{
							polana[k + 2][p + 2] = chern;
							polana[k + 1][p + 1] = '_'; a = 1;
							polana[k][p] = '_';
							ebl = 1;
						}
					if (polana[k - 1][p + 1] == bel || polana[k - 1][p + 1] == damkab)
						if (polana[k - 2][p + 2] == '_' && k - 2 >= 0 && p + 2 >= 0 && k - 2 < 8 && p + 2 < 8)
						{
							polana[k - 2][p + 2] = chern;
							polana[k - 1][p + 1] = '_'; a = 1;
							polana[k][p] = '_';
							ebl = 1;
						}
					if (polana[k + 1][p - 1] == bel || polana[k + 1][p - 1] == damkab)
						if (polana[k + 2][p - 2] == '_' && k + 2 >= 0 && p - 2 >= 0 && k + 2 < 8 && p - 2 < 8)
						{
							polana[k + 2][p - 2] = chern;
							polana[k + 1][p - 1] = '_'; a = 1;
							polana[k][p] = '_';
							ebl = 1;
						}
				}
				if (a == 1)
					goto LB;
				if (ebl == 1)
					a = 1;

			}
			if (a == 0)
				for (int k = 0; k <= 7; k++)
				{
					for (int p = 7; p >= 0; p--)
					{
						if (polana[k][p] == chern)
						{
							if (polana[k - 1][p - 1] == '_' && k - 1 >= 0 && k - 1 < 8 && p - 1 >= 0 && p - 1 < 8 && (polana[k - 2][p - 2] == '_' || polana[k - 2][p - 2] == chern) && (polana[k - 2][p] == '_' || polana[k - 2][p] == chern) && (polana[k][p - 2] == '_' || polana[k][p - 2] == chern))
							{
								polana[k - 1][p - 1] = chern;
								polana[k][p] = '_';
								a = 1;
								break;
							}
							if (polana[k - 1][p + 1] == '_' && k - 1 >= 0 && k - 1 < 8 && p + 1 >= 0 && p + 1 < 8 && (polana[k - 2][p + 2] == '_' || polana[k - 2][p + 2] == chern) && (polana[k - 2][p] == '_' || polana[k - 2][p] == chern) && (polana[k][p + 2] == '_' || polana[k][p + 2] == chern))
							{
								polana[k - 1][p + 1] = chern;
								polana[k][p] = '_';
								a = 1;
								break;
							}
						}
					}
					if (a == 1)
						break;
				}
			if (a == 0)
				for (int k = 0; k <= 7; k++)
				{
					for (int p = 7; p >= 0; p--)
					{
						if (polana[k][p] == chern)
						{
							if (polana[k - 1][p - 1] == '_' && k - 1 >= 0 && k - 1 < 8 && p - 1 >= 0 && p - 1 < 8)
							{
								polana[k - 1][p - 1] = chern;
								polana[k][p] = '_';
								a = 1;
								break;
							}
							if (polana[k - 1][p + 1] == '_' && k - 1 >= 0 && k - 1 < 8 && p + 1 >= 0 && p + 1 < 8)
							{
								polana[k - 1][p + 1] = chern;
								polana[k][p] = '_';
								a = 1;
								break;
							}
						}
					}
					if (a == 1)
						break;
				}


			if (polana[7][1] == bel)
				polana[7][1] = damkab;
			if (polana[7][3] == bel)
				polana[7][3] = damkab;
			if (polana[7][5] == bel)
				polana[7][5] = damkab;
			if (polana[7][7] == bel)
				polana[7][7] = damkab;
			if (polana[0][0] == chern)
				polana[0][0] = damkach;
			if (polana[0][2] == chern)
				polana[0][2] = damkach;
			if (polana[0][4] == chern)
				polana[0][4] = damkach;
			if (polana[0][6] == chern)
				polana[0][6] = damkach;

			pole();


			//if (a == 0)  //////////////////////////////////////////////// ХОД ДАМКИ ЕСЛИ НЕТ ХОДОВ БОЛЬШЕ
			//{
			//	for (int k = 0; k <= 7; k++)
			//		for (int p = 7; p >= 0; p--)
			//		{
			//			if (polana[k][p] == damkach)
			//			{




			//			}

			//		}




			//}


			if (a == 0)              /////////////////////////////////////////////// 1 условие победы
			{
				pole();
				printf("\nБЕЛЫЕ ПОБЕДИЛИ!!!");
				_getch();
				return 0;
			}
			int kolbel = 0; int kolchern = 0;
			for (int w = 0; w < 8; w++)
				for (int y = 0; y < 8; y++)
				{
					if (polana[w][y] == bel || polana[w][y] == damkab)
						kolbel++;
					if (polana[w][y] == chern || polana[w][y] == damkach)
						kolchern++;
				}
			if (kolbel == 0)
			{
				printf("\nЧЕРНЫЕ ПОБЕДИЛИ!!!");
				_getch();
				return 0;
			}
			if (kolchern == 0)
			{
				printf("\nБЕЛЫЕ ПОБЕДИЛИ!!!");
				_getch();
				return 0;
			}
		}
		break;
	}





	}





	_getch();
	return 0;
}