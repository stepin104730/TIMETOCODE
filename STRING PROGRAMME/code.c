#include<stdio.h>
#include<string.h>
#include "header.h"
void stringpgm(char a[1000])
{

    char *c=strtok(a,"_");
    while(c!=NULL)
    {
        printf("%s ",c);
        c=strtok(NULL,"_");
    }
    }

