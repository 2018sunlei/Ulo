#include <stdio.h>
#include "../include/target.h"

static DWORD gdwTCount      = 0;

int main()
{
	cJSON * usr;

	usr = cJSON_CreateObject();
	cJSON_AddStringToObject(usr, "name", "shaun");
	cJSON_AddStringToObject(usr, "passwd", "123");
	cJSON_AddNumberToObject(usr, "num", 1);

	char *out =  cJSON_Print(usr);
    printf("%s\n",out);
    gdwTCount = GetTickCount();
    bugPrintf("%ld\n",gdwTCount);
	fprintf(stderr, "[%s]","TEST");
	printf("\033[36m %s\n\033[0m",out);	
	cJSON_Delete(usr);
}


