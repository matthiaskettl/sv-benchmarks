extern void abort(void); 
void reach_error(){}
extern void abort(void); 
void assume_abort_if_not(int cond) { 
  if(!cond) {abort();}
}
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } }
extern int __VERIFIER_nondet_int(void);
void *malloc(unsigned int size);

int ReadFromPort()
{
	int x = __VERIFIER_nondet_int();
	return x;
}

int SIZE;

const int MAX = 100000;

int main()
{
	SIZE = __VERIFIER_nondet_int();
	if(SIZE > 1 && SIZE < MAX)
	{
		int i;
		int value;
		int *a = malloc(sizeof(int)*SIZE);
		int DEFAULTVAL = 0; 
		int FIXEDVAL = 10; 

		if(SIZE % 4 != 0) { return 1; }

		assume_abort_if_not(SIZE % 4 == 0);
		for (i = 1 ; i <= SIZE/4 ; i++)
		{
			value = ReadFromPort();	
			if(value != DEFAULTVAL)
			{
				a[i*4 - 4] = value ;   
			}
			else 
			{
				a[i*4 - 4] = FIXEDVAL;  
			}

			value = ReadFromPort();	
			if(value != DEFAULTVAL)
			{
				a[i*4 - 3] = value ;   
			}
			else 
			{
				a[i*4 - 3] = FIXEDVAL;  
			}

			value = ReadFromPort();	
			if(value != DEFAULTVAL)
			{
				a[i*4 - 2] = value ;   
			}
			else 
			{
				a[i*4 - 2] = FIXEDVAL;  
			}

			value = ReadFromPort();	
			if(value != DEFAULTVAL)
			{
				a[i*4 - 1] = value ;   
			}
			else 
			{
				a[i*4 - 1] = FIXEDVAL;  
			}
		}

		for ( i = 0; i < SIZE; i++)  
		{
			__VERIFIER_assert(a[i]!=DEFAULTVAL);
		}
	}
	return 1;
}
