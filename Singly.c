
#include<stdio.h>
#include<stdlib.h>
struct Node{
struct Node*next;
int data;

};
//insert function to create and insert node ;

void insert(struct Node**head,int data){

struct Node*temp=malloc(sizeof(struct Node));
temp->data=data;
temp->next=NULL;

if(*head==NULL){
*head=temp;
return;
}

struct Node*temp1=*head;
while(temp1->next!=NULL){
temp1=temp1->next;

}
temp1->next=temp;
}

//print the elements of the list.

void print(struct Node * head){
while(head!=NULL){
printf("%d\n",head->data);
head=head->next;

}
}
int main(){
struct Node*head=NULL;
int n;
printf("Enter how many elements in the node");
scanf("%d",&n);
for(int i=0;i<n;i++){
printf("Enter the number");
int x;
scanf("%d",&x);
insert(&head,x);
}
print(head);
free (head);
}

