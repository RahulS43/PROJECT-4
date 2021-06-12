#include<stdio.h>
main()
{
	int a=0;
  	printf("Enter any number between 1-5: ");
  	scanf("%d",&a);
    switch(a)t
    {
    	case 1:
    		printf("\nFood item - Pizza \nPrice- Rs 179");
    		break;
    	case 2:
    		printf("\nFood item- Burger \nPrice- Rs 129");
     		break;
     	case 3:
     		printf("\nFood item- Pasta \nPrice- Rs 179");
     		break;
     	case 4:
     		printf("\nFood item- French Fries \nPrice- Rs 99");
     		break;
     	case 5:
     		printf("\nFood item- Sandwich \nPrice- Rs 149");
     		break;
	}
}

