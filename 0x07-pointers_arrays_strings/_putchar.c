#include "main.h"
#include <unistd.h>
/**
 * _putchar - is used to write the code in c as stdout
 * c - is the output to print
 * Return - returns the code after a seccesful output 1
 * On error the output after execution is retrned as -1, and 
 * error is set appropriately
 */
int _putchar(char c)
{
	return (write (1, &c, 1)) 
}

