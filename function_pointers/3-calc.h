#ifndef CAL_H
#define CAL_H
/**
 *struct op- struct operation
 *@op: variable operador
 *@f: variable function
 */
struct op
{
	char *op;
	int (*f)(int a, int b);

};

typedef struct op op_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif
