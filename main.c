#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void calmass(float h, int w){
	float BMI;
	
	BMI= w/(h*h);
	printf("Your BMI is : %.2f\n", BMI);
	
	if(BMI <= 18.5){
		printf("You are Underweight\n");
	}
	else if(BMI >= 19.0 && BMI <= 24.9){
		printf("CONGRATULATIONS!! You fall within the healthy weight range\n");
	}
	else if(BMI >= 25.0 && BMI <= 29.9){
		printf("YOu are OVERWEIGHT Friend\n");
	}
	else{
		printf("you are OBESE mate, its time to consider some lifestyle changes\n");
	}	
	
}

int main(){
	int weight;
	float height;
	float BMI;
	
	printf("Enter your height in meters\n", height);
	scanf("%f",&height);
	
	printf("Eter your weight in kg\n");
	scanf("%d", &weight);
	
	
	
	while(1){
		if(weight <= 0 || height <= 0){
			printf("Invalid weight or height. Try again\n");
			return 1;
		}
		
		calmass(height, weight);
		break;
		
	}
	return 0;
}


