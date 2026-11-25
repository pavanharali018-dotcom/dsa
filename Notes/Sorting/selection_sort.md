# Selection Sort

## 1. What is Selection Sort?

Selection Sort is a simple sorting algorithm that sorts an array by repeatedly finding the **smallest element** from the unsorted part and placing it at the beginning.

It divides the array into two parts:
- **Sorted part:** Elements already placed in their correct positions.
- **Unsorted part:** Elements that still need to be sorted.

## 2. Algorithm

1. Start from the first index (`i = 0`).
2. Assume the current index contains the minimum element (`mini = i`).
3. Traverse the remaining unsorted array.
4. If a smaller element is found, update `mini`.
5. Swap the minimum element with the element at index `i`.
6. Move to the next index and repeat until the array is sorted.

## 3. C++ Code

```cpp
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {11, 44, 33, 23, 13, 343, 23};
    int n = 7;

    for(int i = 0; i <= n-2; i++) {
        int mini = i;

        for(int j = i; j <= n-1; j++) {
            if(arr[j] < arr[mini]) {
                mini = j;
            }
        }

        swap(arr[mini], arr[i]);
    }

    cout << "Sorted Array:" << endl;

    for(int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}
```

## 4. Dry Run

Consider the array:

`[11, 44, 33, 23, 13]`

| Pass | Minimum element | Array after swapping |
|---|---:|---|
| 1 | 11 | 11, 44, 33, 23, 13 |
| 2 | 13 | 11, 13, 33, 23, 44 |
| 3 | 23 | 11, 13, 23, 33, 44 |
| 4 | 33 | 11, 13, 23, 33, 44 |

Final sorted array: `[11, 13, 23, 33, 44]`

## 5. Complexity Analysis

- **Best case:** O(n²)
- **Average case:** O(n²)
- **Worst case:** O(n²)
- **Space complexity:** O(1)

Selection Sort always searches the remaining unsorted portion to find the minimum element, even if the array is already sorted.

## 6. Important Points

- Uses two loops: outer loop selects the position, inner loop finds the minimum element.
- Performs at most `n - 1` swaps.
- It is an in-place sorting algorithm.
- Standard Selection Sort is not stable.
- It is not efficient for large datasets.

## 7. Key Logic to Remember

```cpp
mini = i;

for(int j = i; j <= n-1; j++) {
    if(arr[j] < arr[mini]) {
        mini = j;
    }
}

swap(arr[mini], arr[i]);
```

**Remember:** Find the minimum element from the unsorted portion and swap it with the first element of that portion.