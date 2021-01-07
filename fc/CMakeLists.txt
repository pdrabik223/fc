# CMakeList.txt: projekt CMake dla elementu fc, dołącz źródło i zdefiniuj
# tutaj logikę specyficzną dla projektu.
#
cmake_minimum_required (VERSION 3.8)

# Dodaj źródło do pliku wykonywalnego tego projektu.
add_executable (fc "fc.cpp" "fc.h" "map.h" "map.cpp" "pair.h" "pair.cpp" "node.h" "node.cpp")

# TODO: Dodaj testy i zainstaluj elementy docelowe w razie potrzeby.
