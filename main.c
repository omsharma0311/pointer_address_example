#include <stdio.h>

int
main ()
{
  int x = 5;
  int *y = &x;
  printf ("Value of x %d \n", x);

  printf ("Value stored in y(location of x) %u \n", &y);

  printf ("Value of y %u \n", y);

  printf
    ("Value stored in y(ie value stored in location that y points(X value) %d \n",
     *y);

  printf ("location of x  %u \n ", &y);

  return 0;
}
