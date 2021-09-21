#include<stdio.h>
int main()
{
	int myfood;
	printf("enter a number between 1 to 5");
	scanf("%d",&myfood);
	switch(myfood)
	{
		case 1:
			printf("Food Name:panipuri\nPrice:20");
			break;
	    case 2:
			printf("Food Name:dosa\nPrice:50");
			break;
		case 3:
			printf("Food Name:puribhaji\nPrice:80");
			break;
		case 4:
			printf("Food Name:noodles\nPrice:60");
			break;	
		case 5:
			printf("Food Name:biryani\nPrice:250");
			break;
		default:
			printf("wrong input");
			
	}
	return 0;
}

