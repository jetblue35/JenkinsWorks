# Compiler
CC = g++

# Compiler flags
CFLAGS = -std=c++11 -Wall

# Source files
SRCS = Main.cpp People.cpp
HEADERS = People.h

# Object files
OBJS = $(SRCS:.cpp=.o)

# Executable name
EXEC = myprogram

# Rule to build the executable
$(EXEC): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(EXEC)

# Rule to compile source files into object files
%.o: %.cpp $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

# Phony target to clean object files and executable
clean:
	rm -f $(OBJS) $(EXEC)
