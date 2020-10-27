#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Structures
struct employee
{
  char name[50];
  int am;
  int degree;
  int overtime;
  int salary;
};

struct employee fill();

int main() 
{
  char name[50];
  int am, degree, overtime, salary;
  struct employee em1, em2;
  em1 = fill("Nikos", 185181, 3, 2, 600);

  printf("Employee e1 : \n");
  printf("name: %s, am = %d, degree = %d, overtime = %d, salary = %d\n", em1.name, em1.am, em1.degree, em1.overtime, em1.salary);

  printf("Type your name: \n");
  scanf("%s", &name);
  printf("Type your am: \n");
  scanf("%d", &am);
  printf("Type your degree: \n");
  scanf("%d", &degree);
  printf("Type your overtime: \n");
  scanf("%d", &overtime);
  printf("Type your salary: \n");
  scanf("%d", &salary);

  em2 = fill(name, am, degree, overtime, salary);

  printf("Employee e1 : \n");
  printf("name: %s, am = %d, degree = %d, overtime = %d, salary = %d\n", em2.name, em2.am, em2.degree, em2.overtime, em2.salary);

  return 0;
}

struct employee fill(char name[], int am, int degree, int overtime, int salary)
{
  struct employee em;
  strcpy(em.name, name);
  em.am = am;
  em.degree = degree;
  em.overtime = overtime;
  em.salary = salary;
  return em;
}