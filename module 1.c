void module1()//module for enterting patient detailS
{
FILE *source;
char another='y';
struct patient detail;
source=fopen("pat_det.dat","ab");
while(another=='y' || another=='Y')
{
	printf("\n Enter Details of a patient --\n");
	printf("\n Patient ID : ");
	fflush(stdin);
	gets(detail.p_id);
	printf("\n Name : ");
	fflush(stdin);
	gets(detail.name);
	printf("\n Sex : ");
	fflush(stdin);
	gets(detail.sex);
	printf("\n Age : ");
	gets(detail.age);
	printf("\n Bloodgroup : ");
	fflush(stdin);
	gets(detail.bloodgroup);
	printf("\n Address : ");
	fflush(stdin);
	gets(detail.address);
	printf("\n Diagnosis : ");
	fflush(stdin);
	gets(detail.diagnosis);
	printf("\n Test : ");
	fflush(stdin);
	gets(detail.test);
	if(source==NULL)
		{
			printf("\n Can not open file.");
		}
		else
		{
		// fprintf(source,"%s%s%s%s",detail->name,detail->p_id,detail->age,detail->sex);
			fwrite(&detail,sizeof(detail),1,source);
			fclose(source);
		}
	printf("\n Add another record (y/n) :");
	another=getche();
}