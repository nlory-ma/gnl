NAME=lem-in
LIBDIR=libft/
SRCDIR=src/
BINDIR=bin/
INCDIR=inc/
LIB=$(LIBDIR)libft.a
CC=gcc
CFLAGS=-Wall -Wextra -Werror
LINKDIR=-I$(INCDIR) -I$(LIBDIR)/inc
_BIN=main.o parser.o room.o pipe.o get_ants.o get_rooms.o get_pipes.o\
 skip_comment.o assert.o get_paths.o path.o debug.o construct_path.o
BIN= $(patsubst %, $(BINDIR)%, $(_BIN))

all:        $(BINDIR) $(NAME)
    @ echo "project $(NAME) compiling complete"

$(NAME):    $(LIB) $(BIN)
    @ $(CC) $(CFLAGS) $^ -o $@ $(LINKDIR)

$(LIB):
    @ (cd Libft && $(MAKE))

$(BINDIR)%.o:       $(SRCDIR)%.c
    @ $(CC) $(CFLAGS) -o $@ -c $< $(LINKDIR)

$(BINDIR):
    @ mkdir $(BINDIR)

.PHONY:     clean fclean $(NAME)

clean:
    @ (cd $(LIBDIR) && $(MAKE) $@)
    @ rm -f $(BIN)
    @ rm -f $(NAME)

fclean:     clean
    @ (cd $(LIBDIR) && $(MAKE) $@)
    @ rm -f $(NAME)
    @ rmdir $(BINDIR)

re:         fclean all