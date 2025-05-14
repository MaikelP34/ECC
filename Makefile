CC = gcc
CFLAGS = -Wall -Wextra -std=c11
SRCDIR = ./src
BUILDDIR = ./build

# declareer alle .c files en gebruik de * wildcard om simpelweg alle .c bestanden te selecteren in de SRCDIR
CFILES = $(wildcard $(SRCDIR)/*.c)
# declareer de corresponderende .o files via subsititutie en renaming
OBJECTS = $(patsubst $(SRCDIR)/%.c,$(BUILDDIR)/%.o,$(CFILES))

TARGET = program.bin

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) -o $@ $^

$(BUILDDIR)/%.o: $(SRCDIR)/%.c | $(BUILDDIR)
	$(CC) $(CFLAGS) -c -o $@ $<

$(BUILDDIR):
	mkdir -p $(BUILDDIR)

compile: $(TARGET)

clean:
	rm -rf $(TARGET) $(OBJECTS)

run: $(TARGET)
	@ ./$(TARGET)
make:
	rm -rf $(TARGET) $(OBJECTS)
	$(TARGET)
	./$(TARGET)
