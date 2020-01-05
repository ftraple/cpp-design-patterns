option(SINGLETON_PATTERN "Build singleton pattern" ON)
option(ADAPTER_PATTERN "Build adapter pattern" ON)

if (SINGLETON_PATTERN)
    add_subdirectory(Singleton)
endif()
if (SINGLETON_PATTERN)
    add_subdirectory(Adapter)
endif()
