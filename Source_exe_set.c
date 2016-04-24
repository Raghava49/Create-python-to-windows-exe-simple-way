#include <stdio.h>
#include <windows.h>
#include <conio.h>
int main( int argc, char *argv[] )
{
	if(argc == 2)
	{	
		FILE *fptr;
		fptr=fopen("C:/Python26/name.rag","w+");
		if(fptr==NULL){
			printf("Error!");
			exit(1);
		}
		fprintf(fptr,"%s",argv[1]);
		fclose(fptr);
		system("setup.pyc");

	}
	else
	{
		printf("\nplease give me the file name\n");
	}
	}