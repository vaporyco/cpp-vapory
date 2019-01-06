function(vap_apply TARGET REQUIRED)
	find_package (Miniupnpc 1.8.2013)
	vap_show_dependency(MINIUPNPC miniupnpc)
	if (MINIUPNPC AND MINIUPNPC_FOUND)
		target_include_directories(${TARGET} SYSTEM PRIVATE ${MINIUPNPC_INCLUDE_DIRS})
		target_link_libraries(${TARGET} ${MINIUPNPC_LIBRARIES})
		target_compile_definitions(${TARGET} PUBLIC VAP_MINIUPNPC)
	elseif (NOT ${REQUIRED} STREQUAL "OPTIONAL")
		message(FATAL_ERROR "Miniupnpc library not found")
	endif()
endfunction()
