int __return_main;
void abort(void); 
void reach_error(){}
_Bool __VERIFIER_nondet_bool();
char __VERIFIER_nondet_char();
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
char r1 = '\x0';
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
port_t p6 = 0;
char p6_old = '\x0';
char p6_new = '\x0';
char id6 = '\x0';
char st6 = '\x0';
msg_t send6 = '\x0';
_Bool mode6 = 0;
_Bool alive6 = 0;
void node1();
void node2();
void node3();
void node4();
void node5();
void node6();
void (*nodes[6])() = { &node1, &node2, &node3, &node4, &node5, &node6 };
int init();
int check();
int main();
int __return_104960;
int __return_105100;
int __tmp_105291_0;
int __return_105325;
int __return_105220;
 int main()
 {
 int main__c1;
 int main__i2;
 main__c1 = 0;
 r1 = __VERIFIER_nondet_char();
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
 id6 = __VERIFIER_nondet_char();
 st6 = __VERIFIER_nondet_char();
 send6 = __VERIFIER_nondet_char();
 mode6 = __VERIFIER_nondet_bool();
 alive6 = __VERIFIER_nondet_bool();
 {
 int init__tmp;
 if (((int)r1) == 0)
 {
 if ((((((((int)alive1) + ((int)alive2)) + ((int)alive3)) + ((int)alive4)) + ((int)alive5)) + ((int)alive6)) >= 1)
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
 if (((int)id6) >= 0)
 {
 if (((int)st6) == 0)
 {
 if (((int)send6) == ((int)id6))
 {
 if (((int)mode6) == 0)
 {
 if (((int)id1) != ((int)id2))
 {
 if (((int)id1) != ((int)id3))
 {
 if (((int)id1) != ((int)id4))
 {
 if (((int)id1) != ((int)id5))
 {
 if (((int)id1) != ((int)id6))
 {
 if (((int)id2) != ((int)id3))
 {
 if (((int)id2) != ((int)id4))
 {
 if (((int)id2) != ((int)id5))
 {
 if (((int)id2) != ((int)id6))
 {
 if (((int)id3) != ((int)id4))
 {
 if (((int)id3) != ((int)id5))
 {
 if (((int)id3) != ((int)id6))
 {
 if (((int)id4) != ((int)id5))
 {
 if (((int)id4) != ((int)id6))
 {
 if (((int)id5) != ((int)id6))
 {
 init__tmp = 1;
  __return_104960 = init__tmp;
 main__i2 = __return_104960;
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
 p6_old = nomsg;
 p6_new = nomsg;
 main__i2 = 0;
 if (main__i2 < 12)
 {
 {
 msg_t node1__m1;
 node1__m1 = nomsg;
 if (!(mode1 == 0))
 {
 return __return_main;
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
 label_104989:; 
 p1_new = node1____CPAchecker_TMP_0;
 label_104984:; 
 mode1 = 1;
 {
 msg_t node2__m2;
 node2__m2 = nomsg;
 if (!(mode2 == 0))
 {
 return __return_main;
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
 label_105005:; 
 p2_new = node2____CPAchecker_TMP_0;
 label_105007:; 
 mode2 = 1;
 {
 msg_t node3__m3;
 node3__m3 = nomsg;
 if (!(mode3 == 0))
 {
 return __return_main;
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
 label_105022:; 
 p3_new = node3____CPAchecker_TMP_0;
 label_105024:; 
 mode3 = 1;
 {
 msg_t node4__m4;
 node4__m4 = nomsg;
 if (!(mode4 == 0))
 {
 return __return_main;
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
 label_105039:; 
 p4_new = node4____CPAchecker_TMP_0;
 label_105041:; 
 mode4 = 1;
 {
 msg_t node5__m5;
 node5__m5 = nomsg;
 if (!(mode5 == 0))
 {
 return __return_main;
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
 label_105056:; 
 p5_new = node5____CPAchecker_TMP_0;
 label_105058:; 
 mode5 = 1;
 {
 msg_t node6__m6;
 node6__m6 = nomsg;
 if (!(mode6 == 0))
 {
 return __return_main;
 }
 else 
 {
 if (!(alive6 == 0))
 {
 int node6____CPAchecker_TMP_0;
 if (send6 != nomsg)
 {
 if (p6_new == nomsg)
 {
 node6____CPAchecker_TMP_0 = send6;
 label_105073:; 
 p6_new = node6____CPAchecker_TMP_0;
 label_105075:; 
 mode6 = 1;
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
 p6_old = p6_new;
 p6_new = nomsg;
 {
 int check__tmp;
 if ((((((((int)st1) + ((int)st2)) + ((int)st3)) + ((int)st4)) + ((int)st5)) + ((int)st6)) <= 1)
 {
 if (((int)r1) < 6)
 {
 check__tmp = 1;
  __return_105100 = check__tmp;
 main__c1 = __return_105100;
 {
 _Bool __tmp_1;
 __tmp_1 = main__c1;
 _Bool assert__arg;
 assert__arg = __tmp_1;
 if (assert__arg == 0)
 {
 return __return_main;
 }
 else 
 {
 int main____CPAchecker_TMP_0 = main__i2;
 main__i2 = main__i2 + 1;
 if (main__i2 < 12)
 {
 {
 msg_t node1__m1;
 node1__m1 = nomsg;
 if (!(mode1 == 0))
 {
 r1 = (char)(((int)r1) + 1);
 node1__m1 = p6_old;
 p6_old = nomsg;
 if (((int)node1__m1) != ((int)nomsg))
 {
 if (!(alive1 == 0))
 {
 if (((int)node1__m1) > ((int)id1))
 {
 send1 = node1__m1;
 label_105517:; 
 label_105121:; 
 mode1 = 0;
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
 label_105507:; 
 label_105134:; 
 mode2 = 0;
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
 label_105605:; 
 label_105146:; 
 mode3 = 0;
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
 label_105585:; 
 label_105158:; 
 mode4 = 0;
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
 label_105565:; 
 label_105170:; 
 mode5 = 0;
 __tmp_105291_0 = main____CPAchecker_TMP_0;
 label_105291:; 
 main____CPAchecker_TMP_0 = __tmp_105291_0;
 {
 msg_t node6__m6;
 node6__m6 = nomsg;
 if (!(mode6 == 0))
 {
 node6__m6 = p5_old;
 p5_old = nomsg;
 if (((int)node6__m6) != ((int)nomsg))
 {
 if (!(alive6 == 0))
 {
 if (((int)node6__m6) > ((int)id6))
 {
 send6 = node6__m6;
 label_105348:; 
 label_105301:; 
 mode6 = 0;
 label_105303:; 
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
 p6_old = p6_new;
 p6_new = nomsg;
 {
 int check__tmp;
 if ((((((((int)st1) + ((int)st2)) + ((int)st3)) + ((int)st4)) + ((int)st5)) + ((int)st6)) <= 1)
 {
 if (((int)r1) < 6)
 {
 check__tmp = 1;
 label_105339:; 
 label_105324:; 
  __return_105325 = check__tmp;
 main__c1 = __return_105325;
 {
 _Bool __tmp_2;
 __tmp_2 = main__c1;
 _Bool assert__arg;
 assert__arg = __tmp_2;
 if (assert__arg == 0)
 {
 {reach_error();abort();}
 return __return_main;
 }
 else 
 {
 int main____CPAchecker_TMP_0 = main__i2;
 main__i2 = main__i2 + 1;
 if (main__i2 < 12)
 {
 {
 msg_t node1__m1;
 node1__m1 = nomsg;
 if (!(mode1 == 0))
 {
 r1 = (char)(((int)r1) + 1);
 node1__m1 = p6_old;
 p6_old = nomsg;
 if (((int)node1__m1) != ((int)nomsg))
 {
 if (!(alive1 == 0))
 {
 if (((int)node1__m1) > ((int)id1))
 {
 send1 = node1__m1;
 label_105488:; 
 label_105231:; 
 mode1 = 0;
 label_105233:; 
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
 label_105460:; 
 label_105245:; 
 mode2 = 0;
 label_105247:; 
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
 label_105432:; 
 label_105259:; 
 mode3 = 0;
 label_105261:; 
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
 label_105404:; 
 label_105273:; 
 mode4 = 0;
 label_105275:; 
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
 label_105376:; 
 label_105287:; 
 mode5 = 0;
 label_105289:; 
 __tmp_105291_0 = main____CPAchecker_TMP_0;
 goto label_105291;
 }
 else 
 {
 if (((int)node5__m5) == ((int)id5))
 {
 st5 = 1;
 goto label_105376;
 }
 else 
 {
 goto label_105376;
 }
 }
 }
 else 
 {
 send5 = node5__m5;
 goto label_105287;
 }
 }
 else 
 {
 goto label_105287;
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
 label_105385:; 
 p5_new = node5____CPAchecker_TMP_0;
 label_105387:; 
 mode5 = 1;
 goto label_105289;
 }
 else 
 {
 label_105384:; 
 node5____CPAchecker_TMP_0 = p5_new;
 goto label_105385;
 }
 }
 else 
 {
 goto label_105384;
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
 label_105395:; 
 p5_new = node5____CPAchecker_TMP_1;
 goto label_105387;
 }
 else 
 {
 label_105394:; 
 node5____CPAchecker_TMP_1 = p5_new;
 goto label_105395;
 }
 }
 else 
 {
 goto label_105394;
 }
 }
 else 
 {
 goto label_105387;
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
 goto label_105404;
 }
 else 
 {
 goto label_105404;
 }
 }
 }
 else 
 {
 send4 = node4__m4;
 goto label_105273;
 }
 }
 else 
 {
 goto label_105273;
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
 label_105413:; 
 p4_new = node4____CPAchecker_TMP_0;
 label_105415:; 
 mode4 = 1;
 goto label_105275;
 }
 else 
 {
 label_105412:; 
 node4____CPAchecker_TMP_0 = p4_new;
 goto label_105413;
 }
 }
 else 
 {
 goto label_105412;
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
 label_105423:; 
 p4_new = node4____CPAchecker_TMP_1;
 goto label_105415;
 }
 else 
 {
 label_105422:; 
 node4____CPAchecker_TMP_1 = p4_new;
 goto label_105423;
 }
 }
 else 
 {
 goto label_105422;
 }
 }
 else 
 {
 goto label_105415;
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
 goto label_105432;
 }
 else 
 {
 goto label_105432;
 }
 }
 }
 else 
 {
 send3 = node3__m3;
 goto label_105259;
 }
 }
 else 
 {
 goto label_105259;
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
 label_105441:; 
 p3_new = node3____CPAchecker_TMP_0;
 label_105443:; 
 mode3 = 1;
 goto label_105261;
 }
 else 
 {
 label_105440:; 
 node3____CPAchecker_TMP_0 = p3_new;
 goto label_105441;
 }
 }
 else 
 {
 goto label_105440;
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
 label_105451:; 
 p3_new = node3____CPAchecker_TMP_1;
 goto label_105443;
 }
 else 
 {
 label_105450:; 
 node3____CPAchecker_TMP_1 = p3_new;
 goto label_105451;
 }
 }
 else 
 {
 goto label_105450;
 }
 }
 else 
 {
 goto label_105443;
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
 goto label_105460;
 }
 else 
 {
 goto label_105460;
 }
 }
 }
 else 
 {
 send2 = node2__m2;
 goto label_105245;
 }
 }
 else 
 {
 goto label_105245;
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
 label_105469:; 
 p2_new = node2____CPAchecker_TMP_0;
 label_105471:; 
 mode2 = 1;
 goto label_105247;
 }
 else 
 {
 label_105468:; 
 node2____CPAchecker_TMP_0 = p2_new;
 goto label_105469;
 }
 }
 else 
 {
 goto label_105468;
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
 label_105479:; 
 p2_new = node2____CPAchecker_TMP_1;
 goto label_105471;
 }
 else 
 {
 label_105478:; 
 node2____CPAchecker_TMP_1 = p2_new;
 goto label_105479;
 }
 }
 else 
 {
 goto label_105478;
 }
 }
 else 
 {
 goto label_105471;
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
 goto label_105488;
 }
 else 
 {
 goto label_105488;
 }
 }
 }
 else 
 {
 send1 = node1__m1;
 goto label_105231;
 }
 }
 else 
 {
 goto label_105231;
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
 label_105497:; 
 p1_new = node1____CPAchecker_TMP_0;
 label_105492:; 
 mode1 = 1;
 goto label_105233;
 }
 else 
 {
 label_105496:; 
 node1____CPAchecker_TMP_0 = p1_new;
 goto label_105497;
 }
 }
 else 
 {
 goto label_105496;
 }
 }
 else 
 {
 goto label_105492;
 }
 }
 }
 }
 else 
 {
  __return_105220 = 0;
 return __return_105220;
 }
 }
 }
 }
 else 
 {
 if ((((((((int)st1) + ((int)st2)) + ((int)st3)) + ((int)st4)) + ((int)st5)) + ((int)st6)) == 1)
 {
 check__tmp = 1;
 goto label_105339;
 }
 else 
 {
 check__tmp = 0;
 goto label_105339;
 }
 }
 }
 else 
 {
 check__tmp = 0;
 goto label_105324;
 }
 }
 }
 else 
 {
 if (((int)node6__m6) == ((int)id6))
 {
 st6 = 1;
 goto label_105348;
 }
 else 
 {
 goto label_105348;
 }
 }
 }
 else 
 {
 send6 = node6__m6;
 goto label_105301;
 }
 }
 else 
 {
 goto label_105301;
 }
 }
 else 
 {
 if (!(alive6 == 0))
 {
 int node6____CPAchecker_TMP_0;
 if (send6 != nomsg)
 {
 if (p6_new == nomsg)
 {
 node6____CPAchecker_TMP_0 = send6;
 label_105357:; 
 p6_new = node6____CPAchecker_TMP_0;
 label_105359:; 
 mode6 = 1;
 goto label_105303;
 }
 else 
 {
 label_105356:; 
 node6____CPAchecker_TMP_0 = p6_new;
 goto label_105357;
 }
 }
 else 
 {
 goto label_105356;
 }
 }
 else 
 {
 if (((int)send6) != ((int)id6))
 {
 int node6____CPAchecker_TMP_1;
 if (send6 != nomsg)
 {
 if (p6_new == nomsg)
 {
 node6____CPAchecker_TMP_1 = send6;
 label_105367:; 
 p6_new = node6____CPAchecker_TMP_1;
 goto label_105359;
 }
 else 
 {
 label_105366:; 
 node6____CPAchecker_TMP_1 = p6_new;
 goto label_105367;
 }
 }
 else 
 {
 goto label_105366;
 }
 }
 else 
 {
 goto label_105359;
 }
 }
 }
 }
 }
 else 
 {
 if (((int)node5__m5) == ((int)id5))
 {
 st5 = 1;
 goto label_105565;
 }
 else 
 {
 goto label_105565;
 }
 }
 }
 else 
 {
 send5 = node5__m5;
 goto label_105170;
 }
 }
 else 
 {
 goto label_105170;
 }
 }
 else 
 {
 return __return_main;
 }
 }
 }
 else 
 {
 if (((int)node4__m4) == ((int)id4))
 {
 st4 = 1;
 goto label_105585;
 }
 else 
 {
 goto label_105585;
 }
 }
 }
 else 
 {
 send4 = node4__m4;
 goto label_105158;
 }
 }
 else 
 {
 goto label_105158;
 }
 }
 else 
 {
 return __return_main;
 }
 }
 }
 else 
 {
 if (((int)node3__m3) == ((int)id3))
 {
 st3 = 1;
 goto label_105605;
 }
 else 
 {
 goto label_105605;
 }
 }
 }
 else 
 {
 send3 = node3__m3;
 goto label_105146;
 }
 }
 else 
 {
 goto label_105146;
 }
 }
 else 
 {
 return __return_main;
 }
 }
 }
 else 
 {
 if (((int)node2__m2) == ((int)id2))
 {
 st2 = 1;
 goto label_105507;
 }
 else 
 {
 goto label_105507;
 }
 }
 }
 else 
 {
 send2 = node2__m2;
 goto label_105134;
 }
 }
 else 
 {
 goto label_105134;
 }
 }
 else 
 {
 return __return_main;
 }
 }
 }
 else 
 {
 if (((int)node1__m1) == ((int)id1))
 {
 st1 = 1;
 goto label_105517;
 }
 else 
 {
 goto label_105517;
 }
 }
 }
 else 
 {
 send1 = node1__m1;
 goto label_105121;
 }
 }
 else 
 {
 goto label_105121;
 }
 }
 else 
 {
 return __return_main;
 }
 }
 }
 else 
 {
 return __return_main;
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
 }
 else 
 {
 return __return_main;
 }
 }
 else 
 {
 node6____CPAchecker_TMP_0 = p6_new;
 goto label_105073;
 }
 }
 else 
 {
 if (((int)send6) != ((int)id6))
 {
 int node6____CPAchecker_TMP_1;
 if (send6 != nomsg)
 {
 if (p6_new == nomsg)
 {
 node6____CPAchecker_TMP_1 = send6;
 label_105534:; 
 p6_new = node6____CPAchecker_TMP_1;
 goto label_105075;
 }
 else 
 {
 return __return_main;
 }
 }
 else 
 {
 node6____CPAchecker_TMP_1 = p6_new;
 goto label_105534;
 }
 }
 else 
 {
 goto label_105075;
 }
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
 node5____CPAchecker_TMP_0 = p5_new;
 goto label_105056;
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
 label_105554:; 
 p5_new = node5____CPAchecker_TMP_1;
 goto label_105058;
 }
 else 
 {
 return __return_main;
 }
 }
 else 
 {
 node5____CPAchecker_TMP_1 = p5_new;
 goto label_105554;
 }
 }
 else 
 {
 goto label_105058;
 }
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
 node4____CPAchecker_TMP_0 = p4_new;
 goto label_105039;
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
 label_105574:; 
 p4_new = node4____CPAchecker_TMP_1;
 goto label_105041;
 }
 else 
 {
 return __return_main;
 }
 }
 else 
 {
 node4____CPAchecker_TMP_1 = p4_new;
 goto label_105574;
 }
 }
 else 
 {
 goto label_105041;
 }
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
 node3____CPAchecker_TMP_0 = p3_new;
 goto label_105022;
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
 label_105594:; 
 p3_new = node3____CPAchecker_TMP_1;
 goto label_105024;
 }
 else 
 {
 return __return_main;
 }
 }
 else 
 {
 node3____CPAchecker_TMP_1 = p3_new;
 goto label_105594;
 }
 }
 else 
 {
 goto label_105024;
 }
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
 node2____CPAchecker_TMP_0 = p2_new;
 goto label_105005;
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
 label_105614:; 
 p2_new = node2____CPAchecker_TMP_1;
 goto label_105007;
 }
 else 
 {
 return __return_main;
 }
 }
 else 
 {
 node2____CPAchecker_TMP_1 = p2_new;
 goto label_105614;
 }
 }
 else 
 {
 goto label_105007;
 }
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
 node1____CPAchecker_TMP_0 = p1_new;
 goto label_104989;
 }
 }
 else 
 {
 goto label_104984;
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
