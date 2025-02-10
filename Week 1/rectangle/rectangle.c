#include <stdio.h> 
int main()
{
    int length, width, area, perimeter;
    //int (variable name) declares a variable as an integer.

    printf("Enter the Length (m):"); //Printf prints a line to the console
    scanf("%i",&length); //scanf waits for user input and adds it to the vriable we choose
    printf("Enter the Width (m):");
    scanf("%i",&width);

    area = length * width; //calculations work as they do in real life, following BIDMAS
    perimeter = (length + width) * 2;

    printf("The area of the land is %i square meters \n",area);
    printf("The perimeter of the land is %i meters \n",perimeter);

    return 0; // We always return 0 at the end of int main because thats jut how it goes... unless there's a specific need to return a different value. It can be used to make sure our program is running correctly
}