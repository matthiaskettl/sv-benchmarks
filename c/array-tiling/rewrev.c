extern void abort(void); 
void reach_error(){}
extern void abort(void); 
void assume_abort_if_not(int cond) { 
  if(!cond) {abort();}
}
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } }
extern int __VERIFIER_nondet_int(void);
void *malloc(unsigned int size);

const int MAX = 100000;
int SIZE;

int main()
{
	SIZE = __VERIFIER_nondet_int();
	if(SIZE > 1 && SIZE < MAX)
	{
		int i;
		int *a = malloc(sizeof(int)*SIZE);
		int val2 = 3;
		int val1 = 7;
		int low=2;

		for(i=SIZE-2; i >= -1; i--)
		{
			if(i >= 0)
			{
				a[i] = val1;
			}
			a[i+1] = val2;
		}

		for(i = 0; i < SIZE; i++)
		{
			__VERIFIER_assert(a[i] >= low);
		}
	}
	return 1;
}
