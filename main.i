# 0 "main.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "main.c"

# 1 "myArray.h" 1
# 1 "/usr/include/stdio.h" 1 3 4
# 27 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/bits/libc-header-start.h" 1 3 4
# 33 "/usr/include/bits/libc-header-start.h" 3 4
# 1 "/usr/include/features.h" 1 3 4
# 473 "/usr/include/features.h" 3 4
# 1 "/usr/include/sys/cdefs.h" 1 3 4
# 462 "/usr/include/sys/cdefs.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 463 "/usr/include/sys/cdefs.h" 2 3 4
# 1 "/usr/include/bits/long-double.h" 1 3 4
# 464 "/usr/include/sys/cdefs.h" 2 3 4
# 474 "/usr/include/features.h" 2 3 4
# 497 "/usr/include/features.h" 3 4
# 1 "/usr/include/gnu/stubs.h" 1 3 4
# 10 "/usr/include/gnu/stubs.h" 3 4
# 1 "/usr/include/gnu/stubs-64.h" 1 3 4
# 11 "/usr/include/gnu/stubs.h" 2 3 4
# 498 "/usr/include/features.h" 2 3 4
# 34 "/usr/include/bits/libc-header-start.h" 2 3 4
# 28 "/usr/include/stdio.h" 2 3 4





# 1 "/usr/lib/gcc/x86_64-redhat-linux/11/include/stddef.h" 1 3 4
# 209 "/usr/lib/gcc/x86_64-redhat-linux/11/include/stddef.h" 3 4

# 209 "/usr/lib/gcc/x86_64-redhat-linux/11/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 34 "/usr/include/stdio.h" 2 3 4


# 1 "/usr/lib/gcc/x86_64-redhat-linux/11/include/stdarg.h" 1 3 4
# 40 "/usr/lib/gcc/x86_64-redhat-linux/11/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 37 "/usr/include/stdio.h" 2 3 4

# 1 "/usr/include/bits/types.h" 1 3 4
# 27 "/usr/include/bits/types.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 28 "/usr/include/bits/types.h" 2 3 4
# 1 "/usr/include/bits/timesize.h" 1 3 4
# 29 "/usr/include/bits/types.h" 2 3 4


typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;






typedef __int8_t __int_least8_t;
typedef __uint8_t __uint_least8_t;
typedef __int16_t __int_least16_t;
typedef __uint16_t __uint_least16_t;
typedef __int32_t __int_least32_t;
typedef __uint32_t __uint_least32_t;
typedef __int64_t __int_least64_t;
typedef __uint64_t __uint_least64_t;



typedef long int __quad_t;
typedef unsigned long int __u_quad_t;







typedef long int __intmax_t;
typedef unsigned long int __uintmax_t;
# 141 "/usr/include/bits/types.h" 3 4
# 1 "/usr/include/bits/typesizes.h" 1 3 4
# 142 "/usr/include/bits/types.h" 2 3 4
# 1 "/usr/include/bits/time64.h" 1 3 4
# 143 "/usr/include/bits/types.h" 2 3 4


typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;
typedef long int __suseconds64_t;

typedef int __daddr_t;
typedef int __key_t;


typedef int __clockid_t;


typedef void * __timer_t;


typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;


typedef long int __fsword_t;

typedef long int __ssize_t;


typedef long int __syscall_slong_t;

typedef unsigned long int __syscall_ulong_t;



typedef __off64_t __loff_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;




typedef int __sig_atomic_t;
# 39 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/bits/types/__fpos_t.h" 1 3 4




# 1 "/usr/include/bits/types/__mbstate_t.h" 1 3 4
# 13 "/usr/include/bits/types/__mbstate_t.h" 3 4
typedef struct
{
  int __count;
  union
  {
    unsigned int __wch;
    char __wchb[4];
  } __value;
} __mbstate_t;
# 6 "/usr/include/bits/types/__fpos_t.h" 2 3 4




typedef struct _G_fpos_t
{
  __off_t __pos;
  __mbstate_t __state;
} __fpos_t;
# 40 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/bits/types/__fpos64_t.h" 1 3 4
# 10 "/usr/include/bits/types/__fpos64_t.h" 3 4
typedef struct _G_fpos64_t
{
  __off64_t __pos;
  __mbstate_t __state;
} __fpos64_t;
# 41 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/bits/types/__FILE.h" 1 3 4



struct _IO_FILE;
typedef struct _IO_FILE __FILE;
# 42 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/bits/types/FILE.h" 1 3 4



struct _IO_FILE;


typedef struct _IO_FILE FILE;
# 43 "/usr/include/stdio.h" 2 3 4
# 1 "/usr/include/bits/types/struct_FILE.h" 1 3 4
# 35 "/usr/include/bits/types/struct_FILE.h" 3 4
struct _IO_FILE;
struct _IO_marker;
struct _IO_codecvt;
struct _IO_wide_data;




typedef void _IO_lock_t;





struct _IO_FILE
{
  int _flags;


  char *_IO_read_ptr;
  char *_IO_read_end;
  char *_IO_read_base;
  char *_IO_write_base;
  char *_IO_write_ptr;
  char *_IO_write_end;
  char *_IO_buf_base;
  char *_IO_buf_end;


  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;
  int _flags2;
  __off_t _old_offset;


  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];

  _IO_lock_t *_lock;







  __off64_t _offset;

  struct _IO_codecvt *_codecvt;
  struct _IO_wide_data *_wide_data;
  struct _IO_FILE *_freeres_list;
  void *_freeres_buf;
  size_t __pad5;
  int _mode;

  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];
};
# 44 "/usr/include/stdio.h" 2 3 4
# 52 "/usr/include/stdio.h" 3 4
typedef __gnuc_va_list va_list;
# 63 "/usr/include/stdio.h" 3 4
typedef __off_t off_t;
# 77 "/usr/include/stdio.h" 3 4
typedef __ssize_t ssize_t;






typedef __fpos_t fpos_t;
# 133 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/bits/stdio_lim.h" 1 3 4
# 134 "/usr/include/stdio.h" 2 3 4



extern FILE *stdin;
extern FILE *stdout;
extern FILE *stderr;






extern int remove (const char *__filename) __attribute__ ((__nothrow__ , __leaf__));

extern int rename (const char *__old, const char *__new) __attribute__ ((__nothrow__ , __leaf__));



extern int renameat (int __oldfd, const char *__old, int __newfd,
       const char *__new) __attribute__ ((__nothrow__ , __leaf__));
# 173 "/usr/include/stdio.h" 3 4
extern FILE *tmpfile (void) ;
# 187 "/usr/include/stdio.h" 3 4
extern char *tmpnam (char *__s) __attribute__ ((__nothrow__ , __leaf__)) ;




extern char *tmpnam_r (char *__s) __attribute__ ((__nothrow__ , __leaf__)) ;
# 204 "/usr/include/stdio.h" 3 4
extern char *tempnam (const char *__dir, const char *__pfx)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;







extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);
# 227 "/usr/include/stdio.h" 3 4
extern int fflush_unlocked (FILE *__stream);
# 246 "/usr/include/stdio.h" 3 4
extern FILE *fopen (const char *__restrict __filename,
      const char *__restrict __modes) ;




extern FILE *freopen (const char *__restrict __filename,
        const char *__restrict __modes,
        FILE *__restrict __stream) ;
# 279 "/usr/include/stdio.h" 3 4
extern FILE *fdopen (int __fd, const char *__modes) __attribute__ ((__nothrow__ , __leaf__)) ;
# 292 "/usr/include/stdio.h" 3 4
extern FILE *fmemopen (void *__s, size_t __len, const char *__modes)
  __attribute__ ((__nothrow__ , __leaf__)) ;




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) __attribute__ ((__nothrow__ , __leaf__)) ;





extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__));



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) __attribute__ ((__nothrow__ , __leaf__));




extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) __attribute__ ((__nothrow__ , __leaf__));


extern void setlinebuf (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));







extern int fprintf (FILE *__restrict __stream,
      const char *__restrict __format, ...);




extern int printf (const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
      const char *__restrict __format, ...) __attribute__ ((__nothrow__));





extern int vfprintf (FILE *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg);




extern int vprintf (const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg) __attribute__ ((__nothrow__));



extern int snprintf (char *__restrict __s, size_t __maxlen,
       const char *__restrict __format, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 0)));
# 379 "/usr/include/stdio.h" 3 4
extern int vdprintf (int __fd, const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));







extern int fscanf (FILE *__restrict __stream,
     const char *__restrict __format, ...) ;




extern int scanf (const char *__restrict __format, ...) ;

extern int sscanf (const char *__restrict __s,
     const char *__restrict __format, ...) __attribute__ ((__nothrow__ , __leaf__));





# 1 "/usr/include/bits/floatn.h" 1 3 4
# 119 "/usr/include/bits/floatn.h" 3 4
# 1 "/usr/include/bits/floatn-common.h" 1 3 4
# 24 "/usr/include/bits/floatn-common.h" 3 4
# 1 "/usr/include/bits/long-double.h" 1 3 4
# 25 "/usr/include/bits/floatn-common.h" 2 3 4
# 120 "/usr/include/bits/floatn.h" 2 3 4
# 407 "/usr/include/stdio.h" 2 3 4



extern int fscanf (FILE *__restrict __stream, const char *__restrict __format, ...) __asm__ ("" "__isoc99_fscanf")

                               ;
extern int scanf (const char *__restrict __format, ...) __asm__ ("" "__isoc99_scanf")
                              ;
extern int sscanf (const char *__restrict __s, const char *__restrict __format, ...) __asm__ ("" "__isoc99_sscanf") __attribute__ ((__nothrow__ , __leaf__))

                      ;
# 435 "/usr/include/stdio.h" 3 4
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;





extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;


extern int vsscanf (const char *__restrict __s,
      const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__format__ (__scanf__, 2, 0)));





extern int vfscanf (FILE *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vfscanf")



     __attribute__ ((__format__ (__scanf__, 2, 0))) ;
extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vscanf")

     __attribute__ ((__format__ (__scanf__, 1, 0))) ;
extern int vsscanf (const char *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vsscanf") __attribute__ ((__nothrow__ , __leaf__))



     __attribute__ ((__format__ (__scanf__, 2, 0)));
# 489 "/usr/include/stdio.h" 3 4
extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);






extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
# 514 "/usr/include/stdio.h" 3 4
extern int fgetc_unlocked (FILE *__stream);
# 525 "/usr/include/stdio.h" 3 4
extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);
# 541 "/usr/include/stdio.h" 3 4
extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);







extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     __attribute__ ((__access__ (__write_only__, 1, 2)));
# 608 "/usr/include/stdio.h" 3 4
extern __ssize_t __getdelim (char **__restrict __lineptr,
                             size_t *__restrict __n, int __delimiter,
                             FILE *__restrict __stream) ;
extern __ssize_t getdelim (char **__restrict __lineptr,
                           size_t *__restrict __n, int __delimiter,
                           FILE *__restrict __stream) ;







extern __ssize_t getline (char **__restrict __lineptr,
                          size_t *__restrict __n,
                          FILE *__restrict __stream) ;







extern int fputs (const char *__restrict __s, FILE *__restrict __stream);





extern int puts (const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) ;




extern size_t fwrite (const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s);
# 678 "/usr/include/stdio.h" 3 4
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite_unlocked (const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream);







extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) ;




extern void rewind (FILE *__stream);
# 712 "/usr/include/stdio.h" 3 4
extern int fseeko (FILE *__stream, __off_t __off, int __whence);




extern __off_t ftello (FILE *__stream) ;
# 736 "/usr/include/stdio.h" 3 4
extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);




extern int fsetpos (FILE *__stream, const fpos_t *__pos);
# 762 "/usr/include/stdio.h" 3 4
extern void clearerr (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));

extern int feof (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;

extern int ferror (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;



extern void clearerr_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
extern int feof_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
extern int ferror_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;







extern void perror (const char *__s);




extern int fileno (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int fileno_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
# 799 "/usr/include/stdio.h" 3 4
extern FILE *popen (const char *__command, const char *__modes) ;





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) __attribute__ ((__nothrow__ , __leaf__));
# 839 "/usr/include/stdio.h" 3 4
extern void flockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));



extern int ftrylockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;


extern void funlockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
# 857 "/usr/include/stdio.h" 3 4
extern int __uflow (FILE *);
extern int __overflow (FILE *, int);
# 874 "/usr/include/stdio.h" 3 4

# 2 "myArray.h" 2
# 1 "myMathsLibrary.h" 1





# 5 "myMathsLibrary.h"
double addTwoNumbers(double num_1, double num_2)
{
    double sum;

    sum = num_1 + num_2;
    return sum;
}

signed long long int addIntegersBetweenTwoNumbers ( signed int num_1, signed int num_2)
{
    signed int max;
    signed int min;
    signed long long int sum = 0;

    if(num_1 > num_2)
    {
        max = num_1;
        min = num_2;
    }
    else
    {
        max = num_2;
        min = num_1;
    }

    for(int i = max - 1; i > min; i--)
    {
        sum += i;
    }

    return sum;
}

double getMax()
{
    double NoOfNunbers = -1;
    double num;
    double max;

    while(NoOfNunbers < 0)
    {
        printf("Enter the No. of numbers: ");
        scanf("%lf", &NoOfNunbers);
    }

    for(unsigned int i = 1; i <= NoOfNunbers; ++i)
    {
        printf("Enter number %d: ", i);
        scanf("%lf", &num);

        if(i == 1)
        {
            max = num;
        }

        if(num > max)
        {
            max = num;
        }
    }

    return max;
}

double getMin()
{
    double NoOfNunbers = -1;
    double num;
    double min;

    while(NoOfNunbers < 0)
    {
        printf("Enter the No. of numbers: ");
        scanf("%lf", &NoOfNunbers);
    }

    for(unsigned int i = 1; i <= NoOfNunbers; ++i)
    {
        printf("Enter number %d: ", i);
        scanf("%lf", &num);

        if(i == 1)
        {
            min = num;
        }

        if(num < min)
        {
            min = num;
        }
    }

    return min;
}

double addNumbers()
{
    double NoOfNunbers = -1;
    double num;
    double sum = 0;


    while (NoOfNunbers < 0)
    {
        printf("Enter the No. of numbers: ");
        scanf("%lf", &NoOfNunbers);
    }


    for(unsigned int i = 1; i <= NoOfNunbers; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%lf", &num);

        sum += num;
    }

    return sum;
}

double multiplyTwoNumbers(double num_1, double num_2)
{
    double multiply = 0;

    for(unsigned int i = 1; i <= num_2; i++)
    {

        multiply += num_1;

    }

    for(signed int i = num_2; i <= -1; i++)
    {

        multiply -= num_1;

    }

    return multiply;
}

signed int reminder (signed int num_1, signed int num_2)
{
    signed int num_1_positive = num_1;
    signed int num_2_positive = num_2;
    signed int reminder;

    if(num_1 < 0)
    {
        num_1_positive = 0 - num_1;
    }

    if(num_2 < 0)
    {
        num_2_positive = 0 - num_2;
    }

    if(num_2 == 0)
    {
        printf("Math Error !! \n");
        return 0;
    }

    reminder = num_1_positive;
    while(reminder >= num_2_positive)
    {

        reminder -= num_2_positive;

    }

    if(num_1 < 0)
    {
        reminder = -reminder;
    }

    printf("Ans = %d \n", num_1%num_2);
    return reminder;
}

double power( double base, double power)
{
    double power_positive = power;
    double ans = 1;

    if(power < 0)
    {
        power_positive = 0 - power;
    }

    for(unsigned int i = 1; i <= power_positive; i++)
    {
        ans *= base;
    }

    if(power < 0)
    {
        ans = 1.0 / ans;
    }

    return ans;
}

double factorial( signed long long int num)
{
    double factorial = 1;
    signed long long int num_copy = num;

    if(num < 0)
    {
        num_copy = 0 - num;
    }

    for(int i = 1; i <= num_copy; i++)
    {
        factorial *= i;
    }

    if(num < 0)
    {
        factorial = 0 - factorial;
    }

    return factorial;
}

int IsPrime( double num)
{
    int flag = 0;

    if(num <= 1 || (signed long long int) num != num)
    {
        return 0;
    }
    else
    {
        for(unsigned long long int i = 2; i < num && flag == 0; i++)
        {
            if(((unsigned long long int) num % i) == 0)
            {
                flag++;
            }
        }
    }

    if(flag == 0)
    {
        return 1;
    }
    else
    {
        return 0;

    }
}

int IsPerfectSquare( double num)
{
    int flag = 0;

    if((signed long long int) num != num)
    {
        return 0;
    }

    for(unsigned long long int i = 0; i <= num && flag == 0; i++)
    {
        if(i * i == num)
        {
            flag++;
        }
    }

    if(flag == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int IsBaseOf_2 ( double num)
{
    double last_num = num;

    if(num < 1 || (signed long long int) num != num)
    {
        return 0;
    }

    while(last_num != 1 && (unsigned long long int)last_num % 2 == 0)
    {
            last_num = last_num / 2;
    }

    if(last_num == 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

unsigned int sumDigits ( double num)
{
    double last_num;
    unsigned int sum = 0;

    if(num < 0)
    {
        last_num = 0 - num;
    }
    else
    {
        last_num = num;
    }

    while ((unsigned long long int)last_num != last_num)
    {
        last_num *= 10;
    }

    while((unsigned long long int)last_num != 0)
    {
        sum += (unsigned long long int)last_num % 10;
        last_num = last_num / 10;
    }

    return sum;
}

double addEVenNumbers ( )
{
    double num;
    double last_num;
    double sum = 0;
    int flag = 0;

    while (1)
    {
        printf("Enter an integer Even number: ");
        scanf("%lf", &num);

        last_num = num;

        while ((signed long long int)last_num != last_num)
        {
            last_num *= 10;
        }

        if((signed long long int)last_num % 2 == 0)
        {
            sum += num;
        }
        else
        {
            flag++;
        }

        if(flag == 2)
        {
            return sum;
        }

        printf("Sum = %lf \n", sum);
    }
}

unsigned int poster ( double num)
{
    double last_num;
    unsigned int sum;
    unsigned int rightDigit;

    if(num < 0)
    {
        last_num = 0 - num;
    }
    else
    {
        last_num = num;
    }

    while ((unsigned long long int)last_num != last_num)
    {
        last_num *= 10;
    }

    sum = 0;
    while((unsigned long long int)last_num != 0)
    {
            rightDigit = (unsigned long long int)last_num % 10;

            if(rightDigit == 1 || rightDigit == 2 || rightDigit == 3 || rightDigit == 5 || rightDigit == 7)
            {
                rightDigit = 0;
            }
            else if(rightDigit == 0 || rightDigit == 4 || rightDigit == 6 || rightDigit == 9)
            {
                rightDigit = 1;
            }
            else if(rightDigit == 8)
            {
                rightDigit = 2;
            }

            sum += rightDigit;
            last_num = last_num / 10;
    }

    return sum;
}

double circle ( double radius, double* circumference)
{
    double pi = 22.0 / 7;
    double area;

    area = pi * radius *radius;
    *circumference = 2 * pi * radius;

    return area;
}

char charExample ( double num, char character)
{
    double IntegerNum = num;

    while ((signed long long int)IntegerNum != IntegerNum)
    {
        IntegerNum *= 10;
    }

    if((signed long long int)IntegerNum % 2 == 0)
    {
        return character;
    }
    else
    {
        if(character >= 'A' && character <= 'Z' )
        {
            return 'a' + (character - 'A');
        }
        else if(character >= 'a' && character <= 'z' )
        {
            return 'A' + (character - 'a');
        }
    }
}

double reverseNumber ( double num)
{
    double reversed = 0;

    double IntegerNum;
    if(num < 0)
    {
        IntegerNum = 0 - num;
    }
    else
    {
        IntegerNum = num;
    }

    int dotDigit = 0;

    while ((unsigned long long int)IntegerNum != 0)
    {
        IntegerNum /= 10;
        dotDigit++;
    }

    unsigned long long int grade = 1;
    while ((unsigned long long int)IntegerNum != IntegerNum)
    {
        IntegerNum *= 10;
        reversed += ((unsigned long long int)IntegerNum % 10) * grade;
        grade *= 10;
    }

    if(num < 0)
    {
        reversed *= -1;
    }

    if ((signed long long int)num != num)
    {
        for (unsigned int i = 1; i <= dotDigit; i++)
        {
            reversed /= 10;
        }
    }

    return reversed;
}

unsigned int NumberOfOnes ( unsigned int num)
{
    unsigned int count = 0;

    for(unsigned int i = 0; i < 32; i++)
    {
        if((num >> i) & 1 == 1)
        {
            count++;
        }
    }

    return count;
}

void printBinaryPresentationOfNumber ( unsigned long int num)
{
    unsigned int flag = 0;

    for(int i = 63; i >= 0; i--)
    {
        if((num >> i) & 1 == 1)
        {
            printf("1");
            flag++;
        }
        else if (flag != 0)
        {
            printf("0");
        }
    }
    printf("\n");

}

unsigned char reverseBinaryPresentation ( unsigned char num)
{
    unsigned char new_num = 0;

    for(int i = 0; i < 8; i++)
    {
        if((num >> i) & 1 == 1)
        {
            printf("1");
            new_num = new_num | (1 << (7 - i));
        }
        else
        {
            printf("0");
        }
    }
    printf("\n");

    return new_num;
}





unsigned long int BitwiseOperation ( signed int no, signed int bit_i, unsigned long int num)
{
    if(bit_i < 0 || bit_i > 63)
    {
        return num;
    }

    switch(no)
    {
        case 1:
            return num | (1 << bit_i);
        break;
        case 2:
            return num & (~(1 << bit_i));
        break;
        case 3:
            return num ^ (1 << bit_i);
        break;
        case 4:
            if((num >> bit_i) & 1 == 1)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        break;
        default:
            return num;
    }
}

unsigned int maxNumberOfZeroes ( unsigned long int num)
{
    unsigned int flag = 0;
    unsigned int count = 0;
    unsigned int max = 0;

    for(int i = 31; i >= 0; i--)
    {
        if((num >> i) & 1 == 1)
        {
            printf("1");
            flag++;
            if(flag == 2)
            {
                if(count > max)
                {
                    max = count;
                }

                flag = 1;
                count = 0;
            }
        }
        else if (flag == 1)
        {
            printf("0");
            count++;
        }
    }
    printf("\n");

    return max;
}

unsigned long int xor ( unsigned int num_1, unsigned int num_2)
{
    int xor;
    int max;

    if(num_1 > 1 && num_2 < 1000 && num_2 > num_1)
    {
        int i;
        int j;
        for(i = num_1; i <= num_2; i++)
        {
            for(j = i; j <= num_2; j++)
            {
                xor = i ^ j;

                printf("%d ^ %d = %d \n", i, j, xor);

                if(i == num_1 && j == i)
                {
                    max = xor;
                }

                if(xor > max)
                {
                    max = xor;
                }
            }
        }

        return max;
    }

    return 200;
}

void swap ( signed int* num_1, signed int* num_2)
{
    signed int swap = *num_1;
    *num_1 = *num_2;
    *num_2 = swap;
}

void swap_pointers ( signed int* * num_1, signed int* * num_2)
{
    signed int* swap = * *num_1;
    * *num_1 = * *num_2;
    * *num_2 = swap;
}
# 3 "myArray.h" 2
# 1 "/usr/include/stdlib.h" 1 3 4
# 25 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/bits/libc-header-start.h" 1 3 4
# 26 "/usr/include/stdlib.h" 2 3 4





# 1 "/usr/lib/gcc/x86_64-redhat-linux/11/include/stddef.h" 1 3 4
# 321 "/usr/lib/gcc/x86_64-redhat-linux/11/include/stddef.h" 3 4

# 321 "/usr/lib/gcc/x86_64-redhat-linux/11/include/stddef.h" 3 4
typedef int wchar_t;
# 32 "/usr/include/stdlib.h" 2 3 4







# 1 "/usr/include/bits/waitflags.h" 1 3 4
# 40 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/bits/waitstatus.h" 1 3 4
# 41 "/usr/include/stdlib.h" 2 3 4
# 58 "/usr/include/stdlib.h" 3 4
typedef struct
  {
    int quot;
    int rem;
  } div_t;



typedef struct
  {
    long int quot;
    long int rem;
  } ldiv_t;





__extension__ typedef struct
  {
    long long int quot;
    long long int rem;
  } lldiv_t;
# 97 "/usr/include/stdlib.h" 3 4
extern size_t __ctype_get_mb_cur_max (void) __attribute__ ((__nothrow__ , __leaf__)) ;



extern double atof (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern int atoi (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern long int atol (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;



__extension__ extern long long int atoll (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;



extern double strtod (const char *__restrict __nptr,
        char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern float strtof (const char *__restrict __nptr,
       char **__restrict __endptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

extern long double strtold (const char *__restrict __nptr,
       char **__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 176 "/usr/include/stdlib.h" 3 4
extern long int strtol (const char *__restrict __nptr,
   char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

extern unsigned long int strtoul (const char *__restrict __nptr,
      char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



__extension__
extern long long int strtoq (const char *__restrict __nptr,
        char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtouq (const char *__restrict __nptr,
           char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));




__extension__
extern long long int strtoll (const char *__restrict __nptr,
         char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtoull (const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 385 "/usr/include/stdlib.h" 3 4
extern char *l64a (long int __n) __attribute__ ((__nothrow__ , __leaf__)) ;


extern long int a64l (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;




# 1 "/usr/include/sys/types.h" 1 3 4
# 27 "/usr/include/sys/types.h" 3 4






typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;


typedef __loff_t loff_t;




typedef __ino_t ino_t;
# 59 "/usr/include/sys/types.h" 3 4
typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;
# 97 "/usr/include/sys/types.h" 3 4
typedef __pid_t pid_t;





typedef __id_t id_t;
# 114 "/usr/include/sys/types.h" 3 4
typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;




# 1 "/usr/include/bits/types/clock_t.h" 1 3 4






typedef __clock_t clock_t;
# 127 "/usr/include/sys/types.h" 2 3 4

# 1 "/usr/include/bits/types/clockid_t.h" 1 3 4






typedef __clockid_t clockid_t;
# 129 "/usr/include/sys/types.h" 2 3 4
# 1 "/usr/include/bits/types/time_t.h" 1 3 4






typedef __time_t time_t;
# 130 "/usr/include/sys/types.h" 2 3 4
# 1 "/usr/include/bits/types/timer_t.h" 1 3 4






typedef __timer_t timer_t;
# 131 "/usr/include/sys/types.h" 2 3 4
# 144 "/usr/include/sys/types.h" 3 4
# 1 "/usr/lib/gcc/x86_64-redhat-linux/11/include/stddef.h" 1 3 4
# 145 "/usr/include/sys/types.h" 2 3 4



typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;




# 1 "/usr/include/bits/stdint-intn.h" 1 3 4
# 24 "/usr/include/bits/stdint-intn.h" 3 4
typedef __int8_t int8_t;
typedef __int16_t int16_t;
typedef __int32_t int32_t;
typedef __int64_t int64_t;
# 156 "/usr/include/sys/types.h" 2 3 4


typedef __uint8_t u_int8_t;
typedef __uint16_t u_int16_t;
typedef __uint32_t u_int32_t;
typedef __uint64_t u_int64_t;


typedef int register_t __attribute__ ((__mode__ (__word__)));
# 176 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 24 "/usr/include/endian.h" 3 4
# 1 "/usr/include/bits/endian.h" 1 3 4
# 35 "/usr/include/bits/endian.h" 3 4
# 1 "/usr/include/bits/endianness.h" 1 3 4
# 36 "/usr/include/bits/endian.h" 2 3 4
# 25 "/usr/include/endian.h" 2 3 4
# 35 "/usr/include/endian.h" 3 4
# 1 "/usr/include/bits/byteswap.h" 1 3 4
# 33 "/usr/include/bits/byteswap.h" 3 4
static __inline __uint16_t
__bswap_16 (__uint16_t __bsx)
{

  return __builtin_bswap16 (__bsx);



}






static __inline __uint32_t
__bswap_32 (__uint32_t __bsx)
{

  return __builtin_bswap32 (__bsx);



}
# 69 "/usr/include/bits/byteswap.h" 3 4
__extension__ static __inline __uint64_t
__bswap_64 (__uint64_t __bsx)
{

  return __builtin_bswap64 (__bsx);



}
# 36 "/usr/include/endian.h" 2 3 4
# 1 "/usr/include/bits/uintn-identity.h" 1 3 4
# 32 "/usr/include/bits/uintn-identity.h" 3 4
static __inline __uint16_t
__uint16_identity (__uint16_t __x)
{
  return __x;
}

static __inline __uint32_t
__uint32_identity (__uint32_t __x)
{
  return __x;
}

static __inline __uint64_t
__uint64_identity (__uint64_t __x)
{
  return __x;
}
# 37 "/usr/include/endian.h" 2 3 4
# 177 "/usr/include/sys/types.h" 2 3 4


# 1 "/usr/include/sys/select.h" 1 3 4
# 30 "/usr/include/sys/select.h" 3 4
# 1 "/usr/include/bits/select.h" 1 3 4
# 31 "/usr/include/sys/select.h" 2 3 4


# 1 "/usr/include/bits/types/sigset_t.h" 1 3 4



# 1 "/usr/include/bits/types/__sigset_t.h" 1 3 4




typedef struct
{
  unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
} __sigset_t;
# 5 "/usr/include/bits/types/sigset_t.h" 2 3 4


typedef __sigset_t sigset_t;
# 34 "/usr/include/sys/select.h" 2 3 4



# 1 "/usr/include/bits/types/struct_timeval.h" 1 3 4







struct timeval
{
  __time_t tv_sec;
  __suseconds_t tv_usec;
};
# 38 "/usr/include/sys/select.h" 2 3 4

# 1 "/usr/include/bits/types/struct_timespec.h" 1 3 4
# 10 "/usr/include/bits/types/struct_timespec.h" 3 4
struct timespec
{
  __time_t tv_sec;



  __syscall_slong_t tv_nsec;
# 26 "/usr/include/bits/types/struct_timespec.h" 3 4
};
# 40 "/usr/include/sys/select.h" 2 3 4



typedef __suseconds_t suseconds_t;





typedef long int __fd_mask;
# 59 "/usr/include/sys/select.h" 3 4
typedef struct
  {






    __fd_mask __fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];


  } fd_set;






typedef __fd_mask fd_mask;
# 91 "/usr/include/sys/select.h" 3 4

# 101 "/usr/include/sys/select.h" 3 4
extern int select (int __nfds, fd_set *__restrict __readfds,
     fd_set *__restrict __writefds,
     fd_set *__restrict __exceptfds,
     struct timeval *__restrict __timeout);
# 113 "/usr/include/sys/select.h" 3 4
extern int pselect (int __nfds, fd_set *__restrict __readfds,
      fd_set *__restrict __writefds,
      fd_set *__restrict __exceptfds,
      const struct timespec *__restrict __timeout,
      const __sigset_t *__restrict __sigmask);
# 126 "/usr/include/sys/select.h" 3 4

# 180 "/usr/include/sys/types.h" 2 3 4





typedef __blksize_t blksize_t;






typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 227 "/usr/include/sys/types.h" 3 4
# 1 "/usr/include/bits/pthreadtypes.h" 1 3 4
# 23 "/usr/include/bits/pthreadtypes.h" 3 4
# 1 "/usr/include/bits/thread-shared-types.h" 1 3 4
# 44 "/usr/include/bits/thread-shared-types.h" 3 4
# 1 "/usr/include/bits/pthreadtypes-arch.h" 1 3 4
# 21 "/usr/include/bits/pthreadtypes-arch.h" 3 4
# 1 "/usr/include/bits/wordsize.h" 1 3 4
# 22 "/usr/include/bits/pthreadtypes-arch.h" 2 3 4
# 45 "/usr/include/bits/thread-shared-types.h" 2 3 4




typedef struct __pthread_internal_list
{
  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;

typedef struct __pthread_internal_slist
{
  struct __pthread_internal_slist *__next;
} __pthread_slist_t;
# 74 "/usr/include/bits/thread-shared-types.h" 3 4
# 1 "/usr/include/bits/struct_mutex.h" 1 3 4
# 22 "/usr/include/bits/struct_mutex.h" 3 4
struct __pthread_mutex_s
{
  int __lock;
  unsigned int __count;
  int __owner;

  unsigned int __nusers;



  int __kind;

  short __spins;
  short __elision;
  __pthread_list_t __list;
# 53 "/usr/include/bits/struct_mutex.h" 3 4
};
# 75 "/usr/include/bits/thread-shared-types.h" 2 3 4
# 87 "/usr/include/bits/thread-shared-types.h" 3 4
# 1 "/usr/include/bits/struct_rwlock.h" 1 3 4
# 23 "/usr/include/bits/struct_rwlock.h" 3 4
struct __pthread_rwlock_arch_t
{
  unsigned int __readers;
  unsigned int __writers;
  unsigned int __wrphase_futex;
  unsigned int __writers_futex;
  unsigned int __pad3;
  unsigned int __pad4;

  int __cur_writer;
  int __shared;
  signed char __rwelision;




  unsigned char __pad1[7];


  unsigned long int __pad2;


  unsigned int __flags;
# 55 "/usr/include/bits/struct_rwlock.h" 3 4
};
# 88 "/usr/include/bits/thread-shared-types.h" 2 3 4




struct __pthread_cond_s
{
  __extension__ union
  {
    __extension__ unsigned long long int __wseq;
    struct
    {
      unsigned int __low;
      unsigned int __high;
    } __wseq32;
  };
  __extension__ union
  {
    __extension__ unsigned long long int __g1_start;
    struct
    {
      unsigned int __low;
      unsigned int __high;
    } __g1_start32;
  };
  unsigned int __g_refs[2] ;
  unsigned int __g_size[2];
  unsigned int __g1_orig_size;
  unsigned int __wrefs;
  unsigned int __g_signals[2];
};

typedef unsigned int __tss_t;
typedef unsigned long int __thrd_t;

typedef struct
{
  int __data ;
} __once_flag;
# 24 "/usr/include/bits/pthreadtypes.h" 2 3 4



typedef unsigned long int pthread_t;




typedef union
{
  char __size[4];
  int __align;
} pthread_mutexattr_t;




typedef union
{
  char __size[4];
  int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int pthread_once_t;


union pthread_attr_t
{
  char __size[56];
  long int __align;
};

typedef union pthread_attr_t pthread_attr_t;




typedef union
{
  struct __pthread_mutex_s __data;
  char __size[40];
  long int __align;
} pthread_mutex_t;


typedef union
{
  struct __pthread_cond_s __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;





typedef union
{
  struct __pthread_rwlock_arch_t __data;
  char __size[56];
  long int __align;
} pthread_rwlock_t;

typedef union
{
  char __size[8];
  long int __align;
} pthread_rwlockattr_t;





typedef volatile int pthread_spinlock_t;




typedef union
{
  char __size[32];
  long int __align;
} pthread_barrier_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_barrierattr_t;
# 228 "/usr/include/sys/types.h" 2 3 4



# 395 "/usr/include/stdlib.h" 2 3 4






extern long int random (void) __attribute__ ((__nothrow__ , __leaf__));


extern void srandom (unsigned int __seed) __attribute__ ((__nothrow__ , __leaf__));





extern char *initstate (unsigned int __seed, char *__statebuf,
   size_t __statelen) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



extern char *setstate (char *__statebuf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







struct random_data
  {
    int32_t *fptr;
    int32_t *rptr;
    int32_t *state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int32_t *end_ptr;
  };

extern int random_r (struct random_data *__restrict __buf,
       int32_t *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
   size_t __statelen,
   struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));

extern int setstate_r (char *__restrict __statebuf,
         struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));





extern int rand (void) __attribute__ ((__nothrow__ , __leaf__));

extern void srand (unsigned int __seed) __attribute__ ((__nothrow__ , __leaf__));



extern int rand_r (unsigned int *__seed) __attribute__ ((__nothrow__ , __leaf__));







extern double drand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern double erand48 (unsigned short int __xsubi[3]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int lrand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern long int nrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int mrand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern long int jrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern void srand48 (long int __seedval) __attribute__ ((__nothrow__ , __leaf__));
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern void lcong48 (unsigned short int __param[7]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    __extension__ unsigned long long int __a;

  };


extern int drand48_r (struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int erand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int lrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int nrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int mrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int jrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

extern int seed48_r (unsigned short int __seed16v[3],
       struct drand48_data *__buffer) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern int lcong48_r (unsigned short int __param[7],
        struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern void *malloc (size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__))
     __attribute__ ((__alloc_size__ (1))) ;

extern void *calloc (size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__alloc_size__ (1, 2))) ;






extern void *realloc (void *__ptr, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__)) __attribute__ ((__alloc_size__ (2)));







extern void *reallocarray (void *__ptr, size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__))
     __attribute__ ((__alloc_size__ (2, 3)));



extern void free (void *__ptr) __attribute__ ((__nothrow__ , __leaf__));


# 1 "/usr/include/alloca.h" 1 3 4
# 24 "/usr/include/alloca.h" 3 4
# 1 "/usr/lib/gcc/x86_64-redhat-linux/11/include/stddef.h" 1 3 4
# 25 "/usr/include/alloca.h" 2 3 4







extern void *alloca (size_t __size) __attribute__ ((__nothrow__ , __leaf__));






# 569 "/usr/include/stdlib.h" 2 3 4





extern void *valloc (size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__))
     __attribute__ ((__alloc_size__ (1))) ;




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;




extern void *aligned_alloc (size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__alloc_size__ (2))) ;



extern void abort (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));



extern int atexit (void (*__func) (void)) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







extern int at_quick_exit (void (*__func) (void)) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern void exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));





extern void quick_exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));





extern void _Exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));




extern char *getenv (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 647 "/usr/include/stdlib.h" 3 4
extern int putenv (char *__string) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int setenv (const char *__name, const char *__value, int __replace)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));


extern int unsetenv (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern int clearenv (void) __attribute__ ((__nothrow__ , __leaf__));
# 675 "/usr/include/stdlib.h" 3 4
extern char *mktemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 688 "/usr/include/stdlib.h" 3 4
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) ;
# 710 "/usr/include/stdlib.h" 3 4
extern int mkstemps (char *__template, int __suffixlen) __attribute__ ((__nonnull__ (1))) ;
# 731 "/usr/include/stdlib.h" 3 4
extern char *mkdtemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 784 "/usr/include/stdlib.h" 3 4
extern int system (const char *__command) ;
# 800 "/usr/include/stdlib.h" 3 4
extern char *realpath (const char *__restrict __name,
         char *__restrict __resolved) __attribute__ ((__nothrow__ , __leaf__)) ;






typedef int (*__compar_fn_t) (const void *, const void *);
# 820 "/usr/include/stdlib.h" 3 4
extern void *bsearch (const void *__key, const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) ;







extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));
# 840 "/usr/include/stdlib.h" 3 4
extern int abs (int __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;
extern long int labs (long int __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;


__extension__ extern long long int llabs (long long int __x)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;






extern div_t div (int __numer, int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;
extern ldiv_t ldiv (long int __numer, long int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;


__extension__ extern lldiv_t lldiv (long long int __numer,
        long long int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;
# 872 "/usr/include/stdlib.h" 3 4
extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *gcvt (double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3))) ;




extern char *qecvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qfcvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3))) ;




extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));

extern int qecvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int qfcvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));





extern int mblen (const char *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));


extern int mbtowc (wchar_t *__restrict __pwc,
     const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));


extern int wctomb (char *__s, wchar_t __wchar) __attribute__ ((__nothrow__ , __leaf__));



extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ , __leaf__))
    __attribute__ ((__access__ (__read_only__, 2)));

extern size_t wcstombs (char *__restrict __s,
   const wchar_t *__restrict __pwcs, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__))
  __attribute__ ((__access__ (__write_only__, 1, 3))) __attribute__ ((__access__ (__read_only__, 2)));






extern int rpmatch (const char *__response) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 958 "/usr/include/stdlib.h" 3 4
extern int getsubopt (char **__restrict __optionp,
        char *const *__restrict __tokens,
        char **__restrict __valuep)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2, 3))) ;
# 1004 "/usr/include/stdlib.h" 3 4
extern int getloadavg (double __loadavg[], int __nelem)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 1014 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/bits/stdlib-float.h" 1 3 4
# 1015 "/usr/include/stdlib.h" 2 3 4
# 1026 "/usr/include/stdlib.h" 3 4

# 4 "myArray.h" 2




# 7 "myArray.h"
void array_print( int* arr, int size)
{
    for (unsigned int i = 0; i < size; i++)
    {
        printf("%d  ", *(arr + i));
    }
    printf("\n");
}

signed int array_getMax (signed int* arr, double size)
{
    signed int max;

    for (unsigned int i = 0; i < size; i++)
    {
        if ( i == 0)
        {
            max = *arr;
        }

        if ( *(arr + i) > max)
        {
            max = *(arr + i);
        }
    }

    return max;
}

signed int array_getMin (signed int* arr, double size)
{
    signed int min;

    for (unsigned int i = 0; i < size; i++)
    {
        if ( i == 0)
        {
            min = *arr;
        }

        if ( *(arr + i) < min)
        {
            min = *(arr + i);
        }
    }

    return min;
}

signed int array_search( int* arr, int size , signed int number)
{
    for (unsigned int i = 0; i < size; i++)
    {
        if ( *(arr + i) == number)
        {
            return i;
        }
    }

    return -1;
}


signed int array_search_binary( int* arr, int size , signed int number)
{
    signed int first = 0;
    signed int last = size - 1;
    signed int middle;

    while (first <= last)
    {
        middle = (last + first) / 2;

        if (arr[middle] == number)
        {
            return middle;
        }
        else if (arr[middle] > number)
        {
            last = middle - 1;
        }
        else if (arr[middle] > number)
        {
            first = middle + 1;
        }
    }

    return -1;
}

signed int array_searchlastIndex( int* arr, int size , int number)
{
    signed int index = -1;

    for (unsigned int i = 0; i < size; i++)
    {
        if ( *(arr + i) == number)
        {
            index = i;
        }
    }

    return index;
}

signed int array_maxIndex( int* arr, double size)
{
    signed int max;
    unsigned int maxIndex;

    for (unsigned int i = 0; i < size; i++)
    {
        if (i == 0)
        {
            max = *arr;
            maxIndex = i;
        }

        if (max < *(arr + i))
        {
            max = *(arr + i);
            maxIndex = i;
        }
    }

    return maxIndex;
}

signed int array_minIndex( int* arr, double size)
{
    signed int min;
    unsigned int minIndex;

    for (unsigned int i = 0; i < size; i++)
    {
        if (i == 0)
        {
            min = *arr;
            minIndex = i;
        }

        if (min > *(arr + i))
        {
            min = *(arr + i);
            minIndex = i;
        }
    }

    return minIndex;
}

signed int array_mostRepeated( int* arr, int size)
{
    unsigned int count = 0;
    unsigned int max;
    signed int mostRepeated;

    for (unsigned int i = 0; i < size; i++)
    {
        for (unsigned int j = i; j < size; j++)
        {
            if( *(arr + j) == *(arr + i) )
            {
                count++;
            }
        }

        if ( i == 0)
        {
            mostRepeated = *arr;
            max = count;
        }

        if ( count > max)
        {
            mostRepeated = *(arr + i);
            max = count;
        }

        count = 0;
    }

    return mostRepeated;
}


signed int array_mostRepeated_2( signed int* arr, unsigned int size)
{
    signed int max;
    signed int min;
    signed int mostRepeated;
    unsigned int count;

    for (unsigned int i = 0; i < size; i++)
    {
        if (i == 0)
        {
            max = *arr;
            min = *arr;
        }

        if ( arr[i] > max)
        {
            max = arr[i];
        }

        if ( arr[i] < min )
        {
            min = arr[i];
        }
    }

    unsigned int* counter = (unsigned int*) calloc ( ((max - min) + 1) , sizeof(unsigned int) );
    if (counter == (void *) 0)
    {

        unsigned int count = 0;
        unsigned int max;
        signed int mostRepeated;

        for (unsigned int i = 0; i < size; i++)
        {
            for (unsigned int j = i; j < size; j++)
            {
                if( *(arr + j) == *(arr + i) )
                {
                    count++;
                }
            }

            if ( i == 0)
            {
                mostRepeated = *arr;
                max = count;
            }

            if ( count > max)
            {
                mostRepeated = *(arr + i);
                max = count;
            }

            count = 0;
        }

        return mostRepeated;

    }

    for (unsigned int i = 0; i < size; i++)
    {
       counter[arr[i] - min]++;
    }

    for (unsigned int i = 0; i < (max - min) + 1; i++)
    {
       if (i == 0)
        {
            mostRepeated = i + min;
            count = *counter;
        }

        if ( counter[i] > count)
        {
            mostRepeated = i + min;
            count = counter[i];
        }
    }

    free(counter);

    return mostRepeated;
}


unsigned int array_mostRepeated_mono( unsigned int* arr, double size)
{
    unsigned int max;
    unsigned int mostRepeated;

    unsigned int counter[10] = {0};

    for (unsigned int i = 0; i < size && arr[i] >= 0 && arr[i] <= 9 ; i++)
    {
        counter[arr[i]]++;
    }

    for(unsigned int i = 0; i <= 9; i++)
    {
        if (i == 0)
        {
            max = counter[i];
            mostRepeated = i;
        }

        if( counter[i] > max)
        {
            max = counter[i];
            mostRepeated = i;
        }
     }

    return mostRepeated;
}


unsigned char array_mostRepeatedChar ( unsigned char* arr, double size)
{
    unsigned int max;
    unsigned int mostRepeated;

    unsigned int counter[256] = {0};

    for (unsigned int i = 0; i < size; i++)
    {
        counter[arr[i]]++;
    }

    for(unsigned int i = 0; i < 256; i++)
    {
        if (i == 0)
        {
            max = counter[i];
            mostRepeated = i;
        }

        if( counter[i] > max)
        {
            max = counter[i];
            mostRepeated = i;
        }
     }

    return mostRepeated;
}

void array_reverse( signed int* arr, signed int size)
{
    for (unsigned int i = 0; i < size / 2; i++)
    {
        signed int swap = *(arr + i);
        *(arr + i) = *(arr + size - (1 + i));
        *(arr + size - (1 + i)) = swap;
    }
}

void array_reverseChar( signed char* arr, signed int size)
{
    for (unsigned int i = 0; i < size / 2; i++)
    {
        signed int swap = *(arr + i);
        *(arr + i) = *(arr + size - (1 + i));
        *(arr + size - (1 + i)) = swap;
    }
}

unsigned int array_swap( signed int* arr, signed int* ar2, signed int arrSize, signed int ar2Size)
{
    unsigned int size;
    if ( arrSize < ar2Size)
    {
        size = arrSize;
    }
    else
    {
        size = ar2Size;
    }

    for (unsigned int i = 0; i < size; i++)
    {
        signed int swap = *(arr + i);
        *(arr + i) = *(ar2 + i);
        *(ar2 + i) = swap;
    }

    return size;
}

unsigned int array_copy( signed int* arr, signed int* ar2, signed int arrSize, signed int ar2Size)
{
    unsigned int size;
    if ( arrSize < ar2Size)
    {
        size = arrSize;
    }
    else
    {
        size = ar2Size;
    }

    for (unsigned int i = 0; i < size; i++)
    {
        *(arr + i) = *(ar2 + i);
    }

    return size;
}

unsigned int array_longestChain(signed int* arr, double size , double number)
{
    unsigned int count = 0;
    unsigned int longest = 0;

    for (unsigned int i = 0; i < size; i++)
    {
        if ( *(arr + i) == number)
        {
            count++;
        }
        else
        {
            if(longest < count)
            {
                longest = count;
            }

            count = 0;
        }
    }

    return longest;
}

unsigned int array_longestSequenceChain(signed int* arr, double size)
{
    unsigned int count = 0;
    unsigned int longest = 0;

    for (unsigned int i = 0; i < size; i++)
    {
        if ( *(arr + i) + 1 == *( arr + (i + 1) ) )
        {
            count++;
        }
        else
        {
            count++;

            if(longest < count)
            {
                longest = count;
            }

            count = 0;
        }
    }

    return longest;
}

unsigned int array_longestChainOfAnyNumber(signed int* arr, double size , signed int* number)
{
    unsigned int count = 0;
    unsigned int longest = 0;

    for (unsigned int i = 0; i < size; i++)
    {
        if ( *(arr + i) == *(arr + (i + 1)))
        {
            count++;
        }
        else
        {
            count++;

            if(longest < count)
            {
                longest = count;
                *number = *(arr + i);
            }

            count = 0;
        }
    }

    return longest;
}

unsigned int array_merge ( signed int* ar1, signed int* ar2, signed int* ar3, double ar1Size, double ar2Size, double ar3Size)
{
    double size = ar1Size + ar2Size;

    if ( size > ar3Size)
    {
        size = ar3Size;
    }

    unsigned int j = 0;
    unsigned int i = 0;


    for ( ; i < size && j < ar1Size && j < ar2Size; i = i + 2)
    {
        *(ar3 + i) = *(ar1 + j);
        *(ar3 + (i + 1)) = *(ar2 + j);
        j++;
    }


    if ( j >= ar1Size)
    {
        for ( ; i < size; i++)
        {
            *(ar3 + i) = *(ar2 + j);
            j++;
        }
    }
    else if ( j >= ar2Size)
    {
        for ( ; i < size; i++)
        {
            *(ar3 + i) = *(ar1 + j);
            j++;
        }
    }

    return size;
}

unsigned int array_removePrime( int* arr, int size)
{
    unsigned int count = 0;

    for (unsigned int i = 0; i < size; i++)
    {
        if ( IsPrime(*(arr + i)))
        {
            *(arr + i) = 0;
            count++;
        }
    }

    return count;
}

unsigned int array_removeRepeatedNumbers ( signed int* arr, double size, signed int* newArr, double maxSize)
{
    unsigned int j = 0;
    unsigned int newSize = 0;

    for (unsigned int i = 0; i < size; i++)
    {
        if(i == 0)
        {
            *(newArr + j) = *(arr + i);

            i++;

            if (j < maxSize)
            {
                j++;
            }
            else
            {
                return j;
            }
        }

        if ( *(arr + i) == *(arr + (i - 1)))
        {

        }
        else
        {
            *(newArr + j) = *(arr + i);

            if (j < maxSize)
            {
                j++;
            }
            else
            {
                return j;
            }
        }
    }

    return j;
}

double array_scan( int* arr, int maxSize)
{
    double size;
    printf("Enter the size of the array less than 100: ");
    scanf("%lf", &size);

    if (size > maxSize)
    {
        size = maxSize;
    }


    for (unsigned int i = 0; i < size; i++)
    {
        printf("Enter Element %d: ", i);
        scanf("%d", arr + i);
    }

    return size;
}

unsigned int array_betweenTwoNumbers( signed int* arr, double number_1, double number_2)
{
    double max;
    double min;
    unsigned int size = 0;

    if ( number_1 > number_2 )
    {
        max = number_1;
        min = number_2;
    }
    else
    {
        min = number_1;
        max = number_2;
    }

    if( min == (signed int)min)
    {
        signed int i;
        for ( i = min +1; i < max; i++)
        {
            *(arr + size) = i;
            size++;
        }
    }
    else
    {
        signed int i;
        for ( i = min - ( min - (signed int)min ); i < max; i++)
        {
            *(arr + size) = i;
            size++;
        }
    }

    return size;
}

void array_zeroDetector ( signed int* arr)
{
    unsigned int i = 0;
    unsigned int flag = 0;
    unsigned int firstZeroIndex;
    unsigned int secendZeroIndex;

    while ( flag != 2)
    {
        if( *(arr + i) == 0)
        {
            if( flag == 0)
            {
                firstZeroIndex = i;
                flag++;
            }
            else if ( i - firstZeroIndex > 3)
            {
                secendZeroIndex = i;
                flag++;
            }
        }

        i++;
    }

    for( unsigned int count = 1; count <= 3; count++)
    {
        signed int swap = *(arr + firstZeroIndex + count);
        *(arr + firstZeroIndex + count) = *(arr + secendZeroIndex + count);
        *(arr + secendZeroIndex + count) = swap;


    }
}

signed int array_biggestDifferenceBetweenTwoElement( signed int* arr, double size)
{
    signed int difference;
    signed int biggest;

    for (unsigned int i = 0; i < size; i++)
    {
        for (unsigned int j = i; j < size; j++)
        {
            difference = *(arr + j) - *(arr + i);

            if( i == 0 && j == 0)
            {
                biggest = difference;
            }

            if( difference > biggest)
            {


                biggest = difference;
            }
        }
    }

    return biggest;
}


signed int array_findMissedNumber ( signed int* arr, double size)
{
    signed int counter[100] = {0};

    for (unsigned int i = 0; i < size; i++)
    {
        counter[arr[i]]++;
    }

    for (unsigned int i = 0; i <= 100; i++)
    {
        if ( counter[i] == 0)
        {
            return i;
        }
    }
}


signed int array_findRepeatedNumber ( signed int* arr, double size)
{
    signed int counter[100] = {0};

    for (unsigned int i = 0; i < size; i++)
    {
        counter[arr[i]]++;
    }

    for (unsigned int i = 0; i <= 100; i++)
    {
        if ( counter[i] > 1)
        {
            return i;
        }
    }
}


signed int array_findNoRepeatedNumber ( signed int* arr, double size)
{
    signed int max = array_getMax ( arr, size);
    signed int min = array_getMin ( arr, size);

    unsigned int rangeSize = (max - min) + 1;

    signed int* counter = (signed int*) calloc (rangeSize, sizeof(signed int));

    if (counter != (void *) 0)
    {
        for (unsigned int i = 0; i < size; i++)
        {
            counter[ arr[i] - min ]++;
        }

        for (unsigned int i = 0; i <= 100; i++)
        {
            if ( counter[i] == 1)
            {
                return i + min;
            }
        }
    }

    free(counter);
}


signed int array_findNoRepeatedNumber_2 ( signed int* arr, double size)
{
    signed int result = 0;

    for (unsigned int i = 0; i < size; i++)
    {
        result ^= arr[i];
    }

    return result;
}
# 835 "myArray.h"
unsigned int array_searchAndReturnPreviousElements ( signed int* arr, double size, signed int* ar2, double ar2Size, double number)
{
    for (unsigned int i = 0; i < size; i++)
    {
        if ( *(arr + i) == number)
        {
            return i;
        }
        else
        {
            if( i < ar2Size )
            {
                ar2[i] = arr[i];
            }
            else
            {
                return i;
            }
        }
    }
}



void array_bubbleSort ( signed int* arr, double size)
{
    unsigned int sortedFlag = 0;

    for (unsigned int j = 0; j < size; j++)
    {
        sortedFlag = 0;

        for (unsigned int i = 0; i < size - 1 - j; i++)
        {
            if ( arr[i] > arr[i + 1])
            {
                swap ( arr + i, arr + i + 1);
                sortedFlag++;
            }
        }
        if ( sortedFlag == 0)
        {
            return;
        }

    }

}


void array_selectionSort ( signed int* arr, double size)
{
    for (unsigned int j = 0; j < size; j++)
    {
        signed int maxIndex = array_maxIndex( arr, size - j);

        swap ( arr + maxIndex, arr + (unsigned int)size - 1 - j );
    }
}


void array_countingSort ( signed int* arr, double size)
{
    signed int max = array_getMax ( arr, size);
    signed int min = array_getMin ( arr, size);

    unsigned int counterSize = ((max - min) + 1);

    unsigned int* counter = (unsigned int*) calloc ( counterSize, sizeof(unsigned int) );

    if (counter != (void *) 0)
    {
        for (unsigned int i = 0; i < size; i++)
        {
            counter[arr[i] - min]++;
        }

        unsigned int arrIndex = 0;
        for (unsigned int i = 0; i < counterSize; i++)
        {
            for (unsigned int j = 0; j < counter[i]; j++)
            {
                arr[arrIndex] = i + min;
                arrIndex++;
            }

        }
    }

    free(counter);
}
# 3 "main.c" 2
# 1 "myString.h" 1



void string_print( unsigned char* str)
{
    for (unsigned int i = 0; str[i]; i++)
    {
        printf("%c", *(str + i));
    }
    printf("\n");
}

unsigned int string_len( unsigned char* str)
{
    unsigned int i;
    for ( i = 0; str[i]; i++);
    return i;
}

void string_copy ( signed char* str1, signed char* str2)
{
    for (unsigned int i = 0; str2[i]; i++)
    {
        str1[i] = str2[i];
        str1[i + 1] = 0;
    }
}

void string_reverse( signed char* str)
{
    unsigned int size = string_len( str);
    for (unsigned int i = 0; i < size / 2; i++)
    {
        signed int swap = *(str + i);
        *(str + i) = *(str + size - (1 + i));
        *(str + size - (1 + i)) = swap;
    }
}

void string_reverseWordsInSentence ( signed char* str)
{
    string_reverse( str);
    string_print( str);

    unsigned int last;
    unsigned int first = 0;
    unsigned int size;

    while (str[first])
    {
        for ( last = first; str[last] != ' ' && str[last] ; last++);

        array_reverseChar( str + first, last - first);







        if( str[last])
        {
            first = last + 1;
        }
        else
        {
            first = last;
        }
    }
}

unsigned int IsMirror ( signed char* str)
{
    unsigned int size = string_len( str);
    for (unsigned int i = 0; i < size / 2; i++)
    {
        if( *(str + i) == *(str + size - (1 + i)) )
        {

        }
        else
        {
            return 0;
        }
    }

    return 1;
}

unsigned int string_compare ( signed char* str1, signed char* str2)
{
    unsigned int i;
    for ( i = 0; str1[i] && str2[i]; i++)
    {
        if (str1[i] == str2[i] || str1[i] - str2[i] == 'a' - 'A' || str1[i] - str2[i] == 'A' - 'a')
        {

        }
        else
        {
            return 0;
        }

    }

    if (str1[i] != str2[i])
    {
        return 0;
    }

    return 1;
}

unsigned int string_longest_counter ( signed char* str)
{
    unsigned int count = 0;
    unsigned int longest = 0;

    unsigned int i;
    for (i = 0; str[i]; i++)
    {
        if ( str[i] != ' ')
        {
            count++;

            if(longest < count)
            {
                longest = count;
            }
        }
        else
        {
            count = 0;
        }
    }

    return longest;
}

void string_longest ( signed char* str, signed char* strcopy)
{
    unsigned int count = 0;
    unsigned int longest = 0;
    unsigned int index;

    for (unsigned int i = 0; str[i]; i++)
    {
        if ( str[i] != ' ')
        {
            count++;

            if(longest < count)
            {
                longest = count;
                index = (i+1) - longest;
            }
        }
        else
        {
            count = 0;
        }
    }

    unsigned int j = 0;
    for (unsigned int i = index; i <= index + longest; i++)
    {
        strcopy[j] = str[i];
        j++;
    }
    strcopy[j] = 0;
}

void string_scan ( unsigned char* str)
{
    printf("Enter string not more than 100 character: ");
    unsigned int i = 0;
    scanf(" %c", str + i);
    for ( ; str[i] != '\n'; )
    {
        i++;
        scanf("%c", str + i);
    }
    str[i] = 0;
# 193 "myString.h"
}

void intToString( signed int num, unsigned char* str)
{
    unsigned flag = 0;

    if (num < 0)
    {
        num = 0 - num;
        flag++;
    }

    unsigned int i = 0;
    if(num == 0)
    {
        str[0] = '0';
        i++;
    }
    while ( num)
    {
        str[i] = num % 10 + '0';
        num /= 10;
        i++;
    }
    if (flag == 1)
    {
        str[i] = '-';
        i++;
    }
    str[i] = 0;

    string_reverse( str);
}

signed int stringToInt ( unsigned char* str)
{
    signed int number = 0;
    for (unsigned int i = 0; str[i]; i++)
    {
        if (str[i] == '-')
        {
            i++;
        }

        number = number * 10 + (str[i] - '0');
    }

    if (str[0] == '-')
    {
        number = 0 - number;
    }

    return number;
}

void string_swap( unsigned char* str1, unsigned char* str2)
{
    unsigned int i;
    for (i = 0; str1[i] && str2[i]; i++)
    {
        unsigned char swap = *(str1 + i);
        *(str1 + i) = *(str2 + i);
        *(str2 + i) = swap;
    }
    str1[i] = 0;
    str2[i] = 0;
}

unsigned char* tringle ( unsigned char* strInput)
{
    unsigned char str[100];
    signed int arr[3];
    unsigned int arrSize = sizeof(arr) / sizeof(arr[0]);
    unsigned int i = 0;
    unsigned int j = 0;
    unsigned int k = 0;

    while ( strInput[i] )
    {
        j = 0;

        for( ; strInput[i] && strInput[i] != ' '; i++)
        {
            str[j] = strInput[i];
            j++;
        }
        i++;
        str[j] = 0;

        arr[k] = stringToInt ( str);

        k++;
    }

    if ( arr[0] + arr[1] < arr[2] || arr[1] + arr[2] < arr[0] || arr[0] + arr[2] < arr[1])
    {
        return "Not triangle";
    }
    else if ( arr[0] == arr[1] && arr[1] == arr[2])
    {
        return "Equilateral triangle ";
    }
    else if ( arr[0] == arr[1] || arr[1] == arr[2] || arr[0] == arr[2])
    {
        return "Isosceles triangle";
    }
    else
    {
        return "Scalene triangle";
    }
}

void string_doubleToString ( double number, unsigned char* str)
{
    unsigned int i = 0;
    unsigned int digit;
    unsigned int dotIndex = 0;
    unsigned int signFlag = 0;


    if ( number == 0)
    {
        str[i] = '0';
        i++;
    }

    if ( number < 0)
    {
        number = 0 - number;
        str[i] = '-';
        i++;

        signFlag++;
    }

    while ( (unsigned long int) number != 0 )
    {
        number = number / 10;
        dotIndex++;

        if (signFlag == 1)
        {
            dotIndex++;
        }
    }

    while ( (unsigned long int) number != number )
    {
        number = number * 10;
        digit = (unsigned long int) number % 10;

        if (i == dotIndex)
        {
            str[i] = '.';
            i++;
        }

        str[i] = digit + '0';
        i++;
    }

    str[i] = 0;
}

void replace (unsigned char* str1, unsigned char* str2, unsigned char* str3, unsigned char* str4)
{
    unsigned int j = 0;
    unsigned int i = 0;
    unsigned int first = 0;
    unsigned int k;
    unsigned int counter = 0;

    unsigned char str[100];

    while ( str1[i])
    {
        for ( i = first ; str1[i] && str1[i] != ' '; i++)
        {
            str[j] = str1[i];
            j++;
        }
        str[j] = 0;
        if ( string_compare ( str, str2) )
        {
            for ( k = 0 ; str3[k]; k++)
            {
                str4[counter] = str3[k];
                counter++;
            }
        }
        else
        {
            for ( j = 0 ; str[j]; j++)
            {
                str4[counter] = str[j];
                counter++;
            }
        }

        first = i + 1;

        if (str1[first] != 0)
        {
            str4[counter] = ' ';
            counter++;
        }

        str4[counter] = 0;

        j = 0;
    }
}

void application ( unsigned char* str)
{
    unsigned char str2[100];
    unsigned char str3[100];
    unsigned int i = 0;
    unsigned int j = 0;
    unsigned int first = 0;

    while ( str[i])
    {
        for ( i = first ; str[i] && str[i] != ','; i++)
        {
            str2[j] = str[i];
            j++;
        }
        str2[j] = 0;

        j = 0;
        i++;
        for ( ; str[i] && str[i] != ','; i++)
        {
            str3[j] = str[i];
            j++;
        }
        str3[j] = 0;

        signed int numberOfPrints = stringToInt ( str3);

        for (unsigned int k = 1; k <= numberOfPrints; k++)
        {
            string_print( str2);
        }

        first = i + 1;
        j = 0;
    }
}





unsigned char string_firstRepeated( unsigned char* str)
{
    unsigned int counter[256] = {0};

    for (unsigned int i = 0; str[i]; i++)
    {
        counter[str[i]]++;
        for (unsigned int i = 0; i < 256; i++)
        {
            if (counter[str[i]] == 2)
            {
                return str[i];
            }

        }

    }

    return -1;
}


void array_removeRepeatedchars ( unsigned char* str, unsigned char* newStr, double maxSize)
{
    unsigned int counter[256] = {0};
    unsigned int j = 0;

    for (unsigned int i = 0; str[i]; i++)
    {
        counter[str[i]]++;

        if (counter[str[i]] == 1)
        {
            if (j < maxSize)
            {
                *(newStr + j) = str[i];
                j++;
                *(newStr + j) = 0;
            }
        }
    }
}
# 4 "main.c" 2


int main()
{
    signed int arr[] = { 5, 2, 5, 4, 4, 1, 2, 1, 1, 6, 1};
    signed int ar3[] = { 15, 12, 15, 14, 14, 11, 12, 11, 11, 16, 11, 22, 25, 54, 14};
    signed int ar4[] = {1,2,2,3,3,3,3,4,4,4,4,3,3,3};
    signed int ar5[] = {1,2,2,3,3,3,3,4,4,4,4,4,3,3,3};
    signed int ar6[] = { 1,2,3,4,5,6,7};
    signed int ar7[] = { 11,12,13,14,15,16,17,18,19,20};
    signed int ar8[] = { 5, 2, 5, 4, 4, 1, 2, 1, 1, 6, 1};
    signed int ar9[] = { 5,8,9,0,1,2,3,0,5,6,7,8,2,9,1};
    signed int ar10[] = {10,1,5,3,6,8,7,2};
    unsigned char ar11[] = {'a', 's','d', 'c','f','d','l','d', 'j','r','d', 'k'};
    signed int ar12[] = { 1, 2, 3, 4, 9, 10, 11, 15, 16, 17, 18, 22, 23};
    signed int ar13[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 2, 3, 4, 5, 6, 7, 8, 9, 3, 4, 5, 6, 7, 8, 9, 4, 5, 6, 7, 8, 9, 9, 9, 9, 9, 5, 6, 7, 8};
    signed int ar14[] = {1,2,2,3,3,3,3,4,4,4,4,4,5,5,5};
    signed int ar15[] = { 3, 4, -100, 50, 1, -10, 200, 4, -6};
    signed int ar16[] = {0, 1, 2, 3, 4, 5, 5, 5, 6, 7, 8, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 9, 100};
    signed int ar17[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 1, 2, 3, 4, 5, 6, 8, 9, 10};
    signed int ar18[] = { 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 7, 7, 8, 8, 9, 9, 10, 10};
    signed int ar19[] = { 3, 2, 10, 9, 5, 6, 8, 7, 4, 1};
    signed int ar20[] = { 3, 2, 10, 9, 5, 6, 8, 7, 4, 1};
    signed int ar21[] = { 3, 2, 10, 9, 5, 6, 8, 7, 4, 1};
    signed int ar2[100];

    unsigned char str[] = "ahmed";
    unsigned char str1[] = "ggiHad mohamed";
    unsigned char str2[] = "gihad ";
    unsigned char str3[] = " gihad  ali 1 2 fksl mohAmed";
    unsigned char str5[] = "-2987";
    unsigned char str6[] = "giHamd mohamed";
    unsigned char str7[] = "I work as an embedded software engineer for 3 years";
    unsigned char str8[] = "ahmed mohamed ali kamel";
    unsigned char str4[100];

    unsigned int arrSize = sizeof(arr) / sizeof(arr[0]);
    unsigned int ar2Size = sizeof(ar2) / sizeof(ar2[0]);
    unsigned int ar3Size = sizeof(ar3) / sizeof(ar3[0]);
    unsigned int ar4Size = sizeof(ar4) / sizeof(ar4[0]);
    unsigned int ar5Size = sizeof(ar5) / sizeof(ar5[0]);
    unsigned int ar6Size = sizeof(ar6) / sizeof(ar6[0]);
    unsigned int ar7Size = sizeof(ar7) / sizeof(ar7[0]);
    unsigned int ar8Size = sizeof(ar8) / sizeof(ar8[0]);
    unsigned int ar9Size = sizeof(ar9) / sizeof(ar9[0]);
    unsigned int ar10Size = sizeof(ar10) / sizeof(ar10[0]);
    unsigned int ar11Size = sizeof(ar11) / sizeof(ar11[0]);
    unsigned int ar12Size = sizeof(ar12) / sizeof(ar12[0]);
    unsigned int ar13Size = sizeof(ar13) / sizeof(ar13[0]);
    unsigned int ar14Size = sizeof(ar14) / sizeof(ar14[0]);
    unsigned int ar15Size = sizeof(ar15) / sizeof(ar15[0]);
    unsigned int ar16Size = sizeof(ar16) / sizeof(ar16[0]);
    unsigned int ar17Size = sizeof(ar17) / sizeof(ar17[0]);
    unsigned int ar18Size = sizeof(ar18) / sizeof(ar18[0]);
    unsigned int ar19Size = sizeof(ar19) / sizeof(ar19[0]);
    unsigned int ar20Size = sizeof(ar20) / sizeof(ar20[0]);
    unsigned int ar21Size = sizeof(ar21) / sizeof(ar21[0]);






    double sum = addTwoNumbers(1.25, 0.5);
    printf("Ans = %lf \n", sum);

    double max = getMax();
    printf("Ans = %lf \n", max);

    double min = getMin();
    printf("Ans = %lf \n", min);

    double add = addNumbers();
    printf("Ans = %lf \n", add);

    double multiply = multiplyTwoNumbers(-3.5, 2);
    printf("Ans = %lf \n", multiply);

    signed int rem = reminder(-4, -8);
    printf("Ans = %d \n", rem);

    double pow = power(-4, -8.8);
    printf("Ans = %lf \n", pow);

    double fact = factorial( -69);
    printf("Ans = %lf \n", fact);

    int primeCheck = IsPrime( 7.5);
    if (primeCheck)
    {
        printf("prime !! \n");
    }
    else
    {
        printf("not prime !! \n");
    }

    int perfectSquareCheck = IsPerfectSquare(225);
    if (perfectSquareCheck)
    {
        printf("perfect square !! \n");
    }
    else
    {
        printf("not perfect square !! \n");
    }

    int BaseOf_2 = IsBaseOf_2( -16);
    if (BaseOf_2)
    {
        printf("Base Of 2 !! \n");
    }
    else
    {
        printf("not Base Of 2 !! \n");
    }

    unsigned int digitsSum = sumDigits ( -754.237);
    printf("Ans = %u \n", digitsSum);

    double evenSum = addEVenNumbers ( );
    printf("Ans = %lf \n", evenSum);

    unsigned int equal = poster ( -28.837);
    printf("Ans = %u \n", equal);

    signed long long int sumBetween = addIntegersBetweenTwoNumbers ( 20, 2.2);
    printf("Ans = %lld \n", sumBetween);

    double circumference;
    double area = circle( -8.7, &circumference);
    printf("the area = %lf \n", area);
    printf("the circumference = %lf \n", circumference);

    char character = charExample ( -28.77, 'J');
    printf("the character is: %c \n", character);

    double reversed = reverseNumber ( -2567.314);
    printf("reversed = %lf \n", reversed);

    unsigned int countOnes = NumberOfOnes ( -1);
    printf("Number Of Ones = %u \n", countOnes);

    printBinaryPresentationOfNumber ( -1);

    unsigned char reversedBinary = reverseBinaryPresentation ( 5);
    printf("reversed Binary = %d \n", reversedBinary);

    unsigned long int bit = BitwiseOperation ( 4, 3, 5);
    printf("bit = %d \n", bit);

    unsigned int maxZeroes = maxNumberOfZeroes ( 296384);
    printf("maxZeroes = %d \n", maxZeroes);

    unsigned long int ans = xor ( 2, 1100);
    printf("Ans = %llu \n", ans);







    array_print( arr, 5);

    signed int elementIndex = array_search( arr, 5 , 5);
    if ( elementIndex >= 0)
    {
        printf("element: %u  \n", elementIndex);
    }
    else
    {
        printf("not exist !! \n");
    }

    signed int elementLastIndex = array_searchlastIndex( arr, 5 , 5);
    if ( elementLastIndex >= 0)
    {
        printf("last index: %d  \n", elementLastIndex);
    }
    else
    {
        printf("not exist !! \n");
    }

    signed int maxValue = array_maxIndex( arr, 5);
    printf("index of the biggest element: %d  \n", maxValue);

    signed int minValue = array_minIndex( arr, 5);
    printf("index of the smallest element: %d  \n", minValue);

    signed int mostRepeatedElement = array_mostRepeated( arr, arrSize);
    printf("the Most Repeated Element: %d  \n", mostRepeatedElement);

    signed int mostRepeatedElement_2 = array_mostRepeated_2( ar15, ar15Size);
    printf("the Most Repeated Element 2: %d  \n", mostRepeatedElement_2);

    signed int max_mono = array_mostRepeated_mono( ar13, ar13Size);
    printf("the Most Repeated mono: %u  \n", max_mono);

    array_print( arr, arrSize);
    array_reverse( arr, arrSize);
    array_print( arr, arrSize);

    array_print( arr, arrSize);
    array_print( ar3, ar3Size);
    unsigned int swappedSize = array_swap( arr, ar3, arrSize, ar3Size);
    array_print( arr, swappedSize);
    array_print( ar3, swappedSize);

    unsigned int copySize = array_copy( ar2, ar12, ar2Size, ar12Size);
    array_print( ar2, copySize);


    double number = 3;
    unsigned int longest = array_longestChain( ar4, ar4Size , number);
    printf("longest chain of %lf: %u  \n", number, longest);

    unsigned int sequence = array_longestSequenceChain( ar12, ar12Size);
    printf("sequence: %u  \n", sequence);


    signed int num;
    unsigned int longestOfAnyNumber = array_longestChainOfAnyNumber( ar5, ar5Size , &num);
    printf("longest chain of %d: %u  \n", num, longestOfAnyNumber);

    unsigned int mergedSize = array_merge ( ar6, ar7, ar2, ar6Size, ar7Size, ar2Size);
    array_print( ar2, mergedSize);



    unsigned int noOfPrimes = array_removePrime( arr, 5);
    array_print( arr, 5);
    printf("prime counter: %u  \n", noOfPrimes);

    array_print( ar14, ar14Size);
    unsigned int newArray = array_removeRepeatedNumbers ( ar14, ar14Size, ar2, ar2Size);
    array_print( ar2, newArray);


    signed int size = array_scan( ar2, 100);
    array_print( ar2, size);

    unsigned int betweenTwoNumbers_size = array_betweenTwoNumbers( ar2, -20.4, 2.2);
    array_print( ar2, betweenTwoNumbers_size);

    array_zeroDetector ( ar9);
    array_print( ar9, ar9Size);

    signed int difference = array_biggestDifferenceBetweenTwoElement( ar10, ar10Size);
    printf("difference: %d \n", difference);

    unsigned char mostRepeatedChar = array_mostRepeatedChar ( ar11, ar11Size);
    printf("most Repeated Char: %c \n", mostRepeatedChar);

    signed int missedNumber = array_findMissedNumber ( ar16, ar16Size);
    printf("the missed number: %d \n", missedNumber);

    signed int repeatedNumber = array_findRepeatedNumber ( ar16, ar16Size);
    printf("the repeated Number: %d \n", repeatedNumber);

    signed int oneRepeatedNumber = array_findNoRepeatedNumber ( ar17, ar17Size);
    printf("the one repeated Number: %d \n", oneRepeatedNumber);

    signed int oneRepeatedNumber_2 = array_findNoRepeatedNumber_2 ( ar17, ar17Size);
    printf("the one repeated Number 2: %d \n", oneRepeatedNumber_2);




    unsigned int newSize = array_searchAndReturnPreviousElements ( ar18, ar18Size, ar2, ar2Size, 7);
    array_print( ar2, newSize);

    array_print( ar19, ar19Size);
    array_bubbleSort ( ar19, ar19Size);
    array_print( ar19, ar19Size);

    array_print( ar20, ar20Size);
    array_selectionSort ( ar20, ar20Size);
    array_print( ar20, ar20Size);

    array_print( ar21, ar21Size);
    array_countingSort ( ar21, ar21Size);
    array_print( ar21, ar21Size);





    string_print( str);
    unsigned int length = string_len( str);
    printf("string length: %u \n", length);

    string_reverse( str);
    string_print( str);

    string_reverseWordsInSentence ( str7);
    string_print( str7);


    unsigned int mirror = IsMirror ( "SalelaSnklfsd");
    if (mirror)
    {
        printf("mirror !! \n");
    }
    else
    {
        printf("not mirror !! \n");
    }

    unsigned int IsEqual = string_compare ( str1, str2);
    if (IsEqual)
    {
        printf("equal !! \n");
    }
    else
    {
        printf("not equal !! \n");
    }

    unsigned int longestWord = string_longest_counter ( str3);
    printf("size of longest word: %u \n", longestWord);

    string_longest ( str3, str4);
    string_print( str4);

    string_scan ( str4);
    string_print( str4);

    signed int intNumber = 0;
    intToString( intNumber, str4);
    string_print( str4);

    signed int intFromChar = stringToInt ( str5);
    printf("int From Char: %d \n", intFromChar);

   string_print( str1);
   string_print( str2);
   string_swap( str1, str2);
   string_print( str1);
   string_print( str2);


   string_print( tringle ( "21 21 21 ") );

   string_doubleToString ( -3.45, str4);
   string_print( str4);

   replace ( "ahmed mohamed ali kamel", "ali", "ayman", str4);
   string_print( str4);

   application ( "hi,5,hello,12");




   signed char firstRepeated = string_firstRepeated( str6);
   printf("first Repeated Char: %c \n", firstRepeated);

   array_removeRepeatedchars ( "Mohamed kamel", str4, 100);
   string_print( str4);
}
