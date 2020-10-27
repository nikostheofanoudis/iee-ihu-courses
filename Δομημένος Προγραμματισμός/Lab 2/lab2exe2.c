#include <stdio.h>
#include <stdlib.h>

int main()
{
  /* Variables */
  int steps, stepsInCM, cm, m, km;

  /* Scan steps and print them */
  printf("Give the number of steps: \n");
  scanf("%d", &steps);
  printf("The robot walked: %d steps\n", steps);

  /* Convertion in cm */
  stepsInCM = steps * 80;
  printf("The robot walked: %d cm\n", stepsInCM);

  /* Convertion in km, m and cm */
  km = stepsInCM / 100000;
  m = (stepsInCM % 100000) / 100;
  cm = (stepsInCM % 100000) % 100;

  /* Print km, m and cm */
  printf("%d km, %d m and %d cm\n", km, m, cm );

  return 0;
}
