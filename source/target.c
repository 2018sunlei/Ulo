#include <stdio.h>
#include "../include/cJSON.h"


int main()
{
	cJSON * usr;

	usr = cJSON_CreateObject();
	cJSON_AddStringToObject(usr, "name", "shaun");
	cJSON_AddStringToObject(usr, "passwd", "123");
	cJSON_AddNumberToObject(usr, "num", 1);

	char *out =  cJSON_Print(usr);
    printf("%s\n",out);

	cJSON_Delete(usr);
}


