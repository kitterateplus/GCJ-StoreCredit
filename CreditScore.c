#include<stdio.h>

//void quick_sort(int arr[],int low,int high);
void StoreCredit(int arr[], int total_credit, int num_item,int Num_TestCase);
int GetIntValue();

FILE *f1;

int main(){

	int Num_TestCase=0,total_credit=0,num_item=0,count=0,arr[10000],i=0;
	

	f1 = fopen("<input_file_name>,"r");

	
	Num_TestCase=GetIntValue();

	//printf("\n%d\n",Num_TestCase);
	
	while(count < Num_TestCase) {

		//printf("\n******* ENTRY %d*********",count+1);
		
		total_credit=GetIntValue();
		num_item=GetIntValue();

		//printf("\n%d",total_credit);
		//printf("\n%d\n",num_item);
		
		i=0;

		while(i<num_item){

			arr[i]=GetIntValue();
			//printf("%d ",arr[i]);
			i++;
		}

		StoreCredit(arr,total_credit,num_item,count);

		//printf("\n******* Completed %d*********\n\n",count+1);

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
		//printf("\ntotal_credit :%d num_item :%d Num_TestCase :%d j :%d k :%d\n",total_credit,num_item,Num_TestCase,j,k);

		//printf("\narr[%d]+arr[%d] : %d\n",j,k,(arr[j]+arr[k]));
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

		//printf("\ntotal_credit :%d num_item :%d Num_TestCase :%d j :%d k :%d\n",total_credit,num_item,Num_TestCase,j,k);
	}

	if(flag==1){
		printf("Case #%d: %d %d\n",(Num_TestCase+1),j+1,k+1);
	}
	

}
