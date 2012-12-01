#include <stdio.h>

int main(int argc, char *argv[])
{
  int areas[] = {10, 12, 13, 14, 20};
  int areas2[] = {21};
  char name[] = "Zed";
  char full_name[] = {'Z', 'e', 'd', ' ',
                      'A', '.', ' ',
                      'S', 'h', 'a', 'w'};

  // WARNING: On some system you may have to change the
  // %ld in this code to a %u since it will use unsigned ints
  printf("The size of an int: %ld\n", sizeof(int));
  printf("The size of areas (int[]): %ld\n", sizeof(areas));
  printf("The number of ints in areas: %ld\n", sizeof(areas) / sizeof(int));
  printf("The first area is %d, the 2nd %d - %d - %d - %d .\n", areas[5], areas[6], areas[7], areas[8], areas[9]);

  printf("The size of a char: %ld\n", sizeof(char));
  printf("The size of name (char[]): %ld\n", sizeof(name));
  printf("The number of chars in name: %ld\n", sizeof(name) / sizeof(char));
  printf("The first letter of name is \"%c\", int == %d\n", name[0], name[0]);
  name[0] = 89;
  printf("The first letter of name is \"%c\", int == %d\n", name[0], name[0]);

  printf("The size of full_name (char[]): %ld\n", sizeof(full_name));
  printf("The number of chars: %ld\n", sizeof(full_name) / sizeof(char));

  printf("name=\"%s\" and full_name=\"%s\"\n", name, full_name);

  return 0;
}
