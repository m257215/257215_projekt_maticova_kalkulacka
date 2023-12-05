# CMakeList.txt: Projekt CMake pro 257215_projekt_maticova_kalkulacka, sem přidejte logiku zdrojového
# kódu a definic specifickou pro projekt.
#

# Přidejte zdrojový kód ke spustitelnému souboru tohoto projektu.
add_executable (257215_projekt_maticova_kalkulacka "maticova_kalkulacka.cpp" "maticova_kalkulacka.h" "operace.h" "operace.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET 257215_projekt_maticova_kalkulacka PROPERTY CXX_STANDARD 20)
endif()

# TODO: V případě potřeby přidejte testy a cíle instalace.
