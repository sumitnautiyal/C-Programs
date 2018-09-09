void module2() //module for veiwing existing patient detail
{
	FILE *target;
	struct patient detail;
	char ch;
	//detail=(struct patient *)malloc(sizeof(struct patient));
	target=fopen("pat_det.dat","rb");
	if(target==NULL)
		{
			printf("\n Can not open file");
		}
	else
		{
			while(fread(&detail,sizeof(struct patient),1,target)==1)
			{
				printf("\n%s\t%s\t%s\t%s\t%s\t%s\t%s\t%s\n",detail.p_id,detail.name,detail.address,detail.bloodgroup,detail.diagnosis,detail.sex,detail.test,detail.age);
			//fseek(target,sizeof(struct patient),SEEK_CUR);
			}
 	/* ch=fgetc(target);
	while(ch!=EOF)
		{
			printf("%c",ch);
			ch=fgetc(target);
		}*/
	fclose(target);
		}
}