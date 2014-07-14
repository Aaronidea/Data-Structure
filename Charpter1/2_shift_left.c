#include"stdio.h"

//shift left 1
void shift_left_1(int a[], int i){
	int temp = a[0];
	int j;
	for(j = 0; j < i-1; j++)
		a[j] = a[j+1];
	a[i-1] = temp;
}

//shift left n
void shift_left_n(int a[], int m, int n){
	int i;
	for(i = 0; i < n; i++)
		shift_left_1(a,m);
}

int main(){
	int array[10];
	int i;
	for(i = 0; i < 10; i++) //initiazile the array
		array[i] = i;
	int j;
	for(j = 0; j < 10; j++)
		printf("%4d",array[j]);
	printf("\n");
	
	int num_left = 0; //the number of the left
	printf("Please input the number of the left: ");
	scanf("%d",&num_left);
	printf("The num of the left is %d\n",num_left);
	
	shift_left_n(array,10,num_left);
	
	int k;
	for(k = 0; k < 10; k++)
		printf("%4d",array[k]);
	printf("\n");
	return 0;
}
