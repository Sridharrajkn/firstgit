#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
   char * buffer = malloc(10);
   sprintf(buffer, "%d", argc);
   printf("%s",buffer);
}