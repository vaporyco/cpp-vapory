set(FILES
    util.h
    io.c
    internal.c
    vapash.h
    endian.h
    compiler.h
    fnv.h
    data_sizes.h
    sha3.c sha3.h
)

if (MSVC)
    list(APPEND FILES util_win32.c io_win32.c mmap_win32.c)
else()
    list(APPEND FILES io_posix.c)
endif()

add_library(vapash ${FILES})
set_target_properties(vapash PROPERTIES C_STANDARD 99)
