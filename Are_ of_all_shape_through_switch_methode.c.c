 //Area of shape through switch case methode.
 #include<stdio.h>
int main(){
	int choice;
	float length,width,areaa;
	float base,height,area;
	float side,areaaa;
	float radius,circumference;
	
	printf("\n1.Area of rectangle : ");
	printf("\n2.Area of right angle triangle : ");
	printf("\n3.Area of square : ");
	printf("\n4.Circumference of circle : ");
	printf("\nChoose a choice to calculate : ");
	scanf("%d",&choice);
	

	
	switch (choice)
	{
		case 1:
	// Area of rectangle.
			
	printf("Enter the length : ");
	scanf("%f",&length);
			
	printf("Enter the width : ");
	scanf("%f",&width);
	// Formula to calculate area.
			
	areaa = length * width;
	
	
	
	printf("Area of rectangle = %2f\n",areaa);
	
	break;
	
	             case 2:
	             	// Area of right angle triangle. 
	            
	             	
	             	printf("Enter the base : ");
	             	scanf("%f",&base);
	             	
	             	printf("Enter the height : ");
	             	scanf("%f",&height);
	             	// Formula to calculate area of right angle triangle.
	             	
	             	area = (base * height)/2;
	             	
	             	printf("Area of right angle triangle = %2f\n",area);
	             	
	             	break;


                           case 3:
                           	// Area of square.
                           	
                           	printf("Enter the side : ");
                           	scanf("%f",&side);
                           	// Formula to calculate area of square.
                           	
                           	areaaa = side * side;
                           	
                           	printf("Area of square = %2f\n",areaaa);
                           	
                           	break; 
                           	
       case 4:
       // Circumference of a circle.
       
       	
       	printf("Enter the radius : ");
       	scanf("%f",&radius);
       	// Formula to calculate circumference.
       	circumference = 2*3.14*radius;
       	
       	printf("Circumference of circle = %2f\n",circumference);
       	
	}
	return 0;
	
}
