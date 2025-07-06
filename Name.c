
#include <stdio.h>
#include<limits.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int
main ()
{ 
    int height=1;
    char name[100];
    printf("enter your name: ");
    scanf ("%s", name);
    int l0;
    l0=strlen(name);
    // printf(" enter the size of printin form of 1,2,... (1 and 2 are recommended )  ");
    // scanf("%d",&height);
    int h=8*height;
    for (int i = 0; i <= h; i++)
	{
	   // printf("i%d  ",i);
	    for (int l= 1; l <= l0; l++)
		{
		      //printf("l%d",l);
		  
		  for (int j = 1; j <= h; j++)
			{
			     //printf(" j%d",j);


			 char ch=name[l-1];
			   int space =0;
			   int asciio;
			  if(ch>=65 && ch<=90)
			  asciio=64;
			  if(ch>=97 &&  ch <=122)
			  asciio=96;
			  switch (ch-asciio)
				{
				case 1:
					space=((j==2 || j==h-1) && i>1 )||(i==h/2)||(i==1);
					break;
				case 2:
				     space=(j==3)||(j==4&& (i==1||i==4||i==7))||(j==5&& (i==1||i==3||i==4||i==5||i==7))||(j==6&&(i-2)*(i-3)*(i-5)*(i-6)==0);
				     break;
				case 3:
				    space=(i<j+3&&i+j>=h-3)&&(i==1||i==h-1)||i==j+3||i+j==h-3||(j==2&&i==h/2);
				    break;
			    case 4:
			        space =j==2||((i>=j-h+4&&i+j<=2*h-4)&&(i==1||i==h-1||j==h-1))||(i==j-h+4||i+j==2*h-4);
			        break;
			    case 5:
			        space=j==2||i==1||i==h-1||i==h/2&&j!=h-1;
			        break;
		         case 6:
			        space=j==2||i==1||i==h/2&&j!=h-1;
			        break;
			     case 7:
				    space=(i<j+3&&i+j>=h-3)&&(i==1||i==h-1)||i==j+3||i+j==h-3||(i>=h/2&&j==h-1)||(j>=h/2&&i==h/2)||(j==2&&i==h/2);
				    break;
			    case 8:
				    space=((j==2 || j==h-1) && i>=1 )||(i==h/2&&(j!=1&&j!=h));
				    break;
				case 9:
				    space=i==1||i==h-1||j==h/2;
				    break;
				case 10:
				   space=i==1||(j==h/2&&i<=3*h/4)||i>=3*h/4&&(i-j==3*h/4-2||i+j==5*h/4);
				   break;
				case 11:
				   space=j==2||i+j==h/2+2||i==j+h/2-2;
				   break;
				case 12:
				    space=j==2||i==h-1;
				    break;  
				case 13:
				    space=j==2||j==h-1||(i==j-1||j==h-i)&&i<h/2;
				    break;
				case 14:
				    space=j==2||j==h-1||j==i+1;
			    	break;
			    case 15:
			    	break;
			    case 16:
			        space=j==2||i==1||i==h/2||(i<h/2&&j==h-1);
			        break;
			    case 17:
			       break;
			    case 18:
			        space=j==2||i==1||i==h/2||(i<h/2&&j==h-1)||(i>h/2&&j==i);
			        break;
			    case 19:
			        space=i==1||i==h/2||i==h-1||(i<=h/2&&j==2)||(i>=h/2&&j==h-1)||(i==2&&j==h-1)||(i==h-2&&j==2);
			        break;
			    case 20:
				    space=i==1||j==h/2;
				    break;
				case 21:
				    space=i+1==j+h/2||i+j==3*h/2||j==h/2&&i==h-1||(i+1<=j+h/2&&i+j<=3*h/2)&&(j==2||j==h-1);
			    	break;
			    case 22:
			      
			    	break;
			    case 23:
			        space=j==2||j==h-1||(i==j||j==h-i+1)&&i>h/2;
			    	break;
			    case 24:
			        space=i==j||j==h-i+1;
			    	break;
			    case 25:
			        space=j==h/2&&i>=h/2||i<h/2&&(i+1==j||i+j==h);
			    	break;
			    case 26:
			        space=i==1||i==h-1||i+j==h;
			    	break;
				    }

			 if (space && i!=0 && i!=h && j!=1 && j!=h)
				{
				  printf ("  ");
				}
			  else
				{
				  int j1;
				  j1=(l-1)*h+j-1;
				  char c=j1%l0;
				// 	if (name[c]>97)
				  printf (" %c", name[c]);
				}
			}
		}
	  printf ("\n");
	}
  return 0;
}

