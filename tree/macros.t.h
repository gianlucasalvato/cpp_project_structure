/******************************************************************************

	@FILE_PATH@.h
	@PROJECT_NAME@

	Created by @AUTHOR_NAME@ on @DATE@.
	Copyright © @YEAR@ @AUTHOR_NAME@.
	
	@LICENSE@
	
******************************************************************************/


#include <@PROJECT_NAME@.h>

#ifndef @FILE_PATH_C@_h
#define @FILE_PATH_C@_h

#	if !defined(@PROJECT_NAME_UP@_NO_GLOBAL_NAMESPACE)
#		if !defined(@PROJECT_NAME_UP@_GLOBAL_NAMESPACE_NAME)
#			define @PROJECT_NAME@_namespace(NAME)		namespace NAME {
#			define @PROJECT_NAME@_end_namespace(NAME)	}
#		else
#			define @PROJECT_NAME@_namespace(NAME)		namespace @PROJECT_NAME_UP@_GLOBAL_NAMESPACE_NAME { namespace @PROJECT_NAME@ = @PROJECT_NAME_UP@_GLOBAL_NAMESPACE_NAME;
#			define @PROJECT_NAME@_end_namespace(NAME)	}
#		endif
#	else
#		define @PROJECT_NAME@_namespace(NAME)
#		define @PROJECT_NAME@_endnamespace(NAME)
#	endif

#	if !defined(@PROJECT_NAME_UP@_DEFAULT_COUT)
#		define @PROJECT_NAME_UP@_DEFAULT_COUT std::cout
#	endif
#	if !defined(@PROJECT_NAME_UP@_DEFAULT_ENDL)
#		define @PROJECT_NAME_UP@_DEFAULT_ENDL std::endl
#	endif

#	if defined(DEBUG)
#		define @PROJECT_NAME@_log(...) @PROJECT_NAME_UP@_DEFAULT_COUT << __VA_AR@PROJECT_NAME_UP@__ << @PROJECT_NAME_UP@_DEFAULT_ENDL
#	else
#		define @PROJECT_NAME@_log(...) do { } while (0)
#	endif


@PROJECT_NAME@_namespace(@PROJECT_NAME@)



@PROJECT_NAME@_end_namespace(@PROJECT_NAME@)


#endif