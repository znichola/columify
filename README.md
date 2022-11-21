# Columnify

Formats a list of strings to fit inside a given character width, used to make your makefile pretty.

## Compiling

Compile with `gcc -o columnify columinfy.c` or for mac use the already compiled binary.

## Usage

Format a list of strings so they fit inside a width of 66 character and `/` is added so it's ready to copy into a makefile.

`./columify 66 atoi bzero calloc isalnum isalpha isascii isdigit isprint memcmp memchr memcpy memccpy memmove memset strchr strrchr strdup strlcat strlcpy strlen strncmp strnstr tolower toupper substr strjoin strtrim split itoa strmapi putchar_fd putstr_fd putendl_fd putnbr_fd lstnew lstadd_front lstsize lstlast lstadd_back lstdelone lstclear lstiter lstmap`

```
total width:            66
longest word:           12
words to a line:        5
atoi         bzero        calloc       isalnum      isalpha      \
isascii      isdigit      isprint      memcmp       memchr       \
memcpy       memccpy      memmove      memset       strchr       \
strrchr      strdup       strlcat      strlcpy      strlen       \
strncmp      strnstr      tolower      toupper      substr       \
strjoin      strtrim      split        itoa         strmapi      \
putchar_fd   putstr_fd    putendl_fd   putnbr_fd    lstnew       \
lstadd_front lstsize      lstlast      lstadd_back  lstdelone    \
lstclear     lstiter      lstmap
```

