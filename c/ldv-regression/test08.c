extern void abort(void); 
void reach_error(){}


int a, b;
int *p1, *p2;

int f() {
    int v = *p1 + *p2 - a;
    if (v == 1) {
        p1 = p2;
        return v;
    } else {
        return 0;
    }
}

int main() {

    p1 = &a;
    p2 = &b;

    b = 1;
    a = 5;

    a--;

    a = f();

    if (a && p1 == p2) {
        goto ERROR;

    }

    return 0;

    ERROR: {reach_error();abort();}
    return 1;
}
