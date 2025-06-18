#include <iostream>
#include <vector>
#include <climits>
using namespace std;

void heapify(vector<int>& heap,int i)
{
  	
    i = 0;
    int parent = (i-1)/2;
    int left = (2*i)+1;
    int right = (2*i)+2;

    int smallest = i;
    //sol düðüm küçükse 
    if(left < heap.size() && heap(left)<heap(smallest))
        smallest = left;
    if(right < heap.size() && heap(right)<heap(smallest))
        smallest = right;
    if(smallest!=i){
        swap(heap[i],heap(smallest))
        heapify(heap,smallest); 
    }
}

void insert(vector<int>& heap , int val)
{
    heap.push_back(val);
    int i = heap.size()-1;

    int parentIndex = (i-1)/2;
    while(i!=0){
        if(heap[i]<heap[parentIndex]){
            swap(heap[i],heap[parentIndex]);
            i = parentIndex;
        }
        else
            break;
    }
}

void ExtractMin(vector<int>& heap)
{
    if(heap.size()<0)   
        return INT_MAX;
    if(heap.size() == 1){
        root = heap[0];
        heap.pop_back();
        return root;
        }
    else if(heap.size()>1){
        int root = heap[0];
        heap[0] = heap.back();
        heap.pop_back();
        heapify(heap,0);
        return root; 
    }

}

int getMin(const vector<int>&heap)
{
    if(heap.size>0){
        return heap[0];
    }
    return INT_MAX;
}

void printHeap(const vector<int>&heap)
{
    for(i=0;i<heap.size();i++){
        cout<<heap[i]<<" ";
    }
    cout<<endl;
}

int main(void)
{
        vector<int> heap;
        insert(heap,3);
        insert(heap,2);
        insert(heap,5);

        cout<<"Min heap";
        printHeap(heap);
         
        insert(heap,5);
        insert(heap,4);
        insert(heap,45);
        cout<<"ExtrectadMin"<<ExtractMin(heap)<<endl;

        printHeap(heap);

        return 0;
}
