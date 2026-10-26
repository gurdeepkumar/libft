*This project has been created as part of the 42 curriculum by <gukumar>.*
 
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
 
| Category | Functions |
|----------|-----------|
| Character checks | `ft_isalpha` `ft_isdigit` `ft_isalnum` `ft_isascii` `ft_isprint` |
| Character conversion | `ft_toupper` `ft_tolower` |
| String | `ft_strlen` `ft_strchr` `ft_strrchr` `ft_strncmp` `ft_strnstr` `ft_strlcpy` `ft_strlcat` |
| Memory | `ft_memset` `ft_bzero` `ft_memcpy` `ft_memmove` `ft_memchr` `ft_memcmp` |
| Conversion | `ft_atoi` |
| Allocation | `ft_calloc` `ft_strdup` |
 
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
 
- Part 1 not checking for null pointer args

## Resources
 
**References:**
- [man pages](https://man7.org/linux/man-pages/) for each reimplemented function
- [The Norm (42)](https://github.com/42School/norminette)
- [GNU Make manual](https://www.gnu.org/software/make/manual/)
- [Beej's Guide to C Programming](https://beej.us/guide/bgc/)
- *The C Programming Language*, Kernighan & Ritchie
**AI usage:**
 
<!-- Fill this in honestly. Example: -->
<!-- - Used AI to generate this README template -->
<!-- - Not used for writing function implementations -->
- [Describe which tasks AI was used for and which parts of the project]