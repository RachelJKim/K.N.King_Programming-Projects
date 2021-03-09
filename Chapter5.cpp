#include <stdio.h>
#include <string.h>

/*
1. Write a program that calculates how many digits a number contains.
		Enter a number:  374
		The number 374 has 3 digits.
*/

int ch5p1(void) {
	int n, digits;
	printf("Enter a number:  ");
	scanf("%d", &n);
	if (0 < n && n < 10) { digits = 1; }
	else if (10 <= n && n < 100) { digits = 2; }
	else if (100 <= n && n < 1000) { digits = 3; }
	else { digits = 4; }
	printf("The number %d has %d digits\n", n, digits);
	return 0;
}

/*
2. Write a program that asks the user for a 24-hour time, then displays the time in 12-hour form.
		Enter a 24-hour time:  21:11
		Equivalent 12-hour time:  9:11 PM
*/

int ch5p2(void) {
	int hour, minute;
	printf("Enter a 24-hour time:  ");
	scanf("%d:%d", &hour, &minute);
	printf("Equivalent 12-hour time:  ");
	if (0 < hour && hour < 12) {
		printf("%d:%d AM\n", hour, minute);
	}
	else if (12 < hour) {
		printf("%d:%d PM\n", hour-12, minute);
	}
	else if (hour == 0) {
		printf("12:%d AM\n", minute);
		}
	else if (hour==12) {
		printf("12:%d PM\n", minute);
	}
	else { printf("Invalid Time Expression\n"); }
	return 0;
}

/*
4. Here's a simplified version of the Beufort scale, which is used to estimate wind force.
   Write a program that asks the user to enter a wind speed(in knots), then displays the corresponding discription.
		Speed(knots)	Discription
		Less than 1		Calm
		1-3				Light air
		4-27			Breeze
		28-47			Gale
		48-63			Storm
		Above 63		Hurricane
*/

int ch5p4(void) {
	int speed;
	printf("Enter a wind speed in knots:  ");
	scanf("%d", &speed);
	if (speed < 1) { printf("Calm"); }
	else if (1 <= speed && speed <= 3) { printf("Light air"); }
	else if (4 <= speed && speed <= 27) { printf("Breeze"); }
	else if (28 <= speed && speed <= 47) { printf("Gale"); }
	else if (48 <= speed && speed <= 63) { printf("Storm"); }
	else { printf("Hurricane"); }
	printf("\n");
	return 0;
}

/*
7. Write a program that finds the largest and smallest of four integers entered by the user.
		Enter four integers:  21  43  10  35
		Largest:  43
		Smallest:  10
	Use as few if statements as possible.
*/

int ch5p7(void) {
	int n1, n2, n3, n4, l1, l2, s1, s2, largest, smallest;
	printf("Enter four integers:  ");
	scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
	if (n1 > n2) {	l1 = n1; s1= n2;	}
	else { l1 = n2; s1 = n1; }
	if (n3 > n4) { l2 = n3; s2 = n4; }
	else { l2 = n4; s2 = n3; }
	if (l1 > l2) { largest = l1; }
	else { largest = l2; }
	if (s1 < s2) { smallest = s1; }
	else { smallest = s2; }
	printf("Largest:  %d\n", largest);
	printf("Smallest:  %d\n", smallest);
	return 0;
}

/*
9. Write a program that prompts the user to enter two dates and then indicates which date comes eaerlier on the calender.
		Enter first date (mm/dd/yy):  3/6/08
		Enter second date (mm/dd/yy):  5/17/07
		5/17/07 is earlier than 3/6/08
*/

int ch5p9(void) {
	int firstm, firstd, firsty, secm, secd, secy;
	bool first_is_earlier;
	printf("Enter first date (mm/dd/yy):  ");
	scanf("%d/%d/%d", &firstm, &firstd, &firsty);
	printf("Enter second date (mm/dd/yy):  ");
	scanf("%d/%d/%d", &secm, &secd, &secy);
	if (firsty > secy) { first_is_earlier = false; }
	else if (firsty < secy) { first_is_earlier = true; }
	else {
		if (firstm > secm) { first_is_earlier = false; }
		else if (firstm < secm) { first_is_earlier = true; }
		else {
			if (firstd > secd) { first_is_earlier = false; }
			else if (firstd < secd) { first_is_earlier = true; }
			else { printf("Both are same dates"); return 0; }
		}
	}
	if (first_is_earlier == true) { 
		printf("%d/%d/%.2d is earlier than %d/%d/%.2d", firstm, firstd, firsty, secm, secd, secy); 
	}
	else {
		printf("%d/%d/%.2d is earlier than %d/%d/%.2d", secm, secd, secy, firstm, firstd, firsty);
	}
	return 0;
}

/*
11. Write a program that asks the user for a two-digit number, then prints the English word for the number.
		Enter a two-digit number: 45
		You entered the number forty-five.
*/
int ch5p11(void) {
	int n, d1, d2;
	char digit1[10], digit2[10];
	printf("Enter a two-digit number:  ");
	scanf("%d", &n);
	d1 = n / 10; d2 = n % 10;
	switch (d1) {
		case 1:
			switch (d2) {
			case 0: printf("ten"); break;
				case 1: printf("eleven"); break;
				case 2: printf("twelve"); break;
				case 3: printf("thirteen"); break;
				case 4: printf("fourteen"); break;
				case 5: printf("fifteen"); break;
				case 6: printf("sixteen"); break;
				case 7: printf("seventeen"); break;
				case 8: printf("eighteen"); break;
				case 9: printf("nineteen"); break;
				default: printf("Wrong input");
			}
			return 0;
		case 2: printf("twenty"); break;
		case 3: printf("thirty"); break;
		case 4: printf("forty"); break;
		case 5: printf("fifty"); break;
		case 6: printf("sixty"); break;
		case 7: printf("seventy"); break;
		case 8: printf("eighty"); break;
		case 9: printf("ninety"); break;
		default: printf("Wrong input");
	}
	switch (d2) {
		case 0: printf(""); break;
		case 1: printf("-one"); break;
		case 2: printf("-two"); break;
		case 3: printf("-three"); break;
		case 4: printf("-four"); break;
		case 5: printf("-five"); break;
		case 6: printf("-six"); break;
		case 7: printf("-seven"); break;
		case 8: printf("-eight"); break;
		case 9: printf("-nine"); break;
		default: printf("Wrong input");
	}
	return 0;
}

int chapter5(void) {
	ch5p1(); ch5p2(); ch5p4(); ch5p7(); ch5p9(); ch5p11();
}