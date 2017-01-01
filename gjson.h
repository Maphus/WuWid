#ifndef _GJSON_H
#define _GJSON_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

////////////////////////////////////////////////////////////////////////
//
//  prototyping function to grab json data from Weather Underground API
//
//

int get_json(); 	//final call to get json data and store it in a file to be parsed
char *get_key();	//function to get key URL that will be used in request

#endif
