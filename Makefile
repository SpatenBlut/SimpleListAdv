# Variablen
CXX      := g++
CXXFLAGS := -std=c++11 -Wall
SRC_DIR  := src
SRCS     := $(wildcard $(SRC_DIR)/*.cpp)
OBJS     := $(SRCS:.cpp=.o)
TARGET   := SimpleList

# Standard-Ziel
all: $(TARGET)

# Linken
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Kompilieren
$(SRC_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Aufräumen
clean:
	del /Q $(OBJS) $(TARGET) 2>nul || rm -f $(OBJS) $(TARGET)
