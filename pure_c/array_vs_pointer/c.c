#include <stdio.h>

#define xsize 20
#define ysize 30
int array[xsize][ysize];
void fun(int* arr, int x, int y)
{
 printf("arr[x][y]=%d\n",arr[x+y*20]);
}

int main(int argc,char* argv[]){
}

