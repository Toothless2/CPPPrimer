What Output will the Following Code Produce?
---

```c++
unsigned u = 10, u2 = 42;

std::cout << u2 - u << std::endl; // This will produce 32
std::cout << u - u2 << std::endl; // This will produce a wrapped value

int i = 10, i2 = 42;

std::cout << i2 - i << std::endl; // This will produce 32
std::cout << i - i2 << std::endl; // This will produce -32

std::cout << i - u << std::endl; // This will produce 0
std::cout << u - i << std::endl; // This will produce 0
```

> Note: Last 2 are converted to unsiged befoer computation
