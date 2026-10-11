#include <stdio.h>
int main (void)
{
     float h1, h2, h3, avg;  // h1,h2,h3 - Heights of three people | avg - Average height of 5 people
     float missing,  total;

     printf("Enter the Heights of 3 people: ");
     scanf("%f %f %f", &h1, &h2, &h3);
     
     printf("Enter the calculated average:  ");
     scanf("%f", &avg);

     total = avg*5;

     missing = (total - (h1 + h2 +h3))/2;

     printf("Missing height of each person = %.2f\n", missing);

     return(0);
	   
}	     


			   
