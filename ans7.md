## Assignment 7
### Exercise 00: vc_strdup
#### Objective
- Reproduce the behavior of the function strdup (man strdup)
- Here's how it should be prototyped: char *vc_strdup(char *src);
#### Turn-in files
vc_strdup.c
#### Allowed function
malloc

### Exercise 01: vc_range
#### Objective
- Create a function that returns an array of ints. This int array should contain all values between min and max.
- min included - max excluded.
- If min value is greater or equal to max's value, a null pointer should be returned.
- Here's how it should be prototyped: int *vc_range(int min, int max);
#### Turn-in files
vc_range.c
#### Allowed function
malloc

### Exercise 02: vc_ultimate_range
#### Objective
- Create a function that allocates and assigns an array of ints. This int array should contain all values between min and max.
- min included - max excluded.
- If min value is greater or equal to max's value, range will point on NULL.
- The size of range should be returned (or 0 on error).
- Here's how it should be prototyped: int vc_ultimate_range(int **range, int min, int max);
#### Turn-in files
vc_ultimate_range.c
#### Allowed function
malloc

### Exercise 03: vc_concat_params
#### Objective
- Create a function that transforms arguments given as command-line into a single string of characters. Those arguments should be separated by a "⧵n"
- Here's how it should be prototyped: char *vc_concat_params(int argc, char **argv);
#### Turn-in files
vc_concat_params.c
#### Allowed function
malloc

### Exercise 04: vc_split_whitespaces
#### Objective
- Create a function that splits a string of characters into words.
- Separators are spaces, tabs and line breaks.
- This function returns an array where each box contains a character-string's address represended by a word. The last element of this array should be equal to 0 to emphasize the end of the array.
- There can't be any empty strings in your array. Draw the necessary conclusions.
- The given string can't be modified.
- Here's how it should be prototyped: char **vc_split_whitespaces(char *str);
#### Turn-in files
vc_split_whitespaces.c
#### Allowed function
malloc

### Exercise 05: vc_print_words
#### Objective
- Create a function that displays the content of the array you created in the last exercise's function (Exercise 04).
- One word per line.
- Each word will be followed by a "⧵n", including the last one.
- This exercise will be compiled with your vc_split_whitespaces.c for testing.
- Watch out not to have multiple #define
- Here's how it should be prototyped: void vc_print_words(char **words);
#### Turn-in files
vc_print_words.c
#### Allowed function
putchar

### Exercise 06: vc_convert_base
#### Objective
- Create a function that returns the result of conversion of the string nbr from a base base_from to a base base_to. The string must have enough allocated memory. The number represented by nbr must fit inside an int.
- Example: "17" base_from 10 base_to 16, should return "11".
- Here's how it should be prototyped: char *vc_convert_base(char *nbr, char *base_from, char *base_to);
#### Turn-in files
vc_convert_base.c
#### Allowed function
malloc, free

### Exercise Exercise 07: vc_split
#### Objective
- Create a function that splits a string of character depending on another string of characters.
- You will have to use each character from the string charset as a separator.
- The function returns an array where each box contains the address of a string wrapped between two separators. The last element of that array should equal to 0 to indicate the end of the array.
- There cannot be any empty strings in your array. Draw your conclusions accordingly.
- The string given as argument won't be modifiable.
- Here's how it should be prototyped: char **vc_split(char *str, char *charset);
#### Turn-in files
vc_split.c
#### Allowed function
malloc