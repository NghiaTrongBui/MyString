#ifndef _EX_STRING_
#define _EX_STRING_ 

typedef enum { FALSE, TRUE} bool;

#include"stdio.h"
#include"stdlib.h"
#include"string.h"
#include"stdint.h"

#define u32 uint32_t

int FFLocation(const char*, char);
void CpString(char** , const char*, int);
void CtString(char**, const char*);
void OvString(char **, const char*, int);
u32 SearchString(const char* text, const char* pattern);

#endif 
