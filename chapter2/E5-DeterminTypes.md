Determine the type of each of the following literals
---

1. 'a', L'a', "a", L"a"
	- `char`, `char` -> `long`, `char`, `char` -> `long`
	- Single characters in \" are converted to type `char`
2. 10, 10u, 10L, 10uL, 012, 0xC
	- `int`, `unsigned int`, `long`, `unsigned long`, `int` (octal value of 12), `int` (hex value of C)
	- Octal and Hex values are converted to the smallest containting type
3. 3.14, 3.14f, 3.14L
	- `float`, `float`, `long`
4. 10, 10u, 10., 10e-2
	- `int`, `unsigned int`, `float`, `float` (10x10^-2)
