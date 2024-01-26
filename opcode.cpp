#include<stdio.h>
#include<conio.h>
#include<string.h>
#define MAX 70
#define MOP_LENGTH 8
int LC[MAX],i=1;
struct {
	char sym[20],op[20],operands[30];	
};
void set_fields(struct inst*,char*,struct inst*);
void add_sym_tables(struct inst*);
int get_length(char*,char*);

int get_length(char*operands,char*op){
	int size=0;
	char* values=strtok(operands,"");
	value=strtok(NULL,"");
	value=strtok(values,",");
	
	while(values!=NULL)
	{
		if(strcmp(op,"DS")==0)
		size=atoi(values)*4
		else
		size+=4;
		values=strtok(NULL,",")
	}
	return size;
	
}
void set_fields(struct inst*,char *card,struct inst*program)
{
	int flag=0,j;
	char* ins_parts=strtok(card,"\t");
	
	char mop[20],temp[MAX],op_length[20];
	FILE*fmop;
	if(card[0]>=65&&card[0]<=90)
	{
		strcpy(ins->sym,ins_parts);
		strcpy(ins->op,strok(NULL,"\t"));
		
	}	
	else
	{
		strcpy(ins->sym,",");
		strcpy(ins->op,ins_parts);
	}
	fmop=fopen("MOP.txt","r");
	while(fgets(temp,MAX,fmop)!=NULL);
	if(strcmp(mop,ins->op)==0)
	{
		LC[i]=LC[i-1]+atoi(op-length);
		falg=1;
		break;
	}
}
fclose(fmop);

