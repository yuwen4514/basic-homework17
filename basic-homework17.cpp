#include <stdio.h>�@
#include <stdlib.h> 

int main(int argc, char *argv[]) {

	int z[5]={0};

	int r=0, min;
	
	printf("�гs���J���ӼƭȡG\n");

	for(r=0;r<5;r++)

	{

	   printf("��%d�ռƭȡG", r+1 );

	   scanf("%d", &z[r]);

	}

	min=z[0];

	for(r=0;r<5;r++)

	{

	  if (min>z[r])	

	  {

		  min=z[r];

	  }

	}

	printf("�̤p�ȬO�G%d\n\n",min); 

	system("PAUSE");	

	return 0;

}
