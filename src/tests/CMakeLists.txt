add_library(Catch INTERFACE)
target_include_directories(Catch INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})

#current for files here, else don't use current
set(TEST_FILES
        ${CMAKE_CURRENT_SOURCE_DIR}/site_test.cpp
        )

set (TARGET_SRC
        ${CMAKE_SOURCE_DIR}/site.cpp
        )

foreach(TEST_FILE ${TEST_FILES})
    get_filename_component(FILE_NAME ${TEST_FILE} NAME_WE)
    add_executable(${FILE_NAME} test_main.cpp ${TEST_FILE} ${TARGET_H} ${TARGET_SRC})
    target_link_libraries(${FILE_NAME} Catch)
    target_include_directories(${FILE_NAME} PUBLIC ${BOOST_ROOT})
    target_include_directories(${FILE_NAME} PUBLIC ${CMAKE_SOURCE_DIR})
endforeach()
