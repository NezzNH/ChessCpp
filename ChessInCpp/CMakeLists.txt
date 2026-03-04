# CMakeList.txt : CMake project for ChessInCpp, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (ChessInCpp "ChessInCpp.cpp" "ChessInCpp.h" "Piece.cpp" "Piece.h"  "coordPair.h" "Board.cpp" "Board.h" "Display.cpp" "Display.h" "Field.cpp" "Field.h"  )

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET ChessInCpp PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
