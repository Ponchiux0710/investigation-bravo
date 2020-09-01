set(BINARY ${CMAKE_INVESTIGATION-BRAVO})
project(basic-00-example)




file(GlOB_RECURSE SOURCES LIST_DIRECTORIES true *.h *.cpp)

set(SOURCES ${SOURCES})
add_executable( ${BINARY}_run ${SOURCES} )

add_library(${BINARY}_lib STATIC ${SOURCES} )