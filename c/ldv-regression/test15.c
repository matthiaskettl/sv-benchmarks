extern void abort(void); 
void reach_error(){}
extern int __VERIFIER_nondet_int(void);


void assign(int *pa, int  *pb) {
        *pa = *pb;
}

int main() {
        int a, b;
        b = __VERIFIER_nondet_int();
        assign(&a, &b);
        if (a != b) {
                goto ERROR;
        }

        return 0;

        ERROR: {reach_error();abort();}
        return 1;
}
