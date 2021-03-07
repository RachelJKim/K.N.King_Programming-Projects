#include <stdio.h>

/*
1. Write a program that accepts a date from the user in the for mm/dd/yyyy and then displays it in a form yyyymmdd.
	ex) Enter a date (mm/dd/yyyy) : 3/6/2020
		You entered the date 20200306
*/

int ch3p1(void) {
	int m, d, y;
	printf("Enter a date (mm/dd/yyyy) : ");
	scanf("%d/%d/%d", &m, &d, &y);
	printf("You entered the date %.4d%.2d%.2d\n", y, m, d);
	return 0;
}

/*
2. Write a program that formats product information entered by the user. A session with the program should look like this.
	Enter item number : 583
	Enter unit price : 13.5
	Enter purchase date (mm/dd/yyyy) : 10/24/2010

	Item		Unit		Purchase
				Price		Date
	583			$	13.50	10/24/2010
*/
int ch3p2(void) {
	int num, m, d, y;
	float price;

	printf("Enter item number : ");
	scanf("%d", &num);
	printf("Enter unit price : ");
	scanf("%f", &price);
	printf("Enter purchase date(mm / dd / yyyy) : ");
	scanf("%d/%d/%d", &m, &d, &y);

	printf("Item\t\tUnit\t\tPurchase\n");
	printf("\t\tPrice\t\tDate\n");
	printf("%d\t\t$\t%.2f\t%.2d/%.2d/%.2d\n", num, price, m, d, y);
	
	return 0;
}

/*
3. Write a program that breaks down an ISBN entered by the user:
		Enter ISBN: 978-0-393-97950-3
		GLS prefix: 978
		Group identifier: 0
		Publisher code: 393
		Item number: 97950
		Check digit: 3
	Note: The number of digits in each group may vary!
*/

int ch3p3(void) {
	int prefix, id, code, num, digit;
	printf("Enter ISBN: ");
	scanf("%d-%d-%d-%d-%d", &prefix,&id,&code,&num,&digit);
	printf("\GLS prefix : %d\nGroup identifier: %d\nPublisher code: %d\nItem number: %d\nCheck digit: %d\n",
		prefix, id, code, num, digit);
	return 0;
}

/*
4. Write a program that prompts the user to enter a telephone number in the form (xxx) xxx-xxxx and then displays the number in the form xxx.xxx.xxx.
		Enter phone number [(xxx) xxx-xxxx]: (404) 817-6900
		You entered 404.817.6900
*/

int ch3p4(void) {
	int first, second, third;
	printf("Enter phone number [(xxx) xxx-xxxx]: ");
	scanf("(%d) %d-%d", &first, &second, &third);
	printf("You entered %.3d.%.3d.%.4d\n", first, second, third);
	return 0;
}

/*
5. Write a program that asks the user to enter the numbers from 1 to 16(in any order) 
	and then displays the number in 4 by 4 arrangement, 
	followed by the sums of the rows, columns, and diagonals.

	Enter the numbers from 1 to 16 in any order:
	16 3 2 13 5 10 11 8 9 6 7 12 4 15 14 1

	16	3	2	13
	5	10	11	8
	9	6	7	12
	4	15	14	1

	Row sums: 34 34 34 34
	Column sums: 34 34 34 34
	Diagonal sums: 34 34
*/

int ch3p5(void) {
	int matrix[4][4];
	int num; int row = 0; int col = 0;
	
	printf("Enter the numbers from 1 to 16 in any order:\n");
	
	// Scan the input and save the elements in a 4x4 matrix //
	for (int i = 0; i < 15; i++) {
		row = i / 4; col = i % 4;
		scanf("%d ", &matrix[row][col]);
	}
	scanf("%d", &matrix[3][3]);
	printf("\n");

	// Print out the matrix while calculating sums //
	int row_s[4] = { 0, }, col_s[4] = { 0, }, dia_s[2] = { 0, };
	for (int row = 0; row < 4; row++) {
		for (int col = 0; col < 4; col++) {
			num = matrix[row][col];
			printf("%d\t", num);
			row_s[row] += num;
			col_s[col] += num;
			if (row == col) { dia_s[0] += num; }
			if (row == (3 - col)) { dia_s[1] += num; }
		}
		printf("\n");
	}
	printf("\n");

	// Calculate and print sums //
	printf("Row sums:");
	for (int i = 0; i < 4; i++) { printf("\t%d", row_s[i]); }
	printf("\n");
	printf("Column sums:");
	for (int i = 0; i < 4; i++) { printf("\t%d", col_s[i]); }
	printf("\n");
	printf("Diagonal sums:");
	printf("\t%d\t%d\n", dia_s[0], dia_s[1]);



	return 0;
}

/*
6. The user enters two fractions separated by a plus sign. Then calculate the sum.
		Enter two fractions separated by a plus sign.: 5/6+3/4
		The sum is 38/24
*/

int ch3p6(void) {
	int f1_top, f1_bottom, f2_top, f2_bottom;
	printf("Enter two fractions separated by a plus sign:\t");
	scanf("%d/%d+%d/%d", &f1_top, &f1_bottom, &f2_top, &f2_bottom);
	printf("The sum is ");
	int result_top = f1_top * f2_bottom + f1_bottom * f2_top;
	int result_bottom = f1_bottom * f2_bottom;
	printf("%d/%d\n", result_top, result_bottom);
	return 0;
}
int chapter3(void) { 
	ch3p1(); ch3p2(); ch3p3(); ch3p4(); ch3p5(); ch3p6();
	return 0;
}