#include <stdio.h>

char *captureName(char **argv);
char *captureLastName(char **argv);

int main(int argc, char **argv)
{
  char *name = captureName(argv);
  char *lastName = captureLastName(argv);
  
  if (lastName != NULL) {
    printf("Hello %s %s!\n", name, lastName);
  } else {
    printf("Hello %s!\n", name);
  }

  return 0;
}

char *captureName(char **argv) {
  if (argv[1] != NULL) {
    return argv[1];
  }

  return "world";
}

char *captureLastName(char **argv) {
  if (argv[2] != NULL) {
    return argv[2];
  }
  return NULL;
}
