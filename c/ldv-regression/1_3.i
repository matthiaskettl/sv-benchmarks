extern void abort(void); 
void reach_error(){}


void __blast_assert()
{
 ERROR: {reach_error();abort();}
}


struct RR
{
 int state;
};

typedef struct RR rr;

extern int __VERIFIER_nondet_int();

typedef unsigned int size_t;
extern  __attribute__((__nothrow__)) void *malloc(size_t __size )  __attribute__((__malloc__)) ;







rr * getrr()
{
 rr * r = (rr *)malloc(sizeof *r);
 r -> state = 0;
 return r;
}

rr * getPtr()
{
 rr * r = getrr();
 r -> state = 1;
 return r;
}

void freePtr(rr * ptr)
{
 ((ptr -> state == 1) ? (0) : __blast_assert ());
 ptr -> state = 2;
}

int main()
{
 rr * ptr1 = 0;
 ptr1 = getPtr();
 freePtr(ptr1);

 freePtr(ptr1);

 return 0;
}
