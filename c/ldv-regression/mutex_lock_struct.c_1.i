extern void abort(void); 
void reach_error(){}










void err()
{ ERROR: {reach_error();abort();}}

struct mutex {
 int is_locked;
};

void mutex_lock(struct mutex *a)
{
 if (a->is_locked == 1) err();
 a->is_locked = 1;
}

void mutex_unlock(struct mutex *b)
{
 if (b->is_locked != 1) err();
 b->is_locked = 0;
}

int main()
{
 struct mutex m;
 m.is_locked = 0;

 mutex_lock(&m);

 mutex_unlock(&m);




}
