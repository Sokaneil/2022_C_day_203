# E89 Pedagogical & Technical Lab
# project:     Unitaire
# created on:  2023-01-30 - 11:04 +0100
# 1st author:  sokaneil.sieng - sokaneil.sieng
# description: Makefile

NAME	=	libvector.a

SRCS	=	src/memset.c			\
		src/memcpy.c			\
		src/arrset.c			\
		src/memmove.c			\
		src/new_vector.c		\
		src/delete_vector.c		\
		src/vector_push_back.c		\
		src/vector_realloc.c		\
		src/vector_pop_back.c		\
		src/vector_get_at.c		\
		src/vector_get_back.c		\
		src/vector_get_front.c		\
		src/vector_get_size.c		\
		src/vector_get_capacity.c	\
		src/vector_insert_at.c		\
		src/vector_push_front.c		\
		src/vector_pop_front.c		\
		src/vector_erase_at.c

OBJS	=	$(SRCS:.c=.o)

NAME_TEST	=	test.out

SRCS_TEST	=	test/new_vector.c	\
			test/vector_push_back.c	\
			test/vector_insert_at.c	\
			test/vector_push_front.c\
			test/vector_pop_back.c	\
			test/vector_pop_front.c	\
			test/vector_erase_at.c	\
			test/delete_vector.c	\
			test/vector_get_at.c	\
			test/vector_get_front.c	\
			test/vector_get_back.c	\
			test/vector_get_size.c	\
			test/vector_get_capacity.c

OBJS_TEST	=	$(SRCS_TEST:.c=.o)


CFLAGS	+=	-W -Wall -Wextra -Werror -Iinclude/

LDFLAGS	+=

RM	=	rm -vf

CC	:=	gcc

ifdef RELEASE
CFLAGS += -O2
endif

ifdef DEBUG
CFLAGS += -g
endif

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

$(NAME_TEST): $(OBJS) $(OBJS_TEST)
	$(CC) -o $(NAME_TEST) $(OBJS) $(OBJS_TEST) -lcriterion

save:
	git status
	git add *
	git commit -m "Vector"
	git push

test:
	$(CC) $(CFLAGS)

clear:
	rm src/*.c~ include/*.h~ test/*.c~ Makefile~

clean:
	@$(RM) $(OBJS) $(OBJS_TEST)

fclean: clean
	@$(RM) $(NAME) $(NAME_TEST)

re: fclean all

# Theses rules do not directly map to a specific file
.PHONY: all clean fclean re
