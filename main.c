// Author: Khalil Stroman kzs5955@psu.edu
// Collaborator:Param Nigam pqn
// Collaborator: Menghao Li   mxl5939@psu.edu
// Collaborator: Matthew Orehek muo53@psu.edu
#include <stdio.h>
#include <stdlib.h>
#include <readline/readline.h>
int main(void) {
  char *celsius = readline ("Enter temperature in celsius: ");
  double cel = atof(celsius);
  double fah = (cel * 1.8) + 32;
  printf("%f° in Celsius is equivalent to %f° Fahrenheit.\n", cel, fah);
  
  return 0;
}