extern void abort(void); 
void reach_error(){}


void __blast_assert()
{
 ERROR: {reach_error();abort();}
}





int main(void) {
 int z,a;
 z = 0;
 ((z == 0) ? (0) : __blast_assert ());
 a = z;
 ((a == 0) ? (0) : __blast_assert ());
 return 0;
}
