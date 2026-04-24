#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define UP 72
#define DOWN 80
#define select 13

int size = 0;
int * x = NULL;
int * y = NULL;
char padd[50] = "";
void graph(){
	x = malloc(size * sizeof(int));
	y = malloc(size * sizeof(int));
	int i, j;
	char ch = 'A';
	int count = 0;
	char in;
	start:
		count++;
		padd[count-1] = ch;
		system("cls");
		printf("50x50\n");
		for(i = -26; i <= 26; i++){
			for(j = -26; j<=26; j++){
				if(i==0 || j==0){
					printf("#");
				}
				else{
					if(i==x[count-1] && j==y[count-1]){
						printf(ch);
					}
					else{
						printf(".");
					}
				}
			}
			printf("\n");
		}
		i = 0;
		j = 0;
		printf("Enter 0 to add new point or enter any character to exit\n");
		in = getch();
		if(in == '0'){
			int a, b;
			x = realloc(x, (size++)*sizeof(int));
			y = realloc(y, (size++)*sizeof(int));
			printf("Enter Points: \n");
			printf("x : ");
			scanf("%d", &a);
			printf("y : ");
			scanf("%d", &b);
			x[count-1] = a;
			y[count-1] = b;
			goto start;
		}
		else{
			system("cls");
		}
	
}
double distance(){
	
}
double angle(){
	
}
double slope(){
	
}
void export(){
	
}

int main(){
	int pointer = 0;
	char in;
	int selected = 0;
	while(1){
		start:
		printf("  ____  ____                _               \n");
    	printf(" / ___|/ ___|_ __ __ _ _ __ | |__   ___ _ __ \n");
	    printf("| |     |  _| '__/ _` | '_ \\| '_ \\ / _ \\ '__|\n");
    	printf("| |___  |_| | | | (_| | |_) | | | |  __/ |   \n");
	    printf(" \\____|\\____|_|  \\__,_| .__/|_| |_|\\___|_|   \n");
	    printf("                      |_|                    \n");
	    printf("\t Use arrow keys to navigate");
	    printf("\n");
    	if(pointer == 0){
    		printf("[");
		}
    	printf("- Graph (Set points)");
    	if(pointer == 0){
    		printf("]");
		}
		printf("\n");
    	if(pointer == 1){
    		printf("[");
		}
    	printf("- Find distance between points");
    	if(pointer == 1){
    		printf("]");
		}
	 	printf("\n");
    	if(pointer == 2){
    		printf("[");
		}
    	printf("- Find angle of a point from origin");
    	if(pointer == 2){
    		printf("]");
		}
	 	printf("\n");
    	if(pointer == 3){
    		printf("[");
		}
    	printf("- Find slope of a line (between two points)");
    	if(pointer == 3){
    		printf("]");
		}
	 	printf("\n");
    	if(pointer == 4){
    		printf("[");
		}
    	printf("- Export results");
    	if(pointer == 4){
    		printf("]");
		}
	 	printf("\n");
    	if(pointer == 5){
    		printf("[");
		}
    	printf("- Exit");
    	if(pointer == 5){
    		printf("]");
		}
    	in = _getch();
    	if(in == UP){
    		pointer--;
		}
		if(in == DOWN){
			pointer++;
		}
		if(in == select){
			selected = 1;
		}
		if(pointer == 6){
			pointer = 0;
		}
		if(pointer == -1){
			pointer = 5;
		}
		system("cls");
		if(selected){
			if(pointer == 0){
				goto o1;
			}
			else if(pointer == 1){
				goto o2;
			}
			else if(pointer == 2){
				goto o3;
			}
			else if(pointer == 3){
				goto o4;
			}
			else if(pointer == 5){
				break;
			}
		}
	}
	if(0){
		o1: graph();
		o2: distance();
		o3: angle();
		o4: slope();
		goto start;
	}
	
}
