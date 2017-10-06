#ifndef _EX_STRING_
#define _EX_STRING_ 

typedef enum { FALSE, TRUE}bool;

#include"stdio.h"
#include"stdlib.h"
#include"string.h"

int FFLocation(const char*, char);
void CpString(char** , const char*, int);
void CtString(char**, const char*);
void OvString(char **, const char*, int);

#endif 
