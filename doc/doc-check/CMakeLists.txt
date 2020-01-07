find_package(Python3 COMPONENTS Interpreter)

add_custom_target(check-doc
        COMMAND ${Python3_EXECUTABLE} ${CMAKE_CURRENT_SOURCE_DIR}/doc-check.py ${CMAKE_SOURCE_DIR})
