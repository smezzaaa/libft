*This project has been created as part of the 42 curriculum by smeza-ro.*

---

## Description
**libft** is a compact C library that reimplements a selection of standard C library functions and convenient utility helpers required by the 42 curriculum. The project goal is educational: to deepen understanding of C by re-implementing string, memory, I/O helpers and a small singly-linked list API in portable, well-tested C.

---

## Instructions

### Build
- Build the library:  `make`
- Build the bonus (includes all list functions):  `make bonus`
- Clean object files:  `make clean`
- Remove library and objects:  `make fclean`
- Rebuild everything:  `make re`

### Usage
- Include the header and link the static archive `libft.a`:
```bash
gcc -I. your_program.c -L. -lft
```
- Header: `libft.h` — contains prototypes and the `t_list` type.

### Testing
- A tester is available in the `testerlibft/` folder. Run specific tests (e.g., `make split`) from that folder.
- Run tests under Valgrind when the tester recommends it to detect leaks and invalid memory accesses.

> Important: when the tester shows memory warnings, run the test again under Valgrind to locate the issue.

---

## Detailed library description

The library is organized in logical groups. Each function is implemented to behave like its common standard equivalent.

### Character checks & conversions
- `ft_isalpha`, `ft_isalnum`, `ft_isascii`, `ft_isdigit`, `ft_isprint` — classification helpers
- `ft_toupper`, `ft_tolower` — case conversions

Purpose: Provide safe, locale-independent character checks and conversions used across parsing and formatting code.

### Memory helpers
- `ft_memset`, `ft_memcpy`, `ft_memmove`, `ft_memcmp`, `ft_memchr`, `ft_bzero`, `ft_calloc`

Purpose: Low-level memory operations implemented to match expected behavior (overlap-safe `memmove`, zero-initialized `calloc`, etc.).

### String helpers
- `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup`
- Higher-level: `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`, `ft_strmapi`, `ft_striteri`

Purpose: Robust string manipulation primitives with careful memory allocation and error handling.

### File descriptor helpers
- `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`

Purpose: Simplify printing to file descriptors (useful for tests and small programs).

### Linked list (bonus)
- `t_list` struct and helpers: `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`, `ft_lstlast`, `ft_lstsize`,
  `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`

Purpose: Provide a minimal singly-linked list API used in many 42 projects and exercises. All list functions follow the project subject semantics (callback-based deletion, mapping with error rollback, etc.).

Example: create and clear a list safely
```c
t_list *lst = ft_lstnew(ft_strdup("one"));
ft_lstadd_back(&lst, ft_lstnew(ft_strdup("two")));
ft_lstclear(&lst, free); // frees contents and nodes, sets lst to NULL
```

---

## Resources & references
- C standard library man pages (e.g., `man strcpy`, `man memcpy`)
- 42 `libft` subject and project instructions
- Valgrind documentation for debugging memory errors
- GNU libc documentation and general C tutorials (e.g., learn-c.org)

### AI usage (transparency)
- **Assistant used**: **GitHub Copilot** (model: **Raptor mini (Preview)**)
- **Tasks assisted**: suggesting fixes for `ft_split.c` (bugfixes and Valgrind fixes) and proposing Makefile updates to support `bonus` targets. All code and text were reviewed and validated manually.

---

## Technical notes
- Default build flags: `-Wall -Wextra -Werror` (see `Makefile`).
- Archive created with `ar rcs` as `libft.a`.
- Header file `libft.h` exposes prototypes and `t_list`.

---

## Author & Contact
- **Author**: smeza-ro — smeza-ro@student.42.fr

---

If you'd like, I can commit this `README.md` to the repository for you.