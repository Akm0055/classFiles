#include <stdio.h>
int main(){
	int i,j;
	//3x3 array
	printf("3x3 array :\n\n");
	int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}} ;
	for (i=0 ;i<3 ;i++){
		for (j=0 ;j<3 ;j++){
			printf("%d",arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("3x3 reverse array :\n\n");
	for (i=0 ;i<3 ;i++){
		for (j=0 ;j<3 ;j++){
			printf("%d",arr[2-i][2-j]);
		}
		printf("\n");
	}

	printf("\n");

	int size = sizeof(arr);
	printf("size of this array is :%d",size);

return 0;
}
