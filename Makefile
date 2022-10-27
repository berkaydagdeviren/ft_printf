SRCS=	ft_printf.c ft_printhex.c ft_printnbr.c \
		ft_printpercent.c ft_printpointer.c ft_printstr.c \
		ft_printunsigned.c libft/ft_itoa.c libft/ft_strlen.c\

OBJS			=	$(SRCS:.c=.o)

CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror

NAME			= libftprintf.a

all:			$(NAME)

$(NAME):		$(OBJS)
						ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
						$(RM) $(NAME)

.PHONY:			all clean fclean re

re : fclean all
