#include<stdio.h>
#include<sys/stat.h>
#include<string.h>
#include<sys/stat.h>
#include<errno.h>
#include<stdlib.h>

typedef enum BOOL {F, T} bool;
enum CUSTOMERROR{ERROR=0,WARNING,INFORMATION};
#define MODE 0777
#define BUFFERSIZE 1024
#define ERROR(...) ERROR()
#define INFORMATION(...) INFORMATION()
#define WARNING(...) WARNING()
