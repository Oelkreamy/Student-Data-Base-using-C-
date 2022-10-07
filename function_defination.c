
#include"stdbool.h"
#include"project_header.h"

bool SDB_isfull(){

    linkedlist *temp = head;//pointer to head
    NumberOfEnteries = 0 ;
while(temp!=NULL){
    NumberOfEnteries++;//while temp != NULL add 1
    temp=temp->next;
}

if(NumberOfEnteries< Max){
    return 0  ;
}
else{

    return 1  ;
}
};


uint8 SDB_GetUsedsize(){
    linkedlist *temp = head;
    NumberOfEnteries = 0;
while(temp!=NULL){
    NumberOfEnteries++;
    temp=temp->next;
}
return NumberOfEnteries;
};


bool SDB_AddEntry(uint8 id ,uint8 year,uint8 *subject , uint8 *grades ){


    //if the database is full the insertion can not be done
if(SDB_isfull()!= 1){
   //dynamically allocating a space in the heap
linkedlist *next_ptr = (linkedlist*)(malloc(sizeof(linkedlist)));


     next_ptr->ID = id ;
     next_ptr ->year = year ;
     next_ptr->course_1_ID = subject[0];
     next_ptr->course_1_grade = grades[0];
     next_ptr->course_2_ID = subject[1];
     next_ptr->course_2_grade = grades[1];
     next_ptr->course_3_ID = subject[2];
     next_ptr->course_3_grade = grades[2];
     next_ptr->next= NULL;


        if(head == NULL){
     head=next_ptr;
        return 1;
    }//if the head equal to NULL assign the value of next_ptr to head
    else{

     next_ptr->next=head;
     head=next_ptr;
       return 1 ;

    }//else (if the head does not equal NULL)

        }

else{
return 0; //means the new entry is not successfully added
}

 };


 void SDB_DeleteEntry(uint8 id){
     linkedlist *temp1 = head;
     linkedlist *temp2 = head;
 while (temp1!= NULL){
    if(temp1->ID==id){
        if(temp1==temp2){
            head=head->next;//we need to move the head so the start point is saved
            free(temp1);
        }
        else {
             temp2->next = temp1->next;
            free(temp1);

        }

    printf(" \n Entry is successfully deleted! \n ");
        return;
    }
    temp2=temp1;  //move temp2
    temp1=temp1->next;//move temp1
 }

    printf("\n can not find student with id:%d the delete operation failed \n",id);

 };

 bool SDB_ReadEntry(uint8 id){

        linkedlist *temp = head;
while(temp!=NULL){
    if(temp->ID==id){ //printing the student info
        printf("\n the id : %d \n ",temp->ID);
        printf("\n year: %d \n ",temp->year);
        printf("\n course_1_id: %d \n ",temp->course_1_ID);
        printf("\n course_1_grade: %d \n ",temp->course_1_grade);
        printf("\n course_2_id: %d \n ",temp->course_2_ID);
        printf("\n course_2_grade: %d \n ",temp->course_2_grade);
        printf("\n course_3_id: %d \n ",temp->course_3_ID);
        printf("\n course_3_grade: %d \n ",temp->course_3_grade);
        return 1; //to get out of the function
    }
    temp=temp->next;
}
 return 0 ;

 };

 void SDB_GetIdList(uint8 *ptr ){
    *ptr = 0 ; //initializing ptr value with 0
    linkedlist *temp = head;
if(temp != NULL){
while(temp!= NULL){
    *ptr = *ptr+1;
    printf("\n id.%d:%d \n",*ptr,temp->ID);
    temp=temp->next;
    }
}//if

else{
    printf("\n the database is empty \n");
}//else

 };


bool SDB_IsIdExist(uint8 id){
 linkedlist *temp = head;
while(temp!=NULL){
    if(temp->ID==id){ //keep searching until you find the given id value
      return 1;
    }
    else {
        temp=temp->next;
    }
}
    return 0 ;
 };

