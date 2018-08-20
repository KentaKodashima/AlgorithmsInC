/* ************************************ */
/*                                      */
/* calc.c                               */
/*                                      */
/* By: Giada, Natsumi, Kenta            */
/*                                      */
/* ************************************ */

#include <stdio.h>
#include "./includes/libex6.h"

typedef int (*operators)(int, int);
// make an array which has enough spaces to store all ascii table chars
operators operationSymbols[128] = {NULL};

int add(int a, int b)
{
  return a + b;
}

int substract(int a, int b)
{
  return a - b;
}

int multiply(int a, int b)
{
  return a * b;
}

int devide(int a, int b)
{
  return a / b;
}

int remaind(int a, int b)
{
  return a % b;
}

// init func pointers array
void init()
{
  operationSymbols['+'] = add;
  operationSymbols['-'] = substract;
  operationSymbols['*'] = multiply;
  operationSymbols['/'] = devide;
  operationSymbols['%'] = devide;
}

// check the operator
int checkOperator(char operator, int val1, int val2)
{
  operators operationSymbol;
  operationSymbol = operationSymbols[operator];

  return operationSymbol(val1, val2);
}

int calc(char *val1, char *opt, char *val2)
{
  int result = 0;
  int val1Int = vc_atoi(val1);
  int val2Int = vc_atoi(val2);

  init();

  return checkOperator(opt[0], val1Int, val2Int);
}

int main(int argc, char *argv[])
{

  int result = calc(argv[1], argv[2], argv[3]);
  printf("%d\n", result);

  return 0;
}
