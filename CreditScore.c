#include<stdio.h>

void StoreCredit(int arr[], int total_credit, int num_item,int Num_TestCase);
int GetIntValue();

FILE *f1;

int main(){

	int Num_TestCase=0,total_credit=0,num_item=0,count=0,arr[10000],i=0;
	

	f1 = fopen("<input_file_name>,"r");

	
	Num_TestCase=GetIntValue();

	
	while(count < Num_TestCase) {

		
		total_credit=GetIntValue();
		num_item=GetIntValue();
		
		i=0;

		while(i<num_item){

			arr[i]=GetIntValue();
			i++;
		}

		StoreCredit(arr,total_credit,num_item,count);

		count++;
	}


	fclose(f1);

	return 0;
}

int GetIntValue(){
  
    int num=0;

    fscanf(f1,"%d",&num);

    return num;
       
}

void StoreCredit(int arr[], int total_credit, int num_item,int Num_TestCase){

	int flag=0,k=1,j=0;

	while(flag==0){
		
		if( (arr[j]+arr[k]) == total_credit){

			flag=1;
			break;
		}
		if(k<num_item){
			k++;
		}

		if(k==num_item){
			j++;
			k=j+1;
		}

		if(j==num_item){
			printf("\n\nno match\n\n");
		}

	
	}

	if(flag==1){
		printf("Case #%d: %d %d\n",(Num_TestCase+1),j+1,k+1);
	}
	

}
