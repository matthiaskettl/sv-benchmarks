/*
   This package is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; version 2 dated June, 1991.

   This package is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this package; if not, write to the Free Software
   Foundation, Inc., 51 Franklin St, Fifth Floor, Boston,
   MA 02110-1301, USA.
*/

#include "busybox_sv_comp.h"

#define _GNU_SOURCE
#include <syslog.h>
#include <getopt.h>
#include <libio.h>
#include <setjmp.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>
#include <utmp.h>
#include <stdarg.h>

// file libbb/getopt32.c line 307
struct libbb_anonymous$0;

// file include/libbb.h line 1040
struct llist_t;

// file include/libbb.h line 841
struct suffix_mult;

// file include/libbb.h line 671
struct uni_stat_t;


#ifndef NULL
#define NULL ((void*)0)
#endif

// file include/libbb.h line 1082
static void bb_error_msg_and_die(const char *s, ...);
// file include/libbb.h line 1085
static void bb_perror_msg_and_die(const char *s, ...);
// file include/libbb.h line 655
static signed int bb_putchar(signed int ch);
// file ./libbb-dump.i line 1
static void bb_show_usage(void);
// file libbb/xatonum.c line 38
static inline unsigned int bb_strtoui(const char *str, char **end, signed int b);
// file include/libbb.h line 1092
static void bb_verror_msg(const char *s, va_list p, const char *strerr);
// file include/unicode.h line 112
static signed int bb_wcwidth(unsigned int ucs);
// file coreutils/cal.c line 314
static void blank_string(char *buf, unsigned long int buflen);
// file coreutils/cal.c line 320
static char * build_row(char *p, unsigned int *dp);
// file coreutils/cal.c line 307
static void center(char *str, unsigned int len, unsigned int separate);
// file coreutils/cal.c line 227
static void day_array(unsigned int month, unsigned int year, unsigned int *days);
// file include/libbb.h line 785
static signed int fflush_all(void);
// file include/libbb.h line 786
static void fflush_stdout_and_exit(signed int retval);
// file include/libbb.h line 751
static signed long int full_write(signed int fd, const void *buf, unsigned long int len);
// file include/libbb.h line 1033
static unsigned int getopt32(char **argv, const char *applet_opts, ...);
// file include/unicode.h line 83
static void init_unicode(void);
// file coreutils/cal.c line 55
static signed int leap_year(unsigned int yr);
// file include/libbb.h line 1045
static void llist_add_to_end(struct llist_t **list_head, void *data);
// file libbb/unicode.c line 175
static const char * mbstowc_internal(signed int *res, const char *src);
// file libbb/unicode.c line 69
static void reinit_unicode(const char *LANG);
// file include/libbb.h line 748
static signed long int safe_write(signed int fd, const void *buf, unsigned long int count);
// file coreutils/cal.c line 289
static void trim_trailing_spaces_and_print(char *s);
// file libbb/unicode.c line 1003
static char * unicode_conv_to_printable2(struct uni_stat_t *stats, const char *src, unsigned int width, signed int flags);
// file include/unicode.h line 65
static char * unicode_conv_to_printable_fixedwidth(const char *src, unsigned int width);
// file libbb/unicode.c line 88
static unsigned long int wcrtomb_internal(char *s, signed int wc);
// file include/libbb.h line 858
static signed int xatoi_positive(const char *numstr);
// file include/xatonum.h line 99
static unsigned int xatou_range(const char *numstr, unsigned int lower, unsigned int upper);
// file include/libbb.h line 1079
static void xfunc_die(void);
// file include/libbb.h line 695
static void * xmalloc(unsigned long int size);
// file include/libbb.h line 697
static void * xrealloc(void *ptr, unsigned long int size);
// file include/libbb.h line 648
static char * xstrdup(const char *s);
// file include/libbb.h line 649
static char * xstrndup(const char *s, signed int n);
// file libbb/xatonum_template.c line 19
static unsigned int xstrtou_range_sfx(const char *numstr, signed int base, unsigned int lower, unsigned int upper, struct suffix_mult *suffixes);
// file include/libbb.h line 696
static void * xzalloc(unsigned long int size);

struct libbb_anonymous$7
{
  // __val
  unsigned long int __val[16l];
};

struct libbb_anonymous$0
{
  // opt_char
  unsigned char opt_char;
  // param_type
  signed char param_type;
  // switch_on
  unsigned int switch_on;
  // switch_off
  unsigned int switch_off;
  // incongruously
  unsigned int incongruously;
  // requires
  unsigned int requires;
  // optarg
  void **optarg;
  // counter
  signed int *counter;
};

struct llist_t
{
  // link
  struct llist_t *link;
  // data
  char *data;
};

struct suffix_mult
{
  // suffix
  char suffix[4l];
  // mult
  unsigned int mult;
};

struct uni_stat_t
{
  // byte_count
  unsigned int byte_count;
  // unicode_count
  unsigned int unicode_count;
  // unicode_width
  unsigned int unicode_width;
};

// file libbb/getopt32.c line 323
static const char *applet_long_options;
// file include/libbb.h line 1708
static const char *applet_name;
// file libbb/ptr_to_globals.c line 19
static signed int bb_errno_location;
static signed int * const bb_errno = &bb_errno_location;
// file libbb/messages.c line 25
static const char bb_msg_memory_exhausted[14l] = { (const char)111, (const char)117, (const char)116, (const char)32, (const char)111, (const char)102, (const char)32, (const char)109, (const char)101, (const char)109, (const char)111, (const char)114, (const char)121, (const char)0 };
// file libbb/messages.c line 34
static const char bb_msg_standard_output[16l] = { (const char)115, (const char)116, (const char)97, (const char)110, (const char)100, (const char)97, (const char)114, (const char)100, (const char)32, (const char)111, (const char)117, (const char)116, (const char)112, (const char)117, (const char)116, (const char)0 };
// file libbb/getopt32.c line 320
static struct option bb_null_long_options[1l] = { { .name=(const char *)NULL, .has_arg=0, .flag=(signed int *)NULL, .val=0 } };
// file coreutils/cal.c line 41
static const unsigned char days_in_month[13l] = { (const unsigned char)0, (const unsigned char)31, (const unsigned char)28, (const unsigned char)31, (const unsigned char)30, (const unsigned char)31, (const unsigned char)30, (const unsigned char)31, (const unsigned char)31, (const unsigned char)30, (const unsigned char)31, (const unsigned char)30, (const unsigned char)31 };
// file libbb/xfunc_die.c line 17
static struct __jmp_buf_tag die_jmp[1l];
// file libbb/xfunc_die.c line 15
static signed int die_sleep;
// file libbb/verror_msg.c line 14
static signed char logmode = (signed char)1;
// file libbb/verror_msg.c line 15
static const char *msg_eol = "\n";
// file libbb/getopt32.c line 299
static const char *opt_complementary;
// file libbb/getopt32.c line 326
static unsigned int option_mask32;
// file coreutils/cal.c line 45
static const unsigned char sep1752[19l] = { (const unsigned char)1, (const unsigned char)2, (const unsigned char)14, (const unsigned char)15, (const unsigned char)16, (const unsigned char)17, (const unsigned char)18, (const unsigned char)19, (const unsigned char)20, (const unsigned char)21, (const unsigned char)22, (const unsigned char)23, (const unsigned char)24, (const unsigned char)25, (const unsigned char)26, (const unsigned char)27, (const unsigned char)28, (const unsigned char)29, (const unsigned char)30 };
// file libbb/unicode.c line 14
static unsigned char unicode_status;
// file libbb/default_error_retval.c line 18
static unsigned char xfunc_error_retval = (unsigned char)1;

// file include/libbb.h line 1082
static void bb_error_msg_and_die(const char *s, ...)
{
  va_list p;
  va_start(p, s);
  bb_verror_msg(s, p, (const char *)NULL);
  va_end(p);
  abort(); // xfunc_die() invokes exit() and would thus leak memory
}

// file include/libbb.h line 1085
static void bb_perror_msg_and_die(const char *s, ...)
{
  va_list p;
  va_start(p, s);
  char *tmp_if_expr$2;
  char *return_value_strerror$1;
  if(!(*bb_errno == 0))
  {
    return_value_strerror$1=strerror(*bb_errno);
    tmp_if_expr$2 = return_value_strerror$1;
  }

  else
    tmp_if_expr$2 = (char *)NULL;
  bb_verror_msg(s, p, tmp_if_expr$2);
  va_end(p);
  abort(); // xfunc_die() invokes exit() and would thus leak memory
}

// file include/libbb.h line 655
static signed int bb_putchar(signed int ch)
{
  signed int return_value_putchar_unlocked$1;
  return_value_putchar_unlocked$1=putchar(ch);
  return return_value_putchar_unlocked$1;
}

// file ./libbb-dump.i line 1
static void bb_show_usage(void)
{
  ;
}

// file libbb/xatonum.c line 38
static inline unsigned int bb_strtoui(const char *str, char **end, signed int b)
{
  unsigned long int v;
  v=strtoul(str, end, b);
  if(v > 4294967295ul)
  {
    *bb_errno = 34;
    return (unsigned int)2147483647 * 2u + 1u;
  }

  return (unsigned int)v;
}

// file include/libbb.h line 1092
static void bb_verror_msg(const char *s, va_list p, const char *strerr)
{
  char *msg;
  char *msg1;
  signed int applet_len;
  signed int strerr_len;
  signed int msgeol_len;
  signed int used;
  if((signed int)logmode == 0)
    return;

  if(s == ((const char *)NULL))
    s = "";

  used=vasprintf(&msg, s, p);
  if(used < 0)
    return;

  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(applet_name);
  applet_len = (signed int)(return_value_strlen$1 + (unsigned long int)2);
  unsigned long int tmp_if_expr$3;
  unsigned long int return_value_strlen$2;
  if(!(strerr == ((const char *)NULL)))
  {
    return_value_strlen$2=strlen(strerr);
    tmp_if_expr$3 = return_value_strlen$2;
  }

  else
    tmp_if_expr$3 = (unsigned long int)0;
  strerr_len = (signed int)tmp_if_expr$3;
  unsigned long int return_value_strlen$4;
  return_value_strlen$4=strlen(msg_eol);
  msgeol_len = (signed int)return_value_strlen$4;
  void *return_value_realloc$5;
  return_value_realloc$5=realloc((void *)msg, (unsigned long int)(applet_len + used + strerr_len + msgeol_len + 3));
  msg1 = (char *)return_value_realloc$5;
  signed int tmp_post$6;
  signed int tmp_post$7;
  signed int tmp_post$8;
  if(msg1 == ((char *)NULL))
  {
    tmp_post$6 = used;
    used = used + 1;
    msg[(signed long int)tmp_post$6] = (char)10;
    applet_len = 0;
  }

  else
  {
    msg = msg1;
    memmove((void *)(msg + (signed long int)applet_len), (const void *)msg, (unsigned long int)used);
    used = used + applet_len;
    strcpy(msg, applet_name);
    msg[(signed long int)(applet_len - 2)] = (char)58;
    msg[(signed long int)(applet_len - 1)] = (char)32;
    if(!(strerr == ((const char *)NULL)))
    {
      if(!((signed int)*s == 0))
      {
        tmp_post$7 = used;
        used = used + 1;
        msg[(signed long int)tmp_post$7] = (char)58;
        tmp_post$8 = used;
        used = used + 1;
        msg[(signed long int)tmp_post$8] = (char)32;
      }

      strcpy(&msg[(signed long int)used], strerr);
      used = used + strerr_len;
    }

    strcpy(&msg[(signed long int)used], msg_eol);
    used = used + msgeol_len;
  }
  if(!((1 & (signed int)logmode) == 0))
  {
    fflush_all();
    full_write(2, (const void *)msg, (unsigned long int)used);
  }

  if(!((2 & (signed int)logmode) == 0))
    syslog(3, "%s", msg + (signed long int)applet_len);

  free((void *)msg);
}

// file include/unicode.h line 112
static signed int bb_wcwidth(unsigned int ucs)
{
  if(ucs == 0u)
    return 0;

  if(!((4294967167u & ucs) < 32u))
  {
    if(ucs == 127u)
      goto __CPROVER_DUMP_L2;

  }

  else
  {

  __CPROVER_DUMP_L2:
    ;
    return -1;
  }
  if(ucs > 767u)
    return -1;

  return 1;
}

// file coreutils/cal.c line 314
static void blank_string(char *buf, unsigned long int buflen)
{
  memset((void *)buf, 32, buflen);

  buf[(signed long int)(buflen - (unsigned long int)1)] = (char)0;
}

// file coreutils/cal.c line 320
static char * build_row(char *p, unsigned int *dp)
{
  unsigned int col;
  unsigned int val;
  unsigned int day;
  memset((void *)p, 32, (unsigned long int)(((unsigned int)option_mask32 + (unsigned int)3) * (unsigned int)7));
  col = (unsigned int)0;
  unsigned int *tmp_post$1;
  do
  {
    tmp_post$1 = dp;
    dp = dp + 1l;

    day = *tmp_post$1;
    if(!(day == 4294967295u))
    {
      if(!(option_mask32 == 0u))
      {
        p = p + 1l;
        if(day >= 100u)
        {

          *p = (char)48;

          p[(signed long int)-1] = (char)(day / (unsigned int)100 + (unsigned int)48);
          day = day % (unsigned int)100;
        }

      }

      val = day / (unsigned int)10;
      if(val > 0u)
      {

        *p = (char)(val + (unsigned int)48);
      }

      p = p + 1l;

      *p = (char)(day % (unsigned int)10 + (unsigned int)48);
      p = p + (signed long int)2;
    }

    else
      p = p + (signed long int)((unsigned int)3 + (unsigned int)option_mask32);
    col = col + 1u;
  }
  while(col < 7u);
  return p;
}

// file coreutils/cal.c line 88
signed int __main(signed int argc, char **argv)
{
  struct tm zero_tm;
  signed long int now;
  unsigned int month;
  unsigned int year;
  unsigned int flags;
  unsigned int i;
  char *month_names[12l];
  char day_headings[168l];
  char *hp = day_headings;
  char buf[40l];
  init_unicode();
  flags=getopt32(argv, "jy");
  option_mask32 = option_mask32 & (unsigned int)1;
  month = (unsigned int)0;
  argv = argv + (signed long int)optind;

  if(*argv == ((char *)NULL))
  {
    struct tm *ptm;
    time(&now);
    ptm=localtime(&now);

    year = (unsigned int)(ptm->tm_year + 1900);
    if((2u & flags) == 0u)
      month = (unsigned int)(ptm->tm_mon + 1);

  }

  else
  {

    if(!(*(1l + argv) == ((char *)NULL)))
    {

      if(!(*(2l + argv) == ((char *)NULL)))
        bb_show_usage();

      if((2u & flags) == 0u)
      {

        month=xatou_range(*argv, (unsigned int)1, (unsigned int)12);
      }

      argv = argv + 1l;
    }


    year=xatou_range(*argv, (unsigned int)1, (unsigned int)9999);
  }
  blank_string(day_headings, (sizeof(char [168l]) /*168ul*/  - (unsigned long int)7) + (unsigned long int)((unsigned int)7 * (unsigned int)option_mask32));
  i = (unsigned int)0;
  char *tmp_post$1;
  char *tmp_post$3;
  do
  {
    zero_tm.tm_mon = (signed int)i;
    strftime(buf, sizeof(char [40l]) /*40ul*/ , "%B", &zero_tm);
    if((signed long int)i < 12l)
      (void)0;

    else
      /* assertion (signed long int)i < 12l */
      {reach_error();abort();}
    month_names[(signed long int)i]=xstrdup(buf);
    if(i < 7u)
    {
      zero_tm.tm_wday = (signed int)i;
      strftime(buf, sizeof(char [40l]) /*40ul*/ , "%a", &zero_tm);
      if(!(option_mask32 == 0u))
      {
        tmp_post$1 = hp;
        hp = hp + 1l;
        *tmp_post$1 = (char)32;
      }

      char *two_wchars;
      two_wchars=unicode_conv_to_printable_fixedwidth(buf, (unsigned int)2);
      strcpy(hp, two_wchars);
      free((void *)two_wchars);
      unsigned long int return_value_strlen$2;
      return_value_strlen$2=strlen(hp);
      hp = hp + (signed long int)return_value_strlen$2;
      tmp_post$3 = hp;
      hp = hp + 1l;
      *tmp_post$3 = (char)32;
    }

    i = i + 1u;
  }
  while(i < 12u);
  hp[(signed long int)-1] = (char)0;
  if(!(month == 0u))
  {
    unsigned int row;
    unsigned int len;
    unsigned int cal_main$$1$$4$$days[42l];
    unsigned int *cal_main$$1$$4$$dp = cal_main$$1$$4$$days;
    char cal_main$$1$$4$$lineout[30l];
    day_array(month, year, cal_main$$1$$4$$dp);
    signed int return_value_sprintf$4;
    if((signed long int)(4294967295u + month) < 12l)
      (void)0;

    else
      /* assertion (signed long int)(month + 4294967295u) < 12l */
      {reach_error();abort();}
    return_value_sprintf$4=sprintf(cal_main$$1$$4$$lineout, "%s %u", month_names[(signed long int)(month - (unsigned int)1)], year);
    len = (unsigned int)return_value_sprintf$4;
    printf("%*s%s\n%s\n", (((unsigned int)7 * (unsigned int)option_mask32 + (unsigned int)20) - len) / (unsigned int)2, "", cal_main$$1$$4$$lineout, day_headings);
    row = (unsigned int)0;
    for( ; row < 6u; row = row + 1u)
    {
      char *return_value_build_row$5;
      return_value_build_row$5=build_row(cal_main$$1$$4$$lineout, cal_main$$1$$4$$dp);

      return_value_build_row$5[(signed long int)0] = (char)0;
      cal_main$$1$$4$$dp = cal_main$$1$$4$$dp + (signed long int)7;
      trim_trailing_spaces_and_print(cal_main$$1$$4$$lineout);
    }
  }

  else
  {
    unsigned int cal_main$$1$$5$$row;
    unsigned int which_cal;
    unsigned int week_len;
    unsigned int days[12l][42l];
    unsigned int *dp;
    char lineout[80l];
    sprintf(lineout, "%u", year);
    center(lineout, (unsigned int)(20 * 3 + 2 * 2) + (unsigned int)option_mask32 * (unsigned int)(((20 + 7) * 2 + 2) - (20 * 3 + 2 * 2)), (unsigned int)0);
    puts("\n");
    i = (unsigned int)0;
    for( ; i < 12u; i = i + 1u)
      day_array(i + (unsigned int)1, year, days[(signed long int)i]);
    blank_string(lineout, sizeof(char [80l]) /*80ul*/ );
    week_len = (unsigned int)20 + (unsigned int)option_mask32 * (unsigned int)((20 + 7) - 20);
    month = (unsigned int)0;
    for( ; month < 12u; month = month + ((unsigned int)3 - (unsigned int)option_mask32))
    {
      if((signed long int)month < 12l)
        (void)0;

      else
        /* assertion (signed long int)month < 12l */
        {reach_error();abort();}
      center(month_names[(signed long int)month], week_len, (unsigned int)2);
      if(option_mask32 == 0u)
      {
        if((signed long int)(1u + month) < 12l)
          (void)0;

        else
          /* assertion (signed long int)(1u + month) < 12l */
          {reach_error();abort();}
        center(month_names[(signed long int)(month + (unsigned int)1)], week_len, (unsigned int)2);
      }

      if((signed long int)(2u + month + -option_mask32) < 12l)
        (void)0;

      else
        /* assertion (signed long int)(2u + month + -option_mask32) < 12l */
        {reach_error();abort();}
      center(month_names[(signed long int)((month + (unsigned int)2) - (unsigned int)option_mask32)], week_len, (unsigned int)0);
      printf("\n%s%*s%s", day_headings, 2, "", day_headings);
      if(option_mask32 == 0u)
        printf("%*s%s", 2, "", day_headings);

      bb_putchar(10);
      cal_main$$1$$5$$row = (unsigned int)0;
      for( ; cal_main$$1$$5$$row < 42u; cal_main$$1$$5$$row = cal_main$$1$$5$$row + (unsigned int)7)
      {
        which_cal = (unsigned int)0;
        for( ; !(which_cal >= 3u + -option_mask32); which_cal = which_cal + 1u)
        {
          dp = days[(signed long int)(month + which_cal)] + (signed long int)cal_main$$1$$5$$row;
          build_row(lineout + (signed long int)(which_cal * (week_len + (unsigned int)2)), dp);
        }
        trim_trailing_spaces_and_print(lineout);
      }
    }
  }
  // fflush_stdout_and_exit(0); -- invokes exit() and would thus leak memory
  fflush(stdout);
  return 0;
}

// file coreutils/cal.c line 307
static void center(char *str, unsigned int len, unsigned int separate)
{
  unsigned int n;
  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(str);
  n = (unsigned int)return_value_strlen$1;
  len = len - n;
  printf("%*s%*s", len / (unsigned int)2 + n, str, len / (unsigned int)2 + len % (unsigned int)2 + separate, "");
}

// file coreutils/cal.c line 227
static void day_array(unsigned int month, unsigned int year, unsigned int *days)
{
  unsigned long int temp;
  unsigned int i;
  unsigned int day;
  unsigned int dw;
  unsigned int dm;
  memset((void *)days, -1, (unsigned long int)42 * sizeof(signed int) /*4ul*/ );
  if(month == 9u)
  {
    if(year == 1752u)
    {
      unsigned int j_offset = (unsigned int)option_mask32 * (unsigned int)244;
      unsigned long int oday = (unsigned long int)0;
      while((_Bool)1)
      {

        if((signed long int)oday < 19l)
          (void)0;

        else
          /* assertion (signed long int)oday < 19l */
          {reach_error();abort();}
        days[(signed long int)(oday + (unsigned long int)2)] = (unsigned int)sep1752[(signed long int)oday] + j_offset;
        oday = oday + 1ul;
        if(!(oday < sizeof(const unsigned char [19l]) /*19ul*/ ))
          break;

      }
      return;
    }

  }

  day = (unsigned int)1;
  signed int return_value_leap_year$1;
  if(month > 2u)
  {
    return_value_leap_year$1=leap_year(year);
    if(!(return_value_leap_year$1 == 0))
      day = day + 1u;

  }

  i = month;
  for( ; !(i == 0u); day = day + (unsigned int)days_in_month[(signed long int)i])
  {
    i = i - 1u;
    if((signed long int)i < 13l)
      (void)0;

    else
      /* assertion (signed long int)i < 13l */
      {reach_error();abort();}
  }
  temp = (unsigned long int)((signed long int)(year - (unsigned int)1) * (signed long int)365 + (signed long int)(((year - (unsigned int)1) / (unsigned int)4 - (year - (unsigned int)1 > (unsigned int)1700 ? (year - (unsigned int)1) / (unsigned int)100 - (unsigned int)17 : (unsigned int)0)) + (year - (unsigned int)1 > (unsigned int)1600 ? ((year - (unsigned int)1) - (unsigned int)1600) / (unsigned int)400 : (unsigned int)0)) + (signed long int)day);
  if(temp < 639787ul)
    dw = (unsigned int)(((temp - (unsigned long int)1) + (unsigned long int)6) % (unsigned long int)7);

  else
    dw = (unsigned int)((((temp - (unsigned long int)1) + (unsigned long int)6) - (unsigned long int)11) % (unsigned long int)7);
  if(option_mask32 == 0u)
    day = (unsigned int)1;

  if((signed long int)month < 13l)
    (void)0;

  else
    /* assertion (signed long int)month < 13l */
    {reach_error();abort();}
  dm = (unsigned int)days_in_month[(signed long int)month];
  signed int return_value_leap_year$2;
  if(month == 2u)
  {
    return_value_leap_year$2=leap_year(year);
    if(!(return_value_leap_year$2 == 0))
      dm = dm + 1u;

  }

  unsigned int tmp_post$3;
  unsigned int tmp_post$4;
  do
  {
    tmp_post$3 = dw;
    dw = dw + 1u;
    tmp_post$4 = day;
    day = day + 1u;

    days[(signed long int)tmp_post$3] = tmp_post$4;
    dm = dm - 1u;
  }
  while(dm != 0u);
}

// file include/libbb.h line 785
static signed int fflush_all(void)
{
  signed int return_value_fflush$1;
  return_value_fflush$1=fflush((struct _IO_FILE *)NULL);
  return return_value_fflush$1;
}

// file include/libbb.h line 786
static void fflush_stdout_and_exit(signed int retval)
{
  signed int return_value_fflush$1;
  return_value_fflush$1=fflush(stdout);
  if(!(return_value_fflush$1 == 0))
    bb_perror_msg_and_die(bb_msg_standard_output);

  if(die_sleep < 0)
  {
    xfunc_error_retval = (unsigned char)retval;
    abort(); // xfunc_die() invokes exit() and would thus leak memory
  }

  exit(retval);
}

// file include/libbb.h line 751
static signed long int full_write(signed int fd, const void *buf, unsigned long int len)
{
  signed long int cc;
  signed long int total = (signed long int)0;
  for( ; !(len == 0ul); len = len - (unsigned long int)cc)
  {
    cc=safe_write(fd, buf, len);
    if(cc < 0l)
    {
      if(!(total == 0l))
        return total;

      return cc;
    }

    total = total + cc;
    buf = (const void *)((const char *)buf + cc);
  }
  return total;
}

// file include/libbb.h line 1033
static unsigned int getopt32(char **argv, const char *applet_opts, ...)
{
  signed int argc;
  unsigned int flags = (unsigned int)0;
  unsigned int requires = (unsigned int)0;
  struct libbb_anonymous$0 complementary[33l];
  char first_char;
  signed int c;
  const unsigned char *s;
  struct libbb_anonymous$0 *on_off;
  __builtin_va_list p;
  struct option *l_o;
  struct option *long_options = (struct option *)&bb_null_long_options;
  unsigned int trigger;
  char **pargv;
  signed int min_arg = 0;
  signed int max_arg = -1;
  signed int spec_flgs = 0;
  argc = 1;
  for( ; !(argv[(signed long int)argc] == ((char *)NULL)); argc = argc + 1)
    ;
  va_start(p, applet_opts);
  c = 0;
  on_off = complementary;
  memset((void *)on_off, 0, sizeof(struct libbb_anonymous$0 [33l]) /*1320ul*/ );
  first_char = applet_opts[(signed long int)0];
  if((signed int)first_char == 33)
    applet_opts = applet_opts + 1l;

  s = (const unsigned char *)applet_opts;
  _Bool tmp_if_expr$1;
  if((signed int)*s == 43)
    tmp_if_expr$1 = 1 != 0;

  else
    tmp_if_expr$1 = ((signed int)*s == 45 ? (signed int)(1 != 0) : (signed int)(0 != 0)) != 0;
  if(!(tmp_if_expr$1 == (_Bool)0))
    s = s + 1l;

  for( ; !((signed int)*s == 0); c = c + 1)
  {
    if(c >= 32)
      break;

    on_off->opt_char = *s;
    on_off->switch_on = (unsigned int)(1 << c);
    s = s + 1l;
    if((signed int)*s == 58)
    {
      on_off->optarg=va_arg(p, __typeof__(on_off->optarg));
      do
      {
        s = s + 1l;
        if(!((signed int)*s == 58))
          break;

      }
      while((_Bool)1);
    }

    on_off = on_off + 1l;
  }
  const char *tmp_post$5;
  const char *tmp_post$6;
  if(!(applet_long_options == ((const char *)NULL)))
  {
    const char *optstr;
    unsigned int i;
    unsigned int count = (unsigned int)1;
    optstr = applet_long_options;
    while(!((signed int)*optstr == 0))
    {
      unsigned long int return_value_strlen$2;
      return_value_strlen$2=strlen(optstr);
      optstr = optstr + (signed long int)(return_value_strlen$2 + (unsigned long int)3);
      count = count + 1u;
    }
    void *return_value___builtin_alloca$3;
    return_value___builtin_alloca$3=__builtin_alloca((unsigned long int)count * sizeof(struct option) /*32ul*/ );
    long_options = (struct option *)return_value___builtin_alloca$3;
    memset((void *)long_options, 0, (unsigned long int)count * sizeof(struct option) /*32ul*/ );
    i = (unsigned int)0;
    optstr = applet_long_options;
    do
    {
      count = count - 1u;
      if(count == 0u)
        break;

      (long_options + (signed long int)i)->name = optstr;
      unsigned long int return_value_strlen$4;
      return_value_strlen$4=strlen(optstr);
      optstr = optstr + (signed long int)(return_value_strlen$4 + (unsigned long int)1);
      tmp_post$5 = optstr;
      optstr = optstr + 1l;
      (long_options + (signed long int)i)->has_arg = (signed int)(unsigned char)*tmp_post$5;
      tmp_post$6 = optstr;
      optstr = optstr + 1l;
      (long_options + (signed long int)i)->val = (signed int)(unsigned char)*tmp_post$6;
      i = i + 1u;
    }
    while((_Bool)1);
    l_o = long_options;
    for( ; !(l_o->name == ((const char *)NULL)); l_o = l_o + 1l)
    {
      if(l_o->flag == ((signed int *)NULL))
      {
        on_off = complementary;
        for( ; !((signed int)on_off->opt_char == 0); on_off = on_off + 1l)
          if((signed int)on_off->opt_char == l_o->val)
            goto next_long;

        if(c >= 32)
          break;

        on_off->opt_char = (unsigned char)l_o->val;
        on_off->switch_on = (unsigned int)(1 << c);
        if(!(l_o->has_arg == 0))
          on_off->optarg=va_arg(p, __typeof__(on_off->optarg));

        c = c + 1;
      }

    next_long:
      ;
    }
    applet_long_options = (const char *)NULL;
  }

  s = (const unsigned char *)opt_complementary;
  _Bool tmp_if_expr$7;
  _Bool tmp_if_expr$8;
  _Bool tmp_if_expr$9;
  _Bool tmp_if_expr$10;
  while((_Bool)1)
  {
    if(!(s == ((const unsigned char *)NULL)))
      tmp_if_expr$7 = ((signed int)*s != 0 ? (signed int)(1 != 0) : (signed int)(0 != 0)) != 0;

    else
      tmp_if_expr$7 = 0 != 0;
    if(tmp_if_expr$7 == (_Bool)0)
      break;

    struct libbb_anonymous$0 *pair;
    unsigned int *pair_switch;
    if(!((signed int)*s == 58))
    {
      c = (signed int)s[(signed long int)1];
      if((signed int)*s == 63)
      {
        if(!(c < 48))
        {
          if(c > 57)
            goto __CPROVER_DUMP_L24;

        }

        else
        {

        __CPROVER_DUMP_L24:
          ;
          spec_flgs = spec_flgs | 1;
          goto __CPROVER_DUMP_L57;
        }
        max_arg = c - 48;
        s = s + 1l;
      }

      else
        if((signed int)*s == 45)
        {
          if(!(c < 48))
          {
            if(c > 57)
              goto __CPROVER_DUMP_L27;

          }

          else
          {

          __CPROVER_DUMP_L27:
            ;
            if(c == 45)
            {
              spec_flgs = spec_flgs | 4;
              s = s + 1l;
            }

            else
              spec_flgs = spec_flgs | 2;
            goto __CPROVER_DUMP_L58;
          }
          min_arg = c - 48;
          s = s + 1l;
        }

        else
          if((signed int)*s == 61)
          {
            max_arg = c - 48;
            min_arg = max_arg;
            s = s + 1l;
          }

          else
          {
            on_off = complementary;
            for( ; !((signed int)on_off->opt_char == 0); on_off = on_off + 1l)
              if(on_off->opt_char == *s)
                goto found_opt;

            bb_error_msg_and_die("NO OPT %c!", *s);

          found_opt:
            ;
            if(c == 58)
            {
              if(!((signed int)*(2l + s) == 58))
                goto __CPROVER_DUMP_L36;

              on_off->param_type = (signed char)1;
            }

            else
            {

            __CPROVER_DUMP_L36:
              ;
              if(c == 43)
              {
                if((signed int)*(2l + s) == 58)
                  tmp_if_expr$8 = 1 != 0;

                else
                  tmp_if_expr$8 = ((signed int)s[(signed long int)2] == 0 ? (signed int)(1 != 0) : (signed int)(0 != 0)) != 0;
                if(tmp_if_expr$8 == (_Bool)0)
                  goto __CPROVER_DUMP_L39;

                on_off->param_type = (signed char)2;
                s = s + 1l;
              }

              else
              {

              __CPROVER_DUMP_L39:
                ;
                if(!(c == 58))
                {
                  if(c == 0)
                    goto __CPROVER_DUMP_L40;

                }

                else
                {

                __CPROVER_DUMP_L40:
                  ;
                  requires = requires | on_off->switch_on;
                  goto __CPROVER_DUMP_L59;
                }
                if(c == 45)
                {
                  if((signed int)*(2l + s) == 58)
                    tmp_if_expr$9 = 1 != 0;

                  else
                    tmp_if_expr$9 = ((signed int)s[(signed long int)2] == 0 ? (signed int)(1 != 0) : (signed int)(0 != 0)) != 0;
                  if(tmp_if_expr$9 == (_Bool)0)
                    goto __CPROVER_DUMP_L44;

                  flags = flags | on_off->switch_on;
                  on_off->incongruously = on_off->incongruously | on_off->switch_on;
                  s = s + 1l;
                }

                else
                {

                __CPROVER_DUMP_L44:
                  ;
                  if(c == (signed int)*s)
                  {
                    on_off->counter=va_arg(p, __typeof__(on_off->counter));
                    s = s + 1l;
                  }

                  pair = on_off;
                  pair_switch = &pair->switch_on;
                  s = s + 1l;
                  while((_Bool)1)
                  {
                    if(!((signed int)*s == 0))
                      tmp_if_expr$10 = ((signed int)*s != 58 ? (signed int)(1 != 0) : (signed int)(0 != 0)) != 0;

                    else
                      tmp_if_expr$10 = 0 != 0;
                    if(tmp_if_expr$10 == (_Bool)0)
                      break;

                    if((signed int)*s == 63)
                      pair_switch = &pair->requires;

                    else
                      if((signed int)*s == 45)
                      {
                        if(pair_switch == &pair->switch_off)
                          pair_switch = &pair->incongruously;

                        else
                          pair_switch = &pair->switch_off;
                      }

                      else
                      {
                        on_off = complementary;
                        for( ; !((signed int)on_off->opt_char == 0); on_off = on_off + 1l)
                          if(on_off->opt_char == *s)
                          {
                            *pair_switch = *pair_switch | on_off->switch_on;
                            break;
                          }

                      }
                    s = s + 1l;
                  }
                  s = s - 1l;
                }
              }
            }
          }
    }

  __CPROVER_DUMP_L57:
    ;

  __CPROVER_DUMP_L58:
    ;

  __CPROVER_DUMP_L59:
    ;
    s = s + 1l;
  }
  opt_complementary = (const char *)NULL;
  va_end(p);
  if(!((6 & spec_flgs) == 0))
  {
    pargv = argv + (signed long int)1;
    for( ; !(*pargv == ((char *)NULL)); pargv = pargv + 1l)
    {
      if(!((signed int)*(*pargv) == 45))
      {
        if(!((signed int)*(*pargv) == 0))
        {
          char *pp;
          unsigned long int return_value_strlen$11;
          return_value_strlen$11=strlen(*pargv);
          void *return_value_xmalloc$12;
          return_value_xmalloc$12=xmalloc(return_value_strlen$11 + (unsigned long int)2);
          pp = (char *)return_value_xmalloc$12;
          *pp = (char)45;
          strcpy(pp + (signed long int)1, *pargv);
          *pargv = pp;
        }

      }

      if((2 & spec_flgs) == 0)
        break;

    }
  }

  optind = 0;
  do
  {
    c=getopt_long(argc, argv, applet_opts, long_options, (signed int *)NULL);
    if(c == -1)
      break;

    c = c & 255;
    on_off = complementary;
    for( ; !((signed int)on_off->opt_char == c); on_off = on_off + 1l)
      if((signed int)on_off->opt_char == 0)
        goto error;

    if((on_off->incongruously & flags) != 0u)
      goto error;

    trigger = on_off->switch_on & on_off->switch_off;
    flags = flags & ~(on_off->switch_off ^ trigger);
    flags = flags | on_off->switch_on ^ trigger;
    flags = flags ^ trigger;
    if(!(on_off->counter == ((signed int *)NULL)))
      *on_off->counter = *on_off->counter + 1;

    if(!(optarg == ((char *)NULL)))
    {
      if((signed int)on_off->param_type == 1)
        llist_add_to_end((struct llist_t **)on_off->optarg, (void *)optarg);

      else
        if((signed int)on_off->param_type == 2)
        {
          signed int return_value_xatoi_positive$13;
          return_value_xatoi_positive$13=xatoi_positive(optarg);
          *((unsigned int *)on_off->optarg) = (unsigned int)return_value_xatoi_positive$13;
        }

        else
          if(!(on_off->optarg == ((void **)NULL)))
            *((char **)on_off->optarg) = optarg;

    }

  }
  while((_Bool)1);
  on_off = complementary;
  for( ; !((signed int)on_off->opt_char == 0); on_off = on_off + 1l)
    if(!(on_off->requires == 0u))
    {
      if(!((on_off->switch_on & flags) == 0u))
      {
        if((on_off->requires & flags) == 0u)
          goto error;

      }

    }

  if((flags & requires) == 0u)
  {
    if(requires == 0u)
      goto __CPROVER_DUMP_L75;

  }

  else
  {

  __CPROVER_DUMP_L75:
    ;
    argc = argc - optind;
    if(max_arg >= 0)
    {
      if(max_arg >= argc)
        goto __CPROVER_DUMP_L76;

    }

    else
    {

    __CPROVER_DUMP_L76:
      ;
      if(argc >= min_arg)
      {
        option_mask32 = flags;
        return flags;
      }

    }
  }

error:
  ;
  if(!((signed int)first_char == 33))
    bb_show_usage();

  return (unsigned int)(signed int)-1;
}

// file include/unicode.h line 83
static void init_unicode(void)
{
  if((signed int)unicode_status == 0)
  {
    char *s;
    s=getenv("LC_ALL");
    if(s == ((char *)NULL))
      s=getenv("LC_CTYPE");

    if(s == ((char *)NULL))
      s=getenv("LANG");

    reinit_unicode(s);
  }

}

// file coreutils/cal.c line 55
static signed int leap_year(unsigned int yr)
{
  if(yr <= 1752u)
    return (signed int)!(yr % (unsigned int)4 != 0u);

  return (signed int)(!(yr % (unsigned int)4 != 0u) && yr % (unsigned int)100 != 0u || !(yr % (unsigned int)400 != 0u));
}

// file include/libbb.h line 1045
static void llist_add_to_end(struct llist_t **list_head, void *data)
{
  for( ; !(*list_head == ((struct llist_t *)NULL)); list_head = &(*list_head)->link)
    ;
  void *return_value_xzalloc$1;
  return_value_xzalloc$1=xzalloc(sizeof(struct llist_t) /*16ul*/ );
  *list_head = (struct llist_t *)return_value_xzalloc$1;
  (*list_head)->data = (char *)data;
}

// file libbb/unicode.c line 175
static const char * mbstowc_internal(signed int *res, const char *src)
{
  signed int bytes;
  unsigned int c;
  const char *tmp_post$1 = src;
  src = src + 1l;
  c = (unsigned int)(unsigned char)*tmp_post$1;
  if(c <= 127u)
  {
    *res = (signed int)c;
    return src;
  }

  bytes = 0;
  do
  {
    c = c << 1;
    bytes = bytes + 1;
  }
  while(bytes < 6 && (128u & c) != 0u);
  if(bytes == 1)
  {
    *res = ~((signed int)0);
    return src;
  }

  c = (unsigned int)((signed int)(unsigned char)c >> bytes);
  do
  {
    bytes = bytes - 1;
    if(bytes == 0)
      break;

    unsigned int ch = (unsigned int)(unsigned char)*src;
    if(!((192u & ch) == 128u))
    {
      *res = ~((signed int)0);
      return src;
    }

    c = (c << 6) + (ch & (unsigned int)63);
    src = src + 1l;
  }
  while((_Bool)1);
  if(c <= 127u)
  {
    *res = ~((signed int)0);
    return src;
  }

  *res = (signed int)c;
  return src;
}

// file libbb/unicode.c line 69
static void reinit_unicode(const char *LANG)
{
  unicode_status = (unsigned char)1;
  _Bool tmp_if_expr$4;
  char *return_value_strstr$1;
  _Bool tmp_if_expr$3;
  char *return_value_strstr$2;
  if(LANG == ((const char *)NULL))
    tmp_if_expr$4 = 1 != 0;

  else
  {
    return_value_strstr$1=strstr(LANG, ".utf");
    if(!(return_value_strstr$1 == ((char *)NULL)))
      tmp_if_expr$3 = 1 != 0;

    else
    {
      return_value_strstr$2=strstr(LANG, ".UTF");
      tmp_if_expr$3 = (return_value_strstr$2 != (char *)NULL ? (signed int)(1 != 0) : (signed int)(0 != 0)) != 0;
    }
    tmp_if_expr$4 = (!(tmp_if_expr$3 != (_Bool)0) ? (signed int)(1 != 0) : (signed int)(0 != 0)) != 0;
  }
  if(!(tmp_if_expr$4 == (_Bool)0))
    return;

  unicode_status = (unsigned char)2;
}

// file include/libbb.h line 748
static signed long int safe_write(signed int fd, const void *buf, unsigned long int count)
{
  signed long int n;
  _Bool tmp_if_expr$1;
  do
  {
    n=write(fd, buf, count);
    if(n < 0l)
      tmp_if_expr$1 = (*bb_errno == 4 ? (signed int)(1 != 0) : (signed int)(0 != 0)) != 0;

    else
      tmp_if_expr$1 = 0 != 0;
  }
  while(tmp_if_expr$1 != (_Bool)0);
  return n;
}

// file coreutils/cal.c line 289
static void trim_trailing_spaces_and_print(char *s)
{
  char *p = s;
  while((_Bool)1)
  {

    if((signed int)*p == 0)
      break;

    p = p + 1l;
  }
  _Bool tmp_statement_expression$1;
  while(!(p == s))
  {
    p = p - 1l;
    unsigned char bb__isspace;

    bb__isspace = (unsigned char)((signed int)*p - 9);
    tmp_statement_expression$1 = (signed int)bb__isspace == 32 - 9 || (signed int)bb__isspace <= 13 - 9;
    if(tmp_statement_expression$1 == (_Bool)0)
    {

      p[(signed long int)1] = (char)0;
      break;
    }

  }
  puts(s);
}

// file libbb/unicode.c line 1003
static char * unicode_conv_to_printable2(struct uni_stat_t *stats, const char *src, unsigned int width, signed int flags)
{
  char *dst;
  unsigned int dst_len;
  unsigned int uni_count;
  unsigned int uni_width;
  char *tmp_post$2;
  char *tmp_post$3;
  if(!((signed int)unicode_status == 2))
  {
    char *d;
    if(!((1 & flags) == 0))
    {
      void *return_value_xmalloc$1;
      return_value_xmalloc$1=xmalloc((unsigned long int)(width + (unsigned int)1));
      dst = (char *)return_value_xmalloc$1;
      d = dst;
      do
      {
        width = width - 1u;
        if(!((signed int)width >= 0))
          break;

        unsigned char unicode_conv_to_printable2$$1$$1$$1$$1$$c = *src;
        if((signed int)unicode_conv_to_printable2$$1$$1$$1$$1$$c == 0)
        {
          do
          {
            tmp_post$2 = d;
            d = d + 1l;
            *tmp_post$2 = (char)32;
            width = width - 1u;
          }
          while((signed int)width >= 0);
          break;
        }

        tmp_post$3 = d;
        d = d + 1l;
        *tmp_post$3 = (char)((signed int)unicode_conv_to_printable2$$1$$1$$1$$1$$c >= 32 && (signed int)unicode_conv_to_printable2$$1$$1$$1$$1$$c < 127 ? (signed int)unicode_conv_to_printable2$$1$$1$$1$$1$$c : 63);
        src = src + 1l;
      }
      while((_Bool)1);
      *d = (char)0;
    }

    else
    {
      dst=xstrndup(src, (signed int)width);
      d = dst;
      while(!((signed int)*d == 0))
      {
        unsigned char c = *d;
        if(!((signed int)c < 32))
        {
          if((signed int)c >= 127)
            goto __CPROVER_DUMP_L7;

        }

        else
        {

        __CPROVER_DUMP_L7:
          ;
          *d = (char)63;
        }
        d = d + 1l;
      }
    }
    if(!(stats == ((struct uni_stat_t *)NULL)))
    {
      stats->byte_count = (unsigned int)(d - dst);
      stats->unicode_count = (unsigned int)(d - dst);
      stats->unicode_width = (unsigned int)(d - dst);
    }

    return dst;
  }

  dst = (char *)NULL;
  uni_width = (unsigned int)0;
  uni_count = uni_width;
  dst_len = (unsigned int)0;
  while((_Bool)1)
  {
    signed int w;
    signed int wc;
    src=mbstowc_internal(&wc, src);
    if(!(wc == -1))
    {
      if(wc == 0)
        break;

      if(wc > 767)
        goto subst;

      w=bb_wcwidth((unsigned int)wc);
      if(w <= 0)
        goto subst;

      if(w > 1)
        goto subst;

    }

    else
    {

    subst:
      ;
      wc = 63;
      w = 1;
    }
    width = width - (unsigned int)w;
    if((signed int)width < 0)
    {
      width = width + (unsigned int)w;
      break;
    }

    uni_count = uni_count + 1u;
    uni_width = uni_width + (unsigned int)w;
    void *return_value_xrealloc$4;
    return_value_xrealloc$4=xrealloc((void *)dst, (unsigned long int)(dst_len + (unsigned int)6));
    dst = (char *)return_value_xrealloc$4;
    unsigned long int return_value_wcrtomb_internal$5;
    return_value_wcrtomb_internal$5=wcrtomb_internal(&dst[(signed long int)dst_len], wc);
    dst_len = dst_len + (unsigned int)return_value_wcrtomb_internal$5;
  }
  unsigned int tmp_post$7;
  if(!((1 & flags) == 0))
  {
    void *return_value_xrealloc$6;
    return_value_xrealloc$6=xrealloc((void *)dst, (unsigned long int)(dst_len + width + (unsigned int)1));
    dst = (char *)return_value_xrealloc$6;
    uni_count = uni_count + width;
    uni_width = uni_width + width;
    do
    {
      width = width - 1u;
      if(!((signed int)width >= 0))
        break;

      tmp_post$7 = dst_len;
      dst_len = dst_len + 1u;
      dst[(signed long int)tmp_post$7] = (char)32;
    }
    while((_Bool)1);
  }

  dst[(signed long int)dst_len] = (char)0;
  if(!(stats == ((struct uni_stat_t *)NULL)))
  {
    stats->byte_count = dst_len;
    stats->unicode_count = uni_count;
    stats->unicode_width = uni_width;
  }

  return dst;
}

// file include/unicode.h line 65
static char * unicode_conv_to_printable_fixedwidth(const char *src, unsigned int width)
{
  char *return_value_unicode_conv_to_printable2$1;
  return_value_unicode_conv_to_printable2$1=unicode_conv_to_printable2((struct uni_stat_t *)NULL, src, width, 1);
  return return_value_unicode_conv_to_printable2$1;
}

// file libbb/unicode.c line 88
static unsigned long int wcrtomb_internal(char *s, signed int wc)
{
  signed int n;
  signed int i;
  unsigned int v = (unsigned int)wc;
  if(v <= 127u)
  {
    *s = (char)v;
    return (unsigned long int)1;
  }

  n = 2;
  for( ; v >= 2048u; n = n + 1)
  {
    if(!(n < 6))
      break;

    v = v >> 5;
  }
  i = n;
  do
  {
    i = i - 1;
    if(i == 0)
      break;

    s[(signed long int)i] = (char)(wc & 63 | 128);
    wc = wc >> 6;
  }
  while((_Bool)1);
  s[(signed long int)0] = (char)(wc | (signed int)(unsigned char)(16128 >> n));
  return (unsigned long int)n;
}

// file include/libbb.h line 858
static signed int xatoi_positive(const char *numstr)
{
  unsigned int return_value_xatou_range$1;
  return_value_xatou_range$1=xatou_range(numstr, (unsigned int)0, (unsigned int)2147483647);
  return (signed int)return_value_xatou_range$1;
}

// file include/xatonum.h line 99
static unsigned int xatou_range(const char *numstr, unsigned int lower, unsigned int upper)
{
  unsigned int return_value_xstrtou_range_sfx$1;
  return_value_xstrtou_range_sfx$1=xstrtou_range_sfx(numstr, 10, lower, upper, (struct suffix_mult *)NULL);
  return return_value_xstrtou_range_sfx$1;
}

// file include/libbb.h line 1079
static void xfunc_die(void)
{
  if(!(die_sleep == 0))
  {
    if(die_sleep < 0)
      longjmp(die_jmp, (signed int)xfunc_error_retval != 0 ? (signed int)xfunc_error_retval : -2222);

    sleep((unsigned int)die_sleep);
  }

  exit((signed int)xfunc_error_retval);
}

// file include/libbb.h line 695
static void * xmalloc(unsigned long int size)
{
  void *ptr;
  ptr=malloc(size);
  if(ptr == NULL)
  {
    if(!(size == 0ul))
      bb_error_msg_and_die(bb_msg_memory_exhausted);

  }

  return ptr;
}

// file include/libbb.h line 697
static void * xrealloc(void *ptr, unsigned long int size)
{
  ptr=realloc(ptr, size);
  if(ptr == NULL)
  {
    if(!(size == 0ul))
      bb_error_msg_and_die(bb_msg_memory_exhausted);

  }

  return ptr;
}

// file include/libbb.h line 648
static char * xstrdup(const char *s)
{
  char *t;
  if(s == ((const char *)NULL))
    return (char *)NULL;

  char *return_value___strdup$1;
  return_value___strdup$1=strdup(s);
  t = return_value___strdup$1;
  if(t == ((char *)NULL))
    bb_error_msg_and_die(bb_msg_memory_exhausted);

  return t;
}

// file include/libbb.h line 649
static char * xstrndup(const char *s, signed int n)
{
  signed int m;
  char *t;
  m = n;
  t = (char *)s;
  for( ; !(m == 0); t = t + 1l)
  {
    if((signed int)*t == 0)
      break;

    m = m - 1;
  }
  n = n - m;
  void *return_value_xmalloc$1;
  return_value_xmalloc$1=xmalloc((unsigned long int)(n + 1));
  t = (char *)return_value_xmalloc$1;
  t[(signed long int)n] = (char)0;
  void *return_value_memcpy$2;
  return_value_memcpy$2=memcpy((void *)t, (const void *)s, (unsigned long int)n);
  return (char *)return_value_memcpy$2;
}

// file libbb/xatonum_template.c line 19
static unsigned int xstrtou_range_sfx(const char *numstr, signed int base, unsigned int lower, unsigned int upper, struct suffix_mult *suffixes)
{
  unsigned int r;
  signed int old_errno;
  char *e;
  _Bool tmp_if_expr$1;
  if((signed int)*numstr == 45)
    tmp_if_expr$1 = 1 != 0;

  else
    tmp_if_expr$1 = ((signed int)*numstr == 43 ? (signed int)(1 != 0) : (signed int)(0 != 0)) != 0;
  _Bool tmp_if_expr$3;
  _Bool tmp_statement_expression$2;
  if(!(tmp_if_expr$1 == (_Bool)0))
    tmp_if_expr$3 = 1 != 0;

  else
  {
    unsigned char bb__isspace = (unsigned char)((signed int)*numstr - 9);
    tmp_statement_expression$2 = (signed int)bb__isspace == 32 - 9 || (signed int)bb__isspace <= 13 - 9;
    tmp_if_expr$3 = (tmp_statement_expression$2 != (_Bool)0 ? (signed int)(1 != 0) : (signed int)(0 != 0)) != 0;
  }
  signed int tmp_statement_expression$4;
  if(tmp_if_expr$3 == (_Bool)0)
  {
    old_errno = *bb_errno;
    *bb_errno = 0;
    r=bb_strtoui(numstr, &e, base);
    if(!(numstr == e))
    {
      if(*bb_errno == 0)
      {
        *bb_errno = old_errno;
        if(!(suffixes == ((struct suffix_mult *)NULL)))
          for( ; !(suffixes->mult == 0u); suffixes = suffixes + 1l)
          {
            unsigned long int __s1_len;
            unsigned long int __s2_len;
            signed int return_value___builtin_strcmp$5;
            return_value___builtin_strcmp$5=strcmp(suffixes->suffix, e);
            tmp_statement_expression$4 = return_value___builtin_strcmp$5;
            if(tmp_statement_expression$4 == 0)
            {
              if(!(4294967295u / suffixes->mult >= r))
                goto range;

              r = r * suffixes->mult;
              goto chk_range;
            }

          }

        if((signed int)*e == 0)
        {

        chk_range:
          ;
          if(r >= lower)
          {
            if(upper >= r)
              return r;

          }

        range:
          ;
          bb_error_msg_and_die("number %s is not in %llu..%llu range", numstr, (unsigned long long int)lower, (unsigned long long int)upper);
        }

      }

    }

  }

inval:
  ;
  bb_error_msg_and_die("invalid number '%s'", numstr);
}

// file include/libbb.h line 696
static void * xzalloc(unsigned long int size)
{
  void *ptr;
  ptr=xmalloc(size);
  memset(ptr, 0, size);
  return ptr;
}

#include "busybox_sv_comp_impl.h"
