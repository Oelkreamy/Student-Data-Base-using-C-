#include <stdio.h>
#include <stdlib.h>
#include"project_header.h"
int main()
{
  char i;
  uint8 count_1 = 0 ;
  head = NULL;

printf("welcome to the students database manegement: \n press \n 1 to check if the data base is full \n 2 to know the used size \n 3 to add Entry \n 4 to delete Entry \n 5 to read Entry \n 6 to get id list \n 7 to search for an id \n ");
while(1){
        printf("-----------------------------------------------------------------");
        printf(" \n Enter a valid choice \n ");
        scanf("%d",&choice);
switch (choice){
case 1 : //check if the database is full

if(SDB_isfull() == 0){
    printf(" \n the database is not full \n");
}//if
else {

    printf(" \n the data base is full \n ");
}//else

break;

case 2 : //display the number of Entries

printf(" \n the number of Entries is : %d \n",SDB_GetUsedsize());


break;

case 3 : //add entry

    printf(" \n Enter student ID \n ");
    scanf("%d",&id);
    printf(" \n Enter year \n ");
   scanf("%d",&year);
 for( i = 1 ; i<=3 ; i++){ //assigning values for courses id
    printf("\n Enter course_%d id \n ",i);
    scanf("%d",&subject[i-1]);
}

 for(i = 1 ; i<=3 ; i++){ //assigning values fo courses grades
     help=0;
     printf("\n the grade range is from 0 to 100 \n ",i);
     printf("\n Enter the course_%d grade \n ",i);
     scanf("%d",&help);

    while(1){
        if(help < 0 || help > 100){ //the grade should be between 0 and 100
     printf("\n Enter a valid grade between(0 and 100) \n ");
     scanf("%d",&help);}

     else{
            grades[i-1]= help;
        break;
     }
    }

}


if(SDB_AddEntry(id,year,subject,grades) == 1){
    printf(" \n the operation has been done succefully \n");

}//if
else{

    printf(" \n the operation failed database is full \n");
}//else


break;

case 4: //delete entry
printf(" \n Enter the id to delete info: \n");
scanf("%d",&id);
SDB_DeleteEntry(id);
break;


case 5 : //read entry
        printf(" \n Enter the id: \n");
        scanf("%d",&id);
        if(SDB_ReadEntry(id)==0){
        printf(" \n student with the given id:%d is not found \n",id);}
break;


case 6 : //get the id list

        SDB_GetIdList(&count_1);
break;

case 7 : //search for id

         printf(" \n Enter the id to search: \n");
         scanf("%d",&id);

       if(SDB_IsIdExist(id)== 1){
         printf("\n the id:%d exist  in the database\n",id);

       }//if
else{
         printf("\n the id:%d does not exist in the database \n",id);
}//else
    break;


default :

 printf("Enter a valid choice from 1  to 7");
 break ;


}//switch

  }//while
    return 0;
}//main


