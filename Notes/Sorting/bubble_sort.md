# Bubble Sort

## 1. What is Bubble Sort?

Bubble Sort is a simple sorting algorithm that repeatedly compares **adjacent elements** and swaps them if they are in the wrong order.

After every pass, the largest element in the unsorted portion moves to its correct position at the end.

It is called Bubble Sort because larger elements gradually move (or "bubble") towards the end of the array.

## 2. Algorithm

1. Start from the first element.
2. Compare the current element with the next element.
3. If the current element is greater than the next element, swap them.
4. Continue comparing adjacent elements until the end of the unsorted portion.
5. After one pass, the largest element reaches its correct position.
6. Repeat until the array is sorted.

## 3. C++ Code

```cpp
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){

    int n = 6;
    int arr[] = {11,34,1,99,34,12};

    for(int j=n-1; j>=1; j--){
        for(int i=1; i<=j; i++){
            int curr = i-1;
            int next = i;

            if(arr[curr] > arr[next]){
                swap(arr[curr],arr[next]);
            }
        }
    }

    cout << "Sorted Array" << endl;

    for(int k=0; k<n; k++){
        cout << arr[k] << endl;
    }

    return 0;
}
```

## 4. Dry Run

Consider the array:

`[5, 3, 8, 2, 1]`

| Pass | Array after the pass |
|---|---|
| Initial | 5, 3, 8, 2, 1 |
| Pass 1 | 3, 5, 2, 1, 8 |
| Pass 2 | 3, 2, 1, 5, 8 |
| Pass 3 | 2, 1, 3, 5, 8 |
| Pass 4 | 1, 2, 3, 5, 8 |

Final sorted array: `[1, 2, 3, 5, 8]`

## 5. Complexity Analysis

### Time Complexity

- **Best case:** O(n²) for the basic implementation without optimization.
- **Average case:** O(n²).
- **Worst case:** O(n²).

### Space Complexity

- **O(1)** — No extra array or significant additional memory is required.

## 6. Important Points

- Uses adjacent element comparisons.
- After each pass, the largest unsorted element reaches its correct position.
- Performs at most n - 1 passes.
- It is an in-place sorting algorithm.
- Standard Bubble Sort is stable because equal elements are not swapped.
- It is not efficient for large datasets.

## 7. Optimized Bubble Sort

We can optimize Bubble Sort using a `swapped` variable.

If no swaps happen during a pass, the array is already sorted, so we can stop early.

```cpp
for(int i=0; i<n-1; i++){
    bool swapped = false;

    for(int j=0; j<n-i-1; j++){
        if(arr[j] > arr[j+1]){
            swap(arr[j], arr[j+1]);
            swapped = true;
        }
    }

    if(!swapped){
        break;
    }
}
```

Optimized time complexity:
- **Best case:** O(n) — when the array is already sorted.
- **Average case:** O(n²).
- **Worst case:** O(n²).

## 8. Key Logic to Remember

```cpp
if(arr[i] > arr[i+1]){
    swap(arr[i], arr[i+1]);
}
```

**Remember:** Compare adjacent elements and swap if they are in the wrong order. The largest element moves to the end after every pass.