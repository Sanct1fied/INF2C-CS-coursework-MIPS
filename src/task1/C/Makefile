CC=gcc
CFLAGS=-I.
DEP_OBJ = task1.o libio.o
OUTPUT = output.txt
OBJ = main.o $(DEP_OBJ)
EVAL_OBJ = eval.o $(DEP_OBJ)

%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)

main: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

run: main
	./main

clean:
	rm -f $(OBJ) $(EVAL_OBJ) $(OUTPUT) main eval

eval: $(EVAL_OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

run-eval: eval
	./eval $(TEST)

LIT ?= lit

.PHONY: test
test:
	$(LIT) -v tests
