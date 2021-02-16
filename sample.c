#include<stdio.h>

void add(int a, int b) {
printf("Answer of addition is : %d\n",a+b);
}

void divide(int a, int b) {
printf("Answer of division is : %d\n",a / b);

}

void multiply(int a, int b) {
printf("Answer of multiplication is : %d\n",a * b);

}

void substract(int a, int b) {
printf("Answer of substraction is : %d\n",a - b);

}

void factorial(int n) {
int fact = 1;
  if (n < 0)
        printf("Error! Factorial of a negative number doesn't exist.");
  else {
        for (int i = 1; i <= n; ++i) {
            fact *= i;
        }
        printf("Factorial of %d = %llu\n", n, fact);
  }
}
int fibonacci(int n) {
if (n <= 2 )
{
	return 1;
}

return fibonacci(n-1) + fibonacci(n-2);
}
int main() {
int number1, number2,num, fib = 0;
printf("\nSimple C programm\n\n");
printf("Enter any numbers to add/substract/multiply/divide\n");
scanf("%d", &number1);
scanf("%d", &number2);

add(number1,number2);
substract(number1,number2);

multiply(number1,number2);

divide(number1,number2);

/*printf("Enter number to find Its factorial\n");*/

/*scanf("%d", &num);*/

/*factorial(num);*/


printf("Enter which fibonacci number to find\n");

scanf("%d", &fib);

printf("Fibonacci of %d is %d", fib, fibonacci(fib));



return 0;

}

