#include<stdio.h>
#include<math.h>
int main(){
	int day;
	printf("Enter the days(1 - 7) \n");
	scanf("%d",&day);
	
	if(day = 1){
			printf("Monday \n");
	}
	else if (day = 2){
			printf("Tuesday \n");
	}
	else if (day = 3){
			printf("Wednesday \n");
	}
	else if (day = 4){
			printf("Thursday \n");
	}
	else if (day = 5){
			printf("Friday \n");
	}
	else if (day = 6){
			printf("Satureday \n");
	}
	else if (day = 7){
			printf("Sunday \n");
	}
	else {
		printf("Wrong input");
	}
	
	return 0;

	
}
