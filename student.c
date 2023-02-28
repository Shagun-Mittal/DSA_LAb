#include<stdio.h>
#include<stdlib.h>
typedef struct student{
	int CGPA;
	int roll_number;
	char name[100];
}student ;
void read_input(student *ptr,int i);
void display(student *s,int i);
void sort_array(student *ptr, int n);

int main(){
	struct student *ptr;
	int i,n;
	printf("Enter number of students: \n");
	scanf("%d",&n);
	ptr = (struct student*)malloc(n*sizeof(struct student));
	for(i=0;i<n;i++)
	{
		read_input(ptr,i);
	}
	sort_array(ptr,n);
	printf("\n After Sorting we get:\n");
	for(i=0;i<n;i++){
		display(ptr,i);
	}
	return 0;
}
void read_input(student *ptr,int i){
	printf("Enter name of Student: \n");
	scanf("%s",ptr[i].name);
	printf("Enter roll number of Student: \n");
	scanf("%d",&ptr[i].roll_number);
	printf("Enter CGPA of Student: \n");
	scanf("%d",&ptr[i].CGPA);
}
void display(student *s,int i){
	printf("Name = %s\n",s[i].name);
	printf("Roll Number = %d\n",s[i].roll_number);
	printf("CGPA = %d\n",s[i].CGPA);
}
void sort_array(student *ptr, int n){
	student temp;
	int i,j;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(ptr[j].roll_number > ptr[j+1].roll_number){
				temp =ptr[j];
				ptr[j] = ptr[j+1];
				ptr[j+1] = temp;
			}
		}
	}
}