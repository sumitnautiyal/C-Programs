void module4()// module for feedback
 {
	char feed_check;
	FILE *feedback;
	char feed[2000];//limit for feedback
	printf(" \n You are welcomed for Feedback Section ");
	printf(" \n Let us describe you the Requisites for giving Feedback ");
	printf(" \n while the System is preparing itself for feedback ");
	printf(" \n You are required to write your feedback regarding in not more than ");
	printf(" \n 2000 characters,alphanumeic allowed and an space has its own value.");
	 // printf("\n\n\n\n\n\n Now give your Feedback ");
	delay(1000);
	delay(1000);
	delay(1000);
	delay(1000);
	delay(1000);
	if(privilage=='u')
		{ 
			printf("\n\n\n\n\n\n\n\n Now give your feedback");
			feedback =fopen("feed.txt","w+");
 			if(feedback==NULL)
				{
					puts("cannot open file");
					return;
				}
			fflush(stdin);
			gets(feed);
			fprintf(feedback,"%s",feed);
			fclose(feedback);
		}
 	if(privilage=='a')
		{
			printf("\n welcome Administrator");
			printf("\n Please select a task to do");
			printf("\n a - to read feedback file \t b - append feedback for future
			visit\n\n\n\n\n\t");
			fflush(stdin);
			feed_check = getchar();
			if(feed_check=='a')
				{
					FILE *fopen(), *fp;
					int c , linecount;
					char filename[40], reply[40];
					clrscr();
					printf("Enter file name: ");
					fflush(stdin);
					gets( filename );
					fp = fopen( filename, "r" ); /* open for reading */
					if ( fp == NULL ) /* check does file exist etc */
						{
							printf("Cannot open %s for reading \n",
							filename );
							exit(); /* terminate program */
						}
					linecount = 1 ;
					reply[0] ='\0' ;
					c = getc( fp ) ; /* Read 1st character if any */
					while ( c != EOF && reply[0] != 'Q' && reply[0] !='q')
						{
							putchar( c ) ; /*
							Display character */
							if ( c == '\n' )
							linecount = linecount+ 1 ;
							if ( linecount == 20 )
								{
									linecount = 1 ;
									printf("[Press
									Return to continue, Q to quit]");
									gets( reply ) ;
								}
							c = getc ( fp );
						}
					fclose( fp );
 				}
 			if(feed_check=='b')
 				{
					feedback =fopen("feed.txt","a+");
					if(feedback==NULL)
						{
							puts("cannot open file");
							return;
						}
					fflush(stdin);
					gets(feed);
					fprintf(feedback,"%s",feed);
					fclose(feedback);
				}
			}
		}