#include <stdio.h>
#include <stdlib.h>

void other( )
{
    printf("..<' )\n"
           "...//___\n"
           "~~(_____>\n");

    printf("Congratulations!\n");
    printf("You have entered in the secret function!\n");
    fflush(stdout);
}

void input( )
{
    char buffer[20];

    printf("Enter some text:\n");
    fflush(stdout);
    scanf("%s", buffer);
    printf("\nYou entered: %s\n", buffer);
    fflush(stdout);
}



int main()
{
    printf("This line will deleted soon / other = %p \n" , &other);
    input( );

    printf("Code is working correctly\n");
	return 0;
}
