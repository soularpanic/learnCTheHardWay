#include <stdio.h>

int main(int argc, char *argv[])
{
  int i = 0;
  
  if(argc == 1) {
    printf("You only have one argument, noob.  You suck.\n");
  } else if(argc > 1 && argc < 4) {
    printf("Here're your filthy stinking arguments:\n");

    for(i = 0; i < argc; i++) {
      printf("\t%s\n", argv[i]);
    }
  } else {
    printf("You have too many arguments, noob.  You suck.\n");
  }

  return 0;
}
