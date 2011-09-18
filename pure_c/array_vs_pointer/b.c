#include "stdio.h"

extern char *a;

int main(int argc, char* argv[]){
   int c=(int)a;
   printf("a=%c%c%c%c\n",c,c>>8,c>>16,c>>24);
}
