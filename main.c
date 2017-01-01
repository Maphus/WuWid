#include "gjson.h"

int main(int argc, char **argv)
{
//  printf("%d\n", get_json());
    get_json();

    return 0;
}

int get_json()
{
    //reverts to bash command returned from get_key
    //to generate http request
    
    return system(get_key());
}

char *get_key()
{
	char  i      = 0;
	FILE *fptr   = fopen("key.data", "r");
   
    //ensuring file pointer was pointed correctly
    if(fptr == NULL)
    {
        fprintf(stderr, "failed to open key");
        exit(1);
    }

    //creates array to store key
	char *key    = (char *)malloc(sizeof(char)*106);
	
    //fills array with key data for system call
    //tried using an feof comparison to load array but was getting
    //an extra character to I just want with a less dynamic way
    while(i < 105)
	{
	    *(key+i) = fgetc(fptr);
		i++;
	}
    
    //putting NULL terminator at end of string
    *(key+i) = '\0';

    //closes file pointer
    fclose(fptr);

	return key;
}
