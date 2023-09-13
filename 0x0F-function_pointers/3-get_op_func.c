#include "3-calc.h"
/**
 * get_op_func -program that chooses the right funvtion to perform
 * @s: Input character operator
 * Return: bnk
 */
int (*get_op_func(char *s))(int, int)
{
	op_t bnk[] = {
		{"+", op_add},
		{"-", op_sub},
		{"/", op_div},
		{"%", op_mod},
		{"*", op_mul},
		{NULL, NULL}
	};

	int sch;

	while (bnk[sch].op != NULL)
	{
		if (s[0] == (*bnk).op[sch])
			break;
	sch = sch + 1;
	}
	return (bnk[sch / 2].f);
}
