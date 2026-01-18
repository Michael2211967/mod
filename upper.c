#include <string.h>
#include <ctype.h>
#include "upper.h"

char text[80];
int i;

char* m_upper(char text[])
{
	for (i=0; i<strlen(text); i++)
		text[i] = toupper(text[i]);
	return text;
}