#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define UP 72
#define DOWN 80
int main(){
	int pointer = 0;
	char in;
	while(1){
	
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
    printf("\n - Find distance between points");
    if(pointer == 1){
    	printf("]");
	}
	 printf("\n");
    if(pointer == 2){
    	printf("[");
	}
    printf("\n - Find angle of a point from origin");
    if(pointer == 2){
    	printf("]");
	}
	 printf("\n");
    if(pointer == 3){
    	printf("[");
	}
    printf("\n - Find slope of a line (between two points)");
    if(pointer == 3){
    	printf("]");
	}
	 printf("\n");
    if(pointer == 4){
    	printf("[");
	}
    printf("\n - Export results");
    if(pointer == 4){
    	printf("]");
	}
	 printf("\n");
    if(pointer == 5){
    	printf("[");
	}
    printf("\n - Exit");
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
	system("cls");
}
}
