*This project has been created as part of the 42 curriculum by gukumar*
 
# Libft
 
## Description
 
**Libft** is a C static library (`libft.a`) containing general-purpose functions reimplemented from scratch.
 
**Goals:**
- Understand how standard libc functions work internally
- Write norm-compliant C with proper memory management
- Build a reusable toolkit, including a linked list API

**Overview:**
- **Part 1:** libc reimplementations (`ft_` prefix)
- **Part 2:** additional string, memory and file descriptor utilities
- **Part 3:** linked list functions using `t_list`
## Instructions
 
**Requirements:** `cc`, `make`, `ar`
 
**Compile the library:**
```bash
make
```
 
**Other rules:**
 
| Rule | Action |
|------|--------|
| `make all` | Builds `libft.a` |
| `make clean` | Removes object files |
| `make fclean` | Removes object files and `libft.a` |
| `make re` | Rebuilds everything |
 
**Flags:** `-Wall -Wextra -Werror`
 
**Usage in a project:**
```c
#include "libft.h"
```
```bash
cc main.c -L. -lft -o program
```
 
## Library description
 
### Part 1 - Libc functions

| Function | Description |
|----------|-------------|
| `ft_isalpha` | Checks if a character is a letter |
| `ft_isdigit` | Checks if a character is a digit |
| `ft_isalnum` | Checks if a character is a letter or digit |
| `ft_isascii` | Checks if a character is in the ASCII range (0-127) |
| `ft_isprint` | Checks if a character is printable |
| `ft_toupper` | Converts a lowercase letter to uppercase |
| `ft_tolower` | Converts an uppercase letter to lowercase |
| `ft_strlen` | Returns the length of a string |
| `ft_strchr` | Finds the first occurrence of a character in a string |
| `ft_strrchr` | Finds the last occurrence of a character in a string |
| `ft_strncmp` | Compares up to `n` characters of two strings |
| `ft_strnstr` | Finds a substring within the first `len` characters of a string |
| `ft_strlcpy` | Copies a string with size-bounded, NUL-terminated output |
| `ft_strlcat` | Appends a string with size-bounded, NUL-terminated output |
| `ft_memset` | Fills a memory area with a constant byte |
| `ft_bzero` | Sets a memory area to zero |
| `ft_memcpy` | Copies a memory area (areas must not overlap) |
| `ft_memmove` | Copies a memory area (safe for overlapping areas) |
| `ft_memchr` | Finds the first occurrence of a byte in a memory area |
| `ft_memcmp` | Compares two memory areas |
| `ft_atoi` | Converts a string to an integer |
| `ft_calloc` | Allocates zero-initialized memory |
| `ft_strdup` | Duplicates a string into newly allocated memory |
 
### Part 2 - Additional functions
 
| Function | Description |
|----------|-------------|
| `ft_substr` | Returns a substring of a string |
| `ft_strjoin` | Concatenates two strings into a new one |
| `ft_strtrim` | Trims a set of characters from both ends |
| `ft_split` | Splits a string by a delimiter into a NULL-terminated array |
| `ft_itoa` | Converts an integer to a string |
| `ft_strmapi` | Applies a function to each character, returns a new string |
| `ft_striteri` | Applies a function to each character in place |
| `ft_putchar_fd` | Writes a character to a file descriptor |
| `ft_putstr_fd` | Writes a string to a file descriptor |
| `ft_putendl_fd` | Writes a string and a newline to a file descriptor |
| `ft_putnbr_fd` | Writes an integer to a file descriptor |
 
### Part 3 - Linked lists
 
```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
```
 
| Function | Description |
|----------|-------------|
| `ft_lstnew` | Creates a new node |
| `ft_lstadd_front` | Adds a node at the beginning |
| `ft_lstadd_back` | Adds a node at the end |
| `ft_lstsize` | Counts nodes |
| `ft_lstlast` | Returns the last node |
| `ft_lstdelone` | Frees one node and its content |
| `ft_lstclear` | Frees a node and all its successors |
| `ft_lstiter` | Applies a function to each node's content |
| `ft_lstmap` | Creates a new list from applying a function to each node |
 
### Technical choices
 
- Helper functions are declared `static`
- Library built with `ar`
- Makefile avoids unnecessary relinking

## Resources
 
**References:**
- [man pages](https://man7.org/linux/man-pages/) for each reimplemented function
- [The Norm (42)](https://github.com/42School/norminette)

**AI usage:**

- **Research:** Used AI alongside the references above to understand function behavior. I instructed it to explain concepts and guide my understanding, not to provide solutions.
- **Feedback:** Used AI to review my code after I had written the functions myself.
- **Documentation:** Used AI to generate this README template.
 