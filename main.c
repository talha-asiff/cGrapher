#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#define UP 72 
#define DOWN 80 
#define select 13 

int size = 1;
int * x = NULL;
int * y = NULL;
char padd[50] = "";
void graph(){
	system("cls");
	int a, b;
	x = (int*)malloc(size * sizeof(int));
	y = (int*)malloc(size * sizeof(int));
	int i, j;
	char ch = 'A';
	int count = 0;
	char in;
	while(1){
	//	system("cls");
		printf("Point : %c\n", ch);
		for(i = 26; i >= -26; i--){
			for(j = -26; j<= 26; j++){
				if(i==0 || j==0){
					printf("#");
				}
				else{
					if(i==b && j==a){
						printf("#");
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
		in = _getch();
		if(in == '0'){
			
			x = realloc(x, (size++)*sizeof(int));
			y = realloc(y, (size++)*sizeof(int));
			printf("Enter Points: \n");
			printf("x : ");
			scanf("%d", &a);
			printf("y : ");
			scanf("%d", &b);
			x[count] = a;
			y[count] = b;
			system("cls");
			padd[count] = ch;
			ch++;
			count++;
		}
		else{
			system("cls");
			break;
			return;
		}
	}
}
void distance(){
	
	system("cls");
	char start, end;
	int a1 = 0;
	int b1 = 0;
	int i;
	int found = 0;
	printf("Select start point (Enter O to measure from orign) : ");
	scanf("%c", &start);
	for(i = 0; i <= strlen(padd)-1 ; i++){
		if(padd[i]==start){
			a1 = x[i];
			b1 = y[i];
			found = 1;
		}
	}
	if(found){
		printf("FOUND!");
	}
	getch();
	system("cls");
	return;
	
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
	start:
	while(1){
		printf("  ____  ____                _               \n");
    	printf(" / ___|/ ___|_ __ __ _ _ __ | |__   ___ _ __ \n");
	    printf("| |     |  _| '__/ _` | '_ \\| '_ \\ / _ \\ '__|\n");
    	printf("| |___  |_| | | | (_| | |_) | | | |  __/ |   \n");
	    printf(" \\____|\\____|_|  \\__,_| .__/|_| |_|\\___|_|   \n");
	    printf("                      |_|                    \n");
	    printf("\t Use arrow keys to navigate");
	    printf("\n");
	    printf("Points saved : %s\n", padd==""?"NO DATA":padd);
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
		//yaha user sy ek character input le rha ha
		//ab suno, har character beshak wo control key he q na ho jese arrow keys, enter wagera, in ka ek unique number hota jo me ny uper macros me define kia
    	in = _getch();
		//yaha condition ha ke agr user ka enter kia hua charater up arrow key ha to pointer variable ki value 1 se kam ho jayegi, aur agr down arrow key ha to pointer variable ki value 1 se barh jayegi, aur agr enter key ha to selected variable ki value 1 ho jayegi
    	if(in == UP){
    		pointer--; //user ny up arrow key dabaya ha, to pointer variable ki value 1 se kam ho jayegi, aur menu me ek option upar chala jayega
		}
		if(in == DOWN){
			pointer++;//ise trha agr user ny down arrow key dabaya ha, to pointer variable ki value 1 se barh jayegi, aur menu me ek option neeche chala jayega
		}
		if(in == select){
			selected = 1; //ab jb user enter dabay ga to "selected" variable ki value 1 ho jayegi, aur me uss hisab sy check kr ke user ne konsa option select kia ha, aur uss option pr jump kr jao ga
		}
		if(pointer == 6){
			pointer = 0; //ye condition ha ke agr pointer variable ki value 6 ho jayegi, to me uss variable ki value 0 kr do ga, taki menu me wapas se pehla option pr chala jao
		}
		if(pointer == -1){
			pointer = 5;//agr user option 0 (first option) pr bhe UP arrow key press kry ga to ye pointer ko dubara nichy le ay ga 5 pr
		}
		//ye func har cycle me screen clear kry ga
		system("cls");
		//ab yaha nested if lagaya ha ke agr "selected" variable ke value true ha to is condition sy check kry ke pointer ke value kia ha
		if(selected){
			if(pointer == 0){
				goto o1; //for example pinter ke value 0 ha to me uss label pr jump kr jao ga jiska naam o1 ha, aur waha pr graph() function call kia ha, aur uss function ke khatam hone ke baad me pointer variable ki value 0 kr do ga, taki menu me wapas se pehla option pr chala jao, aur selected variable ki value 0 kr do ga taki me dobara se menu me options select kr saku
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
	} //ye sary labels aur unky agy functions me ny ese condition me rakh dye hein jo hamesha false rhy ge
	if(0){ //always false condition
		o1: graph(); //compiler yaha ay ga agr user ny 0 point pr enter press kia 
		pointer = 0; //graph func khatam hone ke baad me pointer variable ki value 0 kr do ga, taki menu me wapas se pehla option pr chala jao
		selected = 0; 
		goto start; //ye phir start pr dubara jump kr de ga (inside the loop)
		
		o2: distance();
		pointer = 0;
		selected = 0;
		goto start;
		
		o3: angle();
		pointer = 0;
		selected = 0;
		goto start;
		
		o4: slope();
		pointer = 0;
		selected = 0;
		goto start;
		
	}
	free(x);
	free(y);
	
}
