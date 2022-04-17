#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int leftChildern(int index){
    return index*2 + 1;
}

int rightChildern(int index){
    return index*2 + 2;
}

void max_heapify(vector<int>&vector, int index){
    int leftChild = leftChildern(index);
    int rightChild = rightChildern(index);

    int largest = index;
    if (leftChild < vector.size() and vector[leftChild] > vector[largest]){
        largest = leftChild;
    }

    if (rightChild < vector.size() and vector[rightChild] > vector[largest]){
        largest = rightChild;
    }

    if (largest != index){
        swap(vector[index], vector[largest]);
        max_heapify(vector, largest);
    }
}

// O(N) Build procedure
void build(vector<int>&vect){
    int heapSize = vect.size();
    int lastHead = heapSize / 2 - 1;

    for(int i = lastHead; i>=0; --i){
        max_heapify(vect, i);
    }
}



// void max_heapify2(vector<int> &max_heap, int index, int length) {
//     int left_child_index = 2 * index + 1;
//     int right_child_index = 2 * index + 2;

//     if (right_child_index <= length - 1) {
//         int temp_max = max(max_heap[index], max_heap[left_child_index]);
//         int maximum = max(max_heap[right_child_index], temp_max);
//         if (maximum == max_heap[index]) {
//             return;
//         } else {
//             if (maximum == max_heap[left_child_index]) {
//                 max_heap[index] = max_heap[left_child_index];
//                 max_heap[left_child_index] = maximum;
//                 index = left_child_index;
//             } else {
//                 max_heap[index] = max_heap[right_child_index];
//                 max_heap[right_child_index] = maximum;
//                 index = right_child_index;
//             }

//             max_heapify2(max_heap, index, length);
//         }
//     } else if (left_child_index <= length - 1) {
//         int maximum = max(max_heap[index], max_heap[left_child_index]);
//         if (maximum == max_heap[index]) {
//             return;
//         } else {
//             max_heap[index] = max_heap[left_child_index];
//             max_heap[left_child_index] = maximum;
//             index = left_child_index;
//         }
//         max_heapify2(max_heap, index, length);
//     } else {
//         return;
//     }
// }

int main(){
    vector<int> max_heap = {};
    max_heap.push_back(10);
    max_heap.push_back(1);
    max_heap.push_back(15);
    max_heap.push_back(13);
    max_heap.push_back(21);
    max_heap.push_back(2);
    max_heap.push_back(11);

    // for (int i = floor(max_heap.size() / 2); i >= 0; i--) {
    //     // max heapify
    //     max_heapify2(max_heap, 0, max_heap.size());
    // }

    build(max_heap);

    auto it = max_heap.begin();
    while(it != max_heap.end()) {
        cout << *it << " ";
        it++;
    }

    return 0;
}