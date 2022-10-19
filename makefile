# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lcamilo- <lcamilo-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/11 16:47:09 by lcamilo-          #+#    #+#              #
#    Updated: 2022/10/19 20:35:17 by lcamilo-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Partie 1 & 2
SRCS	= ft_isalpha.c   			\
		  ft_isdigit.c   			\
		  ft_isalnum.c   			\
		  ft_isascii.c   			\
		  ft_isprint.c   			\
		  ft_strlen.c    			\
		  ft_memset.c    			\
		  ft_bzero.c     			\
		  ft_memcpy.c	 			\
		  ft_memmove.c   			\
		  ft_strlcpy.c   			\
		  ft_strlcat.c   			\
		  ft_toupper.c   			\
		  ft_tolower.c   			\
		  ft_strchr.c    			\
		  ft_strrchr.c   			\
		  ft_strncmp.c   			\
		  ft_strncmp.c   			\
		  ft_memchr.c    			\
		  ft_memcmp.c				\
		  ft_strnstr.c   			\
		  ft_atoi.c      			\
		  ft_calloc.c    			\
		  ft_strdup.c    			\
		  ft_substr.c    			\
		  ft_strjoin.c   			\
		  ft_strtrim.c   			\
		  ft_split.c	 			\
		  ft_itoa.c					\
		  ft_strmapi.c				\
		  ft_striteri.c				\
		  ft_putchar_fd.c			\
		  ft_putendl_fd.c			\
		  ft_putstr_fd.c 			\
		  ft_putnbr_fd.c		  	


SRCS_B	= ft_lstnew_bonus.c		  	\
		  ft_lstadd_front_bonus.c	\
		  ft_lstsize_bonus.c		\
		  ft_lstlast_bonus.c		\
		  ft_lstadd_back_bonus.c	\
		  ft_lstdelone_bonus.c		\
		  ft_lstclear_bonus.c		\
		  ft_lstiter_bonus.c		\
		  ft_lstmap_bonus.c
		
OBJS	= ${SRCS:.c=.o}

OBJS_B	=	${SRCS_B:.c=.o}

NAME 	= libft.a

CC		= cc

CFLAGS 	= -Wall -Wextra -Werror

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
		ar rcs ${NAME} ${OBJS}

all: ${NAME}

bonus:		$(OBJS) $(OBJS_B)
			ar rcs $(NAME) $(OBJS) $(OBJS_B)

clean:
			${RM} ${OBJS} ${OBJS_B}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		clean fclean all
		  