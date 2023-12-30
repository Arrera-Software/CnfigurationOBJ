# CMakeList.txt : projet CMake pour DevParaC++, incluez la source et définissez
# la logique spécifique au projet ici.
#

# Ajoutez une source à l'exécutable de ce projet.
add_executable (DevParaC++ "DevParaC++.cpp" "DevParaC++.h" "CConfiguration.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET DevParaC++ PROPERTY CXX_STANDARD 20)
endif()

# TODO: Ajoutez des tests et installez des cibles si nécessaire.
