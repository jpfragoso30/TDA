add_library(binaryBuffer
            STATIC
            binaryBuffer.c)

target_include_directories(binaryBuffer
                            PUBLIC
                            ${CMAKE_CURRENT_LIST_DIR}/../libs)