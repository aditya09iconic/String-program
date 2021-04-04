#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	int i , choice,f=0, cou=0;
	
	char c='y';
	while(c='y')
	
	{
		printf("\nstrcmp-->1 \nstrcat-->2 \nstrcpy-->3 \nUperlowercase-->4 \nstrlen-->5 \nReverse string-->6 \n Substring-->7 \n");
		printf("\n");
		printf("Enter the choice:");
		scanf("%d",&choice);
		switch(choice)
		
		{
			case 1:          printf("\n * Compare String:*\n"); 
			                  char s1[20];
	                          char s2[ 20];
	
                         	strcmp(s1, s2);
	
	                  printf(" Enter the string one :");
                       scanf("%s",&s1);
                        printf("\n");	
	
                      	printf(" Enter the srting second:");
	                    scanf("%s",&s2);
	
                 for(i=0 ;s1[i]!='\0'|| s2[i]!='\0';i++)
                     {
   	                       if(s1[i]!= s2[i])
   	                  {
   	  	                      f=1;
   	  	                     break;
		                 }
		 
		 
                    }
                      if(f==0)
                      printf("\nString are equal:");
      
                      else
                        printf("\n String are unequal:");
                        printf("\n");
                        break;
                        
             case 2:        printf("\n *Cat string:*\n ");
			               char str1[20],str2[20];
                        	strcat(str1, str2);
	
	                    printf(" Enter the string 1:");
	                          scanf("%s",&str1);
	                          printf("\n");
	
		                    printf(" Enter the string 2:");
                          	scanf("%s",&str2);
                          	printf("\n");
	
	                   printf(" the string cat is: %s%s\n", str1,str2);
					   printf("\n");
					   break;
					   
			
	                       
	        case 3:      printf("\n * The Copy String:*\n");
			                printf("\n");
			             char s3[20]; 
                     	char  s4[20];
                    	printf(" Enter the string:");
                         scanf("%s",&s3);
                         	printf("\n");
	                       printf(" Enter the string:");
	                        scanf("%s", &s4);
                          	printf("\n");
                               printf("\n First  copy case-->1 \nSecond copy case--2 \n");
                               printf("\n");
                                  printf(" Enter the  above copy choice:");
                                   scanf("%d", &choice);
                                 switch(choice)
                                      {
                                   	case 1: printf("\n");
         	                             strcpy(s3, s4);
         	                            {
										 
										  printf(" The copy string is: %s",s3);
         	                            }break;
         	     
         	                         case 2: printf("\n");
			                            
										  strcpy (s4, s3);
										  {
										  
				                               printf(" The copy string is : %s", s4);
				                          }
		                                }
		                                printf("\n");
		                printf("\n");
		                break;
						
			
			case 4:    printf("\n * Uper- Lower case:*\n");
			            char str[10];
	                   printf("\n Enter a string:");
	
                        scanf("%s",&str);
	
	                    for(i=0; str[i]!='\0'; i++)
	                   {
	                     	if(str[i]>65 && str[i]<=90)
		                     str[i]=str[i]+32;
		
		                  else
		                      str[i]=str[i]-32;
	                   }
                      	printf("\n Covert string is: %s", str);	
						  printf("\n");
						  break;
						  
						  
			   case 5:			 printf("\n *The string length:*\n");
			                      char strl[20];
			                    printf("Enter the string:");
			                    scanf("%s", &strl);
			                    printf("\n");
	                       printf(" The string lentgh is: %d",strlen(strl) );
	                       printf("\n");
	                       break;
	                       
	             case 6:      printf("\n * Reverse string:*\n");
				               char string[15];
                            
                         	printf("\nEnter the string:");
                           	scanf("%s", &string);
	                   for(i=0; string[i]!='\0'; i++)
	                             cou++;
	
	                      printf("\nThe reverse string is : " );
	                      for(i=cou-1 ; i>=0; i--)
	
	                       printf("%c", string[i]); 
						   printf("\n");
						   break; 
						   
			    case 7 :  printf("\nThe  sub string:\n ");
				             	char mainstring[50];
	                            char substring[40];
                               	char *result;
	
	                        result = strstr (mainstring , substring);
	 
	                      printf("\n Enter the mainstring:");
	                       scanf("%s", &mainstring);
	                          printf("\n");
	 
	                       printf("\n Enter the substring:");
	                         scanf("%s",&substring);
	                          printf("\n");
	 
	           if (result=strstr(mainstring, substring))
               	{
	
	 	
	 
	                    printf(" The string is present\n");
	      
	                       
                 }   
	 
	                  else
	                  {
	                  	printf(" String is not present");
		               }
		                 printf("\n");
		                 break;
					           
	                       
						  
						  
			                  
			}
			 printf("\n");
			printf(" Do you wanna continue: [Y / N ]");
			
			c=getch();
			
		}
		getch();
}

	
	
	
		              
        
		
