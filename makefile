# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lcamilo- <lcamilo-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/11 16:47:09 by lcamilo-          #+#    #+#              #
#    Updated: 2022/10/11 17:15:45 by lcamilo-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#Partie 1 & 2
SRCS	= ft_isalpha.c   \
		  ft_isdigit.c   \
		  ft_isalnum.c   \
		  ft_isascii.c   \
		  ft_isprint.c   \
		  ft_strlen.c    \
		  ft_memset.c    \
		  ft_bzero.c     \
		  ft_memcpy.c	 \
		  ft_memmove.c   \
		  ft_strlcpy.c   \
		  ft_strlcat.c   \
		  ft_toupper.c   \
		  ft_tolower.c   \
		  ft_strchr.c    \
		  ft_strrchr.c   \
		  ft_strncmp.c   \
		  ft_strncmp.c   \
		  ft_memchr.c    \
		  ft_memcmp.c    \
		  ft_strnstr.c   \
		  ft_atoi.c      \
		  ft_calloc.c    \
		  ft_strdup.c    \
		  ft_substr.c    \
		  ft_strjoin.c   \
		  ft_strtrim.c   
#		  ft_split.c
		
OBJS	= ${SRCS:.c=.o}

NAME 	= libft.a

CC		= cc

CFLAGS 	= -Wall -Wextra -Werror

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
		ar rcs ${NAME} ${OBJS}

all: ${NAME}

clean:
			${RM} ${OBJS} ${OBJS_B}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		clean fclean all
		  