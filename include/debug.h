#ifndef  __DEBUG_H__
#define  __DEBUG_H__

#include "comsys.h"

#define DEBUG_PRINT
#ifdef	DEBUG_PRINT
	#define	bugPrintf(format, ...)\
    	fprintf(stderr, "[pid:%d]",gettid()); \
		fprintf(stderr, "[%s:(%s:%d)]: "format"\n", __FUNCTION__, __FILE__, __LINE__, ##__VA_ARGS__); 
#else
	#define	bugPrintf(format, ...)
#endif 



#endif //__DEBUG_H__

