#include<iostream>
using namespace std;
void Print(int a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
}
void SelectSort(int a[],int n){
//	Print(a,n);
	for(int i = 0;i<n-1;i++){
		int tmpMin = i;
		for(int j = i+1;j<n;j++){
			if(a[j] < a[tmpMin])
				tmpMin = j;
		}
		int tmp = a[i];
		a[i] = a[tmpMin];
		a[tmpMin] = tmp;
	//	Print(a,n);
	}
} 
void InsertSort(int a[],int size){
	Print(a,size);
	for(int i = 1;i<size;i++){
		for(int j =0;j<i;j++ ){
			if(a[j] > a[i]){
				//a[i]未排序的第一个元素
			 
				// j《---》（i-1）之间的元素应该往后移动一个位置 
				int tmp = a[i];
				for(int k = i;k > j;k--)
					a[k] = a[k-1];
				a[j] = tmp;
				Print(a,size);
				break;
			}
				//Print(a,size);
		}
	}
}
void BubbleSort(int a[],int size){
	//Print(a,size);
	for(int i = size -1;i>0;i--){	
		for(int j = 0;j<i;j++){
			if(a[j] > a[j+1]){
				int tmp = a[j];
				a[j] = a[j+1];
				a[j+1] = tmp;
			//	Print(a,size);
			}
			
		}
	}
}
int main(){
	int a[]{2,8,1,6,3,7,4,9,5};
	BubbleSort(a,9);
	//Print(a,9);
	return 0;
}
