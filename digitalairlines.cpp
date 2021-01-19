#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
int main(void)
{
	
	int plane1[30][6]={0}, plane2[22][4]={0}; //Theseis Aeroplanou
	
	int type,option; //Typos aeroplanou kai epilogh
	
	int i,j; //Epanalipseis
	
	int f; //Elenxos mesa sthis epanalhpseis
	
	int diad; //Elenxos arithmou diadoxikwn thesewn sto aeroplano
	
	int esoda=0; //Esoda etairias
	
	int row,col; //Grammh kai steilh gia thn random
	
	int t_sheats1,t_sheats2; //Krathmenes theseis
	
	int condition=1; //Eksodos apo to programma
	
	char pin1[180][25],pin2[88][25]; //Pinakes onomatwn
	
	int length=0; //Megethos onomatos
	
	int rowname1=0,rowname2=0; //Counter seiras onomatos
	
	t_sheats1 = t_sheats2 =0;
	srand(time(NULL));
	while (condition)
	{
		printf("Epilekste aeroskafos: (1:AM57 2:NB3842)\n");
		scanf("%d",&type);
		if (type==1)
			{
				printf("Epilexate to aeroskafos AM57 \n\n");
			}
			else if (type==2)
			{
				printf("Epileksate to aeroskafos NB3842 \n\n");
			}
			else
			{
				continue;
			}
		printf("EPILEXTE LEITOURGIA\n");
	    printf("1)Emfanish eleutherwn thesewn \n\n");
	    printf("2)Krathsh eleutherhs theshs \n\n");
	    printf("3)Krathsh sugkekrimenhs theshs \n\n");
	    printf("4)Krathsh pollwn diadoxikwn thesewn \n\n");
	    printf("5)Akurosh theshs \n\n");
	    printf("6)Emfanish sunolikou posou \n\n");
	    printf("7)Exit.\n\n");
	    scanf("%d",&option);
	    
	    switch(option)
	    {
			case 1:
	    		if (type==1)
	    			{
	    				printf("Diagramma aeroplanou AM57 (0=ELEUTHERH, 1=PIASMENH)\n");
						for(i=0; i<30; i++)
						{
							for(j=0; j<6; j++)
							{
								printf("%d ",plane1[i][j]);
							}
						printf("\n");
				  		}
				  	printf("\n\n");
					}
				else
					{
						   printf("Diagramma aeroplanou NB3842  (0=ELEUTHERH, 1=PIASMENH)\n");
				    	   for(i=0; i<22; i++)
				    	{
							for(j=0; j<4; j++)
							{
								printf("%d ",plane2[i][j]);
					    	}
						printf("\n");
				    	}
						printf("\n\n");
					}
				break;	
			case 2:
				printf("Kratisi eleutheris thesis\n");
				if (type==1)
					{
					if (t_sheats1==30*6)
						{
							printf("Den yparxoun eleutheres theseis sto aeroplano AM57\n");
							break;
						}
					while (1)
						{
							row = rand()%30;
				    		col = rand()%6;
							if (plane1[row][col]==0)
								{
									printf("Vrethike eleutheri thesi sto [%d],[%d]!\n\n\n",row,col);
									plane1[row][col]=1;
									esoda=esoda+30;
									t_sheats1++;
									do
									{
										printf("Dwste to onoma sas gia thn krathsh thesis \n");
										scanf("%s", pin1[rowname1]);
										length=strlen(pin1[rowname1]);
										if (length>20)
										{
											printf("To onoma pou dwsate einai megalytero apo 20 theseis.\n\n");
										}
									} while (length>20);
									rowname1++;
									break;
							    }	
						}
					}



					else 

						{	
							if (t_sheats2==22*4)
								{
									printf("Den yparxoun eleutheres theseis sto aeroplano NB3842\n");
									break;
								}
						while (1)
							{
								row = rand()%30;
				    			col = rand()%6;
								if (plane2[row][col]==0)
									{
										printf("Vrethike leutheri thesi sto [%d],[%d]!\n\n\n",row,col);
										plane2[row][col]=1;
										esoda=esoda+20;
										t_sheats2++;
										do
										{
											printf("Dwste to onoma sas gia thn krathsh thesis \n");
											scanf("%s", pin2[rowname2]);
											length=strlen(pin2[rowname2]);
											if (length>20)
											{
												printf("To onoma pou einai megalytero apo 20 theseis.\n\n");
											}
										} while (length>20);
									rowname2++;
									break;
							    	}	
							}			
						}
						break;





			case 3:
				printf("|KRATHSH SUGKEKRIMENHS THESHS|\n");
				if (type==1)
				{
					printf("Eisagete grammh: (1-22)\n");
			    	scanf("%d",&i);
			    	i--;
			    	f=0;
			    	for (j=0; j<6; j++)
			    	{
			    	if (plane1[i][j]==0)
			    		{
			    		printf("Vrethike eleutheri thesi sthn grammh %d ([%d][%d])!\n",i+1,i+1,j+1);
			    		plane1[i][j]=1;
			    		t_sheats1++;
			    		esoda=esoda+30;
			    		f=1;
			    		do
							{
								printf("Dwste to onoma sas gia thn krathsh: \n");
								scanf("%s", pin1[rowname1]);
								length=strlen(pin1[rowname1]);
								if (length>20)
								{
									printf("To onoma pou dwsate einai megalytero apo 20 theseis.\n\n");
								}
							} while (length>20);
						rowname1++;
			    		break;
						}
					}
					if (f==0)
			        {
						printf("Den vrethike eleutheri thesi sthn grammh %d!\n",i+1);
			        }
			        break;



				}
				else
				{
					printf("Eisagete grammh: (1-22)\n");
			    	scanf("%d",&i);
			    	i--;
			    	f=0;
			    	for (j=0; j<4; j++)
			    	{
			    	if (plane2[i][j]==0)
			    		{
			    		printf("Vrethike eleutheri thesi sthn grammh %d ([%d][%d])!\n",i+1,i+1,j+1);
			    		plane2[i][j]=1;
			    		t_sheats2++;
			    		esoda=esoda+20;
			    		f=1;
			    		do
							{
							printf("Dwste to onoma sas gia thn krathsh ths thesis \n");
							scanf("%s", pin2[rowname2]);
							length=strlen(pin2[rowname2]);
							if (length>20)
								{
									printf("To onoma pou dwsate einai megalytero apo 20 theseis.\n\n");
								}
							} while (length>20);
						rowname2++;
			    		break;
						}


					}
					if (f==0)
			        {
						printf("Den vrethike kenh thesi sthn grammh %d!\n",i+1);
			        }
			        break;
				}





			case 4:
				printf("|KRATHSH DIADOXIKWN THESEWN| \n");
				if (type==1)
				{
					printf("Pose diadoxikes theseis epithymeite (2/3)?\n");
					scanf("%d",&diad);
					f=0;
					if (diad==2)
						{
							for (i=0; i<30; i++)
							{
								for (j=0; j<5; j++)
								{
									if ( (plane1[i][j]==0) && plane1[i][j+1]==0 && j!=2 )
									{
									printf("Yparxoun 2 diadoxikes theseis \n\n\n");
									plane1[i][j]=1;
									plane1[i][j+1]=1;
									f=1;
									esoda=esoda+60;
									t_sheats1+=2;
									break;
									}
								}



								if (f==1)
								{
									break;
								}
							}
							if (f==0)
							{
								printf("Den vrethika 2 diadoxikes theseis \n\n!");
							}
							break;
						}


					else if (diad==3)
					{
						for (i=0; i<30; i++)
						{
							for (j=0; j<4; j++)
							{
								if ( (plane1[i][j]==0) && (plane1[i][j+1]==0) && (plane1[i][j+2]==0) && (j!=1) && (j!=2) )
								{
								printf("Yparxoun 3 diadoxikes theseis \n\n\n");
								plane1[i][j]=1;
								plane1[i][j+1]=1;
								plane1[i][j+2]=1;
								f=1;
								esoda=esoda+90;
								t_sheats1+=3;
								break;
								}
							}



							if (f==1)
							{
								break;
							}	
						}
						if (f==0)
							{
								printf("Den vrethikan 3 diadoxikes theseis \n\n\n");
							}
							break;
					}




					else
					{
						break;
					}
				}



				else
				{
					printf("Poses diadoxikes theseis thelete (2/3)?\n");
					scanf("%d",&diad);
					f=0;
					if (diad==2)
						{
							for (i=0; i<22; i++)
							{
								for (j=0; j<3; j++)
								{
									if ( (plane2[i][j]==0) && (plane2[i][j+1]==0) && (j!=1)  )
									{
									printf("Yparxoun 2 diadoxikes theseis \n\n\n");
									plane2[i][j]=1;
									plane2[i][j+1]=1;
									f=1;
									esoda=esoda+40;
									t_sheats2+=2;
									break;
									}
								}


								if (f==1)
								{
									break;
								}
							}


							if (f==0)
							{
								printf("Den vrethikan 2 diadoxikes theseis \n\n");
							}
							break;
						}


					else if (diad==3)
					{
 						printf("Den yparxoyn 3 diadoxikes theseis \n\n"); //DEN GINETAI NA EXEI POTE 3 DIADOXIKES THESEIS ME DIADROMO!//
						 break;			
					}
					else
					{
						break;
					}
				}




			case 5:
				printf("|AKURWSH THESHS| \n\n");
				if (type==1)
				{
					printf("Dwste seira kai arithmo thesis pou thelete na akyrwsete (1-30/1-6) \n");
					scanf("%d %d",&i,&j);
					i--;
					j--;
					if (i>29 || i<0 || j<0 || j>5)
					{
						break;
					}
					if (plane1[i][j]==0)
					{
						printf("H thesi [%d][%d] einai kenh kai den borei an diagrafei \n\n\n",i+1,j+1);
					}
					else
					{
						printf("H thesi [%d][%d] diagrafthke epityxws. \n\n\n",i+1,j+1);
						plane1[i][j]=0;
						esoda=esoda-8;
						t_sheats1-=1;
					}
					break;
				}




				else
				{
					printf("Dwste seira kai arithmo thesis pou thelete na akyrwsete (1-22/1-4)\n");
					scanf("%d %d",&i,&j);
					i--;
					j--;
					if (i>21 || i<0 || j<0 || j>3)
					{
						break;
					}
					if (plane2[i][j]==0)
					{
						printf("H thesi [%d][%d] einai kenh kai den borei na diagrafei. \n\n\n",i+1,j+1);
					}


					else
					{
						printf("H thesi[%d][%d] diagrafthke epityxws. \n\n\n",i+1,j+1);
						plane2[i][j]=0;
						esoda=esoda-7;
						t_sheats2-=1;
					}
					break;
				}




			case 6:
				{
					printf("|EMFANISH ESODWN ETAIRIAS| \n\n");
					printf("Ta esoda ths etaireias einai: %d/n/n/n",esoda);
					break;
				}

				
			case 7:
				{
					condition=0;
					break;
				}
			default:
				{
					break;
				}					
		}
	}
	return 0;
}
