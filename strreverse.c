#include <stdio.h>
#include <string.h>

int main()
{
	char city[10] = "ababaa";

    // The length of the string
	int len = strlen(city) - 1;

    // New container for the reversed String
    char newCity[10] = "";

   int add = 0;
 
 // using the while loop to iterate through the string
   while(city[add] != 0)
   {
    //assigning the string to a new variable
   	newCity[add] = city[len];
   	add++;
   	len--;
   }

   // camparing both string to see if they are the same
   int Strcheck = strcmp(city,newCity);

   //For producing the best result
   if(Strcheck == 0)
   {
    printf("They are true");
   }
   else{
    printf("They are not true");
   }
    return 0;
}