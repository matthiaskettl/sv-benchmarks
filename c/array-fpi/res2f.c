/*
 * Benchmarks contributed by Divyesh Unadkat[1,2], Supratik Chakraborty[1], Ashutosh Gupta[1]
 * [1] Indian Institute of Technology Bombay, Mumbai
 * [2] TCS Innovation labs, Pune
 *
 */

extern void abort(void); 
void reach_error(){}
extern void abort(void); 
void assume_abort_if_not(int cond) { 
  if(!cond) {abort();}
}
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } }
extern int __VERIFIER_nondet_int(void);
void* malloc(unsigned int size);

int N;

int main()
{
	N = __VERIFIER_nondet_int();
	if(N <= 0) return 1;
	assume_abort_if_not(N <= 2147483647/sizeof(int));

	int i;
	long long sum[1];
	int *a = malloc(sizeof(int)*N);
	int *b = malloc(sizeof(int)*N);
	int *c = malloc(sizeof(int)*N);

	sum[0] = 1;
	for(i=0; i<N; i++)
	{
		a[i] = 1;
	}

	for(i=0; i<N; i++)
	{
		sum[0] = sum[0] + a[i];
	}

	for(i=0; i<N; i++)
	{
		b[i] = 1;
	}

	for(i=0; i<N; i++)
	{
		sum[0] = sum[0] + b[i];
	}

	for(i=0; i<N; i++)
	{
		c[i] = 1;
	}

	for(i=0; i<N; i++)
	{
		sum[0] = sum[0] + c[i];
	}

	__VERIFIER_assert(sum[0] <= 3*N);
	return 1;
}
