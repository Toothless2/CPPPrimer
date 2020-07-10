Which of These Will Execute?
---

`std::cout << "/*";` : This will execute as the comment is compeatly nested inside the `"  "`
`std::cout << "*/";` : Is valid for the same reason as above
`std::cout << /* "*/" */;` : This is not valid as the commet will close after the first `"` leaving an unclosed string
`std::cout << /* "*/" /* "/*" */;` : This will execute, the first `"` is commented out, then ` /* ` is within a string and the final `"` is in a comment 
