#pragma once

#ifndef WIN32
#define WIN32
#endif

#ifndef LIBSSH2_WIN32
#define LIBSSH2_WIN32
#endif

#ifndef _CRT_SECURE_NO_DEPRECATE
#define _CRT_SECURE_NO_DEPRECATE 1
#endif

#include <winsock2.h>
#include <mswsock.h>
#include <ws2tcpip.h>


/* Define to 1 if you have the <fcntl.h> header file. */
#define HAVE_FCNTL_H 1

/* use FIONBIO for non-blocking sockets */
#undef HAVE_FIONBIO

/* Define to 1 if you have the `gettimeofday' function. */
#undef HAVE_GETTIMEOFDAY

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* use ioctlsocket() for non-blocking sockets */
#define HAVE_IOCTLSOCKET 1

/* use IoctlSocket() for non-blocking sockets */
#undef HAVE_IOCTLSOCKET_CASE

/* Define to 1 if the compiler supports the 'long long' data type. */
#define HAVE_LONGLONG 1

/* use O_NONBLOCK for non-blocking sockets */
#undef HAVE_O_NONBLOCK

/* Define to 1 if you have the `poll' function. */
#undef HAVE_POLL

/* Define to 1 if you have the select function. */
#define HAVE_SELECT 1

/* use SO_NONBLOCK for non-blocking sockets */
#undef HAVE_SO_NONBLOCK

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdio.h> header file. */
#define HAVE_STDIO_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the `strtoll' function. */
#define HAVE_STRTOLL 1

/* Define to 1 if you have the <unistd.h> header file. */
#undef HAVE_UNISTD_H

/* Define to 1 if you have the <windows.h> header file. */
#define HAVE_WINDOWS_H 1

/* Define to 1 if you have the <winsock2.h> header file. */
#define HAVE_WINSOCK2_H 1

/* Define to 1 if you have the <ws2tcpip.h> header file. */
#define HAVE_WS2TCPIP_H 1

#include "libssh2_cfg.h"


#if _MSC_VER < 1500
#define vsnprintf _vsnprintf
#endif

#if _MSC_VER < 1900
#define snprintf _snprintf
#define strdup _strdup
#define strncasecmp _strnicmp
#define strcasecmp _stricmp
#endif

