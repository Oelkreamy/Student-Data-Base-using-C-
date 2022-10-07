#ifndef PROJECT_HEADER_H_INCLUDED
#define PROJECT_HEADER_H_INCLUDED
#define Max 10
#include"stdbool.h"
#include"stddef.h"
#include"string.h"

typedef unsigned int uint8;
typedef struct student linkedlist ;
int i ;
char choice;
uint8 id;
uint8 year;
uint8 subject[3];
uint8 grades[3];
uint8 help;
char NumberOfEnteries;//holding the value of Enteries

struct student{
uint8 ID ;
uint8  year ;
uint8 course_1_ID ;
char  course_1_grade;
uint8 course_2_ID;
char  course_2_grade ;
uint8 course_3_ID;
char  course_3_grade ;
 linkedlist *next ;
}*head;

bool SDB_isfull();
uint8 SDB_GetUsedsize();
bool SDB_AddEntry(uint8 id ,uint8 year,uint8 *subject , uint8 *grades );
void SDB_DeleteEntry(uint8 id);
bool SDB_ReadEntry(uint8 id);
void SDB_GetIdList(uint8* count_1);
bool SDB_IsIdExist(uint8 id);


#endif // PROJECT_HEADER_H_INCLUDED
