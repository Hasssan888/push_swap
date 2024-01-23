CC = cc
FLAGC = -Wall -Wextra -Werror
NAME = push_swap
SURC = main1.c link_list.c push_swap.c reuls.c utilis.c push_to_b.c;
OBJEC = ${SURC:.c=.o}

all : ${NAME}

${NAME} : ${OBJEC}
	${CC} ${FLAGC} -o $@ $^

.%o: %.c
	${CC} ${FLAGC} -c $< -o $@

clean :
	rm -f ${OBJEC}
flcean : clean
	rm -f $(NAME)