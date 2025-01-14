FILES	= ft_isalpha.c ft_isdigit.c ft_isalnum.c \
		   ft_isascii.c ft_isprint.c ft_strlen.c \
		   ft_memset.c ft_bzero.c ft_memcpy.c \
		   ft_memmove.c ft_strlcpy.c ft_strlcat.c \
		   ft_toupper.c ft_tolower.c ft_strchr.c \
		   ft_strrchr.c ft_strncmp.c ft_memchr.c \
		   ft_memcmp.c ft_strnstr.c ft_atoi.c \
		   ft_calloc.c ft_strdup.c ft_substr.c \
		   ft_strjoin.c ft_strtrim.c ft_split.c \
		   ft_itoa.c ft_strmapi.c ft_striteri.c \
		   ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
		   ft_putnbr_fd.c ft_strchr_idx.c ft_strndup.c \
		   ft_chrjoin.c ft_remove_chr.c ft_strjoin_with_free.c \
		   ft_atoi_with_error.c \
		   ft_lstnew.c ft_lstadd_front.c ft_lstsize.c \
		   ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c \
		   ft_lstclear.c ft_lstiter.c ft_lstmap.c
SRCS	= $(addprefix $(SRCDIR)/, $(FILES))
OBJS	= $(addprefix $(OBJDIR)/, $(FILES:.c=.o))
LIBDIR	:= lib
SRCDIR	:= srcs
OBJDIR	:= objs
CC		= cc
NAME	= $(LIBDIR)/libft.a
INCDIR	:= includes
CFLAGS	= -Wall -Wextra -Werror
RM		= rm -rf
AR		= ar rc

all: $(LIBDIR) $(OBJDIR) $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	$(CC) $(CFLAGS) -I $(INCDIR) -c $< -o $@

$(LIBDIR):
	mkdir -p $@

$(OBJDIR):
	mkdir -p $@

clean:
	$(RM) $(OBJDIR)

fclean: clean
	$(RM) $(LIBDIR)

re: fclean all

norm:
	norminette $(SRCDIR) $(INCDIR)

.PHONY: all clean fclean re bonus
