#independency directory, can be list: INCDIRS=. ./directoryname/
#OPT=-00
#generate files that encode make rules for the .h dependencies
#DEPFLAGS=-MP -MD
#automatically add the -I onto each included directory:
#CFLAGS=-Wall -Wextra -Werror -g $(foreach D,$(INCDIRS),-I$(D)) $(OPT) $(DEPFLAGS)
#for-style iteration (foreach) and regular expression completions (wildcard)
#CFILES=$(foreach D,$(CODEDIRS),$(wildcard $(D)/*.c))
#regular expression replacement
#OBJECTS=$(patsubst %.c,%.o,$(CFILES))
#DEPFILES=$(patsubst %.c,%.c,$(CFILES))
#all: $(BINARY)
#$(BINARY): $(OBJECTS)
#	$(CC) -o $@ $^

CC=cc
CFLAGS=-Wall -Wextra -Werror
NAME=libft.a
LIBC=ar rcs
RM=rm -f
#CFILES= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp ft_memchr.c ft_memcpy.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c
CFILES := $(wildcard *.c)
OBJECTS=$(CFILES:.c=.o)

all:$(NAME)

$(NAME):$(OBJECTS)
	$(LIBC) $(NAME) $(OBJECTS)
%.o:%.c
	$(CC) $(CFLAGS) -c -o $@ $^
clean:
	$(RM) $(OBJECTS)
fclean: clean
	$(RM) $(NAME)
re: fclean all
