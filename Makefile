# === Makefile pour TaskManager++ ===

# Nom de l'exécutable
TARGET = taskmanager

# Répertoire des sources
SRC_DIR = src

# Liste des fichiers sources
SRCS = $(wildcard $(SRC_DIR)/*.cpp)

# Fichiers objets correspondants
OBJS = $(SRCS:.cpp=.o)

# Options de compilation
CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -I$(SRC_DIR)

# Règle principale
all: $(TARGET)

# Création de l'exécutable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Nettoyer les fichiers objets et l'exécutable
clean:
	rm -f $(SRC_DIR)/*.o $(TARGET)

# Nettoyage complet
fclean: clean

# Recompiler proprement
re: fclean all

.PHONY: all clean fclean re

