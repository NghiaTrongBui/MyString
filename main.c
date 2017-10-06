#include"Ex_string.h"

int main(){
  char* src = "a/b/c";
  char* des;
  char* tmp = "copy";

  int vt = FFLocation(src, '/');
  CpString(&des, src, vt);
  CtString(&des, tmp);
  OvString(&src, des, vt);
  printf("%s\n", src);

  return 0;
}
