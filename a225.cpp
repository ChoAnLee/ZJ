/*#include <iostream>
#include <vector>   
using namespace std;
void bubble(int a[],int n);
void bubble2(vector <int> a,int n);
int main(){
int a,b;
while(cin>>a){
    int number;
    vector <int> ff;
    int ed[20];
    for(int i=0;i<a;i++){
    cin>>b;
    ff.push_back(b);
    bubble2(ff,a);
    }
    for(int g=0;g<a;g++){
        ed[g]=ff[g]%10;
    }
    bubble(ed,a);
    for(int f=0;f<a;f++){
        for(int fd=0;fd<a;fd++){
            if(ed[f]==ff[fd]%10)
                ed[f]=ff[fd];
        }
    }
    for(int dd=0;dd<a;dd++)
        cout<<ed[dd]<<" ";
}
    return 0;
}
void bubble(int a[],int b){
    int temp;
    for(int i=1;i<b;i++){
        for(int k=0;k<(b-1);k++){
            if(a[k]>a[k+1]){
                temp=a[k];
                a[k]=a[k+1];
                a[k+1]=temp;
            }
        }
    }
}
void bubble2(vector <int> a,int b){
    int temp;
    for(int i=1;i<b;i++){
        for(int k=0;k<(b-1);k++){
            if(a[k]<a[k+1]){
                temp=a[k];
                a[k]=a[k+1];
                a[k+1]=temp;
            }
        }
    }
}*/

#include <stdio.h>
#include <stdlib.h>

int n; //n個數字作排列
int input[1001],output[1001]; // 存放輸入數字之陣列

int group[10][1001];
int group_index[10] = {0};

void swap(int*, int*);
void bubbleSort(int*, int, int);

int main(void) {
    
	int digit,length;
	
	while(scanf("%d", &n) != EOF) {
		for(int i = 0; i < n; i++) {
			scanf("%d", &input[i]);
		}
		
		//以個位數為標籤，進行分組
		for(int i = 0; i < n; i++) {
			digit = input[i] % 10; //取得個位數
			group[digit][group_index[digit]] = input[i];
			group_index[digit]++;
		}
		
		// 將個位數一樣的組別，進行排序
		// group 為二維陣列
		// 個位數為 0 ~ 9
		for(int i = 0; i < 10; i++) {
		    
		    //泡沫排序(陣列,起點,終點)
			bubbleSort(group[i], 0, group_index[i] - 1);
		}
		
		//將分組合併維output，並輸出
		int index = 0;
		for(int i = 0; i < 10; i++) {
			for(int j = 0; j < group_index[i]; j++) {
				output[index] = group[i][j];
				index++;
			}
			group_index[i] = 0;
		}
		
		//print num
		for(int i = 0; i < n; i++) {
			printf("%d ", output[i]);
		}
		printf("\n");
	}
}

void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void bubbleSort(int arr[], int start, int end) {
	for(int i = end + 1; i > start + 1; i--) {
		for(int j = start; j < i - 1; j++) {
			if(arr[j] < arr[j + 1]) {
				swap(&arr[j], &arr[j + 1]);
			}
		}
	}
}