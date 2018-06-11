#include<vector>
#include<stdio.h>
using namespace std;

    void sortheap(vector<int> & heap, int i, int size){
        int j = 2 * i + 1;
        while(j < size){
            if(j < size - 1 && heap[j]  < heap[j + 1]) j++;
            if(heap[i]> heap[j]){
                break;
            }
            swap(heap[i], heap[j]);
            i = j;
            j = 2 * i + 1;
        }
        return;
    }
    
    void makeheap(vector<int> & heap, int size){
        for(int i = size/2 - 1; i >= 0; i--){
            sortheap(heap, i, size);
        }
        for(int i = size - 1; i > 0; i--){
            swap(heap[0], heap[i]);
            sortheap(heap, 0, i);
        }    
        return;
    }
    
int main(){
	int a[8] = {4,32,21,2,0,11,3,1};
	vector<int> heap(a, a+8);
	makeheap(heap, 8);
	for(int i = 0; i < 8; i++){
		printf("%d ", heap[i]);
	}
	return 1;


}
