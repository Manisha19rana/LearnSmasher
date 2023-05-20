Create a simple calculator that can perform basic arithmetic operations like addition, subtraction, multiplication, and division.


#include <stdio.h>
int main() {
  // Declare variables.
  char operator;
  float num1, num2, result;

  // Get the operator from the user.
  printf("Choose an operator (+, -, *, /): ");
  scanf("%c", &operator);

  // Get the two numbers from the user.
  printf("Enter the first number: ");
  scanf("%f", &num1);

  printf("Enter the second number: ");
  scanf("%f", &num2);

  // Perform the operation.
  switch (operator) {
    case '+':
      result = num1 + num2;
      break;
    case '-':
      result = num1 - num2;
      break;
    case '*':
      result = num1 * num2;
      break;
    case '/':
      result = num1 / num2;
      break;
    default:
      printf("Invalid operator.\n");
      return 0;
  }

  // Display the result.
  printf("%.2f %c %.2f = %.2f\n", num1, operator, num2, result);

  return 0;
}
