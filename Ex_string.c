#include"Ex_string.h"

/* find delim begin finaly string*/
int FFLocation(const char* src, char delim){
  int len = strlen(src);
  int i = len;

  while(i >= 0){
    if(*(src + i - 1) == delim){
      break;
    }
    else{
      i--;
    }
  }

  return i + 1;
}

// copy string from location to finally string.
void CpString(char** des, const char* src, int loc){
  int len = strlen(src);
  int i = 0;

  loc--;
  (*des) = (char*)malloc(len - loc + 1);
  while(*(src + loc) != '\0'){
    *(*des + i) = *(src + loc);
    ++i;
    ++loc;
  }

  *(*des + i) = '\0';
}

//cat 2 string 
void CtString(char** des, const char* src){
  int len_des = strlen(*des);
  int len_src = strlen(src);
  int i = 0;
  int len = len_des + len_src; 
   
  char* tmp = (char*)malloc(len_des + 1);
  strcpy(tmp, *des);
  /* free(*des); */
  (*des) = (char*)malloc(len + 1);
  strcat(*des, src);
  strcat(*des, tmp);
  free(tmp);
}

// overwrite string at location
void OvString(char** des, const char* src, int loc){
  int len_src = strlen(src);
  int len_des = strlen(*des);
  int len = 0;
  int itmp = loc + len_src; 

  if(itmp < len_des){
    len = len_des + (len_des - itmp);
  }
  else{
    len = itmp;
  }

  if((itmp - len_des) != 0){
    char* tmp = (char*)malloc(len_des + 1);
    strcpy(tmp, *des);
    /* free(*des); */ //why you use it will return dumped core
    (*des) = (char*)malloc(len + 1);
    strcpy(*des, tmp);
    free(tmp);
  } 

  int i = loc - 1;
  int j = 0;
  while(j < len_src){
    *(*des + i) = *(src + j);
    ++j;
    ++i;
  }
  *(*des + i) = '\0';
} 
