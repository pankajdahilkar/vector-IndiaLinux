#include<stdio.h>
#include<string.h>
int main()
{
	char TT[7][11][15]={};
	int i,j,k,l;
	printf("Welcome to college  time table \n\n\n");
	while(1)
	{

		printf("\n\n1. Input Time table \n 2.Show Time table \n 3. exit\n ");
		scanf("%d",&l);
		switch(l)
		{
			case 1:{

				       for(i=0;i<7;i++)
				       {
					       for(j=0;j<11;j++)
					       {

						       if(i==0)
						       {
							       if(j==0)strcpy(TT[0][0],"Day/TIME");
							       else {
								       printf("Enter Time of %d Lecture \n",j);
								       scanf("%s",TT[i][j]);
							       }
						       }

						       else if(i==1)
						       {
							       if(j==0)strcpy(TT[i][0],"MON");
							       else {
								       printf("Enter Subject of %d Lecture of %s \n",j,TT[i][0]);

								       scanf("%s",TT[i][j]);
							       }
						       }


						       else if(i==2)
						       {
							       if(j==0)strcpy(TT[i][0],"TUE");
							       else {
								      // printf("Enter Subject of %d Lecture \n",j);
								       printf("Enter Subject of %d Lecture of %s \n",j,TT[i][0]);
								       scanf("%s",TT[i][j]);
							       }
						       }


						       else if(i==3)
						       {
							       if(j==0)strcpy(TT[i][0],"WED");
							       else {
								      // printf("Enter Subject of %d Lecture \n",j);
								       printf("Enter Subject of %d Lecture of %s \n",j,TT[i][0]);
								       scanf("%s",TT[i][j]);
							       }
						       }


						       else if(i==4)
						       {
							       if(j==0)strcpy(TT[i][0],"THU");
							       else {
								      // printf("Enter Subject of %d Lecture \n",j);
								       printf("Enter Subject of %d Lecture of %s \n",j,TT[i][0]);
								       scanf("%s",TT[i][j]);
							       }
						       }


						       else if(i==5)
						       {
							       if(j==0)strcpy(TT[i][0],"FRY");
							       else {
								      // printf("Enter Subject of %d Lecture \n",j);
								       printf("Enter Subject of %d Lecture of %s \n",j,TT[i][0]);
								       scanf("%s",TT[i][j]);
							       }
						       }



						       else if(i==6)
						       {
							       if(j==0)strcpy(TT[i][0],"SAT");
							       else {
								      // printf("Enter Subject of %d Lecture \n",j);
								       printf("Enter Subject of %d Lecture of %s \n",j,TT[i][0]);
								       scanf("%s",TT[i][j]);
							       }
						       }


					       }
				       }

				       break;
			       }

			case 2: {

					for(i=0;i<7;i++)
					{
						printf("\n\n");
						for(j=0;j<11;j++)
						{
							printf("%s    ",TT[i][j]);


						}


					}
					break;
				}
			case 3: return 0;

		}

	}

}

