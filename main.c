#include <stdio.h>

int main(int argc, char **argv)
{
  char *name = "world";

  char *nameArg = argv[1];
  char *lastName = argv[2]; 

  if (nameArg != NULL) {
    name = nameArg;
  }
  
  if (lastName) {
    printf("Hello %s %s!\n", name, lastName);
  } else {
    printf("Hello %s!\n", name);
  }

  return 0;
}
