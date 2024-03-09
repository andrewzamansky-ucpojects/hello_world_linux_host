/*
 * file : _project_defines.h
 *
 *
 */

#ifndef _project_defines_H
#define _project_defines_H

#include "project_config.h"
#include <stddef.h> // include for NULL


#ifdef __cplusplus
	#define  EXTERN_C_FUNCTION    extern "C"
#else
	#define  EXTERN_C_FUNCTION
#endif




#define CRITICAL_ERROR(str)   { while(1);}


#endif /* */
