#include <stdio.h>
#include <stdlib.h>


int main(){

    char str[100]; /*Set characters to 100*/
  	int i, j, holder, frst, scnd;

  	printf("Enter any String: "); /*lets user input string*/
  	gets(str);

  	holder = strlen(str);
  	scnd = holder - 1;

  	printf("Reverse ordered words\n");
  	for(i = holder - 1; i >= 0; i--)
	{
		if(str[i] == ' ' || i == 0)
		{
			if(i == 0)
			{
				frst = 0;
			}
			else
			{
				frst = i + 1;
			}
			for(j = frst; j <= scnd; j++)
			{
				printf("%c", str[j]);
			}
			scnd = i - 1;
			printf(" ");
		}
	}
    printf("\n\n\n\n");
  	return 0;

}
