# C++ STL – Notes

## 1. Vector

A vector is a **dynamic array**.

```cpp
vector<int> v;
```

### Common operations

| Operation | Description | Complexity |
|---|---|---|
| `push_back(x)` | Add at end | O(1) amortized |
| `pop_back()` | Remove last | O(1) |
| `size()` | Number of elements | O(1) |
| `v[i]` | Access element | O(1) |
| `front()` | First element | O(1) |
| `back()` | Last element | O(1) |
| `clear()` | Remove all elements | O(n) |

### Initialization

```cpp
vector<int> v = {1, 2, 3};
vector<int> v(5);
vector<int> v(5, 10);
```

### Vector – erase()

Erase one element:

```cpp
v.erase(v.begin() + index);
```

Erase a range:

```cpp
v.erase(v.begin() + start, v.begin() + end);
```

**Important:** The `end` iterator is NOT included.

Middle/beginning erase → O(n).

### Vector – insert()

Adds an element at a specific position.

```cpp
v.insert(position, value);
```

Example:

```cpp
vector<int> v = {10, 20, 30, 40};

v.insert(v.begin() + 2, 25);
```

Result:

```text
10 20 25 30 40
```

Insert multiple values:

```cpp
v.insert(v.begin() + 2, 3, 25);
```

Complexity: Middle/beginning → O(n).

**Remember:**
- `insert()` → Needs an iterator/position.
- `push_back()` → Simply adds at the end.

---

## 2. Deque

Deque = Double-Ended Queue.

```cpp
deque<int> d;
```

### Operations

| Operation | Description | Complexity |
|---|---|---|
| `push_back()` | Add at back | O(1) |
| `push_front()` | Add at front | O(1) |
| `pop_back()` | Remove back | O(1) |
| `pop_front()` | Remove front | O(1) |
| `d[i]` | Random access | O(1) |

**Useful when:**
- Need fast insertion/deletion at both ends.
- Also need random access.

---

## 3. Stack

Stack follows **LIFO: Last In → First Out**.

```cpp
#include <stack>

stack<int> st;
```

### Operations

| Operation | Description | Complexity |
|---|---|---|
| `push(x)` | Add element | O(1) |
| `top()` | Access top element | O(1) |
| `pop()` | Remove top element | O(1) |
| `empty()` | Check if empty | O(1) |
| `size()` | Number of elements | O(1) |

**Important:** `pop()` does NOT return the removed value.

```cpp
int x = st.top();
st.pop();
```

No random access:

```cpp
st[2]; // Invalid
```

### Example

```cpp
st.push(10);
st.push(20);
st.push(30);
```

Top → 30

After `pop()`:

Top → 20

---

## 4. Queue

Queue follows **FIFO: First In → First Out**.

```cpp
#include <queue>

queue<int> q;
```

### Operations

| Operation | Description | Complexity |
|---|---|---|
| `push(x)` | Add at back | O(1) |
| `front()` | Access first element | O(1) |
| `back()` | Access last element | O(1) |
| `pop()` | Remove first element | O(1) |
| `empty()` | Check if empty | O(1) |
| `size()` | Number of elements | O(1) |

**Important:** `pop()` does NOT return the removed value.

```cpp
int x = q.front();
q.pop();
```

### Example

```cpp
q.push(10);
q.push(20);
q.push(30);
```

Front → 10 20 30 ← Back

After `pop()`:

Front → 20 30

---

## 5. Priority Queue

By default → **MAX HEAP**.

The largest element has the highest priority.

```cpp
priority_queue<int> pq;
```

### Operations

| Operation | Description | Complexity |
|---|---|---|
| `push(x)` | Insert | O(log n) |
| `top()` | Highest element | O(1) |
| `pop()` | Remove top | O(log n) |
| `size()` | Number of elements | O(1) |
| `empty()` | Check empty | O(1) |

### Example

```cpp
pq.push(10);
pq.push(30);
pq.push(20);
```

`pq.top()` → 30

### MIN HEAP

```cpp
priority_queue<int, vector<int>, greater<int>> pq;
```

`top()` → Smallest element.

**Remember:**
- Stack → LIFO
- Queue → FIFO
- Priority Queue → Highest priority first

---

## 6. Set

Set stores:
- Unique elements.
- Sorted order (ascending by default).

```cpp
set<int> s;
```

### Operations

| Operation | Description | Complexity |
|---|---|---|
| `insert(x)` | Add element | O(log n) |
| `erase(x)` | Remove element | O(log n) |
| `find(x)` | Search | O(log n) |
| `count(x)` | Check existence | O(log n) |

Duplicates are ignored.

### Example

```cpp
set<int> s = {30, 10, 20, 10};
```

Result:

```text
10 20 30
```

No random access:

```cpp
s[1]; // Invalid
```

### Iteration

```cpp
for(auto x : s) {
    cout << x << " ";
}
```

**Remember:** Set = Unique + Sorted.

---

## 7. STL Comparison

| STL | Main property | Typical lookup |
|---|---|---|
| `vector` | Dynamic array | O(1) index |
| `list` | Linked list | O(n) access |
| `deque` | Both ends + index | O(1) index |
| `stack` | LIFO | O(1) |
| `queue` | FIFO | O(1) |
| `priority_queue` | Highest priority first | O(1) top |
| `set` | Unique + sorted | O(log n) |
| `multiset` | Sorted + duplicates | O(log n) |
| `unordered_set` | Unique + unordered | O(1) average |
| `map` | Unique keys + sorted | O(log n) |
| `multimap` | Duplicate keys + sorted | O(log n) |
| `unordered_map` | Key-value + unordered | O(1) average |

---

## 8. Sorting

### Ascending order

```cpp
sort(v.begin(), v.end());
```

- Sorts in ascending order.
- Complexity → O(n log n).

### Descending order

```cpp
sort(v.begin(), v.end(), greater<int>());
```

### Array sorting

```cpp
sort(arr, arr + n);
```

### Partial sorting

```cpp
sort(v.begin(), v.begin() + k);
```

Sorts the first `k` elements of the vector.

### Sorting pairs

Default sorting:
- First element.
- If first elements are equal, compare second elements.

### Custom sorting

```cpp
sort(v.begin(), v.end(), comparator);
```

---