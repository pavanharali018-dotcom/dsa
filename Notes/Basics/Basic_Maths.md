# Basic Maths – Notes

## 1. Reverse Number

### Key idea

- `% 10` → Get the last digit.
- `/ 10` → Remove the last digit.

### Logic

```cpp
rev = rev * 10 + digit;
```

### C++ implementation

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int rev = 0;

    while (n > 0) {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }

    cout << rev;

    return 0;
}
```

### Example

Input:
```text
1234
```

Output:
```text
4321
```

### Edge cases to consider

1. `0`
2. Negative numbers
3. Trailing zeros

Example:

`1200` → `21`

**Note:** The above implementation assumes a non-negative integer. Handle negative numbers and integer overflow separately when needed.
