set(BINARY ${CMAKE_INVESTIGATION_BRAVO}_tst)


file(GlOB_RECURSE SOURCES LIST_DIRECTORIES false *.h *.cpp)

set(SOURCES ${TEST_SOURCES})
add_executable( ${BINARY}_run ${TEST_SOURCES} )

add_test(NAME ${BINARY} COMMAND ${BINARY})

target_link_libraries(${BINARY} PUBLIC ${CMAKE_INVESTIGATION_BRAVO}_lib gtest)
