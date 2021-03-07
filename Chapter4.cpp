#include <stdio.h>

/*
1.Write a program that asks the user to enter a two-digit number, then prints the number with its digits reversed.
		Enter a two-digit number: 28
		The reversal is: 82
*/

int ch4p1(void) {
	int n, first_digit, second_digit;
	printf("Enter a two-digit number:\t");
	scanf("%d", &n);
	first_digit = n / 10; second_digit = n % 10;
	printf("The reversal is:\t%d%d\n", second_digit, first_digit);

	/* Another Way (getting an integer digit-by-digit)
	int n1, n2;
	printf("Enter a two-digit number:\t");
	scanf("%1d%1d", &n1, &n2);
	printf("The reversal is:\t%d%d\n", n2, n1);
	*/
	return 0;
}

/*
2. Extend the program int Programming Project 1 to handle three-digit numbers.
*/
int ch4p2(void) {
	int n, first_digit, second_digit, third_digit;
	printf("Enter a three-digit number:  ");
	scanf("%d", &n);
	first_digit = n / 100; second_digit = (n - first_digit * 100) / 10; third_digit = n % 10;
	printf("The reversal is:  %d%d%d\n", third_digit, second_digit, first_digit);
	return 0;
}

/*
3. Rewrite the program in Programming Project 2 so that it prints the reversal of a three-digit number without using arithmetic to split the number into digits.
*/
int ch4p3(void) {
	int n, first_digit, second_digit, third_digit;
	printf("Enter a three-digit number:  ");
	scanf("%1d%1d%1d", &first_digit, &second_digit, &third_digit);
	printf("The reversal is:  %d%d%d\n", third_digit, second_digit, first_digit);
	return 0;
}

/*
4. Write a program that reads an integer entered by the user and displays it in octal(base 8).
		Enter a number between 0 and 32767: 1953
		In octal, your number is: 03641
	The output should be displayed using five digits, even if fewer digits are sufficient.	
*/

int ch4p4(void) {
	int n;
	printf("Enter a number between 0 and 32767:  ");
	scanf("%d", &n);
	printf("In octal, your number is:  ");
	int digits[5];
	for (int i = 0; i < 5; i++) {
		digits[i] = n % 8;
		n = n / 8;
	}
	for (int i = 4; i >= 0; i--) {
		printf("%d", digits[i]);
	}
	printf("\n");
	return 0;
}

/*
5. Rewrite the upc.c program of section 4.1 so that the user enter 11 digits at one time, instead of entering one-five-five digits.
		Enter the first 11 digits of a UPC:  01380015173
		Check digit:  5
*/

int ch4p5(void) {
	int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5;
	printf("Enter the first 11 digits of a UPC:  ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d, &i1, &i2, &i3, &i4, &i5, &j1, &j2, &j3, &j4, &j5);
	int first_sum = d + i2 + i4 + j1 + j3 + j5;
	int second_sum = i1 + i3 + i5 + j2 + j4;
	int total = 3 * first_sum + second_sum;
	printf("Check digit:  %d\n", 9 - ((total - 1) % 10));
	return 0;
}

int chapter4(void) {
	ch4p1(); ch4p2(); ch4p3(); ch4p4(); ch4p5();
	return 0;
}
