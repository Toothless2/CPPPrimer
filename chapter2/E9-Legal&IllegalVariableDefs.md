Explain the following definitions
---

1. `std::cin >> int input_value`
	- Will fail as cannot define variable in a stream
	- Define variable before usage
2. `int i = { 3.14 }'
	- Will error or fail depending on compiler due to narrowing
	- Use either `double` or remove `{}`
3. `double salary = wage = 99.9`
	- Will fail as wage is not defined by the time it is being assigned
	- use `double wage, salary = wage = 99.9`
4. `int i = 3.14`
	- Will be fine, narrows to 3
