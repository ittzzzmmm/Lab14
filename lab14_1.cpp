#include <iostream>
using namespace std;

template <typename T>
void insertionSort(T d[],int N){

	for(int i=0;i<N-1;i++){
		int k = i;
		while(k>=0){
			if(d[k+1]>d[k]){
				T temp = d[k+1];
				d[k+1]=d[k];
				d[k]=temp;
				k--;
			}else break;
		}

		cout<<"Pass "<<i+1<<":";
		for(int j = 0;j<N;j++){cout<<d[j]<<" ";}
		cout<<endl;
		}

}

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}
