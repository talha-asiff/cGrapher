#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <math.h>
#define UP 72
#define DOWN 80
#define select 13
// ye global variables hein jin sy program ke different functions me ham points ke values pass kry gy
int size = 1;		// ye dynamic var ke lye bnaya ha agy smj a jay ge
int *x = NULL;		// ham ny yaha memory heap sy x aur y lye hein
int *y = NULL;		// ye var garbage value na de is lye hm ny pehly he NULL kr dia ha safe side rehny ke lye
char padd[50] = ""; // empty string jo points ke names store kry ga, jese A, B, C etc
void graph()
{
	system("cls");						   // graph fucn ke start me screen clear kr do ga, taki graph ke sath menu ka text mix na ho
	int a, b;							   // ye temporary point ke coordiantes store krny ke lye hain, jese user jab new point add kray ga to uske x aur y coordinates ko store krny ke lye
	x = (int *)malloc(size * sizeof(int)); // ab x ptr me memory allocate ke 1*4 = 4 bytes allocate ho jay ge, aur y ptr me bhi 4 bytes allocate ho jay ge, kyun ke size ki value 1 ha, aur int ka size 4 bytes hota ha
	y = (int *)malloc(size * sizeof(int)); // ye dekho
	int i, j;							   // counter variables for loops
	char ch = 'A';						   // ye point ke lye name rakha ha A
	int count = 0;						   // ye variable count krta rahe ga ke kitne points add ho chuke hein, taki me uss hisab sy x aur y arrays me values store kr saku, aur padd string me point ke names store kr saku
	char in;
	while (1)
	{
		//	system("cls");
		printf("Point : %c\n", ch);
		// graph:
		for (i = 26; i >= -26; i--)
		{ // ye graph ke logic to btae thee na pehly bhe
			for (j = -26; j <= 26; j++)
			{
				if (i == 0 || j == 0)
				{
					printf("#");
				}
				else
				{
					if (i == b && j == a)
					{
						printf("#");
					}
					else
					{
						printf(".");
					}
				}
			}
			printf("\n");
		}
		i = 0; // set i and j back to zero for the next loop, jese user jab new point add kray ga to graph dobara draw ho jay ga, aur usme naye point ke sath purane points bhi show ho jay ge
		j = 0;
		// in wala jo var tha upr us me ek character enter kry ga user, agr wo 0 hua to program
		printf("Enter 0 to add new point or enter any character to exit\n");
		in = _getch();
		if (in == '0')
		{
			// ab jb user 0 enter kry ga new point ke lye to
			x = realloc(x, (size) * sizeof(int)); // yaha size = 1 ha dubara sy realloc x ka size 4 kr de ga, next time size = 2 ho jay ga aur realloc 2*4 kr ky x ko 8 bytes de de ga.........and so on
			y = realloc(y, (size) * sizeof(int)); // same for y
			printf("Enter Points: \n");
			printf("x : ");
			scanf("%d", &a); // yaha a aur b me temporary point ke coordinates store ho jay ge, jese user jab new point add kray ga to uske x aur y coordinates ko store krny ke lye
			printf("y : ");
			scanf("%d", &b);
			x[count] = a; // ab upr count = 0 tha, x[0] me a ke value save kr de ga
			y[count] = b;
			system("cls");
			padd[count] = ch; // padd[0] me ch = A rakh de ga
			ch++;
			count++;
			size++;
		}
		else
		{
			system("cls"); // agr user 0 ke ilawa koi character enter kry ga to screen clear kr do ga, taki menu ke sath graph ka text mix na ho, aur
			break;		   // loop sy exit kr de ga
			return;		   // aur phir function leave kr de ga
		}
	}
}
void distance()
{

	system("cls");
	char start, end;
	int a1 = 0;
	int b1 = 0;
	int a2 = 0;
	int b2 = 0;
	int i;
	int found = 0;
	top:
	printf("Select start point (Enter O to measure from orign) : \n");
	start = _getch();
	for (i = 0; i <= strlen(padd) - 1; i++)
	{
		if (padd[i] == start)
		{
			a1 = x[i];
			b1 = y[i];
			found = 1;
		}
	}
	i = 0;
	if (start == 'O')
	{
		a1 = 0;
		b1 = 0;
		found = 1;
	}
	if (!found)
	{
		printf("Point not found!\n");
		goto top;
	}
	found = 0;
	printf("Select end point : \n");
	end = _getch();
	for (i = 0; i <= strlen(padd) - 1; i++)
	{
		if (padd[i] == end)
		{
			a2 = x[i];
			b2 = y[i];
			found = 1;
		}
	}
	if (!found)
	{
		printf("Point not found!\n");
		goto top;
	}
	system("cls");
	double dist = sqrt(pow(a2 - a1, 2) + pow(b2 - b1, 2));
	printf("Distance between %c and %c is : %lf\n Enter any character to return to menu", start, end, dist);
	_getch();
	system("cls");
	return;

}
double angle()
{
}
double slope()
{
}
void export()
{
}

int main()
{
	int pointer = 0;
	char in;
	int selected = 0;
start:
	while (1)
	{
		printf("  ____  ____                _               \n");
		printf(" / ___|/ ___|_ __ __ _ _ __ | |__   ___ _ __ \n");
		printf("| |     |  _| '__/ _` | '_ \\| '_ \\ / _ \\ '__|\n");
		printf("| |___  |_| | | | (_| | |_) | | | |  __/ |   \n");
		printf(" \\____|\\____|_|  \\__,_| .__/|_| |_|\\___|_|   \n");
		printf("                      |_|                    \n");
		printf("\t Use arrow keys to navigate");
		printf("\n");
		printf("Points saved : %s\n", padd == "" ? "NO DATA" : padd);

		if (pointer == 0)
		{
			printf("[");
		}
		printf("- Graph (Set points)");
		if (pointer == 0)
		{
			printf("]");
		}
		printf("\n");
		if (pointer == 1)
		{
			printf("[");
		}
		printf("- Find distance between points");
		if (pointer == 1)
		{
			printf("]");
		}
		printf("\n");
		if (pointer == 2)
		{
			printf("[");
		}
		printf("- Find angle of a point from origin");
		if (pointer == 2)
		{
			printf("]");
		}
		printf("\n");
		if (pointer == 3)
		{
			printf("[");
		}
		printf("- Find slope of a line (between two points)");
		if (pointer == 3)
		{
			printf("]");
		}
		printf("\n");
		if (pointer == 4)
		{
			printf("[");
		}
		printf("- Export results");
		if (pointer == 4)
		{
			printf("]");
		}
		printf("\n");
		if (pointer == 5)
		{
			printf("[");
		}
		printf("- Exit");
		if (pointer == 5)
		{
			printf("]");
		}
		in = _getch();
		if (in == UP)
		{
			pointer--;
		}
		if (in == DOWN)
		{
			pointer++;
		}
		if (in == select)
		{
			selected = 1;
		}
		if (pointer == 6)
		{
			pointer = 0; // ye condition ha ke agr pointer variable ki value 6 ho jayegi, to me uss variable ki value 0 kr do ga, taki menu me wapas se pehla option pr chala jao
		}
		if (pointer == -1)
		{
			pointer = 5;
		}
		system("cls");
		if (selected)
		{
			if (pointer == 0)
			{
				goto o1;
			}
			else if (pointer == 1)
			{
				goto o2;
			}
			else if (pointer == 2)
			{
				goto o3;
			}
			else if (pointer == 3)
			{
				goto o4;
			}
			else if (pointer == 5)
			{
				break;
			}
		}
	} // ye sary labels aur unky agy functions me ny ese condition me rakh dye hein jo hamesha false rhy ge
	if (0)
	{ // always false condition
	o1:
		graph();	 // compiler yaha ay ga agr user ny 0 point pr enter press kia
		pointer = 0; // graph func khatam hone ke baad me pointer variable ki value 0 kr do ga, taki menu me wapas se pehla option pr chala jao
		selected = 0;
		goto start; // ye phir start pr dubara jump kr de ga (inside the loop)

	o2:
		distance();
		pointer = 0;
		selected = 0;
		goto start;

	o3:
		angle();
		pointer = 0;
		selected = 0;
		goto start;

	o4:
		slope();
		pointer = 0;
		selected = 0;
		goto start;
	}
	free(x);
	free(y);
}
