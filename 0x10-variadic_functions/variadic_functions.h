#ifndef VARIADIC_FUNCTIONS
#define VARIADIC_FUNCTIONS

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct op - Struct op
 *
 * @op: operator
 * @f: associated function
 */

typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

#endif
