#include "gjson.h"

int get_json()
{
	buf = get_key();
    system(buf);

    return 0;
}

char *get_key()
{
	char  i    = 0;
	FILE *fptr = fopen("key.data", "r");
	char *buf  = (char *)malloc(sizeof(char)*16);
	while(fptr != EOF)
	{
		buf+i = fgetc(fptr);
		i++;
	}

	return buf
}
