/**
* @file isa-l.h
* @brief Include for ISA-L library
*/

#ifndef _ISAL_H_
#define _ISAL_H_

#define ISAL_MAJOR_VERSION 2 
#define ISAL_MINOR_VERSION 32 
#define ISAL_PATCH_VERSION 0 
#define ISAL_MAKE_VERSION(maj, min, patch) ((maj) * 0x10000 + (min) * 0x100 + (patch))
#define ISAL_VERSION ISAL_MAKE_VERSION(ISAL_MAJOR_VERSION, ISAL_MINOR_VERSION, ISAL_PATCH_VERSION)

#ifndef RC_INVOKED
#include <include/crc.h>
#include <include/crc64.h>
#include <include/erasure_code.h>
#include <include/gf_vect_mul.h>
#include <include/igzip_lib.h>
#include <include/isal_api.h>
#include <include/mem_routines.h>
#include <include/raid.h>
#endif // RC_INVOKED
#endif //_ISAL_H_
