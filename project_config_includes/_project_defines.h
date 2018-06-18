/*
 * file : project_defines.h
 *
 *
 *
 *
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


#define OS_TICK_IN_MICRO_SEC		1000


#define I2S_BUFF_LEN 		512
#define LATENCY_LENGTH		64
#define	NUM_OF_BYTES_PER_AUDIO_WORD		2// 2- 16bits , 4- 32bits


#define CRITICAL_ERROR(str)   {while(1);}



/***********************************/

#endif /* */
