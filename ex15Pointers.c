#include <stdio.h>

void print_em(int count, int *ages, char **names) 
{
  int i = 0;

  for(i = 0; i < count; i++) {
    printf("This bitch, %s, is %d\n",
	   names[i], ages[i]);
  }

  printf("~~~\n");
}


int main(int argc, char *argv[]) 
{
  // create two arrays we care about
  int ages[] = {23, 43, 12, 89, 2};
  char *names[] = {
    "Alan", "Frank", "Mary", "John", "Lisa"
  };

  // safely get the size of ages
  int count = sizeof(ages) / sizeof(int);
  int i = 0;

  // first way of using indexing
  for(i = 0; i < count; i++) {
    printf("%s has %d years alive.\n",
	   *(names + i), *(ages + i));
  }

  printf("---\n");

  // setup the pointers to the start of the arrays
  int *cur_age = ages;
  char **cur_name = names;

  // second way of using pointers
  for(i = 0; i < count; i++) {
    printf("%s (@%p) is %d years old.\n",
	   *(cur_name+i), &*(cur_name + i), *(cur_age+i));
  }

  printf("---\n");

  // this way, pointers are just arrays
  /* for(i = 0; i < count; i++) { */
  /*   printf("%s is %d years old again.\n", */
  /* 	   cur_name[i], cur_age[i]); */
  /* } */
  
  /* printf("---\n"); */
  print_em(count, ages, names);

  // fourth way with pointes in a stupid complex way
  for(cur_name = names, cur_age = ages;
      (cur_age - ages) < count;
      cur_name++, cur_age++)
    {
      printf("%s lived %d years so far.\n",
	     *cur_name, *cur_age);
    }

  return 0;
}
