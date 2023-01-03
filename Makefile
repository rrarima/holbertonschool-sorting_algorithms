CC=gcc
CFLAGS=-Wall -Werror -Wextra -pedantic -std=gnu89
RM=rm -rf
BETTY=betty

TARGET0=bubble
SRC0=	0-bubble_sort.c \
	0-main.c \
	print_array.c

TARGET1=insertion
SRC1=   1-main.c \
	1-insertion_sort_list.c \
	print_list.c

TARGET2=select
SRC2=   2-main.c \
	2-selection_sort.c \
	print_array.c

TARGET3=quick
SRC3=   3-main.c \
	3-quick_sort.c \
	print_array.c

all:    0 1 2 3

clean:
	$(RM) *~ \#*\# \.\#* \
        $(TARGET0) $(TARGET1) $(TARGET2) $(TARGET3)

re: clean all

0:
	$(BETTY) $(SRC0)
	$(CC) $(CFLAGS) $(SRC0) -o $(TARGET0)
1:
	$(BETTY) $(SRC1)
	$(CC) $(CFLAGS) $(SRC1) -o $(TARGET1)
2:
	$(BETTY) $(SRC2)
	$(CC) $(CFLAGS) $(SRC2) -o $(TARGET2)
3:
	$(BETTY) $(SRC3)
	$(CC) $(CFLAGS) $(SRC3) -o $(TARGET3)
