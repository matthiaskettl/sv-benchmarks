int __return_main;
void abort(void); 
void reach_error(){}
_Bool __VERIFIER_nondet_bool();
char __VERIFIER_nondet_char();
unsigned char __VERIFIER_nondet_uchar();
void assert(_Bool arg);
void abort(void); 
void assume_abort_if_not(int cond) { 
  if(!cond) {abort();}
}
typedef char msg_t;
typedef int port_t;
void read(port_t p, msg_t m);
void write(port_t p, msg_t m);
msg_t nomsg = (msg_t )-1;
unsigned char r1 = '\x0';
port_t p1 = 0;
char p1_old = '\x0';
char p1_new = '\x0';
char id1 = '\x0';
char st1 = '\x0';
msg_t send1 = '\x0';
_Bool mode1 = 0;
_Bool alive1 = 0;
port_t p2 = 0;
char p2_old = '\x0';
char p2_new = '\x0';
char id2 = '\x0';
char st2 = '\x0';
msg_t send2 = '\x0';
_Bool mode2 = 0;
_Bool alive2 = 0;
port_t p3 = 0;
char p3_old = '\x0';
char p3_new = '\x0';
char id3 = '\x0';
char st3 = '\x0';
msg_t send3 = '\x0';
_Bool mode3 = 0;
_Bool alive3 = 0;
port_t p4 = 0;
char p4_old = '\x0';
char p4_new = '\x0';
char id4 = '\x0';
char st4 = '\x0';
msg_t send4 = '\x0';
_Bool mode4 = 0;
_Bool alive4 = 0;
port_t p5 = 0;
char p5_old = '\x0';
char p5_new = '\x0';
char id5 = '\x0';
char st5 = '\x0';
msg_t send5 = '\x0';
_Bool mode5 = 0;
_Bool alive5 = 0;
void node1();
void node2();
void node3();
void node4();
void node5();
void (*nodes[5])() = { &node1, &node2, &node3, &node4, &node5 };
int init();
int check();
int main();
int __return_33158;
int __return_33314;
 int main()
 {
 int main__c1;
 int main__i2;
 main__c1 = 0;
 r1 = __VERIFIER_nondet_uchar();
 id1 = __VERIFIER_nondet_char();
 st1 = __VERIFIER_nondet_char();
 send1 = __VERIFIER_nondet_char();
 mode1 = __VERIFIER_nondet_bool();
 alive1 = __VERIFIER_nondet_bool();
 id2 = __VERIFIER_nondet_char();
 st2 = __VERIFIER_nondet_char();
 send2 = __VERIFIER_nondet_char();
 mode2 = __VERIFIER_nondet_bool();
 alive2 = __VERIFIER_nondet_bool();
 id3 = __VERIFIER_nondet_char();
 st3 = __VERIFIER_nondet_char();
 send3 = __VERIFIER_nondet_char();
 mode3 = __VERIFIER_nondet_bool();
 alive3 = __VERIFIER_nondet_bool();
 id4 = __VERIFIER_nondet_char();
 st4 = __VERIFIER_nondet_char();
 send4 = __VERIFIER_nondet_char();
 mode4 = __VERIFIER_nondet_bool();
 alive4 = __VERIFIER_nondet_bool();
 id5 = __VERIFIER_nondet_char();
 st5 = __VERIFIER_nondet_char();
 send5 = __VERIFIER_nondet_char();
 mode5 = __VERIFIER_nondet_bool();
 alive5 = __VERIFIER_nondet_bool();
 {
 int init__tmp;
 if (((int)r1) == 0)
 {
 if (((((((int)alive1) + ((int)alive2)) + ((int)alive3)) + ((int)alive4)) + ((int)alive5)) >= 1)
 {
 if (((int)id1) >= 0)
 {
 if (((int)st1) == 0)
 {
 if (((int)send1) == ((int)id1))
 {
 if (((int)mode1) == 0)
 {
 if (((int)id2) >= 0)
 {
 if (((int)st2) == 0)
 {
 if (((int)send2) == ((int)id2))
 {
 if (((int)mode2) == 0)
 {
 if (((int)id3) >= 0)
 {
 if (((int)st3) == 0)
 {
 if (((int)send3) == ((int)id3))
 {
 if (((int)mode3) == 0)
 {
 if (((int)id4) >= 0)
 {
 if (((int)st4) == 0)
 {
 if (((int)send4) == ((int)id4))
 {
 if (((int)mode4) == 0)
 {
 if (((int)id5) >= 0)
 {
 if (((int)st5) == 0)
 {
 if (((int)send5) == ((int)id5))
 {
 if (((int)mode5) == 0)
 {
 if (((int)id1) != ((int)id2))
 {
 if (((int)id1) != ((int)id3))
 {
 if (((int)id1) != ((int)id4))
 {
 if (((int)id1) != ((int)id5))
 {
 if (((int)id2) != ((int)id3))
 {
 if (((int)id2) != ((int)id4))
 {
 if (((int)id2) != ((int)id5))
 {
 if (((int)id3) != ((int)id4))
 {
 if (((int)id3) != ((int)id5))
 {
 if (((int)id4) != ((int)id5))
 {
 init__tmp = 1;
  __return_33158 = init__tmp;
 main__i2 = __return_33158;
 if (main__i2 != 0)
 {
 p1_old = nomsg;
 p1_new = nomsg;
 p2_old = nomsg;
 p2_new = nomsg;
 p3_old = nomsg;
 p3_new = nomsg;
 p4_old = nomsg;
 p4_new = nomsg;
 p5_old = nomsg;
 p5_new = nomsg;
 main__i2 = 0;
 label_33173:; 
 {
 msg_t node1__m1;
 node1__m1 = nomsg;
 if (!(mode1 == 0))
 {
 if (r1 == 255)
 {
 r1 = 4;
 label_33322:; 
 r1 = r1 + 1;
 node1__m1 = p5_old;
 p5_old = nomsg;
 if (((int)node1__m1) != ((int)nomsg))
 {
 if (!(alive1 == 0))
 {
 if (((int)node1__m1) > ((int)id1))
 {
 send1 = node1__m1;
 label_33341:; 
 label_33326:; 
 mode1 = 0;
 label_33184:; 
 {
 msg_t node2__m2;
 node2__m2 = nomsg;
 if (!(mode2 == 0))
 {
 node2__m2 = p1_old;
 p1_old = nomsg;
 if (((int)node2__m2) != ((int)nomsg))
 {
 if (!(alive2 == 0))
 {
 if (((int)node2__m2) > ((int)id2))
 {
 send2 = node2__m2;
 label_33357:; 
 label_33340:; 
 mode2 = 0;
 label_33213:; 
 {
 msg_t node3__m3;
 node3__m3 = nomsg;
 if (!(mode3 == 0))
 {
 node3__m3 = p2_old;
 p2_old = nomsg;
 if (((int)node3__m3) != ((int)nomsg))
 {
 if (!(alive3 == 0))
 {
 if (((int)node3__m3) > ((int)id3))
 {
 send3 = node3__m3;
 label_33372:; 
 label_33356:; 
 mode3 = 0;
 label_33239:; 
 {
 msg_t node4__m4;
 node4__m4 = nomsg;
 if (!(mode4 == 0))
 {
 node4__m4 = p3_old;
 p3_old = nomsg;
 if (((int)node4__m4) != ((int)nomsg))
 {
 if (!(alive4 == 0))
 {
 if (((int)node4__m4) > ((int)id4))
 {
 send4 = node4__m4;
 label_33388:; 
 label_33374:; 
 mode4 = 0;
 label_33265:; 
 {
 msg_t node5__m5;
 node5__m5 = nomsg;
 if (!(mode5 == 0))
 {
 node5__m5 = p4_old;
 p4_old = nomsg;
 if (((int)node5__m5) != ((int)nomsg))
 {
 if (!(alive5 == 0))
 {
 if (((int)node5__m5) > ((int)id5))
 {
 send5 = node5__m5;
 label_33401:; 
 label_33390:; 
 mode5 = 0;
 label_33291:; 
 p1_old = p1_new;
 p1_new = nomsg;
 p2_old = p2_new;
 p2_new = nomsg;
 p3_old = p3_new;
 p3_new = nomsg;
 p4_old = p4_new;
 p4_new = nomsg;
 p5_old = p5_new;
 p5_new = nomsg;
 {
 int check__tmp;
 if (((((((int)st1) + ((int)st2)) + ((int)st3)) + ((int)st4)) + ((int)st5)) <= 1)
 {
 if (((int)r1) < 5)
 {
 check__tmp = 1;
 label_33312:; 
 label_33313:; 
  __return_33314 = check__tmp;
 main__c1 = __return_33314;
 {
 _Bool __tmp_1;
 __tmp_1 = main__c1;
 _Bool assert__arg;
 assert__arg = __tmp_1;
 if (assert__arg == 0)
 {
 {reach_error();abort();}
 return __return_main;
 }
 else 
 {
 goto label_33173;
 }
 }
 }
 else 
 {
 if (((((((int)st1) + ((int)st2)) + ((int)st3)) + ((int)st4)) + ((int)st5)) == 1)
 {
 check__tmp = 1;
 goto label_33312;
 }
 else 
 {
 check__tmp = 0;
 goto label_33312;
 }
 }
 }
 else 
 {
 check__tmp = 0;
 goto label_33313;
 }
 }
 }
 else 
 {
 if (((int)node5__m5) == ((int)id5))
 {
 st5 = 1;
 goto label_33401;
 }
 else 
 {
 goto label_33401;
 }
 }
 }
 else 
 {
 send5 = node5__m5;
 goto label_33390;
 }
 }
 else 
 {
 goto label_33390;
 }
 }
 else 
 {
 if (!(alive5 == 0))
 {
 int node5____CPAchecker_TMP_0;
 if (send5 != nomsg)
 {
 if (p5_new == nomsg)
 {
 node5____CPAchecker_TMP_0 = send5;
 label_33288:; 
 p5_new = node5____CPAchecker_TMP_0;
 label_33281:; 
 mode5 = 1;
 goto label_33291;
 }
 else 
 {
 label_33283:; 
 node5____CPAchecker_TMP_0 = p5_new;
 goto label_33288;
 }
 }
 else 
 {
 goto label_33283;
 }
 }
 else 
 {
 if (((int)send5) != ((int)id5))
 {
 int node5____CPAchecker_TMP_1;
 if (send5 != nomsg)
 {
 if (p5_new == nomsg)
 {
 node5____CPAchecker_TMP_1 = send5;
 label_33290:; 
 p5_new = node5____CPAchecker_TMP_1;
 goto label_33281;
 }
 else 
 {
 label_33285:; 
 node5____CPAchecker_TMP_1 = p5_new;
 goto label_33290;
 }
 }
 else 
 {
 goto label_33285;
 }
 }
 else 
 {
 goto label_33281;
 }
 }
 }
 }
 }
 else 
 {
 if (((int)node4__m4) == ((int)id4))
 {
 st4 = 1;
 goto label_33388;
 }
 else 
 {
 goto label_33388;
 }
 }
 }
 else 
 {
 send4 = node4__m4;
 goto label_33374;
 }
 }
 else 
 {
 goto label_33374;
 }
 }
 else 
 {
 if (!(alive4 == 0))
 {
 int node4____CPAchecker_TMP_0;
 if (send4 != nomsg)
 {
 if (p4_new == nomsg)
 {
 node4____CPAchecker_TMP_0 = send4;
 label_33262:; 
 p4_new = node4____CPAchecker_TMP_0;
 label_33255:; 
 mode4 = 1;
 goto label_33265;
 }
 else 
 {
 label_33257:; 
 node4____CPAchecker_TMP_0 = p4_new;
 goto label_33262;
 }
 }
 else 
 {
 goto label_33257;
 }
 }
 else 
 {
 if (((int)send4) != ((int)id4))
 {
 int node4____CPAchecker_TMP_1;
 if (send4 != nomsg)
 {
 if (p4_new == nomsg)
 {
 node4____CPAchecker_TMP_1 = send4;
 label_33264:; 
 p4_new = node4____CPAchecker_TMP_1;
 goto label_33255;
 }
 else 
 {
 label_33259:; 
 node4____CPAchecker_TMP_1 = p4_new;
 goto label_33264;
 }
 }
 else 
 {
 goto label_33259;
 }
 }
 else 
 {
 goto label_33255;
 }
 }
 }
 }
 }
 else 
 {
 if (((int)node3__m3) == ((int)id3))
 {
 st3 = 1;
 goto label_33372;
 }
 else 
 {
 goto label_33372;
 }
 }
 }
 else 
 {
 send3 = node3__m3;
 goto label_33356;
 }
 }
 else 
 {
 goto label_33356;
 }
 }
 else 
 {
 if (!(alive3 == 0))
 {
 int node3____CPAchecker_TMP_0;
 if (send3 != nomsg)
 {
 if (p3_new == nomsg)
 {
 node3____CPAchecker_TMP_0 = send3;
 label_33236:; 
 p3_new = node3____CPAchecker_TMP_0;
 label_33229:; 
 mode3 = 1;
 goto label_33239;
 }
 else 
 {
 label_33231:; 
 node3____CPAchecker_TMP_0 = p3_new;
 goto label_33236;
 }
 }
 else 
 {
 goto label_33231;
 }
 }
 else 
 {
 if (((int)send3) != ((int)id3))
 {
 int node3____CPAchecker_TMP_1;
 if (send3 != nomsg)
 {
 if (p3_new == nomsg)
 {
 node3____CPAchecker_TMP_1 = send3;
 label_33238:; 
 p3_new = node3____CPAchecker_TMP_1;
 goto label_33229;
 }
 else 
 {
 label_33233:; 
 node3____CPAchecker_TMP_1 = p3_new;
 goto label_33238;
 }
 }
 else 
 {
 goto label_33233;
 }
 }
 else 
 {
 goto label_33229;
 }
 }
 }
 }
 }
 else 
 {
 if (((int)node2__m2) == ((int)id2))
 {
 st2 = 1;
 goto label_33357;
 }
 else 
 {
 goto label_33357;
 }
 }
 }
 else 
 {
 send2 = node2__m2;
 goto label_33340;
 }
 }
 else 
 {
 goto label_33340;
 }
 }
 else 
 {
 if (!(alive2 == 0))
 {
 int node2____CPAchecker_TMP_0;
 if (send2 != nomsg)
 {
 if (p2_new == nomsg)
 {
 node2____CPAchecker_TMP_0 = send2;
 label_33210:; 
 p2_new = node2____CPAchecker_TMP_0;
 label_33203:; 
 mode2 = 1;
 goto label_33213;
 }
 else 
 {
 label_33205:; 
 node2____CPAchecker_TMP_0 = p2_new;
 goto label_33210;
 }
 }
 else 
 {
 goto label_33205;
 }
 }
 else 
 {
 if (((int)send2) != ((int)id2))
 {
 int node2____CPAchecker_TMP_1;
 if (send2 != nomsg)
 {
 if (p2_new == nomsg)
 {
 node2____CPAchecker_TMP_1 = send2;
 label_33212:; 
 p2_new = node2____CPAchecker_TMP_1;
 goto label_33203;
 }
 else 
 {
 label_33207:; 
 node2____CPAchecker_TMP_1 = p2_new;
 goto label_33212;
 }
 }
 else 
 {
 goto label_33207;
 }
 }
 else 
 {
 goto label_33203;
 }
 }
 }
 }
 }
 else 
 {
 if (((int)node1__m1) == ((int)id1))
 {
 st1 = 1;
 goto label_33341;
 }
 else 
 {
 goto label_33341;
 }
 }
 }
 else 
 {
 send1 = node1__m1;
 goto label_33326;
 }
 }
 else 
 {
 goto label_33326;
 }
 }
 else 
 {
 goto label_33322;
 }
 }
 else 
 {
 if (!(alive1 == 0))
 {
 int node1____CPAchecker_TMP_0;
 if (send1 != nomsg)
 {
 if (p1_new == nomsg)
 {
 node1____CPAchecker_TMP_0 = send1;
 label_33189:; 
 p1_new = node1____CPAchecker_TMP_0;
 label_33180:; 
 mode1 = 1;
 goto label_33184;
 }
 else 
 {
 label_33186:; 
 node1____CPAchecker_TMP_0 = p1_new;
 goto label_33189;
 }
 }
 else 
 {
 goto label_33186;
 }
 }
 else 
 {
 goto label_33180;
 }
 }
 }
 }
 else 
 {
 return __return_main;
 }
 }
 else 
 {
 return __return_main;
 }
 }
 else 
 {
 return __return_main;
 }
 }
 else 
 {
 return __return_main;
 }
 }
 else 
 {
 return __return_main;
 }
 }
 else 
 {
 return __return_main;
 }
 }
 else 
 {
 return __return_main;
 }
 }
 else 
 {
 return __return_main;
 }
 }
 else 
 {
 return __return_main;
 }
 }
 else 
 {
 return __return_main;
 }
 }
 else 
 {
 return __return_main;
 }
 }
 else 
 {
 return __return_main;
 }
 }
 else 
 {
 return __return_main;
 }
 }
 else 
 {
 return __return_main;
 }
 }
 else 
 {
 return __return_main;
 }
 }
 else 
 {
 return __return_main;
 }
 }
 else 
 {
 return __return_main;
 }
 }
 else 
 {
 return __return_main;
 }
 }
 else 
 {
 return __return_main;
 }
 }
 else 
 {
 return __return_main;
 }
 }
 else 
 {
 return __return_main;
 }
 }
 else 
 {
 return __return_main;
 }
 }
 else 
 {
 return __return_main;
 }
 }
 else 
 {
 return __return_main;
 }
 }
 else 
 {
 return __return_main;
 }
 }
 else 
 {
 return __return_main;
 }
 }
 else 
 {
 return __return_main;
 }
 }
 else 
 {
 return __return_main;
 }
 }
 else 
 {
 return __return_main;
 }
 }
 else 
 {
 return __return_main;
 }
 }
 else 
 {
 return __return_main;
 }
 }
 else 
 {
 return __return_main;
 }
 }
 else 
 {
 return __return_main;
 }
 }
 }
