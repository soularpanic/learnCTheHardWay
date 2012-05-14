#include <stdio.h>

int main(int argc, char *argv[])
{
  // go through each string in argv
  int i = argc - 1;
  while(i >= 0) {
    printf("arg %d: %s\n", i, argv[i]);
    i--;
  }

  // let's make our own array of strings
  char *states[] = {
    "Ohio", "Michigan",
    "Washington", "Rhode Island"
  };

  int num_states = 4;
  i = num_states - 1; // watch for this
  while(i >= 0) {
    printf("state %d: %s\n", i, states[i]);
    i--;
  }

  i = 0;
  while((i < argc) && (i < num_states)) {
    states[i] = argv[i];
    i++;
  }

  i = 0;
  while(i < num_states) {
    printf("Copied shit %d is \"%s\"\n", i, states[i]);
    i++;
  }

  return 0;
}
