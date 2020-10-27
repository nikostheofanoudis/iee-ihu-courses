#include <stdio.h>
#include <stdlib.h>

int main()
{
  /* Double Variables */
  double dsum, dmo;

  /* Integers */
  int i1, i2, isum;

  /* Find isum and dmo */
  i1 = 6;
  i2 = 5;
  isum = i1 + i2;
  dmo = (double) isum / 2;
  printf("int isum = %d, double dmo = %lf\n", isum, dmo);

  /* Find dsum */
  dsum = (double) i1 + i2;
  dmo = dsum / 2;
  printf("double dsum = %lf, double dmo = %lf\n", dsum, dmo);

  /* Short */
  short s1, s2, ssum;

  /* Find ssum and dmo */
  s1 = 6;
  s2 = 5;
  ssum = s1 + s2;
  dmo = (double) ssum / 2;
  printf("short ssum = %hd, double dmo = %lf\n", ssum, dmo);

  /* Find dsum */
  dsum = (double) s1 + s2;
  dmo = dsum / 2;
  printf("double dsum = %lf, double dmo = %lf\n", dsum, dmo);

  /* Long */
  long l1, l2, lsum;

  /* Find lsum and dmo */
  l1 = 6;
  l2 = 5;
  lsum = l1 + l2;
  dmo = (double) lsum / 2;
  printf("long lsum = %ld, double dmo = %lf\n", lsum, dmo);

  /* Find dsum */
  dsum = (double) l1 + l2;
  dmo = dsum / 2;
  printf("double dsum = %lf, double dmo = %lf\n", dsum, dmo);

  /* Float */
  float f1, f2, fsum;

  /* Find fsum and dmo */
  f1 = 6.0;
  f2 = 5.0;
  fsum = f1 + f2;
  dmo = (double) fsum / 2;
  printf("float fsum = %f, double dmo = %lf\n", fsum, dmo);

  /* Find dsum */
  dsum = (double) f1 + f2;
  dmo = dsum / 2;
  printf("double dsum = %lf, double dmo = %lf\n", dsum, dmo);

  /* Double */
  double d1, d2;

  /* Find dsum and dmo */
  d1 = 6.0;
  d2 = 5.0;
  dsum = d1 + d2;
  dmo = (double) dsum / 2;
  printf("double dsum = %lf, double dmo = %lf\n", dsum, dmo);

  return 0;
}
