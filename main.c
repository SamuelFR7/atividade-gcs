#include <stdio.h>

int main(int argc, char **argv)
{
  char *name = "world";

  char *nameArg = argv[1];

  if (nameArg != NULL) {
    name = nameArg;
  }

  printf("Hello %s!\n", name);

  return 0;
}
