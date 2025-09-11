#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main(int argc, char *argv[])
{
  float valueOne;
  float valueTwo;
  char _operator;
  float answer;

  printf("Enter calculation:\n\n");
  scanf("%f %c %f", &valueOne, &_operator, & valueTwo);

  switch(_operator)
    {
    case '/': answer = valueOne/valueTwo;
      break;
    case '*': answer = valueOne*valueTwo;
      break;
    case '+': answer = valueOne+valueTwo;
      break;
    case '-': answer = valueOne-valueTwo;
      break;
    case '^': answer = pow(valueOne,valueTwo);
      break;
    case ' ': answer = sqrt(valueTwo);
      break;
    default: goto fail;
    }
  printf("%.9g%c%.9g =  %.6g\n\n",valueOne,_operator, valueTwo, answer);
  goto exit;
 fail:
  printf("Fail.\n");
 exit:
  return 0;
}
