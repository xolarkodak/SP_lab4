CC = g++
SRC = main.cpp calculator.cpp
OBJ = $(SRC:.cpp=.o)
EXEC = calculator

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CC) $(OBJ) -o $(EXEC)

%.o: %.cpp
	$(CC) -c $< -o $@

clean:
	rm -f $(OBJ) $(EXEC)
