# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: rhorbach <rhorbach@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2022/10/14 12:49:02 by rhorbach      #+#    #+#                  #
#    Updated: 2022/10/14 18:29:54 by rhorbach      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
HEADERFILES = libft.h
NORMFLAGS = -Wall -Wextra -Werror
OBJDIR = obj
CFILES =						\
	ft_atoi.c					\
	ft_bzero.c					\
	ft_calloc.c					\
	ft_isalnum.c				\
	ft_isalpha.c				\
	ft_isascii.c				\
	ft_isdigit.c				\
	ft_isprint.c				\
	ft_memchr.c					\
	ft_memcmp.c					\
	ft_memcpy.c					\
	ft_memmove.c				\
	ft_memset.c					\
	ft_strchr.c					\
	ft_strlcat.c				\
	ft_strlcpy.c				\
	ft_strlen.c					\
	ft_strncmp.c				\
	ft_strnstr.c				\
	ft_strrchr.c				\
	ft_tolower.c				\
	ft_toupper.c
OBJFILES = $(addprefix $(OBJDIR)/,$(CFILES:c=o))

all: $(NAME)

$(NAME): $(OBJFILES)
	ar -rcs libft.a $(OBJFILES)

obj/%.o: %.c $(HEADERFILES)
	@mkdir -p $(dir $@)
	$(CC) -c $(NORMFLAGS) -o $@ $<

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all


.PHONY: all clean fcleam re
