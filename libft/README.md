# Libft
In this project, I recoded some functions of the C standard library as well as some other utility functions.

## Part 01

In this first part, I re-coded a set of libc functions as defined in your `man`. The functions have the same prototype and behavior as the originals <a href="https://www.freebsd.org/cgi/man.cgi">(BSD).</a>

• isalpha • isdigit • isalnum • isascii • isprint • strlen • memset • bzero • memcpy • memmove • strlcpy • strlcat
• toupper • tolower • strchr • strrchr • strncmp • memchr • memcmp • strnstr • atoi

## Part 02

In this second part, I coded a set of functions that are not included in libc or are included in a different form.

• substr • strjoin • strtrim • split • itoa • strmapi • striteri • putchar_fd • putstr_fd • putendl_fd • putnbr_fd

## Summary of functions

### String functions

<table>
  <tr>
    <th>Function</th>
    <th>Description</th>
  </tr>
  <tr>
    <td><a href="./ft_strchr.c"> strchr </a></td>
    <td>The strchr() function returns a pointer to the first occurrence of the character c in the string s.</td>
  </tr>
  <tr>
    <td><a href="./ft_strrchr.c"> strrchr </a></td>
    <td>The strrchr() function returns a pointer to the last occurrence of the character c in the string s.</td>
  </tr>
  <tr>
    <td><a href="./ft_strdup.c"> strdup </a></td>
    <td>The  strdup()  function  returns a pointer to a new string which is a duplicate of the string s.  Memory for the new string is obtained with malloc(3), and can be freed with free(3).</td>
  </tr>
  <tr>
    <td><a href="./ft_striteri.c"> striteri </a></td>
    <td>Applies the function f to each character of the string passed as argument, and passing its index as first argument. Each character is passed by address to f to be modified if necessary.</td>
  </tr>
  <tr>
    <td><a href="./ft_strjoin.c"> strjoin </a></td>
    <td>Allocates (with malloc(3)) and returns a new string, which is the result of the concatenation of ’s1’ and ’s2’.</td>
  </tr>
  <tr>
    <td><a href="./ft_strlcat.c"> strlcat </a></td>
    <td>The strlcat() function appends the NUL-terminated string src to the end of dst. It will append at most size - strlen(dst) - 1 bytes, NUL-terminating the result.</td>
  </tr>
  <tr>
    <td><a href="./ft_strlcpy.c"> strlcpy </a></td>
    <td>The strlcpy() function copies up to size - 1 characters from the NUL-terminated string src to dst, NUL-terminating the result.</td>
  </tr>
  <tr>
    <td><a href="./ft_strlen.c"> strlen </a></td>
    <td>The  strlen()  function  calculates  the  length  of the string pointed to by s, excluding the terminating null byte ('\0').</td>
  </tr>
  <tr>
    <td><a href="./ft_strmapi.c"> strmapi </a></td>
    <td>Applies the function ’f’ to each character of the string ’s’ to create a new string (with malloc(3)) resulting from successive applications of ’f’.</td>
  </tr>
  <tr>
    <td><a href="./ft_strncmp.c"> strncmp </a></td>
    <td>The strncmp() function compares the n bytes of two strings s1 and s2. It returns an integer less than, equal to, or greater than zero if s1 is found, respectively, to be less than, to match, or be greater than s2.</td>
  </tr>
  <tr>
    <td><a href="./ft_strnstr.c"> strnstr </a></td>
    <td>The strnstr() function locates the first occurrence of the null-terminated string little in the string big, where not more than len characters are searched. Characters that appear after a ‘\0’ character are not searched.  Since the strnstr() function is a FreeBSD specific API, it should only be used when portability is not a concern.</td>
  </tr>
  <tr>
    <td><a href="./ft_strtrim.c"> strtrim </a></td>
    <td>Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters specified in ’set’ removed from the beginning and the end of the string.</td>
  </tr>
  <tr>
    <td><a href="./ft_substr.c"> substr </a></td>
    <td>Allocates (with malloc(3)) and returns a substring from the string ’s’. The substring begins at index ’start’ and is of maximum size ’len’.</td>
  </tr>
  <tr>
    <td><a href="./ft_split.c"> split </a></td>
    <td>Allocates (with malloc(3)) and returns an array of strings obtained by splitting ’s’ using the character ’c’ as a delimiter. The array must be ended by a NULL pointer.</td>
  </tr>
  <tr>
    <td><a href="./ft_atoi.c"> atoi </a></td>
    <td>The  atoi() function converts the initial portion of the string pointed to by nptr to int. The behavior is the same as strtol(nptr, NULL, 10);</td>
  </tr>
  <tr>
    <td><a href="./ft_itoa.c"> itoa </a></td>
    <td>Allocates (with malloc(3)) and returns a string representing the integer received as an argument. Negative numbers must be handled.</td>
  </tr>
</table>

### Memory Manipulation functions

<table>
  <tr>
    <th>Function</th>
    <th>Description</th>
  </tr>
  <tr>
    <td><a href="./ft_calloc.c"> calloc </a></td>
    <td>The  calloc()  function  allocates memory for an array of nmemb elements of size bytes each and returns a pointer to the allocated memory. The memory is set to zero. If nmemb or size is 0, then calloc() returns either NULL, or a unique pointer value that can later be successfully passed to free(). <br/> If the multiplication of nmemb and size would result in integer overflow, then calloc() returns an error.  By contrast, an integer overflow would not be detected in the following call to malloc(), with the result that an incorrectly sized block of memory would be allocated: `malloc(nmemb * size);`</td>
  </tr>
  <tr>
    <td><a href="./ft_bzero.c"> bzero </a></td>
    <td>The bzero() function erases the data in the n bytes of the memory starting at the location pointed to by s, by writing zeros (bytes containing '\0') to that area.</td>
  </tr>
  <tr>
    <td><a href="./ft_memchr.c"> memchr </a></td>
    <td>The  memchr()  function  scans  the  initial n bytes of the memory area pointed to by s for the first instance of c. Both c and the bytes of the memory area pointed to by s are interpreted as unsigned char.</td>
  </tr>
  <tr>
    <td><a href="./ft_memcmp.c"> memcmp </a></td>
    <td>The memcmp() function compares the first n bytes (each interpreted as unsigned char) of the memory areas s1 and s2.</td>
  </tr>
  <tr>
    <td><a href="./ft_memcpy.c"> memcpy </a></td>
    <td>The  memcpy() function copies n bytes from memory area src to memory area dest.  The memory areas must not overlap.</td>
  </tr>
  <tr>
    <td><a href="./ft_memmove.c"> memmove </a></td>
    <td>The memmove() function copies n bytes from memory area src to memory area dest. The memory areas may overlap: copying takes place as though the bytes in src are first copied into a temporary array that does not overlap src or dest, and the bytes are then copied from the temporary array to dest.</td>
  </tr>
  <tr>
    <td><a href="./ft_memset.c"> memset </a></td>
    <td>The memset() function fills the first n bytes of the memory area pointed to by s with the constant byte c. </td>
  </tr>
</table>

### File Descriptor functions

<table>
  <tr>
    <th>Function</th>
    <th>Description</th>
  </tr>
  <tr>
    <td><a href="./ft_putchar_fd.c"> putchar_fd </a></td>
    <td>Outputs the character ’c’ to the given file descriptor.</td>
  </tr>
  <tr>
    <td><a href="./ft_putstr_fd.c"> putstr_fd </a></td>
    <td>Outputs the string ’s’ to the given file descriptor.</td>
  </tr>
  <tr>
    <td><a href="./ft_putnbr_fd.c"> putnbr_fd </a></td>
    <td>Outputs the integer ’n’ to the given file descriptor.</td>
  </tr>
  <tr>
    <td><a href="./ft_putendl_fd.c"> putendl_fd </a></td>
    <td>Outputs the string ’s’ to the given file descriptor, followed by a newline.</td>
  </tr>
</table>

### Char functions

<table>
  <tr>
    <th>Function</th>
    <th>Description</th>
  </tr>
  <tr>
    <td><a href="./ft_isalnum.c"> isalnum </a></td>
    <td>Checks for an alphanumeric character; it is equivalent to (isalpha(c) || isdigit(c)).</td>
  </tr>
  <tr>
    <td><a href="./ft_isalpha.c"> isalpha </a></td>
    <td>Checks  for  an  alphabetic  character;  in  the  standard "C" locale, it is equivalent to (isupper(c) || is lower(c)). In some locales, there may be additional characters for which isalpha() is true—letters which are neither uppercase nor lowercase.</td>
  </tr>
  <tr>
    <td><a href="./ft_isascii.c"> isascii </a></td>
    <td>Checks whether c is a 7-bit unsigned char value that fits into the ASCII character set.</td>
  </tr>
  <tr>
    <td><a href="./ft_isdigit.c"> isdigit </a></td>
    <td>Checks for a digit (0 through 9).</td>
  </tr>
  <tr>
    <td><a href="./ft_isprint.c"> isprint </a></td>
    <td>Checks for any printable character including space.</td>
  </tr>
  <tr>
    <td><a href="./ft_tolower.c"> tolower </a></td>
    <td>If c is an uppercase letter, tolower() returns its lowercase equivalent, if a lowercase representation exists in the current locale.  Otherwise, it returns c.  The tolower_l() function performs the same task, but uses the locale referred to by the locale handle locale.</td>
  </tr>
  <tr>
    <td><a href="./ft_toupper.c"> toupper </a></td>
    <td>If c is a lowercase letter, toupper() returns its uppercase equivalent, if an uppercase representation exists in the current locale.  Otherwise, it returns c. The toupper_l() function performs the same task, but uses the locale  referred to by the locale handle locale.</td>
  </tr>
</table>

## Makefile

| Command | Usage |
| --- | --- |
| `make` | creates .o files for each function as well as the main library file, libft.a |
| `make clean` | removes the .o files used to create the library |
| `make fclean` | removes the .o & .a files used to create the library |
| `make re` | removes all .o & .a files then remakes them |
