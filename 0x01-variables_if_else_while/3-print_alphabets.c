#include <stdio.h>
/**
 * main -
 * main - print numbers from 00 to 99.
(*
 * Return: 0 on success
 */
int main(void)
{

	int i = '0';
	int j = '0';

	while (i <= '9')
	{
		while (j <= '9')
		{
			putchar(i);
			putchar(j);
			if (j == '9' && i == '9')
			{
			  putchar('\n');
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		if (j >= '9')
		{
			j = '0';
		}
		i++;
	}
	return (0);
}

 44  
0x01-variables_if_else_while/100-print_comb3.c
@@ -0,0 +1,44 @@
#include <stdio.h>
/**
 * main - print all unique combinations of two digit numbers, 
 * regardless of the order of the digits.
(*
 * Return: 0 on success
 */
int main(void)
{
	int i = '0';
	int j = '0';

	while (i <= '9')
	{
		while (j <= '9')
		{
			if (i > j || i == j)
			{
			}
			else
			{
				putchar(i);
				putchar(j);
				if (j == '9' && i == '9')
				{
			  		putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		if (j >= '9')
		{
			j = '0';
		}
		i++;
	}
	return (0);
}

 53  
0x01-variables_if_else_while/101-print_comb4.c
@@ -0,0 +1,53 @@
#include <stdio.h>
/**
 * main - print numbers from 00 to 99.
(*
 * Return: 0 on success
 */
int main(void)
{
	int i = '0';
	int j = '0';
	int k = '0';

	while (i <= '9')
	{
		while (j <= '9')
		{
			while (k <= '9')
			{
				if(i > j || j > k || i > k || i == j || i == k || k == j)
				{
				}
				else
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (j == '9' && i == '9' && k == '9')
					{
					  putchar('\n');
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
				k++;
			}
			if(k >= '9')
			{
				k = '0';
			}
			j++;
		}
		if(j >= '9')
		{
			j = '0';
		}
		i++;
	}
	return (0);
}

 18  
0x01-variables_if_else_while/3-print_alphabets.c
@@ -1,11 +1,25 @@
#include <stdio.h>
/**
 * main -
 * main - Prints the alphabet in lowercase, then in uppercase.
(*
 * Return: 0 on success
 */
int main(void)
{

	char c = 'a';
	char d = 'A';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (d <= 'Z')
	{
		putchar(d);
		d++;
	}
	putchar('\n');
	return (0);

}
 14  
0x01-variables_if_else_while/4-print_alphabt.c
@@ -1,11 +1,21 @@
#include <stdio.h>
/**
 * main -
 * main - Prints the alphabet except the letters q and e.
(*
 * Return: 0 on success
 */
int main(void)
{

	char c = 'a';

	while(c <= 'z')
	{
		if(c != 'q' && c != 'e')
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}
 6  
0x01-variables_if_else_while/5-print_numbers.c
@@ -1,11 +1,11 @@
#include <stdio.h>
/**
 * main -
 * main - Prints the numbers from 0-9.
(*
 * Return: 0 on success
 */
int main(void)
{


	printf("0123456789\n");
	return (0);
}
 13  
0x01-variables_if_else_while/6-print_numberz.c
@@ -1,11 +1,20 @@
#include <stdio.h>
/**
 * main -
 * main - prints numbers 0-9 without using char or printf/puts,
 * and putchar 2x max
(*
 * Return: 0 on success
 */
int main(void)
{

	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}

 12  
0x01-variables_if_else_while/7-print_tebahpla.c
@@ -1,11 +1,19 @@
#include <stdio.h>
/**
 * main -
 * main - prints the alphabet in reverse.
(*
 * Return: 0 on success
 */
int main(void)
{

	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}

 18  
0x01-variables_if_else_while/8-print_base64.c
@@ -1,11 +1,25 @@
#include <stdio.h>
/**
 * main -
 * main - prints all numbers of base 16.
(*
 * Return: 0 on success
 */
int main(void)
{

	int i = '0';

	while(i <= '9')
	{
		putchar(i);
		i++;
	}
	i = 'a';
	while(i <= 'f')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);

}
 17  
0x01-variables_if_else_while/9-print_comb.c
@@ -1,11 +1,24 @@
#include <stdio.h>
/**
 * main -
 * main - prints all possible combinations of single digit numbers.
(*
 * Return: 0 on success
 */
int main(void)
{

	int i = '0';

	while(i <= '9')
	{
		putchar(i);
		if(i != '9')
		{
			putchar(',');
			putchar(' ');
		}
		++i;
	}
	putchar('\n');
	return (0);

}

