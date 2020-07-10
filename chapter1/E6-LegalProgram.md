Is this statement legal? (Assume v1 and v2 have been initlised)
---

```cpp
std::cout << "The sum of " << v1;
	  << " and " 	   << v2;
	  << " is "	   << v1 + v2 << std::endl;
```

## Answer:
The code is not legal as the `<<` requires a stream on teh left hand side, this can either be fixed by removing all but the last `;` or by adding `std::cout` to the start of each line.
