// SAM

#ifndef PY_SSIZE_T_CLEAN
#define PY_SSIZE_T_CLEAN
#endif  PY_SSIZE_T_CLEAN 
#if defined(CYTHON_LIMITED_API) && 0
  #ifndef Py_LIMITED_API
    #if CYTHON_LIMITED_API+0 > 0x03030000
      #define Py_LIMITED_API CYTHON_LIMITED_API
    #else
      #define Py_LIMITED_API 0x03030000
    #endif
  #endif
#endif

#include "Python.h"
#ifndef Py_PYTHON_H
    #error Python headers needed to compile C extensions, please install development version of Python.
#elif PY_VERSION_HEX < 0x02070000 || (0x03000000 <= PY_VERSION_HEX && PY_VERSION_HEX < 0x03030000)
    #error Cython requires Python 2.7+ or Python 3.3+.
#else
#if defined(CYTHON_LIMITED_API) && CYTHON_LIMITED_API
#define __PYX_EXTRA_ABI_MODULE_NAME "limited"
#else
#define __PYX_EXTRA_ABI_MODULE_NAME ""
#endif
#define CYTHON_ABI "3_0_11" __PYX_EXTRA_ABI_MODULE_NAME
#define __PYX_ABI_MODULE_NAME "_cython_" CYTHON_ABI
#define __PYX_TYPE_MODULE_PREFIX __PYX_ABI_MODULE_NAME "."
#define CYTHON_HEX_VERSION 0x03000BF0
#define CYTHON_FUTURE_DIVISION 1
#include <stddef.h>
#ifndef offsetof
  #define offsetof(type, member) ( (size_t) & ((type*)0) -> member )
#endif
#if !defined(_WIN32) && !defined(WIN32) && !defined(MS_WINDOWS)
  #ifndef __stdcall
    #define __stdcall
  #endif
  #ifndef __cdecl
    #define __cdecl
  #endif
  #ifndef __fastcall
    #define __fastcall
  #endif
#endif
#ifndef DL_IMPORT
  #define DL_IMPORT(t) t
#endif
#ifndef DL_EXPORT
  #define DL_EXPORT(t) t
#endif
#define __PYX_COMMA ,
#ifndef HAVE_LONG_LONG
  #define HAVE_LONG_LONG
#endif
#ifndef PY_LONG_LONG
  #define PY_LONG_LONG LONG_LONG
#endif
#ifndef Py_HUGE_VAL
  #define Py_HUGE_VAL HUGE_VAL
#endif
#define __PYX_LIMITED_VERSION_HEX PY_VERSION_HEX
#if defined(GRAALVM_PYTHON)
  /* For very preliminary testing purposes. Most variables are set the same as PyPy.
     The existence of this section does not imply that anything works or is even tested */
  #define CYTHON_COMPILING_IN_PYPY 0
  #define CYTHON_COMPILING_IN_CPYTHON 0
  #define CYTHON_COMPILING_IN_LIMITED_API 0
  #define CYTHON_COMPILING_IN_GRAAL 1
  #define CYTHON_COMPILING_IN_NOGIL 0
  #undef CYTHON_USE_TYPE_SLOTS
  #define CYTHON_USE_TYPE_SLOTS 0
  #undef CYTHON_USE_TYPE_SPECS
  #define CYTHON_USE_TYPE_SPECS 0
  #undef CYTHON_USE_PYTYPE_LOOKUP
  #define CYTHON_USE_PYTYPE_LOOKUP 0
  #if PY_VERSION_HEX < 0x03050000
    #undef CYTHON_USE_ASYNC_SLOTS
    #define CYTHON_USE_ASYNC_SLOTS 0
  #elif !defined(CYTHON_USE_ASYNC_SLOTS)
    #define CYTHON_USE_ASYNC_SLOTS 1
  #endif
  #undef CYTHON_USE_PYLIST_INTERNALS
  #define CYTHON_USE_PYLIST_INTERNALS 0
  #undef CYTHON_USE_UNICODE_INTERNALS
  #define CYTHON_USE_UNICODE_INTERNALS 0
  #undef CYTHON_USE_UNICODE_WRITER
  #define CYTHON_USE_UNICODE_WRITER 0
  #undef CYTHON_USE_PYLONG_INTERNALS
  #define CYTHON_USE_PYLONG_INTERNALS 0
  #undef CYTHON_AVOID_BORROWED_REFS
  #define CYTHON_AVOID_BORROWED_REFS 1
  #undef CYTHON_ASSUME_SAFE_MACROS
  #define CYTHON_ASSUME_SAFE_MACROS 0
  #undef CYTHON_UNPACK_METHODS
  #define CYTHON_UNPACK_METHODS 0
  #undef CYTHON_FAST_THREAD_STATE
  #define CYTHON_FAST_THREAD_STATE 0
  #undef CYTHON_FAST_GIL
  #define CYTHON_FAST_GIL 0
  #undef CYTHON_METH_FASTCALL
  #define CYTHON_METH_FASTCALL 0
  #undef CYTHON_FAST_PYCALL
  #define CYTHON_FAST_PYCALL 0
  #ifndef CYTHON_PEP487_INIT_SUBCLASS
    #define CYTHON_PEP487_INIT_SUBCLASS (PY_MAJOR_VERSION >= 3)
  #endif
  #undef CYTHON_PEP489_MULTI_PHASE_INIT
  #define CYTHON_PEP489_MULTI_PHASE_INIT 1
  #undef CYTHON_USE_MODULE_STATE
  #define CYTHON_USE_MODULE_STATE 0
  #undef CYTHON_USE_TP_FINALIZE
  #define CYTHON_USE_TP_FINALIZE 0
  #undef CYTHON_USE_DICT_VERSIONS
  #define CYTHON_USE_DICT_VERSIONS 0
  #undef CYTHON_USE_EXC_INFO_STACK
  #define CYTHON_USE_EXC_INFO_STACK 0
  #ifndef CYTHON_UPDATE_DESCRIPTOR_DOC
    #define CYTHON_UPDATE_DESCRIPTOR_DOC 0
  #endif
  #undef CYTHON_USE_FREELISTS
  #define CYTHON_USE_FREELISTS 0
#elif defined(PYPY_VERSION)
  #define CYTHON_COMPILING_IN_PYPY 1
  #define CYTHON_COMPILING_IN_CPYTHON 0
  #define CYTHON_COMPILING_IN_LIMITED_API 0
  #define CYTHON_COMPILING_IN_GRAAL 0
  #define CYTHON_COMPILING_IN_NOGIL 0
  #undef CYTHON_USE_TYPE_SLOTS
  #define CYTHON_USE_TYPE_SLOTS 0
  #ifndef CYTHON_USE_TYPE_SPECS
    #define CYTHON_USE_TYPE_SPECS 0
  #endif
  #undef CYTHON_USE_PYTYPE_LOOKUP
  #define CYTHON_USE_PYTYPE_LOOKUP 0
  #if PY_VERSION_HEX < 0x03050000
    #undef CYTHON_USE_ASYNC_SLOTS
    #define CYTHON_USE_ASYNC_SLOTS 0
  #elif !defined(CYTHON_USE_ASYNC_SLOTS)
    #define CYTHON_USE_ASYNC_SLOTS 1
  #endif
  #undef CYTHON_USE_PYLIST_INTERNALS
  #define CYTHON_USE_PYLIST_INTERNALS 0
  #undef CYTHON_USE_UNICODE_INTERNALS
  #define CYTHON_USE_UNICODE_INTERNALS 0
  #undef CYTHON_USE_UNICODE_WRITER
  #define CYTHON_USE_UNICODE_WRITER 0
  #undef CYTHON_USE_PYLONG_INTERNALS
  #define CYTHON_USE_PYLONG_INTERNALS 0
  #undef CYTHON_AVOID_BORROWED_REFS
  #define CYTHON_AVOID_BORROWED_REFS 1
  #undef CYTHON_ASSUME_SAFE_MACROS
  #define CYTHON_ASSUME_SAFE_MACROS 0
  #undef CYTHON_UNPACK_METHODS
  #define CYTHON_UNPACK_METHODS 0
  #undef CYTHON_FAST_THREAD_STATE
  #define CYTHON_FAST_THREAD_STATE 0
  #undef CYTHON_FAST_GIL
  #define CYTHON_FAST_GIL 0
  #undef CYTHON_METH_FASTCALL
  #define CYTHON_METH_FASTCALL 0
  #undef CYTHON_FAST_PYCALL
  #define CYTHON_FAST_PYCALL 0
  #ifndef CYTHON_PEP487_INIT_SUBCLASS
    #define CYTHON_PEP487_INIT_SUBCLASS (PY_MAJOR_VERSION >= 3)
  #endif
  #if PY_VERSION_HEX < 0x03090000
    #undef CYTHON_PEP489_MULTI_PHASE_INIT
    #define CYTHON_PEP489_MULTI_PHASE_INIT 0
  #elif !defined(CYTHON_PEP489_MULTI_PHASE_INIT)
    #define CYTHON_PEP489_MULTI_PHASE_INIT 1
  #endif
  #undef CYTHON_USE_MODULE_STATE
  #define CYTHON_USE_MODULE_STATE 0
  #undef CYTHON_USE_TP_FINALIZE
  #define CYTHON_USE_TP_FINALIZE (PY_VERSION_HEX >= 0x030400a1 && PYPY_VERSION_NUM >= 0x07030C00)
  #undef CYTHON_USE_DICT_VERSIONS
  #define CYTHON_USE_DICT_VERSIONS 0
  #undef CYTHON_USE_EXC_INFO_STACK
  #define CYTHON_USE_EXC_INFO_STACK 0
  #ifndef CYTHON_UPDATE_DESCRIPTOR_DOC
    #define CYTHON_UPDATE_DESCRIPTOR_DOC 0
  #endif
  #undef CYTHON_USE_FREELISTS
  #define CYTHON_USE_FREELISTS 0
#elif defined(CYTHON_LIMITED_API)
  #ifdef Py_LIMITED_API
    #undef __PYX_LIMITED_VERSION_HEX
    #define __PYX_LIMITED_VERSION_HEX Py_LIMITED_API
  #endif
  #define CYTHON_COMPILING_IN_PYPY 0
  #define CYTHON_COMPILING_IN_CPYTHON 0
  #define CYTHON_COMPILING_IN_LIMITED_API 1
  #define CYTHON_COMPILING_IN_GRAAL 0
  #define CYTHON_COMPILING_IN_NOGIL 0
  #undef CYTHON_CLINE_IN_TRACEBACK
  #define CYTHON_CLINE_IN_TRACEBACK 0
  #undef CYTHON_USE_TYPE_SLOTS
  #define CYTHON_USE_TYPE_SLOTS 0
  #undef CYTHON_USE_TYPE_SPECS
  #define CYTHON_USE_TYPE_SPECS 1
  #undef CYTHON_USE_PYTYPE_LOOKUP
  #define CYTHON_USE_PYTYPE_LOOKUP 0
  #undef CYTHON_USE_ASYNC_SLOTS
  #define CYTHON_USE_ASYNC_SLOTS 0
  #undef CYTHON_USE_PYLIST_INTERNALS
  #define CYTHON_USE_PYLIST_INTERNALS 0
  #undef CYTHON_USE_UNICODE_INTERNALS
  #define CYTHON_USE_UNICODE_INTERNALS 0
  #ifndef CYTHON_USE_UNICODE_WRITER
    #define CYTHON_USE_UNICODE_WRITER 0
  #endif
  #undef CYTHON_USE_PYLONG_INTERNALS
  #define CYTHON_USE_PYLONG_INTERNALS 0
  #ifndef CYTHON_AVOID_BORROWED_REFS
    #define CYTHON_AVOID_BORROWED_REFS 0
  #endif
  #undef CYTHON_ASSUME_SAFE_MACROS
  #define CYTHON_ASSUME_SAFE_MACROS 0
  #undef CYTHON_UNPACK_METHODS
  #define CYTHON_UNPACK_METHODS 0
  #undef CYTHON_FAST_THREAD_STATE
  #define CYTHON_FAST_THREAD_STATE 0
  #undef CYTHON_FAST_GIL
  #define CYTHON_FAST_GIL 0
  #undef CYTHON_METH_FASTCALL
  #define CYTHON_METH_FASTCALL 0
  #undef CYTHON_FAST_PYCALL
  #define CYTHON_FAST_PYCALL 0
  #ifndef CYTHON_PEP487_INIT_SUBCLASS
    #define CYTHON_PEP487_INIT_SUBCLASS 1
  #endif
  #undef CYTHON_PEP489_MULTI_PHASE_INIT
  #define CYTHON_PEP489_MULTI_PHASE_INIT 0
  #undef CYTHON_USE_MODULE_STATE
  #define CYTHON_USE_MODULE_STATE 1
  #ifndef CYTHON_USE_TP_FINALIZE
    #define CYTHON_USE_TP_FINALIZE 0
  #endif
  #undef CYTHON_USE_DICT_VERSIONS
  #define CYTHON_USE_DICT_VERSIONS 0
  #undef CYTHON_USE_EXC_INFO_STACK
  #define CYTHON_USE_EXC_INFO_STACK 0
  #ifndef CYTHON_UPDATE_DESCRIPTOR_DOC
    #define CYTHON_UPDATE_DESCRIPTOR_DOC 0
  #endif
  #undef CYTHON_USE_FREELISTS
  #define CYTHON_USE_FREELISTS 0
#elif defined(Py_GIL_DISABLED) || defined(Py_NOGIL)
  #define CYTHON_COMPILING_IN_PYPY 0
  #define CYTHON_COMPILING_IN_CPYTHON 0
  #define CYTHON_COMPILING_IN_LIMITED_API 0
  #define CYTHON_COMPILING_IN_GRAAL 0
  #define CYTHON_COMPILING_IN_NOGIL 1
  #ifndef CYTHON_USE_TYPE_SLOTS
    #define CYTHON_USE_TYPE_SLOTS 1
  #endif
  #ifndef CYTHON_USE_TYPE_SPECS
    #define CYTHON_USE_TYPE_SPECS 0
  #endif
  #undef CYTHON_USE_PYTYPE_LOOKUP
  #define CYTHON_USE_PYTYPE_LOOKUP 0
  #ifndef CYTHON_USE_ASYNC_SLOTS
    #define CYTHON_USE_ASYNC_SLOTS 1
  #endif
  #ifndef CYTHON_USE_PYLONG_INTERNALS
    #define CYTHON_USE_PYLONG_INTERNALS 0
  #endif
  #undef CYTHON_USE_PYLIST_INTERNALS
  #define CYTHON_USE_PYLIST_INTERNALS 0
  #ifndef CYTHON_USE_UNICODE_INTERNALS
    #define CYTHON_USE_UNICODE_INTERNALS 1
  #endif
  #undef CYTHON_USE_UNICODE_WRITER
  #define CYTHON_USE_UNICODE_WRITER 0
  #ifndef CYTHON_AVOID_BORROWED_REFS
    #define CYTHON_AVOID_BORROWED_REFS 0
  #endif
  #ifndef CYTHON_ASSUME_SAFE_MACROS
    #define CYTHON_ASSUME_SAFE_MACROS 1
  #endif
  #ifndef CYTHON_UNPACK_METHODS
    #define CYTHON_UNPACK_METHODS 1
  #endif
  #undef CYTHON_FAST_THREAD_STATE
  #define CYTHON_FAST_THREAD_STATE 0
  #undef CYTHON_FAST_GIL
  #define CYTHON_FAST_GIL 0
  #ifndef CYTHON_METH_FASTCALL
    #define CYTHON_METH_FASTCALL 1
  #endif
  #undef CYTHON_FAST_PYCALL
  #define CYTHON_FAST_PYCALL 0
  #ifndef CYTHON_PEP487_INIT_SUBCLASS
    #define CYTHON_PEP487_INIT_SUBCLASS 1
  #endif
  #ifndef CYTHON_PEP489_MULTI_PHASE_INIT
    #define CYTHON_PEP489_MULTI_PHASE_INIT 1
  #endif
  #ifndef CYTHON_USE_MODULE_STATE
    #define CYTHON_USE_MODULE_STATE 0
  #endif
  #ifndef CYTHON_USE_TP_FINALIZE
    #define CYTHON_USE_TP_FINALIZE 1
  #endif
  #undef CYTHON_USE_DICT_VERSIONS
  #define CYTHON_USE_DICT_VERSIONS 0
  #undef CYTHON_USE_EXC_INFO_STACK
  #define CYTHON_USE_EXC_INFO_STACK 0
  #ifndef CYTHON_UPDATE_DESCRIPTOR_DOC
    #define CYTHON_UPDATE_DESCRIPTOR_DOC 1
  #endif
  #ifndef CYTHON_USE_FREELISTS
    #define CYTHON_USE_FREELISTS 0
  #endif
#else
  #define CYTHON_COMPILING_IN_PYPY 0
  #define CYTHON_COMPILING_IN_CPYTHON 1
  #define CYTHON_COMPILING_IN_LIMITED_API 0
  #define CYTHON_COMPILING_IN_GRAAL 0
  #define CYTHON_COMPILING_IN_NOGIL 0
  #ifndef CYTHON_USE_TYPE_SLOTS
    #define CYTHON_USE_TYPE_SLOTS 1
  #endif
  #ifndef CYTHON_USE_TYPE_SPECS
    #define CYTHON_USE_TYPE_SPECS 0
  #endif
  #ifndef CYTHON_USE_PYTYPE_LOOKUP
    #define CYTHON_USE_PYTYPE_LOOKUP 1
  #endif
  #if PY_MAJOR_VERSION < 3
    #undef CYTHON_USE_ASYNC_SLOTS
    #define CYTHON_USE_ASYNC_SLOTS 0
  #elif !defined(CYTHON_USE_ASYNC_SLOTS)
    #define CYTHON_USE_ASYNC_SLOTS 1
  #endif
  #ifndef CYTHON_USE_PYLONG_INTERNALS
    #define CYTHON_USE_PYLONG_INTERNALS 1
  #endif
  #ifndef CYTHON_USE_PYLIST_INTERNALS
    #define CYTHON_USE_PYLIST_INTERNALS 1
  #endif
  #ifndef CYTHON_USE_UNICODE_INTERNALS
    #define CYTHON_USE_UNICODE_INTERNALS 1
  #endif
  #if PY_VERSION_HEX < 0x030300F0 || PY_VERSION_HEX >= 0x030B00A2
    #undef CYTHON_USE_UNICODE_WRITER
    #define CYTHON_USE_UNICODE_WRITER 0
  #elif !defined(CYTHON_USE_UNICODE_WRITER)
    #define CYTHON_USE_UNICODE_WRITER 1
  #endif
  #ifndef CYTHON_AVOID_BORROWED_REFS
    #define CYTHON_AVOID_BORROWED_REFS 0
  #endif
  #ifndef CYTHON_ASSUME_SAFE_MACROS
    #define CYTHON_ASSUME_SAFE_MACROS 1
  #endif
  #ifndef CYTHON_UNPACK_METHODS
    #define CYTHON_UNPACK_METHODS 1
  #endif
  #ifndef CYTHON_FAST_THREAD_STATE
    #define CYTHON_FAST_THREAD_STATE 1
  #endif
  #ifndef CYTHON_FAST_GIL
    #define CYTHON_FAST_GIL (PY_MAJOR_VERSION < 3 || PY_VERSION_HEX >= 0x03060000 && PY_VERSION_HEX < 0x030C00A6)
  #endif
  #ifndef CYTHON_METH_FASTCALL
    #define CYTHON_METH_FASTCALL (PY_VERSION_HEX >= 0x030700A1)
  #endif
  #ifndef CYTHON_FAST_PYCALL
    #define CYTHON_FAST_PYCALL 1
  #endif
  #ifndef CYTHON_PEP487_INIT_SUBCLASS
    #define CYTHON_PEP487_INIT_SUBCLASS 1
  #endif
  #if PY_VERSION_HEX < 0x03050000
    #undef CYTHON_PEP489_MULTI_PHASE_INIT
    #define CYTHON_PEP489_MULTI_PHASE_INIT 0
  #elif !defined(CYTHON_PEP489_MULTI_PHASE_INIT)
    #define CYTHON_PEP489_MULTI_PHASE_INIT 1
  #endif
  #ifndef CYTHON_USE_MODULE_STATE
    #define CYTHON_USE_MODULE_STATE 0
  #endif
  #if PY_VERSION_HEX < 0x030400a1
    #undef CYTHON_USE_TP_FINALIZE
    #define CYTHON_USE_TP_FINALIZE 0
  #elif !defined(CYTHON_USE_TP_FINALIZE)
    #define CYTHON_USE_TP_FINALIZE 1
  #endif
  #if PY_VERSION_HEX < 0x030600B1
    #undef CYTHON_USE_DICT_VERSIONS
    #define CYTHON_USE_DICT_VERSIONS 0
  #elif !defined(CYTHON_USE_DICT_VERSIONS)
    #define CYTHON_USE_DICT_VERSIONS  (PY_VERSION_HEX < 0x030C00A5)
  #endif
  #if PY_VERSION_HEX < 0x030700A3
    #undef CYTHON_USE_EXC_INFO_STACK
    #define CYTHON_USE_EXC_INFO_STACK 0
  #elif !defined(CYTHON_USE_EXC_INFO_STACK)
    #define CYTHON_USE_EXC_INFO_STACK 1
  #endif
  #ifndef CYTHON_UPDATE_DESCRIPTOR_DOC
    #define CYTHON_UPDATE_DESCRIPTOR_DOC 1
  #endif
  #ifndef CYTHON_USE_FREELISTS
    #define CYTHON_USE_FREELISTS 1
  #endif
#endif
#if !defined(CYTHON_FAST_PYCCALL)
#define CYTHON_FAST_PYCCALL  (CYTHON_FAST_PYCALL && PY_VERSION_HEX >= 0x030600B1)
#endif
#if !defined(CYTHON_VECTORCALL)
#define CYTHON_VECTORCALL  (CYTHON_FAST_PYCCALL && PY_VERSION_HEX >= 0x030800B1)
#endif
#define CYTHON_BACKPORT_VECTORCALL (CYTHON_METH_FASTCALL && PY_VERSION_HEX < 0x030800B1)
#if CYTHON_USE_PYLONG_INTERNALS
  #if PY_MAJOR_VERSION < 3
    #include "longintrepr.h"
  #endif
  #undef SHIFT
  #undef BASE
  #undef MASK
  #ifdef SIZEOF_VOID_P
    enum { __pyx_check_sizeof_voidp = 1 / (int)(SIZEOF_VOID_P == sizeof(void*)) };
  #endif
#endif
#ifndef __has_attribute
  #define __has_attribute(x) 0
#endif
#ifndef __has_cpp_attribute
  #define __has_cpp_attribute(x) 0
#endif
#ifndef CYTHON_RESTRICT
  #if defined(__GNUC__)
    #define CYTHON_RESTRICT __restrict__
  #elif defined(_MSC_VER) && _MSC_VER >= 1400
    #define CYTHON_RESTRICT __restrict
  #elif defined (__STDC_VERSION__) && __STDC_VERSION__ >= 199901L
    #define CYTHON_RESTRICT restrict
  #else
    #define CYTHON_RESTRICT
  #endif
#endif
#ifndef CYTHON_UNUSED
  #if defined(__cplusplus)
    /* for clang __has_cpp_attribute(maybe_unused) is true even before C++17
     * but leads to warnings with -pedantic, since it is a C++17 feature */
    #if ((defined(_MSVC_LANG) && _MSVC_LANG >= 201703L) || __cplusplus >= 201703L)
      #if __has_cpp_attribute(maybe_unused)
        #define CYTHON_UNUSED [[maybe_unused]]
      #endif
    #endif
  #endif
#endif
#ifndef CYTHON_UNUSED
# if defined(__GNUC__)
#   if !(defined(__cplusplus)) || (__GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4))
#     define CYTHON_UNUSED __attribute__ ((__unused__))
#   else
#     define CYTHON_UNUSED
#   endif
# elif defined(__ICC) || (defined(__INTEL_COMPILER) && !defined(_MSC_VER))
#   define CYTHON_UNUSED __attribute__ ((__unused__))
# else
#   define CYTHON_UNUSED
# endif
#endif
#ifndef CYTHON_UNUSED_VAR
#  if defined(__cplusplus)
     template<class T> void CYTHON_UNUSED_VAR( const T& ) { }
#  else
#    define CYTHON_UNUSED_VAR(x) (void)(x)
#  endif
#endif
#ifndef CYTHON_MAYBE_UNUSED_VAR
  #define CYTHON_MAYBE_UNUSED_VAR(x) CYTHON_UNUSED_VAR(x)
#endif
#ifndef CYTHON_NCP_UNUSED
# if CYTHON_COMPILING_IN_CPYTHON
#  define CYTHON_NCP_UNUSED
# else
#  define CYTHON_NCP_UNUSED CYTHON_UNUSED
# endif
#endif
#ifndef CYTHON_USE_CPP_STD_MOVE
  #if defined(__cplusplus) && (\
    __cplusplus >= 201103L || (defined(_MSC_VER) && _MSC_VER >= 1600))
    #define CYTHON_USE_CPP_STD_MOVE 1
  #else
    #define CYTHON_USE_CPP_STD_MOVE 0
  #endif
#endif
#define __Pyx_void_to_None(void_result) ((void)(void_result), Py_INCREF(Py_None), Py_None)
#ifdef _MSC_VER
    #ifndef _MSC_STDINT_H_
        #if _MSC_VER < 1300
            typedef unsigned char     uint8_t;
            typedef unsigned short    uint16_t;
            typedef unsigned int      uint32_t;
        #else
            typedef unsigned __int8   uint8_t;
            typedef unsigned __int16  uint16_t;
            typedef unsigned __int32  uint32_t;
        #endif
    #endif
    #if _MSC_VER < 1300
        #ifdef _WIN64
            typedef unsigned long long  __pyx_uintptr_t;
        #else
            typedef unsigned int        __pyx_uintptr_t;
        #endif
    #else
        #ifdef _WIN64
            typedef unsigned __int64    __pyx_uintptr_t;
        #else
            typedef unsigned __int32    __pyx_uintptr_t;
        #endif
    #endif
#else
    #include <stdint.h>
    typedef uintptr_t  __pyx_uintptr_t;
#endif
#ifndef CYTHON_FALLTHROUGH
  #if defined(__cplusplus)
    /* for clang __has_cpp_attribute(fallthrough) is true even before C++17
     * but leads to warnings with -pedantic, since it is a C++17 feature */
    #if ((defined(_MSVC_LANG) && _MSVC_LANG >= 201703L) || __cplusplus >= 201703L)
      #if __has_cpp_attribute(fallthrough)
        #define CYTHON_FALLTHROUGH [[fallthrough]]
      #endif
    #endif
    #ifndef CYTHON_FALLTHROUGH
      #if __has_cpp_attribute(clang::fallthrough)
        #define CYTHON_FALLTHROUGH [[clang::fallthrough]]
      #elif __has_cpp_attribute(gnu::fallthrough)
        #define CYTHON_FALLTHROUGH [[gnu::fallthrough]]
      #endif
    #endif
  #endif
  #ifndef CYTHON_FALLTHROUGH
    #if __has_attribute(fallthrough)
      #define CYTHON_FALLTHROUGH __attribute__((fallthrough))
    #else
      #define CYTHON_FALLTHROUGH
    #endif
  #endif
  #if defined(__clang__) && defined(__apple_build_version__)
    #if __apple_build_version__ < 7000000
      #undef  CYTHON_FALLTHROUGH
      #define CYTHON_FALLTHROUGH
    #endif
  #endif
#endif
#ifdef __cplusplus
  template <typename T>
  struct __PYX_IS_UNSIGNED_IMPL {static const bool value = T(0) < T(-1);};
  #define __PYX_IS_UNSIGNED(type) (__PYX_IS_UNSIGNED_IMPL<type>::value)
#else
  #define __PYX_IS_UNSIGNED(type) (((type)-1) > 0)
#endif
#if CYTHON_COMPILING_IN_PYPY == 1
  #define __PYX_NEED_TP_PRINT_SLOT  (PY_VERSION_HEX >= 0x030800b4 && PY_VERSION_HEX < 0x030A0000)
#else
  #define __PYX_NEED_TP_PRINT_SLOT  (PY_VERSION_HEX >= 0x030800b4 && PY_VERSION_HEX < 0x03090000)
#endif
#define __PYX_REINTERPRET_FUNCION(func_pointer, other_pointer) ((func_pointer)(void(*)(void))(other_pointer))

#ifndef CYTHON_INLINE
  #if defined(__clang__)
    #define CYTHON_INLINE __inline__ __attribute__ ((__unused__))
  #elif defined(__GNUC__)
    #define CYTHON_INLINE __inline__
  #elif defined(_MSC_VER)
    #define CYTHON_INLINE __inline
  #elif defined (__STDC_VERSION__) && __STDC_VERSION__ >= 199901L
    #define CYTHON_INLINE inline
  #else
    #define CYTHON_INLINE
  #endif
#endif

#define __PYX_BUILD_PY_SSIZE_T "n"
#define CYTHON_FORMAT_SSIZE_T "z"
#if PY_MAJOR_VERSION < 3
  #define __Pyx_BUILTIN_MODULE_NAME "__builtin__"
  #define __Pyx_DefaultClassType PyClass_Type
  #define __Pyx_PyCode_New(a, p, k, l, s, f, code, c, n, v, fv, cell, fn, name, fline, lnos)\
          PyCode_New(a+k, l, s, f, code, c, n, v, fv, cell, fn, name, fline, lnos)
#else
  #define __Pyx_BUILTIN_MODULE_NAME "builtins"
  #define __Pyx_DefaultClassType PyType_Type
#if CYTHON_COMPILING_IN_LIMITED_API
    static CYTHON_INLINE PyObject* __Pyx_PyCode_New(int a, int p, int k, int l, int s, int f,
                                                    PyObject *code, PyObject *c, PyObject* n, PyObject *v,
                                                    PyObject *fv, PyObject *cell, PyObject* fn,
                                                    PyObject *name, int fline, PyObject *lnos) {
        PyObject *exception_table = NULL;
        PyObject *types_module=NULL, *code_type=NULL, *result=NULL;
        #if __PYX_LIMITED_VERSION_HEX < 0x030B0000
        PyObject *version_info;
        PyObject *py_minor_version = NULL;
        #endif
        long minor_version = 0;
        PyObject *type, *value, *traceback;
        PyErr_Fetch(&type, &value, &traceback);
        #if __PYX_LIMITED_VERSION_HEX >= 0x030B0000
        minor_version = 11;
        #else
        if (!(version_info = PySys_GetObject("version_info"))) goto end;
        if (!(py_minor_version = PySequence_GetItem(version_info, 1))) goto end;
        minor_version = PyLong_AsLong(py_minor_version);
        Py_DECREF(py_minor_version);
        if (minor_version == -1 && PyErr_Occurred()) goto end;
        #endif
        if (!(types_module = PyImport_ImportModule("types"))) goto end;
        if (!(code_type = PyObject_GetAttrString(types_module, "CodeType"))) goto end;
        if (minor_version <= 7) {
            (void)p;
            result = PyObject_CallFunction(code_type, "iiiiiOOOOOOiOO", a, k, l, s, f, code,
                          c, n, v, fn, name, fline, lnos, fv, cell);
        } else if (minor_version <= 10) {
            result = PyObject_CallFunction(code_type, "iiiiiiOOOOOOiOO", a,p, k, l, s, f, code,
                          c, n, v, fn, name, fline, lnos, fv, cell);
        } else {
            if (!(exception_table = PyBytes_FromStringAndSize(NULL, 0))) goto end;
            result = PyObject_CallFunction(code_type, "iiiiiiOOOOOOOiOO", a,p, k, l, s, f, code,
                          c, n, v, fn, name, name, fline, lnos, exception_table, fv, cell);
        }
    end:
        Py_XDECREF(code_type);
        Py_XDECREF(exception_table);
        Py_XDECREF(types_module);
        if (type) {
            PyErr_Restore(type, value, traceback);
        }
        return result;
    }
    #ifndef CO_OPTIMIZED
    #define CO_OPTIMIZED 0x0001
    #endif
    #ifndef CO_NEWLOCALS
    #define CO_NEWLOCALS 0x0002
    #endif
    #ifndef CO_VARARGS
    #define CO_VARARGS 0x0004
    #endif
    #ifndef CO_VARKEYWORDS
    #define CO_VARKEYWORDS 0x0008
    #endif
    #ifndef CO_ASYNC_GENERATOR
    #define CO_ASYNC_GENERATOR 0x0200
    #endif
    #ifndef CO_GENERATOR
    #define CO_GENERATOR 0x0020
    #endif
    #ifndef CO_COROUTINE
    #define CO_COROUTINE 0x0080
    #endif
#elif PY_VERSION_HEX >= 0x030B0000
  static CYTHON_INLINE PyCodeObject* __Pyx_PyCode_New(int a, int p, int k, int l, int s, int f,
                                                    PyObject *code, PyObject *c, PyObject* n, PyObject *v,
                                                    PyObject *fv, PyObject *cell, PyObject* fn,
                                                    PyObject *name, int fline, PyObject *lnos) {
    PyCodeObject *result;
    PyObject *empty_bytes = PyBytes_FromStringAndSize("", 0);
    if (!empty_bytes) return NULL;
    result =
      #if PY_VERSION_HEX >= 0x030C0000
        PyUnstable_Code_NewWithPosOnlyArgs
      #else
        PyCode_NewWithPosOnlyArgs
      #endif
        (a, p, k, l, s, f, code, c, n, v, fv, cell, fn, name, name, fline, lnos, empty_bytes);
    Py_DECREF(empty_bytes);
    return result;
  }
#elif PY_VERSION_HEX >= 0x030800B2 && !CYTHON_COMPILING_IN_PYPY
  #define __Pyx_PyCode_New(a, p, k, l, s, f, code, c, n, v, fv, cell, fn, name, fline, lnos)\
          PyCode_NewWithPosOnlyArgs(a, p, k, l, s, f, code, c, n, v, fv, cell, fn, name, fline, lnos)
#else
  #define __Pyx_PyCode_New(a, p, k, l, s, f, code, c, n, v, fv, cell, fn, name, fline, lnos)\
          PyCode_New(a, k, l, s, f, code, c, n, v, fv, cell, fn, name, fline, lnos)
#endif
#endif
#if PY_VERSION_HEX >= 0x030900A4 || defined(Py_IS_TYPE)
  #define __Pyx_IS_TYPE(ob, type) Py_IS_TYPE(ob, type)
#else
  #define __Pyx_IS_TYPE(ob, type) (((const PyObject*)ob)->ob_type == (type))
#endif
#if PY_VERSION_HEX >= 0x030A00B1 || defined(Py_Is)
  #define __Pyx_Py_Is(x, y)  Py_Is(x, y)
#else
  #define __Pyx_Py_Is(x, y) ((x) == (y))
#endif
#if PY_VERSION_HEX >= 0x030A00B1 || defined(Py_IsNone)
  #define __Pyx_Py_IsNone(ob) Py_IsNone(ob)
#else
  #define __Pyx_Py_IsNone(ob) __Pyx_Py_Is((ob), Py_None)
#endif
#if PY_VERSION_HEX >= 0x030A00B1 || defined(Py_IsTrue)
  #define __Pyx_Py_IsTrue(ob) Py_IsTrue(ob)
#else
  #define __Pyx_Py_IsTrue(ob) __Pyx_Py_Is((ob), Py_True)
#endif
#if PY_VERSION_HEX >= 0x030A00B1 || defined(Py_IsFalse)
  #define __Pyx_Py_IsFalse(ob) Py_IsFalse(ob)
#else
  #define __Pyx_Py_IsFalse(ob) __Pyx_Py_Is((ob), Py_False)
#endif
#define __Pyx_NoneAsNull(obj)  (__Pyx_Py_IsNone(obj) ? NULL : (obj))
#if PY_VERSION_HEX >= 0x030900F0 && !CYTHON_COMPILING_IN_PYPY
  #define __Pyx_PyObject_GC_IsFinalized(o) PyObject_GC_IsFinalized(o)
#else
  #define __Pyx_PyObject_GC_IsFinalized(o) _PyGC_FINALIZED(o)
#endif
#ifndef CO_COROUTINE
  #define CO_COROUTINE 0x80
#endif
#ifndef CO_ASYNC_GENERATOR
  #define CO_ASYNC_GENERATOR 0x200
#endif
#ifndef Py_TPFLAGS_CHECKTYPES
  #define Py_TPFLAGS_CHECKTYPES 0
#endif
#ifndef Py_TPFLAGS_HAVE_INDEX
  #define Py_TPFLAGS_HAVE_INDEX 0
#endif
#ifndef Py_TPFLAGS_HAVE_NEWBUFFER
  #define Py_TPFLAGS_HAVE_NEWBUFFER 0
#endif
#ifndef Py_TPFLAGS_HAVE_FINALIZE
  #define Py_TPFLAGS_HAVE_FINALIZE 0
#endif
#ifndef Py_TPFLAGS_SEQUENCE
  #define Py_TPFLAGS_SEQUENCE 0
#endif
#ifndef Py_TPFLAGS_MAPPING
  #define Py_TPFLAGS_MAPPING 0
#endif
#ifndef METH_STACKLESS
  #define METH_STACKLESS 0
#endif
#if PY_VERSION_HEX <= 0x030700A3 || !defined(METH_FASTCALL)
  #ifndef METH_FASTCALL
     #define METH_FASTCALL 0x80
  #endif
  typedef PyObject *(*__Pyx_PyCFunctionFast) (PyObject *self, PyObject *const *args, Py_ssize_t nargs);
  typedef PyObject *(*__Pyx_PyCFunctionFastWithKeywords) (PyObject *self, PyObject *const *args,
                                                          Py_ssize_t nargs, PyObject *kwnames);
#else
  #if PY_VERSION_HEX >= 0x030d00A4
  #  define __Pyx_PyCFunctionFast PyCFunctionFast
  #  define __Pyx_PyCFunctionFastWithKeywords PyCFunctionFastWithKeywords
  #else
  #  define __Pyx_PyCFunctionFast _PyCFunctionFast
  #  define __Pyx_PyCFunctionFastWithKeywords _PyCFunctionFastWithKeywords
  #endif
#endif
#if CYTHON_METH_FASTCALL
  #define __Pyx_METH_FASTCALL METH_FASTCALL
  #define __Pyx_PyCFunction_FastCall __Pyx_PyCFunctionFast
  #define __Pyx_PyCFunction_FastCallWithKeywords __Pyx_PyCFunctionFastWithKeywords
#else
  #define __Pyx_METH_FASTCALL METH_VARARGS
  #define __Pyx_PyCFunction_FastCall PyCFunction
  #define __Pyx_PyCFunction_FastCallWithKeywords PyCFunctionWithKeywords
#endif
#if CYTHON_VECTORCALL
  #define __pyx_vectorcallfunc vectorcallfunc
  #define __Pyx_PY_VECTORCALL_ARGUMENTS_OFFSET  PY_VECTORCALL_ARGUMENTS_OFFSET
  #define __Pyx_PyVectorcall_NARGS(n)  PyVectorcall_NARGS((size_t)(n))
#elif CYTHON_BACKPORT_VECTORCALL
  typedef PyObject *(*__pyx_vectorcallfunc)(PyObject *callable, PyObject *const *args,
                                            size_t nargsf, PyObject *kwnames);
  #define __Pyx_PY_VECTORCALL_ARGUMENTS_OFFSET  ((size_t)1 << (8 * sizeof(size_t) - 1))
  #define __Pyx_PyVectorcall_NARGS(n)  ((Py_ssize_t)(((size_t)(n)) & ~__Pyx_PY_VECTORCALL_ARGUMENTS_OFFSET))
#else
  #define __Pyx_PY_VECTORCALL_ARGUMENTS_OFFSET  0
  #define __Pyx_PyVectorcall_NARGS(n)  ((Py_ssize_t)(n))
#endif
#if PY_MAJOR_VERSION >= 0x030900B1
#define __Pyx_PyCFunction_CheckExact(func)  PyCFunction_CheckExact(func)
#else
#define __Pyx_PyCFunction_CheckExact(func)  PyCFunction_Check(func)
#endif
#define __Pyx_CyOrPyCFunction_Check(func)  PyCFunction_Check(func)
#if CYTHON_COMPILING_IN_CPYTHON
#define __Pyx_CyOrPyCFunction_GET_FUNCTION(func)  (((PyCFunctionObject*)(func))->m_ml->ml_meth)
#elif !CYTHON_COMPILING_IN_LIMITED_API
#define __Pyx_CyOrPyCFunction_GET_FUNCTION(func)  PyCFunction_GET_FUNCTION(func)
#endif
#if CYTHON_COMPILING_IN_CPYTHON
#define __Pyx_CyOrPyCFunction_GET_FLAGS(func)  (((PyCFunctionObject*)(func))->m_ml->ml_flags)
static CYTHON_INLINE PyObject* __Pyx_CyOrPyCFunction_GET_SELF(PyObject *func) {
    return (__Pyx_CyOrPyCFunction_GET_FLAGS(func) & METH_STATIC) ? NULL : ((PyCFunctionObject*)func)->m_self;
}
#endif
static CYTHON_INLINE int __Pyx__IsSameCFunction(PyObject *func, void *cfunc) {
#if CYTHON_COMPILING_IN_LIMITED_API
    return PyCFunction_Check(func) && PyCFunction_GetFunction(func) == (PyCFunction) cfunc;
#else
    return PyCFunction_Check(func) && PyCFunction_GET_FUNCTION(func) == (PyCFunction) cfunc;
#endif
}
#define __Pyx_IsSameCFunction(func, cfunc)   __Pyx__IsSameCFunction(func, cfunc)
#if __PYX_LIMITED_VERSION_HEX < 0x030900B1
  #define __Pyx_PyType_FromModuleAndSpec(m, s, b)  ((void)m, PyType_FromSpecWithBases(s, b))
  typedef PyObject *(*__Pyx_PyCMethod)(PyObject *, PyTypeObject *, PyObject *const *, size_t, PyObject *);
#else
  #define __Pyx_PyType_FromModuleAndSpec(m, s, b)  PyType_FromModuleAndSpec(m, s, b)
  #define __Pyx_PyCMethod  PyCMethod
#endif
#ifndef METH_METHOD
  #define METH_METHOD 0x200
#endif
#if CYTHON_COMPILING_IN_PYPY && !defined(PyObject_Malloc)
  #define PyObject_Malloc(s)   PyMem_Malloc(s)
  #define PyObject_Free(p)     PyMem_Free(p)
  #define PyObject_Realloc(p)  PyMem_Realloc(p)
#endif
#if CYTHON_COMPILING_IN_LIMITED_API
  #define __Pyx_PyCode_HasFreeVars(co)  (PyCode_GetNumFree(co) > 0)
  #define __Pyx_PyFrame_SetLineNumber(frame, lineno)
#else
  #define __Pyx_PyCode_HasFreeVars(co)  (PyCode_GetNumFree(co) > 0)
  #define __Pyx_PyFrame_SetLineNumber(frame, lineno)  (frame)->f_lineno = (lineno)
#endif
#if CYTHON_COMPILING_IN_LIMITED_API
  #define __Pyx_PyThreadState_Current PyThreadState_Get()
#elif !CYTHON_FAST_THREAD_STATE
  #define __Pyx_PyThreadState_Current PyThreadState_GET()
#elif PY_VERSION_HEX >= 0x030d00A1
  #define __Pyx_PyThreadState_Current PyThreadState_GetUnchecked()
#elif PY_VERSION_HEX >= 0x03060000
  #define __Pyx_PyThreadState_Current _PyThreadState_UncheckedGet()
#elif PY_VERSION_HEX >= 0x03000000
  #define __Pyx_PyThreadState_Current PyThreadState_GET()
#else
  #define __Pyx_PyThreadState_Current _PyThreadState_Current
#endif
#if CYTHON_COMPILING_IN_LIMITED_API
static CYTHON_INLINE void *__Pyx_PyModule_GetState(PyObject *op)
{
    void *result;
    result = PyModule_GetState(op);
    if (!result)
        Py_FatalError("Couldn't find the module state");
    return result;
}
#endif
#define __Pyx_PyObject_GetSlot(obj, name, func_ctype)  __Pyx_PyType_GetSlot(Py_TYPE(obj), name, func_ctype)
#if CYTHON_COMPILING_IN_LIMITED_API
  #define __Pyx_PyType_GetSlot(type, name, func_ctype)  ((func_ctype) PyType_GetSlot((type), Py_##name))
#else
  #define __Pyx_PyType_GetSlot(type, name, func_ctype)  ((type)->name)
#endif
#if PY_VERSION_HEX < 0x030700A2 && !defined(PyThread_tss_create) && !defined(Py_tss_NEEDS_INIT)
#include "pythread.h"
#define Py_tss_NEEDS_INIT 0
typedef int Py_tss_t;
static CYTHON_INLINE int PyThread_tss_create(Py_tss_t *key) {
  *key = PyThread_create_key();
  return 0;
}
static CYTHON_INLINE Py_tss_t * PyThread_tss_alloc(void) {
  Py_tss_t *key = (Py_tss_t *)PyObject_Malloc(sizeof(Py_tss_t));
  *key = Py_tss_NEEDS_INIT;
  return key;
}
static CYTHON_INLINE void PyThread_tss_free(Py_tss_t *key) {
  PyObject_Free(key);
}
static CYTHON_INLINE int PyThread_tss_is_created(Py_tss_t *key) {
  return *key != Py_tss_NEEDS_INIT;
}
static CYTHON_INLINE void PyThread_tss_delete(Py_tss_t *key) {
  PyThread_delete_key(*key);
  *key = Py_tss_NEEDS_INIT;
}
static CYTHON_INLINE int PyThread_tss_set(Py_tss_t *key, void *value) {
  return PyThread_set_key_value(*key, value);
}
static CYTHON_INLINE void * PyThread_tss_get(Py_tss_t *key) {
  return PyThread_get_key_value(*key);
}
#endif
#if PY_MAJOR_VERSION < 3
    #if CYTHON_COMPILING_IN_PYPY
        #if PYPY_VERSION_NUM < 0x07030600
            #if defined(__cplusplus) && __cplusplus >= 201402L
                [[deprecated("`with nogil:` inside a nogil function will not release the GIL in PyPy2 < 7.3.6")]]
            #elif defined(__GNUC__) || defined(__clang__)
                __attribute__ ((__deprecated__("`with nogil:` inside a nogil function will not release the GIL in PyPy2 < 7.3.6")))
            #elif defined(_MSC_VER)
                __declspec(deprecated("`with nogil:` inside a nogil function will not release the GIL in PyPy2 < 7.3.6"))
            #endif
            static CYTHON_INLINE int PyGILState_Check(void) {
                return 0;
            }
        #else  // PYPY_VERSION_NUM < 0x07030600
        #endif  // PYPY_VERSION_NUM < 0x07030600
    #else
        static CYTHON_INLINE int PyGILState_Check(void) {
            PyThreadState * tstate = _PyThreadState_Current;
            return tstate && (tstate == PyGILState_GetThisThreadState());
        }
    #endif
#endif
#if CYTHON_COMPILING_IN_CPYTHON && PY_VERSION_HEX < 0x030d0000 || defined(_PyDict_NewPresized)
#define __Pyx_PyDict_NewPresized(n)  ((n <= 8) ? PyDict_New() : _PyDict_NewPresized(n))
#else
#define __Pyx_PyDict_NewPresized(n)  PyDict_New()
#endif
#if PY_MAJOR_VERSION >= 3 || CYTHON_FUTURE_DIVISION
  #define __Pyx_PyNumber_Divide(x,y)         PyNumber_TrueDivide(x,y)
  #define __Pyx_PyNumber_InPlaceDivide(x,y)  PyNumber_InPlaceTrueDivide(x,y)
#else
  #define __Pyx_PyNumber_Divide(x,y)         PyNumber_Divide(x,y)
  #define __Pyx_PyNumber_InPlaceDivide(x,y)  PyNumber_InPlaceDivide(x,y)
#endif
#if CYTHON_COMPILING_IN_CPYTHON && PY_VERSION_HEX > 0x030600B4 && PY_VERSION_HEX < 0x030d0000 && CYTHON_USE_UNICODE_INTERNALS
#define __Pyx_PyDict_GetItemStrWithError(dict, name)  _PyDict_GetItem_KnownHash(dict, name, ((PyASCIIObject *) name)->hash)
static CYTHON_INLINE PyObject * __Pyx_PyDict_GetItemStr(PyObject *dict, PyObject *name) {
    PyObject *res = __Pyx_PyDict_GetItemStrWithError(dict, name);
    if (res == NULL) PyErr_Clear();
    return res;
}
#elif PY_MAJOR_VERSION >= 3 && (!CYTHON_COMPILING_IN_PYPY || PYPY_VERSION_NUM >= 0x07020000)
#define __Pyx_PyDict_GetItemStrWithError  PyDict_GetItemWithError
#define __Pyx_PyDict_GetItemStr           PyDict_GetItem
#else
static CYTHON_INLINE PyObject * __Pyx_PyDict_GetItemStrWithError(PyObject *dict, PyObject *name) {
#if CYTHON_COMPILING_IN_PYPY
    return PyDict_GetItem(dict, name);
#else
    PyDictEntry *ep;
    PyDictObject *mp = (PyDictObject*) dict;
    long hash = ((PyStringObject *) name)->ob_shash;
    assert(hash != -1);
    ep = (mp->ma_lookup)(mp, name, hash);
    if (ep == NULL) {
        return NULL;
    }
    return ep->me_value;
#endif
}
#define __Pyx_PyDict_GetItemStr           PyDict_GetItem
#endif
#if CYTHON_USE_TYPE_SLOTS
  #define __Pyx_PyType_GetFlags(tp)   (((PyTypeObject *)tp)->tp_flags)
  #define __Pyx_PyType_HasFeature(type, feature)  ((__Pyx_PyType_GetFlags(type) & (feature)) != 0)
  #define __Pyx_PyObject_GetIterNextFunc(obj)  (Py_TYPE(obj)->tp_iternext)
#else
  #define __Pyx_PyType_GetFlags(tp)   (PyType_GetFlags((PyTypeObject *)tp))
  #define __Pyx_PyType_HasFeature(type, feature)  PyType_HasFeature(type, feature)
  #define __Pyx_PyObject_GetIterNextFunc(obj)  PyIter_Next
#endif
#if CYTHON_COMPILING_IN_LIMITED_API
  #define __Pyx_SetItemOnTypeDict(tp, k, v) PyObject_GenericSetAttr((PyObject*)tp, k, v)
#else
  #define __Pyx_SetItemOnTypeDict(tp, k, v) PyDict_SetItem(tp->tp_dict, k, v)
#endif
#if CYTHON_USE_TYPE_SPECS && PY_VERSION_HEX >= 0x03080000
#define __Pyx_PyHeapTypeObject_GC_Del(obj)  {\
    PyTypeObject *type = Py_TYPE((PyObject*)obj);\
    assert(__Pyx_PyType_HasFeature(type, Py_TPFLAGS_HEAPTYPE));\
    PyObject_GC_Del(obj);\
    Py_DECREF(type);\
}
#else
#define __Pyx_PyHeapTypeObject_GC_Del(obj)  PyObject_GC_Del(obj)
#endif
#if CYTHON_COMPILING_IN_LIMITED_API
  #define CYTHON_PEP393_ENABLED 1
  #define __Pyx_PyUnicode_READY(op)       (0)
  #define __Pyx_PyUnicode_GET_LENGTH(u)   PyUnicode_GetLength(u)
  #define __Pyx_PyUnicode_READ_CHAR(u, i) PyUnicode_ReadChar(u, i)
  #define __Pyx_PyUnicode_MAX_CHAR_VALUE(u)   ((void)u, 1114111U)
  #define __Pyx_PyUnicode_KIND(u)         ((void)u, (0))
  #define __Pyx_PyUnicode_DATA(u)         ((void*)u)
  #define __Pyx_PyUnicode_READ(k, d, i)   ((void)k, PyUnicode_ReadChar((PyObject*)(d), i))
  #define __Pyx_PyUnicode_IS_TRUE(u)      (0 != PyUnicode_GetLength(u))
#elif PY_VERSION_HEX > 0x03030000 && defined(PyUnicode_KIND)
  #define CYTHON_PEP393_ENABLED 1
  #if PY_VERSION_HEX >= 0x030C0000
    #define __Pyx_PyUnicode_READY(op)       (0)
  #else
    #define __Pyx_PyUnicode_READY(op)       (likely(PyUnicode_IS_READY(op)) ?\
                                                0 : _PyUnicode_Ready((PyObject *)(op)))
  #endif
  #define __Pyx_PyUnicode_GET_LENGTH(u)   PyUnicode_GET_LENGTH(u)
  #define __Pyx_PyUnicode_READ_CHAR(u, i) PyUnicode_READ_CHAR(u, i)
  #define __Pyx_PyUnicode_MAX_CHAR_VALUE(u)   PyUnicode_MAX_CHAR_VALUE(u)
  #define __Pyx_PyUnicode_KIND(u)         ((int)PyUnicode_KIND(u))
  #define __Pyx_PyUnicode_DATA(u)         PyUnicode_DATA(u)
  #define __Pyx_PyUnicode_READ(k, d, i)   PyUnicode_READ(k, d, i)
  #define __Pyx_PyUnicode_WRITE(k, d, i, ch)  PyUnicode_WRITE(k, d, i, (Py_UCS4) ch)
  #if PY_VERSION_HEX >= 0x030C0000
    #define __Pyx_PyUnicode_IS_TRUE(u)      (0 != PyUnicode_GET_LENGTH(u))
  #else
    #if CYTHON_COMPILING_IN_CPYTHON && PY_VERSION_HEX >= 0x03090000
    #define __Pyx_PyUnicode_IS_TRUE(u)      (0 != (likely(PyUnicode_IS_READY(u)) ? PyUnicode_GET_LENGTH(u) : ((PyCompactUnicodeObject *)(u))->wstr_length))
    #else
    #define __Pyx_PyUnicode_IS_TRUE(u)      (0 != (likely(PyUnicode_IS_READY(u)) ? PyUnicode_GET_LENGTH(u) : PyUnicode_GET_SIZE(u)))
    #endif
  #endif
#else
  #define CYTHON_PEP393_ENABLED 0
  #define PyUnicode_1BYTE_KIND  1
  #define PyUnicode_2BYTE_KIND  2
  #define PyUnicode_4BYTE_KIND  4
  #define __Pyx_PyUnicode_READY(op)       (0)
  #define __Pyx_PyUnicode_GET_LENGTH(u)   PyUnicode_GET_SIZE(u)
  #define __Pyx_PyUnicode_READ_CHAR(u, i) ((Py_UCS4)(PyUnicode_AS_UNICODE(u)[i]))
  #define __Pyx_PyUnicode_MAX_CHAR_VALUE(u)   ((sizeof(Py_UNICODE) == 2) ? 65535U : 1114111U)
  #define __Pyx_PyUnicode_KIND(u)         ((int)sizeof(Py_UNICODE))
  #define __Pyx_PyUnicode_DATA(u)         ((void*)PyUnicode_AS_UNICODE(u))
  #define __Pyx_PyUnicode_READ(k, d, i)   ((void)(k), (Py_UCS4)(((Py_UNICODE*)d)[i]))
  #define __Pyx_PyUnicode_WRITE(k, d, i, ch)  (((void)(k)), ((Py_UNICODE*)d)[i] = (Py_UNICODE) ch)
  #define __Pyx_PyUnicode_IS_TRUE(u)      (0 != PyUnicode_GET_SIZE(u))
#endif
#if CYTHON_COMPILING_IN_PYPY
  #define __Pyx_PyUnicode_Concat(a, b)      PyNumber_Add(a, b)
  #define __Pyx_PyUnicode_ConcatSafe(a, b)  PyNumber_Add(a, b)
#else
  #define __Pyx_PyUnicode_Concat(a, b)      PyUnicode_Concat(a, b)
  #define __Pyx_PyUnicode_ConcatSafe(a, b)  ((unlikely((a) == Py_None) || unlikely((b) == Py_None)) ?\
      PyNumber_Add(a, b) : __Pyx_PyUnicode_Concat(a, b))
#endif
#if CYTHON_COMPILING_IN_PYPY
  #if !defined(PyUnicode_DecodeUnicodeEscape)
    #define PyUnicode_DecodeUnicodeEscape(s, size, errors)  PyUnicode_Decode(s, size, "unicode_escape", errors)
  #endif
  #if !defined(PyUnicode_Contains) || (PY_MAJOR_VERSION == 2 && PYPY_VERSION_NUM < 0x07030500)
    #undef PyUnicode_Contains
    #define PyUnicode_Contains(u, s)  PySequence_Contains(u, s)
  #endif
  #if !defined(PyByteArray_Check)
    #define PyByteArray_Check(obj)  PyObject_TypeCheck(obj, &PyByteArray_Type)
  #endif
  #if !defined(PyObject_Format)
    #define PyObject_Format(obj, fmt)  PyObject_CallMethod(obj, "__format__", "O", fmt)
  #endif
#endif
#define __Pyx_PyString_FormatSafe(a, b)   ((unlikely((a) == Py_None || (PyString_Check(b) && !PyString_CheckExact(b)))) ? PyNumber_Remainder(a, b) : __Pyx_PyString_Format(a, b))
#define __Pyx_PyUnicode_FormatSafe(a, b)  ((unlikely((a) == Py_None || (PyUnicode_Check(b) && !PyUnicode_CheckExact(b)))) ? PyNumber_Remainder(a, b) : PyUnicode_Format(a, b))
#if PY_MAJOR_VERSION >= 3
  #define __Pyx_PyString_Format(a, b)  PyUnicode_Format(a, b)
#else
  #define __Pyx_PyString_Format(a, b)  PyString_Format(a, b)
#endif
#if PY_MAJOR_VERSION < 3 && !defined(PyObject_ASCII)
  #define PyObject_ASCII(o)            PyObject_Repr(o)
#endif
#if PY_MAJOR_VERSION >= 3
  #define PyBaseString_Type            PyUnicode_Type
  #define PyStringObject               PyUnicodeObject
  #define PyString_Type                PyUnicode_Type
  #define PyString_Check               PyUnicode_Check
  #define PyString_CheckExact          PyUnicode_CheckExact
#ifndef PyObject_Unicode
  #define PyObject_Unicode             PyObject_Str
#endif
#endif
#if PY_MAJOR_VERSION >= 3
  #define __Pyx_PyBaseString_Check(obj) PyUnicode_Check(obj)
  #define __Pyx_PyBaseString_CheckExact(obj) PyUnicode_CheckExact(obj)
#else
  #define __Pyx_PyBaseString_Check(obj) (PyString_Check(obj) || PyUnicode_Check(obj))
  #define __Pyx_PyBaseString_CheckExact(obj) (PyString_CheckExact(obj) || PyUnicode_CheckExact(obj))
#endif
#if CYTHON_COMPILING_IN_CPYTHON
  #define __Pyx_PySequence_ListKeepNew(obj)\
    (likely(PyList_CheckExact(obj) && Py_REFCNT(obj) == 1) ? __Pyx_NewRef(obj) : PySequence_List(obj))
#else
  #define __Pyx_PySequence_ListKeepNew(obj)  PySequence_List(obj)
#endif
#ifndef PySet_CheckExact
  #define PySet_CheckExact(obj)        __Pyx_IS_TYPE(obj, &PySet_Type)
#endif
#if PY_VERSION_HEX >= 0x030900A4
  #define __Pyx_SET_REFCNT(obj, refcnt) Py_SET_REFCNT(obj, refcnt)
  #define __Pyx_SET_SIZE(obj, size) Py_SET_SIZE(obj, size)
#else
  #define __Pyx_SET_REFCNT(obj, refcnt) Py_REFCNT(obj) = (refcnt)
  #define __Pyx_SET_SIZE(obj, size) Py_SIZE(obj) = (size)
#endif
#if CYTHON_ASSUME_SAFE_MACROS
  #define __Pyx_PySequence_ITEM(o, i) PySequence_ITEM(o, i)
  #define __Pyx_PySequence_SIZE(seq)  Py_SIZE(seq)
  #define __Pyx_PyTuple_SET_ITEM(o, i, v) (PyTuple_SET_ITEM(o, i, v), (0))
  #define __Pyx_PyList_SET_ITEM(o, i, v) (PyList_SET_ITEM(o, i, v), (0))
  #define __Pyx_PyTuple_GET_SIZE(o) PyTuple_GET_SIZE(o)
  #define __Pyx_PyList_GET_SIZE(o) PyList_GET_SIZE(o)
  #define __Pyx_PySet_GET_SIZE(o) PySet_GET_SIZE(o)
  #define __Pyx_PyBytes_GET_SIZE(o) PyBytes_GET_SIZE(o)
  #define __Pyx_PyByteArray_GET_SIZE(o) PyByteArray_GET_SIZE(o)
#else
  #define __Pyx_PySequence_ITEM(o, i) PySequence_GetItem(o, i)
  #define __Pyx_PySequence_SIZE(seq)  PySequence_Size(seq)
  #define __Pyx_PyTuple_SET_ITEM(o, i, v) PyTuple_SetItem(o, i, v)
  #define __Pyx_PyList_SET_ITEM(o, i, v) PyList_SetItem(o, i, v)
  #define __Pyx_PyTuple_GET_SIZE(o) PyTuple_Size(o)
  #define __Pyx_PyList_GET_SIZE(o) PyList_Size(o)
  #define __Pyx_PySet_GET_SIZE(o) PySet_Size(o)
  #define __Pyx_PyBytes_GET_SIZE(o) PyBytes_Size(o)
  #define __Pyx_PyByteArray_GET_SIZE(o) PyByteArray_Size(o)
#endif
#if __PYX_LIMITED_VERSION_HEX >= 0x030d00A1
  #define __Pyx_PyImport_AddModuleRef(name) PyImport_AddModuleRef(name)
#else
  static CYTHON_INLINE PyObject *__Pyx_PyImport_AddModuleRef(const char *name) {
      PyObject *module = PyImport_AddModule(name);
      Py_XINCREF(module);
      return module;
  }
#endif
#if PY_MAJOR_VERSION >= 3
  #define PyIntObject                  PyLongObject
  #define PyInt_Type                   PyLong_Type
  #define PyInt_Check(op)              PyLong_Check(op)
  #define PyInt_CheckExact(op)         PyLong_CheckExact(op)
  #define __Pyx_Py3Int_Check(op)       PyLong_Check(op)
  #define __Pyx_Py3Int_CheckExact(op)  PyLong_CheckExact(op)
  #define PyInt_FromString             PyLong_FromString
  #define PyInt_FromUnicode            PyLong_FromUnicode
  #define PyInt_FromLong               PyLong_FromLong
  #define PyInt_FromSize_t             PyLong_FromSize_t
  #define PyInt_FromSsize_t            PyLong_FromSsize_t
  #define PyInt_AsLong                 PyLong_AsLong
  #define PyInt_AS_LONG                PyLong_AS_LONG
  #define PyInt_AsSsize_t              PyLong_AsSsize_t
  #define PyInt_AsUnsignedLongMask     PyLong_AsUnsignedLongMask
  #define PyInt_AsUnsignedLongLongMask PyLong_AsUnsignedLongLongMask
  #define PyNumber_Int                 PyNumber_Long
#else
  #define __Pyx_Py3Int_Check(op)       (PyLong_Check(op) || PyInt_Check(op))
  #define __Pyx_Py3Int_CheckExact(op)  (PyLong_CheckExact(op) || PyInt_CheckExact(op))
#endif
#if PY_MAJOR_VERSION >= 3
  #define PyBoolObject                 PyLongObject
#endif
#if PY_MAJOR_VERSION >= 3 && CYTHON_COMPILING_IN_PYPY
  #ifndef PyUnicode_InternFromString
    #define PyUnicode_InternFromString(s) PyUnicode_FromString(s)
  #endif
#endif
#if PY_VERSION_HEX < 0x030200A4
  typedef long Py_hash_t;
  #define __Pyx_PyInt_FromHash_t PyInt_FromLong
  #define __Pyx_PyInt_AsHash_t   __Pyx_PyIndex_AsHash_t
#else
  #define __Pyx_PyInt_FromHash_t PyInt_FromSsize_t
  #define __Pyx_PyInt_AsHash_t   __Pyx_PyIndex_AsSsize_t
#endif
#if CYTHON_USE_ASYNC_SLOTS
  #if PY_VERSION_HEX >= 0x030500B1
    #define __Pyx_PyAsyncMethodsStruct PyAsyncMethods
    #define __Pyx_PyType_AsAsync(obj) (Py_TYPE(obj)->tp_as_async)
  #else
    #define __Pyx_PyType_AsAsync(obj) ((__Pyx_PyAsyncMethodsStruct*) (Py_TYPE(obj)->tp_reserved))
  #endif
#else
  #define __Pyx_PyType_AsAsync(obj) NULL
#endif
#ifndef __Pyx_PyAsyncMethodsStruct
    typedef struct {
        unaryfunc am_await;
        unaryfunc am_aiter;
        unaryfunc am_anext;
    } __Pyx_PyAsyncMethodsStruct;
#endif

#if defined(_WIN32) || defined(WIN32) || defined(MS_WINDOWS)
  #if !defined(_USE_MATH_DEFINES)
    #define _USE_MATH_DEFINES
  #endif
#endif
#include <math.h>
#ifdef NAN
#define __PYX_NAN() ((float) NAN)
#else
static CYTHON_INLINE float __PYX_NAN() {
  float value;
  memset(&value, 0xFF, sizeof(value));
  return value;
}
#endif
#if defined(__CYGWIN__) && defined(_LDBL_EQ_DBL)
#define __Pyx_truncl trunc
#else
#define __Pyx_truncl truncl
#endif

#define __PYX_MARK_ERR_POS(f_index, lineno) \
    { __pyx_filename = __pyx_f[f_index]; (void)__pyx_filename; __pyx_lineno = lineno; (void)__pyx_lineno; __pyx_clineno = __LINE__;  (void)__pyx_clineno; }
#define __PYX_ERR(f_index, lineno, Ln_error) \
    { __PYX_MARK_ERR_POS(f_index, lineno) goto Ln_error; }

#ifdef CYTHON_EXTERN_C
    #undef __PYX_EXTERN_C
    #define __PYX_EXTERN_C CYTHON_EXTERN_C
#elif defined(__PYX_EXTERN_C)
    #ifdef _MSC_VER
    #pragma message ("Please do not define the '__PYX_EXTERN_C' macro externally. Use 'CYTHON_EXTERN_C' instead.")
    #else
    #warning Please do not define the '__PYX_EXTERN_C' macro externally. Use 'CYTHON_EXTERN_C' instead.
    #endif
#else
  #ifdef __cplusplus
    #define __PYX_EXTERN_C extern "C"
  #else
    #define __PYX_EXTERN_C extern
  #endif
#endif

#define __PYX_HAVE__obfuscated_braintree_checker
#define __PYX_HAVE_API__obfuscated_braintree_checker
/* Early includes */
#ifdef _OPENMP
#include <omp.h>
#endif /* _OPENMP */

#if defined(PYREX_WITHOUT_ASSERTIONS) && !defined(CYTHON_WITHOUT_ASSERTIONS)
#define CYTHON_WITHOUT_ASSERTIONS
#endif

typedef struct {PyObject **p; const char *s; const Py_ssize_t n; const char* encoding;
                const char is_unicode; const char is_str; const char intern; } __Pyx_StringTabEntry;

#define __PYX_DEFAULT_STRING_ENCODING_IS_ASCII 0
#define __PYX_DEFAULT_STRING_ENCODING_IS_UTF8 0
#define __PYX_DEFAULT_STRING_ENCODING_IS_DEFAULT (PY_MAJOR_VERSION >= 3 && __PYX_DEFAULT_STRING_ENCODING_IS_UTF8)
#define __PYX_DEFAULT_STRING_ENCODING ""
#define __Pyx_PyObject_FromString __Pyx_PyBytes_FromString
#define __Pyx_PyObject_FromStringAndSize __Pyx_PyBytes_FromStringAndSize
#define __Pyx_uchar_cast(c) ((unsigned char)c)
#define __Pyx_long_cast(x) ((long)x)
#define __Pyx_fits_Py_ssize_t(v, type, is_signed)  (\
    (sizeof(type) < sizeof(Py_ssize_t))  ||\
    (sizeof(type) > sizeof(Py_ssize_t) &&\
          likely(v < (type)PY_SSIZE_T_MAX ||\
                 v == (type)PY_SSIZE_T_MAX)  &&\
          (!is_signed || likely(v > (type)PY_SSIZE_T_MIN ||\
                                v == (type)PY_SSIZE_T_MIN)))  ||\
    (sizeof(type) == sizeof(Py_ssize_t) &&\
          (is_signed || likely(v < (type)PY_SSIZE_T_MAX ||\
                               v == (type)PY_SSIZE_T_MAX)))  )
static CYTHON_INLINE int __Pyx_is_valid_index(Py_ssize_t i, Py_ssize_t limit) {
    return (size_t) i < (size_t) limit;
}
#if defined (__cplusplus) && __cplusplus >= 201103L
    #include <cstdlib>
    #define __Pyx_sst_abs(value) std::abs(value)
#elif SIZEOF_INT >= SIZEOF_SIZE_T
    #define __Pyx_sst_abs(value) abs(value)
#elif SIZEOF_LONG >= SIZEOF_SIZE_T
    #define __Pyx_sst_abs(value) labs(value)
#elif defined (_MSC_VER)
    #define __Pyx_sst_abs(value) ((Py_ssize_t)_abs64(value))
#elif defined (__STDC_VERSION__) && __STDC_VERSION__ >= 199901L
    #define __Pyx_sst_abs(value) llabs(value)
#elif defined (__GNUC__)
    #define __Pyx_sst_abs(value) __builtin_llabs(value)
#else
    #define __Pyx_sst_abs(value) ((value<0) ? -value : value)
#endif
static CYTHON_INLINE Py_ssize_t __Pyx_ssize_strlen(const char *s);
static CYTHON_INLINE const char* __Pyx_PyObject_AsString(PyObject*);
static CYTHON_INLINE const char* __Pyx_PyObject_AsStringAndSize(PyObject*, Py_ssize_t* length);
static CYTHON_INLINE PyObject* __Pyx_PyByteArray_FromString(const char*);
#define __Pyx_PyByteArray_FromStringAndSize(s, l) PyByteArray_FromStringAndSize((const char*)s, l)
#define __Pyx_PyBytes_FromString        PyBytes_FromString
#define __Pyx_PyBytes_FromStringAndSize PyBytes_FromStringAndSize
static CYTHON_INLINE PyObject* __Pyx_PyUnicode_FromString(const char*);
#if PY_MAJOR_VERSION < 3
    #define __Pyx_PyStr_FromString        __Pyx_PyBytes_FromString
    #define __Pyx_PyStr_FromStringAndSize __Pyx_PyBytes_FromStringAndSize
#else
    #define __Pyx_PyStr_FromString        __Pyx_PyUnicode_FromString
    #define __Pyx_PyStr_FromStringAndSize __Pyx_PyUnicode_FromStringAndSize
#endif
#define __Pyx_PyBytes_AsWritableString(s)     ((char*) PyBytes_AS_STRING(s))
#define __Pyx_PyBytes_AsWritableSString(s)    ((signed char*) PyBytes_AS_STRING(s))
#define __Pyx_PyBytes_AsWritableUString(s)    ((unsigned char*) PyBytes_AS_STRING(s))
#define __Pyx_PyBytes_AsString(s)     ((const char*) PyBytes_AS_STRING(s))
#define __Pyx_PyBytes_AsSString(s)    ((const signed char*) PyBytes_AS_STRING(s))
#define __Pyx_PyBytes_AsUString(s)    ((const unsigned char*) PyBytes_AS_STRING(s))
#define __Pyx_PyObject_AsWritableString(s)    ((char*)(__pyx_uintptr_t) __Pyx_PyObject_AsString(s))
#define __Pyx_PyObject_AsWritableSString(s)    ((signed char*)(__pyx_uintptr_t) __Pyx_PyObject_AsString(s))
#define __Pyx_PyObject_AsWritableUString(s)    ((unsigned char*)(__pyx_uintptr_t) __Pyx_PyObject_AsString(s))
#define __Pyx_PyObject_AsSString(s)    ((const signed char*) __Pyx_PyObject_AsString(s))
#define __Pyx_PyObject_AsUString(s)    ((const unsigned char*) __Pyx_PyObject_AsString(s))
#define __Pyx_PyObject_FromCString(s)  __Pyx_PyObject_FromString((const char*)s)
#define __Pyx_PyBytes_FromCString(s)   __Pyx_PyBytes_FromString((const char*)s)
#define __Pyx_PyByteArray_FromCString(s)   __Pyx_PyByteArray_FromString((const char*)s)
#define __Pyx_PyStr_FromCString(s)     __Pyx_PyStr_FromString((const char*)s)
#define __Pyx_PyUnicode_FromCString(s) __Pyx_PyUnicode_FromString((const char*)s)
#define __Pyx_PyUnicode_FromOrdinal(o)       PyUnicode_FromOrdinal((int)o)
#define __Pyx_PyUnicode_AsUnicode            PyUnicode_AsUnicode
#define __Pyx_NewRef(obj) (Py_INCREF(obj), obj)
#define __Pyx_Owned_Py_None(b) __Pyx_NewRef(Py_None)
static CYTHON_INLINE PyObject * __Pyx_PyBool_FromLong(long b);
static CYTHON_INLINE int __Pyx_PyObject_IsTrue(PyObject*);
static CYTHON_INLINE int __Pyx_PyObject_IsTrueAndDecref(PyObject*);
static CYTHON_INLINE PyObject* __Pyx_PyNumber_IntOrLong(PyObject* x);
#define __Pyx_PySequence_Tuple(obj)\
    (likely(PyTuple_CheckExact(obj)) ? __Pyx_NewRef(obj) : PySequence_Tuple(obj))
static CYTHON_INLINE Py_ssize_t __Pyx_PyIndex_AsSsize_t(PyObject*);
static CYTHON_INLINE PyObject * __Pyx_PyInt_FromSize_t(size_t);
static CYTHON_INLINE Py_hash_t __Pyx_PyIndex_AsHash_t(PyObject*);
#if CYTHON_ASSUME_SAFE_MACROS
#define __pyx_PyFloat_AsDouble(x) (PyFloat_CheckExact(x) ? PyFloat_AS_DOUBLE(x) : PyFloat_AsDouble(x))
#else
#define __pyx_PyFloat_AsDouble(x) PyFloat_AsDouble(x)
#endif
#define __pyx_PyFloat_AsFloat(x) ((float) __pyx_PyFloat_AsDouble(x))
#if PY_MAJOR_VERSION >= 3
#define __Pyx_PyNumber_Int(x) (PyLong_CheckExact(x) ? __Pyx_NewRef(x) : PyNumber_Long(x))
#else
#define __Pyx_PyNumber_Int(x) (PyInt_CheckExact(x) ? __Pyx_NewRef(x) : PyNumber_Int(x))
#endif
#if CYTHON_USE_PYLONG_INTERNALS
  #if PY_VERSION_HEX >= 0x030C00A7
  #ifndef _PyLong_SIGN_MASK
    #define _PyLong_SIGN_MASK 3
  #endif
  #ifndef _PyLong_NON_SIZE_BITS
    #define _PyLong_NON_SIZE_BITS 3
  #endif
  #define __Pyx_PyLong_Sign(x)  (((PyLongObject*)x)->long_value.lv_tag & _PyLong_SIGN_MASK)
  #define __Pyx_PyLong_IsNeg(x)  ((__Pyx_PyLong_Sign(x) & 2) != 0)
  #define __Pyx_PyLong_IsNonNeg(x)  (!__Pyx_PyLong_IsNeg(x))
  #define __Pyx_PyLong_IsZero(x)  (__Pyx_PyLong_Sign(x) & 1)
  #define __Pyx_PyLong_IsPos(x)  (__Pyx_PyLong_Sign(x) == 0)
  #define __Pyx_PyLong_CompactValueUnsigned(x)  (__Pyx_PyLong_Digits(x)[0])
  #define __Pyx_PyLong_DigitCount(x)  ((Py_ssize_t) (((PyLongObject*)x)->long_value.lv_tag >> _PyLong_NON_SIZE_BITS))
  #define __Pyx_PyLong_SignedDigitCount(x)\
        ((1 - (Py_ssize_t) __Pyx_PyLong_Sign(x)) * __Pyx_PyLong_DigitCount(x))
  #if defined(PyUnstable_Long_IsCompact) && defined(PyUnstable_Long_CompactValue)
    #define __Pyx_PyLong_IsCompact(x)     PyUnstable_Long_IsCompact((PyLongObject*) x)
    #define __Pyx_PyLong_CompactValue(x)  PyUnstable_Long_CompactValue((PyLongObject*) x)
  #else
    #define __Pyx_PyLong_IsCompact(x)     (((PyLongObject*)x)->long_value.lv_tag < (2 << _PyLong_NON_SIZE_BITS))
    #define __Pyx_PyLong_CompactValue(x)  ((1 - (Py_ssize_t) __Pyx_PyLong_Sign(x)) * (Py_ssize_t) __Pyx_PyLong_Digits(x)[0])
  #endif
  typedef Py_ssize_t  __Pyx_compact_pylong;
  typedef size_t  __Pyx_compact_upylong;
  #else
  #define __Pyx_PyLong_IsNeg(x)  (Py_SIZE(x) < 0)
  #define __Pyx_PyLong_IsNonNeg(x)  (Py_SIZE(x) >= 0)
  #define __Pyx_PyLong_IsZero(x)  (Py_SIZE(x) == 0)
  #define __Pyx_PyLong_IsPos(x)  (Py_SIZE(x) > 0)
  #define __Pyx_PyLong_CompactValueUnsigned(x)  ((Py_SIZE(x) == 0) ? 0 : __Pyx_PyLong_Digits(x)[0])
  #define __Pyx_PyLong_DigitCount(x)  __Pyx_sst_abs(Py_SIZE(x))
  #define __Pyx_PyLong_SignedDigitCount(x)  Py_SIZE(x)
  #define __Pyx_PyLong_IsCompact(x)  (Py_SIZE(x) == 0 || Py_SIZE(x) == 1 || Py_SIZE(x) == -1)
  #define __Pyx_PyLong_CompactValue(x)\
        ((Py_SIZE(x) == 0) ? (sdigit) 0 : ((Py_SIZE(x) < 0) ? -(sdigit)__Pyx_PyLong_Digits(x)[0] : (sdigit)__Pyx_PyLong_Digits(x)[0]))
  typedef sdigit  __Pyx_compact_pylong;
  typedef digit  __Pyx_compact_upylong;
  #endif
  #if PY_VERSION_HEX >= 0x030C00A5
  #define __Pyx_PyLong_Digits(x)  (((PyLongObject*)x)->long_value.ob_digit)
  #else
  #define __Pyx_PyLong_Digits(x)  (((PyLongObject*)x)->ob_digit)
  #endif
#endif
#if PY_MAJOR_VERSION < 3 && __PYX_DEFAULT_STRING_ENCODING_IS_ASCII
#include <string.h>
static int __Pyx_sys_getdefaultencoding_not_ascii;
static int __Pyx_init_sys_getdefaultencoding_params(void) {
    PyObject* sys;
    PyObject* default_encoding = NULL;
    PyObject* ascii_chars_u = NULL;
    PyObject* ascii_chars_b = NULL;
    const char* default_encoding_c;
    sys = PyImport_ImportModule("sys");
    if (!sys) goto bad;
    default_encoding = PyObject_CallMethod(sys, (char*) "getdefaultencoding", NULL);
    Py_DECREF(sys);
    if (!default_encoding) goto bad;
    default_encoding_c = PyBytes_AsString(default_encoding);
    if (!default_encoding_c) goto bad;
    if (strcmp(default_encoding_c, "ascii") == 0) {
        __Pyx_sys_getdefaultencoding_not_ascii = 0;
    } else {
        char ascii_chars[128];
        int c;
        for (c = 0; c < 128; c++) {
            ascii_chars[c] = (char) c;
        }
        __Pyx_sys_getdefaultencoding_not_ascii = 1;
        ascii_chars_u = PyUnicode_DecodeASCII(ascii_chars, 128, NULL);
        if (!ascii_chars_u) goto bad;
        ascii_chars_b = PyUnicode_AsEncodedString(ascii_chars_u, default_encoding_c, NULL);
        if (!ascii_chars_b || !PyBytes_Check(ascii_chars_b) || memcmp(ascii_chars, PyBytes_AS_STRING(ascii_chars_b), 128) != 0) {
            PyErr_Format(
                PyExc_ValueError,
                "This module compiled with c_string_encoding=ascii, but default encoding '%.200s' is not a superset of ascii.",
                default_encoding_c);
            goto bad;
        }
        Py_DECREF(ascii_chars_u);
        Py_DECREF(ascii_chars_b);
    }
    Py_DECREF(default_encoding);
    return 0;
bad:
    Py_XDECREF(default_encoding);
    Py_XDECREF(ascii_chars_u);
    Py_XDECREF(ascii_chars_b);
    return -1;
}
#endif
#if __PYX_DEFAULT_STRING_ENCODING_IS_DEFAULT && PY_MAJOR_VERSION >= 3
#define __Pyx_PyUnicode_FromStringAndSize(c_str, size) PyUnicode_DecodeUTF8(c_str, size, NULL)
#else
#define __Pyx_PyUnicode_FromStringAndSize(c_str, size) PyUnicode_Decode(c_str, size, __PYX_DEFAULT_STRING_ENCODING, NULL)
#if __PYX_DEFAULT_STRING_ENCODING_IS_DEFAULT
#include <string.h>
static char* __PYX_DEFAULT_STRING_ENCODING;
static int __Pyx_init_sys_getdefaultencoding_params(void) {
    PyObject* sys;
    PyObject* default_encoding = NULL;
    char* default_encoding_c;
    sys = PyImport_ImportModule("sys");
    if (!sys) goto bad;
    default_encoding = PyObject_CallMethod(sys, (char*) (const char*) "getdefaultencoding", NULL);
    Py_DECREF(sys);
    if (!default_encoding) goto bad;
    default_encoding_c = PyBytes_AsString(default_encoding);
    if (!default_encoding_c) goto bad;
    __PYX_DEFAULT_STRING_ENCODING = (char*) malloc(strlen(default_encoding_c) + 1);
    if (!__PYX_DEFAULT_STRING_ENCODING) goto bad;
    strcpy(__PYX_DEFAULT_STRING_ENCODING, default_encoding_c);
    Py_DECREF(default_encoding);
    return 0;
bad:
    Py_XDECREF(default_encoding);
    return -1;
}
#endif
#endif


/* Test for GCC > 2.95 */
#if defined(__GNUC__)     && (__GNUC__ > 2 || (__GNUC__ == 2 && (__GNUC_MINOR__ > 95)))
  #define likely(x)   __builtin_expect(!!(x), 1)
  #define unlikely(x) __builtin_expect(!!(x), 0)
#else /* !__GNUC__ or GCC < 2.95 */
  #define likely(x)   (x)
  #define unlikely(x) (x)
#endif /* __GNUC__ */
static CYTHON_INLINE void __Pyx_pretend_to_initialize(void* ptr) { (void)ptr; }

#if !CYTHON_USE_MODULE_STATE
static PyObject *__pyx_m = NULL;
#endif
static int __pyx_lineno;
static int __pyx_clineno = 0;
static const char * __pyx_cfilenm = __FILE__;
static const char *__pyx_filename;

/* #### Code section: filename_table ### */

static const char *__pyx_f[] = {
  "obfuscated_braintree_checker.py",
};
/* #### Code section: utility_code_proto_before_types ### */
/* #### Code section: numeric_typedefs ### */
/* #### Code section: complex_type_declarations ### */
/* #### Code section: type_declarations ### */

/*--- Type declarations ---*/
struct __pyx_obj_28obfuscated_braintree_checker___pyx_scope_struct__genexpr;
struct __pyx_obj_28obfuscated_braintree_checker___pyx_scope_struct_1_genexpr;
struct __pyx_obj_28obfuscated_braintree_checker___pyx_scope_struct_2_genexpr;

/* "obfuscated_braintree_checker.py":12
 * 
 * for _ in range(1000):
 *     junk_str = ''.join(random.choice('abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ') for _ in range(50))             # <<<<<<<<<<<<<<
 *     junk_num = sum([random.randint(1, 1000) for _ in range(100)])
 *     _ = junk_str + str(junk_num)
 */
struct __pyx_obj_28obfuscated_braintree_checker___pyx_scope_struct__genexpr {
  PyObject_HEAD
  long __pyx_v__;
  long __pyx_t_0;
};


/* "obfuscated_braintree_checker.py":30
 * 
 * for _ in range(1000):
 *     junk_str = ''.join(random.choice('abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ') for _ in range(50))             # <<<<<<<<<<<<<<
 *     junk_num = sum([random.randint(1, 1000) for _ in range(100)])
 *     _ = junk_str + str(junk_num)
 */
struct __pyx_obj_28obfuscated_braintree_checker___pyx_scope_struct_1_genexpr {
  PyObject_HEAD
  long __pyx_v__;
  long __pyx_t_0;
};


/* "obfuscated_braintree_checker.py":42
 * 
 * for _ in range(1000):
 *     junk_str = ''.join(random.choice('abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ') for _ in range(50))             # <<<<<<<<<<<<<<
 *     junk_num = sum([random.randint(1, 1000) for _ in range(100)])
 *     _ = junk_str + str(junk_num)
 */
struct __pyx_obj_28obfuscated_braintree_checker___pyx_scope_struct_2_genexpr {
  PyObject_HEAD
  long __pyx_v__;
  long __pyx_t_0;
};

/* #### Code section: utility_code_proto ### */

/* --- Runtime support code (head) --- */
/* Refnanny.proto */
#ifndef CYTHON_REFNANNY
  #define CYTHON_REFNANNY 0
#endif
#if CYTHON_REFNANNY
  typedef struct {
    void (*INCREF)(void*, PyObject*, Py_ssize_t);
    void (*DECREF)(void*, PyObject*, Py_ssize_t);
    void (*GOTREF)(void*, PyObject*, Py_ssize_t);
    void (*GIVEREF)(void*, PyObject*, Py_ssize_t);
    void* (*SetupContext)(const char*, Py_ssize_t, const char*);
    void (*FinishContext)(void**);
  } __Pyx_RefNannyAPIStruct;
  static __Pyx_RefNannyAPIStruct *__Pyx_RefNanny = NULL;
  static __Pyx_RefNannyAPIStruct *__Pyx_RefNannyImportAPI(const char *modname);
  #define __Pyx_RefNannyDeclarations void *__pyx_refnanny = NULL;
#ifdef WITH_THREAD
  #define __Pyx_RefNannySetupContext(name, acquire_gil)\
          if (acquire_gil) {\
              PyGILState_STATE __pyx_gilstate_save = PyGILState_Ensure();\
              __pyx_refnanny = __Pyx_RefNanny->SetupContext((name), (__LINE__), (__FILE__));\
              PyGILState_Release(__pyx_gilstate_save);\
          } else {\
              __pyx_refnanny = __Pyx_RefNanny->SetupContext((name), (__LINE__), (__FILE__));\
          }
  #define __Pyx_RefNannyFinishContextNogil() {\
              PyGILState_STATE __pyx_gilstate_save = PyGILState_Ensure();\
              __Pyx_RefNannyFinishContext();\
              PyGILState_Release(__pyx_gilstate_save);\
          }
#else
  #define __Pyx_RefNannySetupContext(name, acquire_gil)\
          __pyx_refnanny = __Pyx_RefNanny->SetupContext((name), (__LINE__), (__FILE__))
  #define __Pyx_RefNannyFinishContextNogil() __Pyx_RefNannyFinishContext()
#endif
  #define __Pyx_RefNannyFinishContextNogil() {\
              PyGILState_STATE __pyx_gilstate_save = PyGILState_Ensure();\
              __Pyx_RefNannyFinishContext();\
              PyGILState_Release(__pyx_gilstate_save);\
          }
  #define __Pyx_RefNannyFinishContext()\
          __Pyx_RefNanny->FinishContext(&__pyx_refnanny)
  #define __Pyx_INCREF(r)  __Pyx_RefNanny->INCREF(__pyx_refnanny, (PyObject *)(r), (__LINE__))
  #define __Pyx_DECREF(r)  __Pyx_RefNanny->DECREF(__pyx_refnanny, (PyObject *)(r), (__LINE__))
  #define __Pyx_GOTREF(r)  __Pyx_RefNanny->GOTREF(__pyx_refnanny, (PyObject *)(r), (__LINE__))
  #define __Pyx_GIVEREF(r) __Pyx_RefNanny->GIVEREF(__pyx_refnanny, (PyObject *)(r), (__LINE__))
  #define __Pyx_XINCREF(r)  do { if((r) == NULL); else {__Pyx_INCREF(r); }} while(0)
  #define __Pyx_XDECREF(r)  do { if((r) == NULL); else {__Pyx_DECREF(r); }} while(0)
  #define __Pyx_XGOTREF(r)  do { if((r) == NULL); else {__Pyx_GOTREF(r); }} while(0)
  #define __Pyx_XGIVEREF(r) do { if((r) == NULL); else {__Pyx_GIVEREF(r);}} while(0)
#else
  #define __Pyx_RefNannyDeclarations
  #define __Pyx_RefNannySetupContext(name, acquire_gil)
  #define __Pyx_RefNannyFinishContextNogil()
  #define __Pyx_RefNannyFinishContext()
  #define __Pyx_INCREF(r) Py_INCREF(r)
  #define __Pyx_DECREF(r) Py_DECREF(r)
  #define __Pyx_GOTREF(r)
  #define __Pyx_GIVEREF(r)
  #define __Pyx_XINCREF(r) Py_XINCREF(r)
  #define __Pyx_XDECREF(r) Py_XDECREF(r)
  #define __Pyx_XGOTREF(r)
  #define __Pyx_XGIVEREF(r)
#endif
#define __Pyx_Py_XDECREF_SET(r, v) do {\
        PyObject *tmp = (PyObject *) r;\
        r = v; Py_XDECREF(tmp);\
    } while (0)
#define __Pyx_XDECREF_SET(r, v) do {\
        PyObject *tmp = (PyObject *) r;\
        r = v; __Pyx_XDECREF(tmp);\
    } while (0)
#define __Pyx_DECREF_SET(r, v) do {\
        PyObject *tmp = (PyObject *) r;\
        r = v; __Pyx_DECREF(tmp);\
    } while (0)
#define __Pyx_CLEAR(r)    do { PyObject* tmp = ((PyObject*)(r)); r = NULL; __Pyx_DECREF(tmp);} while(0)
#define __Pyx_XCLEAR(r)   do { if((r) != NULL) {PyObject* tmp = ((PyObject*)(r)); r = NULL; __Pyx_DECREF(tmp);}} while(0)

/* PyErrExceptionMatches.proto */
#if CYTHON_FAST_THREAD_STATE
#define __Pyx_PyErr_ExceptionMatches(err) __Pyx_PyErr_ExceptionMatchesInState(__pyx_tstate, err)
static CYTHON_INLINE int __Pyx_PyErr_ExceptionMatchesInState(PyThreadState* tstate, PyObject* err);
#else
#define __Pyx_PyErr_ExceptionMatches(err)  PyErr_ExceptionMatches(err)
#endif

/* PyThreadStateGet.proto */
#if CYTHON_FAST_THREAD_STATE
#define __Pyx_PyThreadState_declare  PyThreadState *__pyx_tstate;
#define __Pyx_PyThreadState_assign  __pyx_tstate = __Pyx_PyThreadState_Current;
#if PY_VERSION_HEX >= 0x030C00A6
#define __Pyx_PyErr_Occurred()  (__pyx_tstate->current_exception != NULL)
#define __Pyx_PyErr_CurrentExceptionType()  (__pyx_tstate->current_exception ? (PyObject*) Py_TYPE(__pyx_tstate->current_exception) : (PyObject*) NULL)
#else
#define __Pyx_PyErr_Occurred()  (__pyx_tstate->curexc_type != NULL)
#define __Pyx_PyErr_CurrentExceptionType()  (__pyx_tstate->curexc_type)
#endif
#else
#define __Pyx_PyThreadState_declare
#define __Pyx_PyThreadState_assign
#define __Pyx_PyErr_Occurred()  (PyErr_Occurred() != NULL)
#define __Pyx_PyErr_CurrentExceptionType()  PyErr_Occurred()
#endif

/* PyErrFetchRestore.proto */
#if CYTHON_FAST_THREAD_STATE
#define __Pyx_PyErr_Clear() __Pyx_ErrRestore(NULL, NULL, NULL)
#define __Pyx_ErrRestoreWithState(type, value, tb)  __Pyx_ErrRestoreInState(PyThreadState_GET(), type, value, tb)
#define __Pyx_ErrFetchWithState(type, value, tb)    __Pyx_ErrFetchInState(PyThreadState_GET(), type, value, tb)
#define __Pyx_ErrRestore(type, value, tb)  __Pyx_ErrRestoreInState(__pyx_tstate, type, value, tb)
#define __Pyx_ErrFetch(type, value, tb)    __Pyx_ErrFetchInState(__pyx_tstate, type, value, tb)
static CYTHON_INLINE void __Pyx_ErrRestoreInState(PyThreadState *tstate, PyObject *type, PyObject *value, PyObject *tb);
static CYTHON_INLINE void __Pyx_ErrFetchInState(PyThreadState *tstate, PyObject **type, PyObject **value, PyObject **tb);
#if CYTHON_COMPILING_IN_CPYTHON && PY_VERSION_HEX < 0x030C00A6
#define __Pyx_PyErr_SetNone(exc) (Py_INCREF(exc), __Pyx_ErrRestore((exc), NULL, NULL))
#else
#define __Pyx_PyErr_SetNone(exc) PyErr_SetNone(exc)
#endif
#else
#define __Pyx_PyErr_Clear() PyErr_Clear()
#define __Pyx_PyErr_SetNone(exc) PyErr_SetNone(exc)
#define __Pyx_ErrRestoreWithState(type, value, tb)  PyErr_Restore(type, value, tb)
#define __Pyx_ErrFetchWithState(type, value, tb)  PyErr_Fetch(type, value, tb)
#define __Pyx_ErrRestoreInState(tstate, type, value, tb)  PyErr_Restore(type, value, tb)
#define __Pyx_ErrFetchInState(tstate, type, value, tb)  PyErr_Fetch(type, value, tb)
#define __Pyx_ErrRestore(type, value, tb)  PyErr_Restore(type, value, tb)
#define __Pyx_ErrFetch(type, value, tb)  PyErr_Fetch(type, value, tb)
#endif

/* PyObjectGetAttrStr.proto */
#if CYTHON_USE_TYPE_SLOTS
static CYTHON_INLINE PyObject* __Pyx_PyObject_GetAttrStr(PyObject* obj, PyObject* attr_name);
#else
#define __Pyx_PyObject_GetAttrStr(o,n) PyObject_GetAttr(o,n)
#endif

/* PyObjectGetAttrStrNoError.proto */
static CYTHON_INLINE PyObject* __Pyx_PyObject_GetAttrStrNoError(PyObject* obj, PyObject* attr_name);

/* GetBuiltinName.proto */
static PyObject *__Pyx_GetBuiltinName(PyObject *name);

/* PyDictVersioning.proto */
#if CYTHON_USE_DICT_VERSIONS && CYTHON_USE_TYPE_SLOTS
#define __PYX_DICT_VERSION_INIT  ((PY_UINT64_T) -1)
#define __PYX_GET_DICT_VERSION(dict)  (((PyDictObject*)(dict))->ma_version_tag)
#define __PYX_UPDATE_DICT_CACHE(dict, value, cache_var, version_var)\
    (version_var) = __PYX_GET_DICT_VERSION(dict);\
    (cache_var) = (value);
#define __PYX_PY_DICT_LOOKUP_IF_MODIFIED(VAR, DICT, LOOKUP) {\
    static PY_UINT64_T __pyx_dict_version = 0;\
    static PyObject *__pyx_dict_cached_value = NULL;\
    if (likely(__PYX_GET_DICT_VERSION(DICT) == __pyx_dict_version)) {\
        (VAR) = __pyx_dict_cached_value;\
    } else {\
        (VAR) = __pyx_dict_cached_value = (LOOKUP);\
        __pyx_dict_version = __PYX_GET_DICT_VERSION(DICT);\
    }\
}
static CYTHON_INLINE PY_UINT64_T __Pyx_get_tp_dict_version(PyObject *obj);
static CYTHON_INLINE PY_UINT64_T __Pyx_get_object_dict_version(PyObject *obj);
static CYTHON_INLINE int __Pyx_object_dict_version_matches(PyObject* obj, PY_UINT64_T tp_dict_version, PY_UINT64_T obj_dict_version);
#else
#define __PYX_GET_DICT_VERSION(dict)  (0)
#define __PYX_UPDATE_DICT_CACHE(dict, value, cache_var, version_var)
#define __PYX_PY_DICT_LOOKUP_IF_MODIFIED(VAR, DICT, LOOKUP)  (VAR) = (LOOKUP);
#endif

/* GetModuleGlobalName.proto */
#if CYTHON_USE_DICT_VERSIONS
#define __Pyx_GetModuleGlobalName(var, name)  do {\
    static PY_UINT64_T __pyx_dict_version = 0;\
    static PyObject *__pyx_dict_cached_value = NULL;\
    (var) = (likely(__pyx_dict_version == __PYX_GET_DICT_VERSION(__pyx_d))) ?\
        (likely(__pyx_dict_cached_value) ? __Pyx_NewRef(__pyx_dict_cached_value) : __Pyx_GetBuiltinName(name)) :\
        __Pyx__GetModuleGlobalName(name, &__pyx_dict_version, &__pyx_dict_cached_value);\
} while(0)
#define __Pyx_GetModuleGlobalNameUncached(var, name)  do {\
    PY_UINT64_T __pyx_dict_version;\
    PyObject *__pyx_dict_cached_value;\
    (var) = __Pyx__GetModuleGlobalName(name, &__pyx_dict_version, &__pyx_dict_cached_value);\
} while(0)
static PyObject *__Pyx__GetModuleGlobalName(PyObject *name, PY_UINT64_T *dict_version, PyObject **dict_cached_value);
#else
#define __Pyx_GetModuleGlobalName(var, name)  (var) = __Pyx__GetModuleGlobalName(name)
#define __Pyx_GetModuleGlobalNameUncached(var, name)  (var) = __Pyx__GetModuleGlobalName(name)
static CYTHON_INLINE PyObject *__Pyx__GetModuleGlobalName(PyObject *name);
#endif

/* PyFunctionFastCall.proto */
#if CYTHON_FAST_PYCALL
#if !CYTHON_VECTORCALL
#define __Pyx_PyFunction_FastCall(func, args, nargs)\
    __Pyx_PyFunction_FastCallDict((func), (args), (nargs), NULL)
static PyObject *__Pyx_PyFunction_FastCallDict(PyObject *func, PyObject **args, Py_ssize_t nargs, PyObject *kwargs);
#endif
#define __Pyx_BUILD_ASSERT_EXPR(cond)\
    (sizeof(char [1 - 2*!(cond)]) - 1)
#ifndef Py_MEMBER_SIZE
#define Py_MEMBER_SIZE(type, member) sizeof(((type *)0)->member)
#endif
#if !CYTHON_VECTORCALL
#if PY_VERSION_HEX >= 0x03080000
  #include "frameobject.h"
#if PY_VERSION_HEX >= 0x030b00a6 && !CYTHON_COMPILING_IN_LIMITED_API
  #ifndef Py_BUILD_CORE
    #define Py_BUILD_CORE 1
  #endif
  #include "internal/pycore_frame.h"
#endif
  #define __Pxy_PyFrame_Initialize_Offsets()
  #define __Pyx_PyFrame_GetLocalsplus(frame)  ((frame)->f_localsplus)
#else
  static size_t __pyx_pyframe_localsplus_offset = 0;
  #include "frameobject.h"
  #define __Pxy_PyFrame_Initialize_Offsets()\
    ((void)__Pyx_BUILD_ASSERT_EXPR(sizeof(PyFrameObject) == offsetof(PyFrameObject, f_localsplus) + Py_MEMBER_SIZE(PyFrameObject, f_localsplus)),\
     (void)(__pyx_pyframe_localsplus_offset = ((size_t)PyFrame_Type.tp_basicsize) - Py_MEMBER_SIZE(PyFrameObject, f_localsplus)))
  #define __Pyx_PyFrame_GetLocalsplus(frame)\
    (assert(__pyx_pyframe_localsplus_offset), (PyObject **)(((char *)(frame)) + __pyx_pyframe_localsplus_offset))
#endif
#endif
#endif

/* PyObjectCall.proto */
#if CYTHON_COMPILING_IN_CPYTHON
static CYTHON_INLINE PyObject* __Pyx_PyObject_Call(PyObject *func, PyObject *arg, PyObject *kw);
#else
#define __Pyx_PyObject_Call(func, arg, kw) PyObject_Call(func, arg, kw)
#endif

/* PyObjectCallMethO.proto */
#if CYTHON_COMPILING_IN_CPYTHON
static CYTHON_INLINE PyObject* __Pyx_PyObject_CallMethO(PyObject *func, PyObject *arg);
#endif

/* PyObjectFastCall.proto */
#define __Pyx_PyObject_FastCall(func, args, nargs)  __Pyx_PyObject_FastCallDict(func, args, (size_t)(nargs), NULL)
static CYTHON_INLINE PyObject* __Pyx_PyObject_FastCallDict(PyObject *func, PyObject **args, size_t nargs, PyObject *kwargs);

/* GetException.proto */
#if CYTHON_FAST_THREAD_STATE
#define __Pyx_GetException(type, value, tb)  __Pyx__GetException(__pyx_tstate, type, value, tb)
static int __Pyx__GetException(PyThreadState *tstate, PyObject **type, PyObject **value, PyObject **tb);
#else
static int __Pyx_GetException(PyObject **type, PyObject **value, PyObject **tb);
#endif

/* pep479.proto */
static void __Pyx_Generator_Replace_StopIteration(int in_async_gen);

/* IncludeStringH.proto */
#include <string.h>

/* IncludeStructmemberH.proto */
#include <structmember.h>

/* FixUpExtensionType.proto */
#if CYTHON_USE_TYPE_SPECS
static int __Pyx_fix_up_extension_type_from_spec(PyType_Spec *spec, PyTypeObject *type);
#endif

/* PyObjectCallNoArg.proto */
static CYTHON_INLINE PyObject* __Pyx_PyObject_CallNoArg(PyObject *func);

/* PyObjectCallOneArg.proto */
static CYTHON_INLINE PyObject* __Pyx_PyObject_CallOneArg(PyObject *func, PyObject *arg);

/* PyObjectGetMethod.proto */
static int __Pyx_PyObject_GetMethod(PyObject *obj, PyObject *name, PyObject **method);

/* PyObjectCallMethod0.proto */
static PyObject* __Pyx_PyObject_CallMethod0(PyObject* obj, PyObject* method_name);

/* ValidateBasesTuple.proto */
#if CYTHON_COMPILING_IN_CPYTHON || CYTHON_COMPILING_IN_LIMITED_API || CYTHON_USE_TYPE_SPECS
static int __Pyx_validate_bases_tuple(const char *type_name, Py_ssize_t dictoffset, PyObject *bases);
#endif

/* PyType_Ready.proto */
CYTHON_UNUSED static int __Pyx_PyType_Ready(PyTypeObject *t);

/* PyObject_GenericGetAttrNoDict.proto */
#if CYTHON_USE_TYPE_SLOTS && CYTHON_USE_PYTYPE_LOOKUP && PY_VERSION_HEX < 0x03070000
static CYTHON_INLINE PyObject* __Pyx_PyObject_GenericGetAttrNoDict(PyObject* obj, PyObject* attr_name);
#else
#define __Pyx_PyObject_GenericGetAttrNoDict PyObject_GenericGetAttr
#endif

/* Import.proto */
static PyObject *__Pyx_Import(PyObject *name, PyObject *from_list, int level);

/* ImportDottedModule.proto */
static PyObject *__Pyx_ImportDottedModule(PyObject *name, PyObject *parts_tuple);
#if PY_MAJOR_VERSION >= 3
static PyObject *__Pyx_ImportDottedModule_WalkParts(PyObject *module, PyObject *name, PyObject *parts_tuple);
#endif

/* PyObjectCall2Args.proto */
static CYTHON_INLINE PyObject* __Pyx_PyObject_Call2Args(PyObject* function, PyObject* arg1, PyObject* arg2);

/* PyObjectCallMethod1.proto */
static PyObject* __Pyx_PyObject_CallMethod1(PyObject* obj, PyObject* method_name, PyObject* arg);

/* StringJoin.proto */
#if PY_MAJOR_VERSION < 3
#define __Pyx_PyString_Join __Pyx_PyBytes_Join
#define __Pyx_PyBaseString_Join(s, v) (PyUnicode_CheckExact(s) ? PyUnicode_Join(s, v) : __Pyx_PyBytes_Join(s, v))
#else
#define __Pyx_PyString_Join PyUnicode_Join
#define __Pyx_PyBaseString_Join PyUnicode_Join
#endif
static CYTHON_INLINE PyObject* __Pyx_PyBytes_Join(PyObject* sep, PyObject* values);

/* ListCompAppend.proto */
#if CYTHON_USE_PYLIST_INTERNALS && CYTHON_ASSUME_SAFE_MACROS
static CYTHON_INLINE int __Pyx_ListComp_Append(PyObject* list, PyObject* x) {
    PyListObject* L = (PyListObject*) list;
    Py_ssize_t len = Py_SIZE(list);
    if (likely(L->allocated > len)) {
        Py_INCREF(x);
        #if CYTHON_COMPILING_IN_CPYTHON && PY_VERSION_HEX >= 0x030d0000
        L->ob_item[len] = x;
        #else
        PyList_SET_ITEM(list, len, x);
        #endif
        __Pyx_SET_SIZE(list, len + 1);
        return 0;
    }
    return PyList_Append(list, x);
}
#else
#define __Pyx_ListComp_Append(L,x) PyList_Append(L,x)
#endif

/* PyObject_Str.proto */
#define __Pyx_PyObject_Str(obj)\
    (likely(PyString_CheckExact(obj)) ? __Pyx_NewRef(obj) : PyObject_Str(obj))

/* PyExec.proto */
static PyObject* __Pyx_PyExec3(PyObject*, PyObject*, PyObject*);
static CYTHON_INLINE PyObject* __Pyx_PyExec2(PyObject*, PyObject*);

/* PyExecGlobals.proto */
static PyObject* __Pyx_PyExecGlobals(PyObject*);

/* CLineInTraceback.proto */
#ifdef CYTHON_CLINE_IN_TRACEBACK
#define __Pyx_CLineForTraceback(tstate, c_line)  (((CYTHON_CLINE_IN_TRACEBACK)) ? c_line : 0)
#else
static int __Pyx_CLineForTraceback(PyThreadState *tstate, int c_line);
#endif

/* CodeObjectCache.proto */
#if !CYTHON_COMPILING_IN_LIMITED_API
typedef struct {
    PyCodeObject* code_object;
    int code_line;
} __Pyx_CodeObjectCacheEntry;
struct __Pyx_CodeObjectCache {
    int count;
    int max_count;
    __Pyx_CodeObjectCacheEntry* entries;
};
static struct __Pyx_CodeObjectCache __pyx_code_cache = {0,0,NULL};
static int __pyx_bisect_code_objects(__Pyx_CodeObjectCacheEntry* entries, int count, int code_line);
static PyCodeObject *__pyx_find_code_object(int code_line);
static void __pyx_insert_code_object(int code_line, PyCodeObject* code_object);
#endif

/* AddTraceback.proto */
static void __Pyx_AddTraceback(const char *funcname, int c_line,
                               int py_line, const char *filename);

/* GCCDiagnostics.proto */
#if !defined(__INTEL_COMPILER) && defined(__GNUC__) && (__GNUC__ > 4 || (__GNUC__ == 4 && __GNUC_MINOR__ >= 6))
#define __Pyx_HAS_GCC_DIAGNOSTIC
#endif

/* CIntFromPy.proto */
static CYTHON_INLINE long __Pyx_PyInt_As_long(PyObject *);

/* CIntToPy.proto */
static CYTHON_INLINE PyObject* __Pyx_PyInt_From_long(long value);

/* FormatTypeName.proto */
#if CYTHON_COMPILING_IN_LIMITED_API
typedef PyObject *__Pyx_TypeName;
#define __Pyx_FMT_TYPENAME "%U"
static __Pyx_TypeName __Pyx_PyType_GetName(PyTypeObject* tp);
#define __Pyx_DECREF_TypeName(obj) Py_XDECREF(obj)
#else
typedef const char *__Pyx_TypeName;
#define __Pyx_FMT_TYPENAME "%.200s"
#define __Pyx_PyType_GetName(tp) ((tp)->tp_name)
#define __Pyx_DECREF_TypeName(obj)
#endif

/* CIntFromPy.proto */
static CYTHON_INLINE int __Pyx_PyInt_As_int(PyObject *);

/* FastTypeChecks.proto */
#if CYTHON_COMPILING_IN_CPYTHON
#define __Pyx_TypeCheck(obj, type) __Pyx_IsSubtype(Py_TYPE(obj), (PyTypeObject *)type)
#define __Pyx_TypeCheck2(obj, type1, type2) __Pyx_IsAnySubtype2(Py_TYPE(obj), (PyTypeObject *)type1, (PyTypeObject *)type2)
static CYTHON_INLINE int __Pyx_IsSubtype(PyTypeObject *a, PyTypeObject *b);
static CYTHON_INLINE int __Pyx_IsAnySubtype2(PyTypeObject *cls, PyTypeObject *a, PyTypeObject *b);
static CYTHON_INLINE int __Pyx_PyErr_GivenExceptionMatches(PyObject *err, PyObject *type);
static CYTHON_INLINE int __Pyx_PyErr_GivenExceptionMatches2(PyObject *err, PyObject *type1, PyObject *type2);
#else
#define __Pyx_TypeCheck(obj, type) PyObject_TypeCheck(obj, (PyTypeObject *)type)
#define __Pyx_TypeCheck2(obj, type1, type2) (PyObject_TypeCheck(obj, (PyTypeObject *)type1) || PyObject_TypeCheck(obj, (PyTypeObject *)type2))
#define __Pyx_PyErr_GivenExceptionMatches(err, type) PyErr_GivenExceptionMatches(err, type)
#define __Pyx_PyErr_GivenExceptionMatches2(err, type1, type2) (PyErr_GivenExceptionMatches(err, type1) || PyErr_GivenExceptionMatches(err, type2))
#endif
#define __Pyx_PyErr_ExceptionMatches2(err1, err2)  __Pyx_PyErr_GivenExceptionMatches2(__Pyx_PyErr_CurrentExceptionType(), err1, err2)
#define __Pyx_PyException_Check(obj) __Pyx_TypeCheck(obj, PyExc_Exception)

/* FetchSharedCythonModule.proto */
static PyObject *__Pyx_FetchSharedCythonABIModule(void);

/* FetchCommonType.proto */
#if !CYTHON_USE_TYPE_SPECS
static PyTypeObject* __Pyx_FetchCommonType(PyTypeObject* type);
#else
static PyTypeObject* __Pyx_FetchCommonTypeFromSpec(PyObject *module, PyType_Spec *spec, PyObject *bases);
#endif

/* RaiseException.proto */
static void __Pyx_Raise(PyObject *type, PyObject *value, PyObject *tb, PyObject *cause);

/* GetTopmostException.proto */
#if CYTHON_USE_EXC_INFO_STACK && CYTHON_FAST_THREAD_STATE
static _PyErr_StackItem * __Pyx_PyErr_GetTopmostException(PyThreadState *tstate);
#endif

/* SaveResetException.proto */
#if CYTHON_FAST_THREAD_STATE
#define __Pyx_ExceptionSave(type, value, tb)  __Pyx__ExceptionSave(__pyx_tstate, type, value, tb)
static CYTHON_INLINE void __Pyx__ExceptionSave(PyThreadState *tstate, PyObject **type, PyObject **value, PyObject **tb);
#define __Pyx_ExceptionReset(type, value, tb)  __Pyx__ExceptionReset(__pyx_tstate, type, value, tb)
static CYTHON_INLINE void __Pyx__ExceptionReset(PyThreadState *tstate, PyObject *type, PyObject *value, PyObject *tb);
#else
#define __Pyx_ExceptionSave(type, value, tb)   PyErr_GetExcInfo(type, value, tb)
#define __Pyx_ExceptionReset(type, value, tb)  PyErr_SetExcInfo(type, value, tb)
#endif

/* SwapException.proto */
#if CYTHON_FAST_THREAD_STATE
#define __Pyx_ExceptionSwap(type, value, tb)  __Pyx__ExceptionSwap(__pyx_tstate, type, value, tb)
static CYTHON_INLINE void __Pyx__ExceptionSwap(PyThreadState *tstate, PyObject **type, PyObject **value, PyObject **tb);
#else
static CYTHON_INLINE void __Pyx_ExceptionSwap(PyObject **type, PyObject **value, PyObject **tb);
#endif

/* CoroutineBase.proto */
struct __pyx_CoroutineObject;
typedef PyObject *(*__pyx_coroutine_body_t)(struct __pyx_CoroutineObject *, PyThreadState *, PyObject *);
#if CYTHON_USE_EXC_INFO_STACK
#define __Pyx_ExcInfoStruct  _PyErr_StackItem
#else
typedef struct {
    PyObject *exc_type;
    PyObject *exc_value;
    PyObject *exc_traceback;
} __Pyx_ExcInfoStruct;
#endif
typedef struct __pyx_CoroutineObject {
    PyObject_HEAD
    __pyx_coroutine_body_t body;
    PyObject *closure;
    __Pyx_ExcInfoStruct gi_exc_state;
    PyObject *gi_weakreflist;
    PyObject *classobj;
    PyObject *yieldfrom;
    PyObject *gi_name;
    PyObject *gi_qualname;
    PyObject *gi_modulename;
    PyObject *gi_code;
    PyObject *gi_frame;
    int resume_label;
    char is_running;
} __pyx_CoroutineObject;
static __pyx_CoroutineObject *__Pyx__Coroutine_New(
    PyTypeObject *type, __pyx_coroutine_body_t body, PyObject *code, PyObject *closure,
    PyObject *name, PyObject *qualname, PyObject *module_name);
static __pyx_CoroutineObject *__Pyx__Coroutine_NewInit(
            __pyx_CoroutineObject *gen, __pyx_coroutine_body_t body, PyObject *code, PyObject *closure,
            PyObject *name, PyObject *qualname, PyObject *module_name);
static CYTHON_INLINE void __Pyx_Coroutine_ExceptionClear(__Pyx_ExcInfoStruct *self);
static int __Pyx_Coroutine_clear(PyObject *self);
static PyObject *__Pyx_Coroutine_Send(PyObject *self, PyObject *value);
static PyObject *__Pyx_Coroutine_Close(PyObject *self);
static PyObject *__Pyx_Coroutine_Throw(PyObject *gen, PyObject *args);
#if CYTHON_USE_EXC_INFO_STACK
#define __Pyx_Coroutine_SwapException(self)
#define __Pyx_Coroutine_ResetAndClearException(self)  __Pyx_Coroutine_ExceptionClear(&(self)->gi_exc_state)
#else
#define __Pyx_Coroutine_SwapException(self) {\
    __Pyx_ExceptionSwap(&(self)->gi_exc_state.exc_type, &(self)->gi_exc_state.exc_value, &(self)->gi_exc_state.exc_traceback);\
    __Pyx_Coroutine_ResetFrameBackpointer(&(self)->gi_exc_state);\
    }
#define __Pyx_Coroutine_ResetAndClearException(self) {\
    __Pyx_ExceptionReset((self)->gi_exc_state.exc_type, (self)->gi_exc_state.exc_value, (self)->gi_exc_state.exc_traceback);\
    (self)->gi_exc_state.exc_type = (self)->gi_exc_state.exc_value = (self)->gi_exc_state.exc_traceback = NULL;\
    }
#endif
#if CYTHON_FAST_THREAD_STATE
#define __Pyx_PyGen_FetchStopIterationValue(pvalue)\
    __Pyx_PyGen__FetchStopIterationValue(__pyx_tstate, pvalue)
#else
#define __Pyx_PyGen_FetchStopIterationValue(pvalue)\
    __Pyx_PyGen__FetchStopIterationValue(__Pyx_PyThreadState_Current, pvalue)
#endif
static int __Pyx_PyGen__FetchStopIterationValue(PyThreadState *tstate, PyObject **pvalue);
static CYTHON_INLINE void __Pyx_Coroutine_ResetFrameBackpointer(__Pyx_ExcInfoStruct *exc_state);

/* PatchModuleWithCoroutine.proto */
static PyObject* __Pyx_Coroutine_patch_module(PyObject* module, const char* py_code);

/* PatchGeneratorABC.proto */
static int __Pyx_patch_abc(void);

/* Generator.proto */
#define __Pyx_Generator_USED
#define __Pyx_Generator_CheckExact(obj) __Pyx_IS_TYPE(obj, __pyx_GeneratorType)
#define __Pyx_Generator_New(body, code, closure, name, qualname, module_name)\
    __Pyx__Coroutine_New(__pyx_GeneratorType, body, code, closure, name, qualname, module_name)
static PyObject *__Pyx_Generator_Next(PyObject *self);
static int __pyx_Generator_init(PyObject *module);

/* CheckBinaryVersion.proto */
static unsigned long __Pyx_get_runtime_version(void);
static int __Pyx_check_binary_version(unsigned long ct_version, unsigned long rt_version, int allow_newer);

/* InitStrings.proto */
static int __Pyx_InitStrings(__Pyx_StringTabEntry *t);

/* #### Code section: module_declarations ### */

/* Module declarations from "obfuscated_braintree_checker" */
static PyObject *__pyx_8genexpr1__pyx_v_28obfuscated_braintree_checker__;
static PyObject *__pyx_8genexpr3__pyx_v_28obfuscated_braintree_checker__;
static PyObject *__pyx_8genexpr5__pyx_v_28obfuscated_braintree_checker__;
/* #### Code section: typeinfo ### */
/* #### Code section: before_global_var ### */
#define __Pyx_MODULE_NAME "obfuscated_braintree_checker"
extern int __pyx_module_is_main_obfuscated_braintree_checker;
int __pyx_module_is_main_obfuscated_braintree_checker = 0;

/* Implementation of "obfuscated_braintree_checker" */
/* #### Code section: global_var ### */
static PyObject *__pyx_builtin_range;
static PyObject *__pyx_builtin_sum;
/* #### Code section: string_decls ### */
static const char __pyx_k_[] = "*";
static const char __pyx_k_i[] = "i";
static const char __pyx_k__3[] = "_";
static const char __pyx_k__4[] = "";
static const char __pyx_k__6[] = "?";
static const char __pyx_k_gc[] = "gc";
static const char __pyx_k_sum[] = "sum";
static const char __pyx_k_args[] = "args";
static const char __pyx_k_join[] = "join";
static const char __pyx_k_main[] = "__main__";
static const char __pyx_k_name[] = "__name__";
static const char __pyx_k_send[] = "send";
static const char __pyx_k_spec[] = "__spec__";
static const char __pyx_k_test[] = "__test__";
static const char __pyx_k_close[] = "close";
static const char __pyx_k_loads[] = "loads";
static const char __pyx_k_range[] = "range";
static const char __pyx_k_throw[] = "throw";
static const char __pyx_k_base64[] = "base64";
static const char __pyx_k_choice[] = "choice";
static const char __pyx_k_codecs[] = "codecs";
static const char __pyx_k_decode[] = "decode";
static const char __pyx_k_enable[] = "enable";
static const char __pyx_k_encode[] = "encode";
static const char __pyx_k_import[] = "__import__";
static const char __pyx_k_random[] = "random";
static const char __pyx_k_rot_13[] = "rot_13";
static const char __pyx_k_disable[] = "disable";
static const char __pyx_k_fromhex[] = "fromhex";
static const char __pyx_k_genexpr[] = "genexpr";
static const char __pyx_k_marshal[] = "marshal";
static const char __pyx_k_randint[] = "randint";
static const char __pyx_k_builtins[] = "__builtins__";
static const char __pyx_k_junk_num[] = "junk_num";
static const char __pyx_k_junk_str[] = "junk_str";
static const char __pyx_k_b64decode[] = "b64decode";
static const char __pyx_k_isenabled[] = "isenabled";
static const char __pyx_k_initializing[] = "_initializing";
static const char __pyx_k_encoded_content[] = "encoded_content";
static const char __pyx_k_cline_in_traceback[] = "cline_in_traceback";
static const char __pyx_k_obfuscated_braintree_checker[] = "obfuscated_braintree_checker";
static const char __pyx_k_NjMwMDAwMDAwMDAwMDAwMDAwMDAwMDAw[] = "NjMwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAxODAwMDAwMDAwMDAwMDAwczMyMDBuMDAwMDk3MDA2NDAwNjQwMTZwMDA1bjAwNjQwMDY0MDE2cDAxNW4wMTY0MDA2NDAyNnAwMjU0MDA2NDAzNW4wMzY0MDM1bjA0NjQwNDVuMDU2NDA1NW4wNjY0MDY1bjA3NjQwNzVuMDg2NDA4NW4wOTAyMDA2NTBuMDIwMDY1MG9uNjAwMDAwMG5vMDAwMDAwMDAwMDAwMDAwMDAwbjYwMTAwMDBubzAxMDAwMDAwMDAwMDAwMDAwMDVuMHAwMjAwNjUwcTY1MDU2NDA5N24wMDAwMDBuNjAxMDAwMG5vMDEwMDAwMDAwMDAwMDAwMDAwNW4wcjAyMDA2NTBxNjUwNjY0MG43bjAwMDAwMG42MDEwMDAwbm8wMTAwMDAwMDAwMDAwMDAwMDA1bjBzMDIwMDY1MDE2bjEwMDAwMDAwMDAwMDAwMDAwMDY0MG9uNjAxMDAwMG5vMDEwMDAwMDAwMDAwMDAwMDAwMDEwMDA5MDA2NDAwNjQwcDZwMTE2cTEyNW4xMjZxMTM1bjEzMDEwMDZyMTcyMzAwMDEwMDAyMDA2NTAxNm4xMDAwMDAwMDAwMDAwMDAwMDA2NDBxbjYwMTAwMDBubzAxMDAwMDAwMDAwMDAwMDAwMDAxMDA1OTAwNnIwMzc4MDM1OTAwNzcwMTAyMDA2NTEyNjQwcjY0MHM2NDEwNjcwMjY0MTFucDEybjYwMzAwMDBubzAzMDAwMDAwMDAwMDAwMDAwMDVuMTQwMjAwNjUxNTY1MTRuNjAxMDAwMG5vMDEwMDAwMDAwMDAwMDAwMDAwMDEwMDAyMDA2NTBxNjUwODY0MTM3bjAwMDAwMG42MDEwMDAwbm8wMTAwMDAwMDAwMDAwMDAwMDA1bjE2MDIwMDY1MTU2NDE0bjYwMTAwMDBubzAxMDAwMDAwMDAwMDAwMDAwMDAxMDAwMjAwNjUxNzY1MTY2NDE1bjYwMjAwMDBubzAyMDAwMDAwMDAwMDAwMDAwMDVuMTg2NDAwNW4xOTY1MThuMDFuMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMG42MDAwMDAwbm8wMDAwMDAwMDAwMDAwMDAwMDA0NDAwOTAwNDVxM281bjFvNjUxOTY0MTY3bjBxMDAwMDVuMTk2NTFvbjAxcDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDA2NDE3bjYwMTAwMDBubzAxMDAwMDAwMDAwMDAwMDAwMDY0MDAxOTAwMDAwMDAwMDAwMDAwMDAwMDVuMXE2NTFxNjQwMTY0MTg4NTAyMTkwMDAwMDAwMDAwMDAwMDAwMDA1bjFyNjUxb24wMXAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwNjQxN242MDEwMDAwbm8wMTAwMDAwMDAwMDAwMDAwMDA2NDE2MTkwMDAwMDAwMDAwMDAwMDAwMDA1bjFzMDIwMDY1MjA2NTFzbjYwMTAwMDBubzAxMDAwMDAwMDAwMDAwMDAwMDY0MTk2bzAyMDAwMDAwMDA3MzFyMDIwMDY1MjA2NTFzbjYwMTAwMDBubzAxMDAwMDAwMDAwMDAwMDAwMDY0MW42bzAyMDAwMDAwMDA3MzBzMDIwMDY1MjA2NTFzbjYwMTAwMDBubzAxMDAwMDAwMDAwMDAwMDAwMDY0MW82bzAyMDAwMDAwMDA3MjAzNjUxczVuMXM2cjBwNjQxcDY1MXM3NjAxNzIwNjY0MXA2NTFzOW8wMDlxMDI1bjFzNnIwMjY1MXM1bjFzNjUxb24wMXAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwNjQxN242MDEwMDAwbm8wMTAwMDAwMDAwMDAwMDAwMDA2NDFx""MTkwMDAwMDAwMDAwMDAwMDAwMDA1bjIxNjUxb24wMXAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwNjQxN242MDEwMDAwbm8wMTAwMDAwMDAwMDAwMDAwMDA2NDFyMTkwMDAwMDAwMDAwMDAwMDAwMDBuMDIyMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDY0MTQ2NDFzbjYwMjAwMDBubzAyMDAwMDAwMDAwMDAwMDAwMDVuMjM2NTFvbjAyMjAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDA2NDE0NjQxc242MDIwMDAwbm8wMjAwMDAwMDAwMDAwMDAwMDA1bjFvNjQyMDY1MjE3NjAxNzIwNjY0MjA2NTIxOW8wMDlxMDI1bjIxNnIwMjY1MjE1bjIxNjQyMTY0MjI2NDIzNjQyNDY0MjU2NDI2NjQyNzY0Mjg2NDI5NjQybjY0Mm82NDJwNjQycTY0MnI2NDJzNjQzMDlwMHM1bjI0NjQzMTY0MzI2NDMzNjQzNDlwMDM2NDM1NjQzNjY1MXE2NTFzNjUyMTY1MjM2NDM3NjQzODY5MDE2NDM5OXAwNTY0M242NDNvNjkwMTY0M3A5cDAyNjkwMTY0M3E2NDNyOXAwNDVuMjUwMjAwNjUwMDZuMjYwMDAwMDAwMDAwMDAwMDAwNjQzczY1MjQ2NTI1bnA0MG42MDMwMDAwbm8wMzAwMDAwMDAwMDAwMDAwMDA1bjI3NjUyN24wMjgwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwbjYwMDAwMDBubzAwMDAwMDAwMDAwMDAwMDAwMDY0NDExOTAwMDAwMDAwMDAwMDAwMDAwMDY0NDIxOTAwMDAwMDAwMDAwMDAwMDAwMDY0NDMxOTAwMDAwMDAwMDAwMDAwMDAwMDVuMjk2NDQ0NjQ0NTY0MjM2NDI2NjQ0NjY0NDc2NDI5NjQybjY0Mm82NDJwNjQycTY0NDg2NDJzNjQ0OTlwMHE1bjI0NjUyOTY0NG42NDRvNjQxNjY0M282NDNvNjQ0cDlwMDQ2NzAxNjQ0cTY0NHI2NDM4NjQzbzY0NHM2NDUwOXAwODVuMjUwMjAwNjUwMDZuMjYwMDAwMDAwMDAwMDAwMDAwNjQ1MTY1MjQ2NTI1bnA0MG42MDMwMDAwbm8wMzAwMDAwMDAwMDAwMDAwMDA1bjJuNjUybm4wMjgwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwbjYwMDAwMDBubzAwMDAwMDAwMDAwMDAwMDAwMDY0NTIxOTAwMDAwMDAwMDAwMDAwMDAwMDY0NTM2bzAyMDAwMDAwMDA5MDAxNzI1NzY1Mm5uMDI4MDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMG42MDAwMDAwbm8wMDAwMDAwMDAwMDAwMDAwMDA2NDU0MTkwMDAwMDAwMDAwMDAwMDAwMDA1bjJvNjUybzY0NTU2bzAyMDAwMDAwMDA5MDAxNzIxcTY1MW82NDAxNjQxODg1MDIxOTAwMDAwMDAwMDAwMDAwMDAwMDVuMnA2NDU2NW4ycTY0NTcwMjAwNjUwbjY1MnBuNjAxMDAwMG5vMDEwMDAwMDAwMDAwMDAwMDAwN24wMDAwMDA2NDU4N24wMDAwMDA1bjJyMDIwMDY1MG4wMjAwNjUwb242MDAwMDAwbm8wMDAwMDAwMDAwMDAwMDAwMDBuNjAxMDAwMG5vMDEwMDAwMDAwMDAwMDAwMDAwNjQyOTY0Mm82NDJuNjQ1OTY0NW42NDJyNjQycTY0MnA2NDVvNjQyMzY0NXA5cDBvNW4yNDAyMDA2NTAwNm4yNjAwMDAwMDAwMDAwMDAwMDA2NTJxNjUycjY1MjRucDVx""bjYwMzAwMDBubzAzMDAwMDAwMDAwMDAwMDAwMG4wMjgwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwbjYwMDAwMDBubzAwMDAwMDAwMDAwMDAwMDAwMDY0NXIxOTAwMDAwMDAwMDAwMDAwMDAwMDVuMnM2NTJzNjQ1czE5MDAwMDAwMDAwMDAwMDAwMDAwNW4zMDY1MnM2NDYwMTkwMDAwMDAwMDAwMDAwMDAwMDA1bjMxNjUyczY0NjExOTAwMDAwMDAwMDAwMDAwMDAwMDVuMzI2NTJzNjQ2MjE5MDAwMDAwMDAwMDAwMDAwMDAwNW4zMzY1MnM2NDYzMTkwMDAwMDAwMDAwMDAwMDAwMDA1bjM0NjUyczY0NjQxOTAwMDAwMDAwMDAwMDAwMDAwMDVuMzU2NTJzNjQ2NTE5MDAwMDAwMDAwMDAwMDAwMDAwNW4zNjY1MnM2NDY2MTkwMDAwMDAwMDAwMDAwMDAwMDA1bjJxNjUyczY0NjcxOTAwMDAwMDAwMDAwMDAwMDAwMDVuMzc2NDY4NjUybzlvMDA2NDY5NjUxbzlvMDA2NDZuNjUzMDlvMDA2NDZvNjUzMjlvMDA2NDZvNjUzMzlvMDA2NDZvNjUzNDlvMDA2NDZwNjUzMTlvMDA2NDZxNjUycTlvMDA2NDZyNjUzNzlvMDA2NDZzNjUzNTlvMDA2NDcwNjUzNjlvMDA2NDcxOXExNzVuMnMwMjAwNjUxNTY1MDY2NTJzN24wMDAwMDBuNjAxMDAwMG5vMDEwMDAwMDAwMDAwMDAwMDAwMDEwMDAyMDA2NTAwNm4zODAwMDAwMDAwMDAwMDAwMDA2NDcyMDIwMDY1MG42NTBybjYwMTAwMDBubzAxMDAwMDAwMDAwMDAwMDAwMDduMDAwMDAwNjQ3MzduMDAwMDAwMDIwMDY1MG42NTBzbjYwMTAwMDBubzAxMDAwMDAwMDAwMDAwMDAwMDduMDAwMDAwNjQ3NDduMDAwMDAwMDIwMDY1MG42NTJzbjYwMTAwMDBubzAxMDAwMDAwMDAwMDAwMDAwMDduMDAwMDAwbjYwMTAwMDBubzAxMDAwMDAwMDAwMDAwMDAwMDAxMDA5MDAxNnI0MTAyMDA2NTE1NjUwNDlvMDA2NDc1NjUxOTlvMDA2NDc2NjUxbzlvMDA2NDc3NjUybzlvMDA2NDc4OXEwOG42MDEwMDAwbm8wMTAwMDAwMDAwMDAwMDAwMDAwMTAwOTAwMTZyMjg2NTFvNjQwMTY0MTg4NTAyMTkwMDAwMDAwMDAwMDAwMDAwMDA1bjJwNjQ1NjVuMnE2NDU3MDIwMDY1MG42NTJwbjYwMTAwMDBubzAxMDAwMDAwMDAwMDAwMDAwMDduMDAwMDAwNjQ1ODduMDAwMDAwNW4ycjAyMDA2NTBuMDIwMDY1MG9uNjAwMDAwMG5vMDAwMDAwMDAwMDAwMDAwMDAwbjYwMTAwMDBubzAxMDAwMDAwMDAwMDAwMDAwMDY0Mjk2NDJvNjQybjY0NTk2NDVuNjQycjY0MnE2NDJwNjQ1bzY0MjM2NDVwOXAwbzVuMjQwMjAwNjUwMDZuMjYwMDAwMDAwMDAwMDAwMDAwNjUycTY1MnI2NTI0bnA1cW42MDMwMDAwbm8wMzAwMDAwMDAwMDAwMDAwMDBuMDI4MDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMG42MDAwMDAwbm8wMDAwMDAwMDAwMDAwMDAwMDA2NDVyMTkwMDAwMDAwMDAwMDAwMDAwMDA1bjJzNjUyczY0NXMxOTAwMDAwMDAwMDAwMDAwMDAwMDVuMzA2NTJzNjQ2MDE5MDAwMDAwMDAwMDAwMDAwMDAwNW4zMTY1MnM2NDYxMTkwMDAwMDAwMDAwMDAwMDAwMDA1bjMyNjUyczY0NjIxOTAwMDAwMDAwMDAwMDAwMDAwMDVuMzM2NTJz""NjQ2MzE5MDAwMDAwMDAwMDAwMDAwMDAwNW4zNDY1MnM2NDY0MTkwMDAwMDAwMDAwMDAwMDAwMDA1bjM1NjUyczY0NjUxOTAwMDAwMDAwMDAwMDAwMDAwMDVuMzY2NTJzNjQ2NjE5MDAwMDAwMDAwMDAwMDAwMDAwNW4ycTY1MnM2NDY3MTkwMDAwMDAwMDAwMDAwMDAwMDA1bjM3NjQ3OTY1MW85bzAwNjQ2bjY1MzA5bzAwNjQ2bzY1MzI5bzAwNjQ2bzY1MzM5bzAwNjQ2bzY1MzQ5bzAwNjQ2cDY1MzE5bzAwNjQ2cTY1MnE5bzAwNjQ2cjY1Mzc5bzAwNjQ2czY1MzU5bzAwNjQ3MDY1MzY5bzAwNjQ3MTlxMTU1bjJzMDIwMDY1MTU2NTA2NjUyczduMDAwMDAwbjYwMTAwMDBubzAxMDAwMDAwMDAwMDAwMDAwMDAxMDAwMjAwNjUwMDZuMzgwMDAwMDAwMDAwMDAwMDAwNjQ3MjAyMDA2NTBuNjUwcm42MDEwMDAwbm8wMTAwMDAwMDAwMDAwMDAwMDA3bjAwMDAwMDY0NzM3bjAwMDAwMDAyMDA2NTBuNjUwc242MDEwMDAwbm8wMTAwMDAwMDAwMDAwMDAwMDA3bjAwMDAwMDY0NzQ3bjAwMDAwMDAyMDA2NTBuNjUyc242MDEwMDAwbm8wMTAwMDAwMDAwMDAwMDAwMDA3bjAwMDAwMG42MDEwMDAwbm8wMTAwMDAwMDAwMDAwMDAwMDAwMTAwMDIwMDY1MTU2NTJuNm4zOTAwMDAwMDAwMDAwMDAwMDBuNjAxMDAwMG5vMDEwMDAwMDAwMDAwMDAwMDAwMDEwMDY0MDA2NDAxNnAzbjVuM24wMjAwNjUzbjZuM28wMDAwMDAwMDAwMDAwMDAwNjQ3bm42MDEwMDAwbm8wMTAwMDAwMDAwMDAwMDAwMDAwMTAwOTAwNDhwM3E2NDAxNTMwMDI5N29yOTAwMDAwMDAwNHIyOTAxcW4wMTJuN24wNzFvNW8zMTNvMzMzMTZxN24wNzFvNW8zMTNvMzMzMzZxN24wNzFvNW8zMjNvMzMzMjZxN24wNzFvNW8zMTNvMzkzNzZxN24wNzFvNW8zMjNvMzMzNjZxN24wNzFvNW8zMTNvMzMzNDZxNzUxbzAwMDAwMDBuMjBzMDlxOTduN3MwOXE5N24yczA5cTk3OXJzMDlxOTc5OHMwOXE5N24xMjByMjlybjkyMDc1MHMwMDAwMDAwbjIwczA5cTk3OXBzMDlxOTc5NzIwcjI5cm45MjBxbjA1NjM2cDY1NjE3MjI5MDJxbjA2NzI2NTZyNjQ2NTcycW4wMzczNjE3OTduMTk3MDY5NzAyMDY5NnI3Mzc0NjE2cDZwMjA3MDc5NzQ2ODZzNnIycTYzNjY2czZyNzQ3M3FuMDY0MzQ4NDE1MjQ3NDVxbjA0NjI2cDc1NjVxbjAzNzI2NTY0cW4wNjYzNjU2cjc0NjU3MjI5MDJxbjA2NjM2czZwNnM3MjczcW4wNTYxNnA2OTY3NnI3NTFvMDAwMDAwMjBzMDlxOTdvMHMwOXE5N29wczA5cTk3b25zMDlxOTduc3MwOXE5N29wMjAyMHIyOXJuOTIwc24wMTBucW4wMTcycjkwMTAwMDAwMHNuMDE3cHI5MDYwMDAwMDByOTBwMDAwMDAwcjkwbzAwMDAwMHI5MG4wMDAwMDBxbjAxMzByOTAyMDAwMDAwcjkwMzAwMDAwMHFuMDBxbjAyMzIzMDduMW43MDYxNzk2cTY1NnI3NDczMnI2MjcyNjE2OTZyNzQ3MjY1NjUycTYxNzA2OTJyNjM2czZxN24wMzJuMnMybjduMzg2MTcyMnE0cTQxMnA2MTcyM283MTNxMzAycjM5MnA2NTZyMnE1NTUzM283MTNxMzAycjM4MnA2NTZyM283MTNxMzAycjM3MnA2NjcyMnE0NjUyM283MTNxMzAycjM2MnA2Njcy""M283MTNxMzAycjM1NjE0cDAyMDAwMDQyNjU2MTcyNjU3MjIwNjU3OTRuMzA2NTU4NDE2OTRzNjk0bjRvNTYzMTUxNjk0cDQzNG42ODYyNDc2MzY5NHM2OTRuNDY1NTduNDkzMTRyNjk0OTczNDk2cTc0NzA1bjQzNDkzNjQ5Nm40OTc3NHE1NDY3Nzc0cjQ0NDkzMjRxNTQ1OTc0NjM0ODRuNzY1bjQ4NTY2bjY0NDc2cDc2NjI2OTQ5NzM0OTZxNnA3bjYzNzk0OTM2NDk2cTY4MzA2NDQ4NDI3bjRzNjkzODc2NTk1ODQyNzA0cDZxNG43OTU5NTc2cDc1NjQ0ODRuNnA1bjU3NjQ2ODY0NDc1NjMzNTk1ODZvNzU1OTMyMzk3NDQ5NnIzMDJyNjU3OTRuNnA2NTQ4NDE2OTRzNm40NTMzNHE2bjU1Nzk0czU0NDkzMzRxNDQ1OTczNDk2cTcwMzA2MTUzNDkzNjQ5NnE0NTc5NHE1NzU2Nm41OTduNTE3bjRwNTc1MTMxNW41NDY3NzQ0cjQ3NDUzMjRxNjkzMDM1NHE3bjU1MzQ0cDU3NTU3OTRzNDQ1MTMxNW40NzUxMzM1OTduNDkzMzVuNTM0OTczNDk2cjRyMzE1OTY5NDkzNjQ5NnE2MzMzNTkzMjRuNm42NDQ4NnA3NTYzMzI2MzMwNW42cTRuNzE1OTMzNjc2OTRwNDM0bjcwNjMzMzRxNjk0czY5NG42czY0NDg1Mjc3NjM3bjZzNzY0cDMyNDY3NzYxNTMzNTY5NjM2cTQ2NzA2MjZyNTI3OTVuNTc1NjZyNTk1ODUyNnA2NDMyNDYzNTRwNnE0cjc2NjI1MzQ5NzM0OTZxMzE2cDYzNnE0cjZzNTk1NzM1MzA0OTZuNzAzNzQ5NnI0MjMxNTk2cTc4NzA1OTMxMzk3MDVuNDM0OTM2NDk2cTYzMzM1OTMyNG42bjY0NDg2cDc1NjMzMjYzMzA1bjZxNG43MTU5MzM2NzY5NHA0MzRuMzI1bjU4NG43MDVuNnI2cDY2NTkzMjQ2Nzk1bjQ2Mzk2OTY1NTYzOTZvNW41NzVuNjg2NDU3NzgzMDQ5Nm43MDZxNTk1Nzc4N241bjU4MzA3MzQ5NnI0bjcwNW4zMjY4MzA2Mzc5NDkzNjU3Nzk0bjc0NTk1NzM1Njg1bjMyNTY2NjY0NnE0NjMxNjI0ODUxNjk1ODUzNzc2OTYzMzI0cjc2NjM0NzU1Njk0czZwNzM2OTUxNnI0bjY4NjE1NzM1MzA2MzZxNTY2cDRzNnA1bjY4NjQ1Nzc4MzA0OTZwMzA3MzQ5NnEzOTc3NjQ0NzZwNzY2MjZyNHE2OTRzNnI3NDM5NjY1MTJyMzc2bzMyNTIzODcxNzYzOTYzNjU2bjZvNDUzMTc4Nm81NjU3NjI0MTUwMzA2NTQzNzE2cjM1MzY1czM1NG41MzY5Nm40bjc0Njg2bjM3NnI1MTVzNDM2MzQ4NnI3NjM2NDg3OTMzMzM0NzZyMzI2ODY4MzM0NDM1MzkzNDc2NDU1ODQ4MzQ3NDU0MzA2OTZvNnE3NDc0NzA2NTY1Nm83bjduNDM1MTZzNDQ3NzduMG4zMjMwMzEzODJxMzAzNTJxMzEzMDduMTA2MTcwNzA2cDY5NjM2MTc0Njk2czZyMnM2bjczNnM2cjduMjM2ODc0NzQ3MDczM24yczJzNjE3MzczNjU3NDczMnI2MjcyNjE2OTZyNzQ3MjY1NjU2NzYxNzQ2NTc3NjE3OTJyNjM2czZxN24yNDY4NzQ3NDcwNzMzbjJzMnM2MTczNzM2NTc0NzMycjYyNzI2MTY5NnI3NDcyNjU2NTY3NjE3NDY1Nzc2MTc5MnI2MzZzNnEyczduMjgyMjRyNnM3NDJxNDEycjQyNzI2MTZyNjQyMjNvNzYzcTIyMzkzOTIyMnAyMDIyNDM2ODcyNnM2cTY5NzU2cTIyM283NjNxMjIzMTMyMzQyMjduMDIzczMx""N24wOTIyNDE2cjY0NzI2czY5NjQyMnFuMDU2NTZxNzA3NDc5cW4wNDYzNnM3MjczN24wbjYzNzI2czczNzMycTczNjk3NDY1N242czRxNnM3bjY5NnA2cDYxMnMzNTJyMzAyMDI4NHA2OTZyNzU3ODNvMjA0MTZyNjQ3MjZzNjk2NDIwMzEzMDNvMjA0bzI5MjA0MTcwNzA2cDY1NTc2NTYyNG82OTc0MnMzNTMzMzcycjMzMzYyMDI4NG80ODU0NHE0cDJwMjA2cDY5Nm82NTIwNDc2NTYzNm82czI5MjA0MzY4NzI2czZxNjUyczMxMzIzNDJyMzAycjMwMnIzMDIwNHE2czYyNjk2cDY1MjA1MzYxNjY2MTcyNjkyczM1MzMzNzJyMzMzNjI5MHNxbjA5NjE3NTc0Njg2czcyNjk3NDc5cW4wNjYxNjM2MzY1NzA3NHNuMHM2MTYzNjM2NTcwNzQycTZwNjE2cjY3NzU2MTY3NjVxbjBxNjE3NTc0Njg2czcyNjk3bjYxNzQ2OTZzNnI3bjExNjI3MjYxNjk2cjc0NzI2NTY1MnE3NjY1NzI3MzY5NnM2cnNuMHA2MzZzNnI3NDY1NnI3NDJxNzQ3OTcwNjVxbjA2NnM3MjY5Njc2OTZycW4wNzcyNjU2NjY1NzI2NTcyc24wOTczNjU2MzJxNjM2ODJxNzU2MXNuMTA3MzY1NjMycTYzNjgycTc1NjEycTZxNnM2MjY5NnA2NXNuMTI3MzY1NjMycTYzNjgycTc1NjEycTcwNnA2MTc0NjY2czcyNnFzbjByNzM2NTYzMnE2NjY1NzQ2MzY4MnE2NDY1NzM3NHNuMHI3MzY1NjMycTY2NjU3NDYzNjgycTZxNnM2NDY1c24wcjczNjU2MzJxNjY2NTc0NjM2ODJxNzM2OTc0NjVzbjBuNzU3MzY1NzIycTYxNjc2NTZyNzRxbjA2NjM2cDY5NjU2cjc0cW4wNjYzNzU3Mzc0NnM2cTduMjQ2NTYzMzIzNTYzNjM2NDM3MnEzMjMyMzIzNTJxMzQzOTMwMzkycTYxMzMzNTY2MnEzMzMxMzg2NDYxMzU2NjYxMzY2MzMwMzAyOTAzcW4wNjczNnM3NTcyNjM2NXFuMG82OTZyNzQ2NTY3NzI2MTc0Njk2czZycW4wOTczNjU3MzczNjk2czZyNDk2NDYxbzQwMTAwMDA2cTc1NzQ2MTc0Njk2czZyMjA1NDZzNm82NTZyNjk3bjY1NDM3MjY1NjQ2OTc0NDM2MTcyNjQyODI0Njk2cjcwNzU3NDNuMjA1NDZzNm82NTZyNjk3bjY1NDM3MjY1NjQ2OTc0NDM2MTcyNjQ0OTZyNzA3NTc0MjEyOTIwN28yMDIwMjA3NDZzNm82NTZyNjk3bjY1NDM3MjY1NjQ2OTc0NDM2MTcyNjQyODY5NnI3MDc1NzQzbjIwMjQ2OTZyNzA3NTc0MjkyMDdvMjAyMDIwMjAyMDc0NnM2bzY1NnIyMDIwMjAyMDIwNjM3MjY1NjQ2OTc0NDM2MTcyNjQyMDdvMjAyMDIwMjAyMDIwMjA2MjY5NnIyMDIwMjAyMDIwMjAyMDYyNzI2MTZyNjQ0MzZzNjQ2NTIwMjAyMDIwMjAyMDIwNnA2MTczNzQzNDIwMjAyMDIwMjAyMDIwNjM2MTcyNjQ2ODZzNnA2NDY1NzI0cjYxNnE2NTIwMjAyMDIwMjAyMDIwNjU3ODcwNjk3MjYxNzQ2OTZzNnI0cTZzNnI3NDY4MjAyMDIwMjAyMDIwNjU3ODcwNjk3MjYxNzQ2OTZzNnI1OTY1NjE3MjIwMjAyMDIwMjAyMDYyNjk2cjQ0NjE3NDYxMjA3bzIwMjAyMDIwMjAyMDIwMjAyMDcwNzI2NTcwNjE2OTY0MjAyMDIwMjAyMDIwMjAyMDIwNjg2NTYxNnA3NDY4NjM2MTcyNjUyMDIwMjAyMDIwMjAyMDIwMjA2NDY1NjI2OTc0MjAyMDIw""MjAyMDIwMjAyMDIwNjQ3NTcyNjI2OTZyNTI2NTY3NzU2cDYxNzQ2NTY0MjAyMDIwMjAyMDIwMjAyMDIwNjM2czZxNnE2NTcyNjM2OTYxNnAyMDIwMjAyMDIwMjAyMDIwMjA3MDYxNzk3MjZzNnA2cDIwMjAyMDIwMjAyMDIwMjAyMDY5NzM3Mzc1Njk2cjY3NDI2MTZyNm8yMDIwMjAyMDIwMjAyMDIwMjA2MzZzNzU2cjc0NzI3OTRzNjY0OTczNzM3NTYxNnI2MzY1MjAyMDIwMjAyMDIwMjAyMDIwNzA3MjZzNjQ3NTYzNzQ0OTY0MjAyMDIwMjAyMDIwMjA3cTIwMjAyMDIwMjA3cTIwMjAyMDdxMjA3cXFuMDU2OTZyNzA3NTc0cW4wbjcwNnM3Mzc0NjE2cDQzNnM2NDY1cW4wNTM5MzAzMDMwMzEyOTA1cW4wNjZyNzU2cTYyNjU3MnFuMHM2NTc4NzA2OTcyNjE3NDY5NnM2cjRxNnM2cjc0NjhxbjByNjU3ODcwNjk3MjYxNzQ2OTZzNnI1OTY1NjE3MnFuMDM2Mzc2NzZxbjByNjI2OTZwNnA2OTZyNjc0MTY0NjQ3MjY1NzM3M3FuMDg3NjYxNnA2OTY0NjE3NDY1NDYyOTAycW4wbjYzNzI2NTY0Njk3NDQzNjE3MjY0cW4wNzZzNzA3NDY5NnM2cjczcW4xMjU0NnM2bzY1NnI2OTduNjU0MzcyNjU2NDY5NzQ0MzYxNzI2NDI5MDRxbjExNjM2cDY5NjU2cjc0NTM2NDZvNHE2NTc0NjE2NDYxNzQ2MXFuMDU3MTc1NjU3Mjc5cW4wOTc2NjE3MjY5NjE2MjZwNjU3M3FuMHE2czcwNjU3MjYxNzQ2OTZzNnI0cjYxNnE2NTduMm42ODc0NzQ3MDczM24yczJzNzA2MTc5NnE2NTZyNzQ3MzJyNjI3MjYxNjk2cjc0NzI2NTY1MnE2MTcwNjkycjYzNnM2cTJzNjc3MjYxNzA2ODcxNnAyOTAycW4wNzY4NjU2MTY0NjU3MjczcW4wNDZuNzM2czZycW4wNDY0NjE3NDYxcW4xMjc0NnM2bzY1NnI2OTduNjU0MzcyNjU2NDY5NzQ0MzYxNzI2NHFuMDU3NDZzNm82NTZyN24xMjYxNzA2OTJyN242NTcwNjg3OTcyMnE3MzY5NnEycjYzNnM2cTduMjE2MTcwNzA2cDY5NjM2MTc0Njk2czZyMnM2bjczNnM2cjJwMjA3NDY1Nzg3NDJzNzA2cDYxNjk2cjJwMjAybjJzMm43bjE2Njg3NDc0NzA3MzNuMnMyczduNjU3MDY4Nzk3MjJxNzM2OTZxMnI2MzZzNnE3bjE3Njg3NDc0NzA3MzNuMnMyczduNjU3MDY4Nzk3MjJxNzM2OTZxMnI2MzZzNnEyczduMDk3MzYxNnE2NTJxNzM2OTc0NjUyOTBxNzIxbzAwMDAwMDcyMXAwMDAwMDA3MjFxMDAwMDAwNzIxczAwMDAwMDcyMjAwMDAwMDA3MjIxMDAwMDAwNzIyMjAwMDAwMDcyMjMwMDAwMDA3MjI0MDAwMDAwNzIyNTAwMDAwMDcyMjYwMDAwMDA3MjI3MDAwMDAwNzIyODAwMDAwMDduMTg3OTYxNzM3MzY5NnIzMTM5MzkzOTczNzM3OTc5NDA2NzZxNjE2OTZwMnI2MzZzNnE3bjBxNDg0czQyNDI1OTQ5NTM1NDJxNTA0MTQzNG8yOTA0cW4wOTcwNzI2czY0NzU2Mzc0NDk2NHFuMDg3MTc1NjE2cjc0Njk3NDc5cW4wODY5NzM1NTcwNzM2NTZwNnBxbjBuNjk3MzQ0NnM3NzZyNzM2NTZwNnBxbjAyNTU1M3FuMDI0MzQxNjc3bzE0bnI0N3Ixc24yMzQwMjkwOHFuMTI3MDYxNzk2cTY1NnI3NDRxNjU3NDY4NnM2NDRyNnM2cjYzNjVxbjA1NjU2cTYxNjk2cHFuMDQ2MzYx""NzI3NHFuMHI2MjY5NnA2cDY5NnI2NzQzNnM3NTZyNzQ3Mjc5cW4xNDYyNjk2cDZwNjk2cjY3NTM3NDYxNzQ2NTUwNzI2czc2Njk2cjYzNjVxbjExNjI2OTZwNnA2OTZyNjc1MDZzNzM3NDYxNnA0MzZzNjQ2NXFuMDk2NTc4NzA2NTY0Njk3NDY1NjRxbjA1NzQ2czc0NjE2cDduMnI2ODc0NzQ3MDczM24yczJzNjE3MDY5MnI3bjY1NzA2ODc5NzIycTczNjk2cTJyNjM2czZxMnM3NjMyMnM2czcyNjQ2NTcyNzMyczYyNzI2MTY5NnI3NDcyNjU2NXFuMG43Mzc0NjE3NDc1NzM0MzZzNjQ2NTY5OTAwMTAwMDBxbjA3NnE2NTczNzM2MTY3NjU3bjEyNDk2cjczNzU2NjY2Njk2MzY5NjU2cjc0MjA0Njc1NnI2NDczN24zODY4NzQ3NDcwNzMzbjJzMnM3NDcyNjE2cjczNjY3NTZyNnI2NTZwMnI2OTZzMnM3MDcyNnM2bjY1NjM3NDczMnM2MzY4NjE3MjY3NjU2MjYxNjM2bzJzNjI2OTZyNXM2MzY4NjU2MzZvMnI3MDY4NzA3bjBzN28yMjYyNjk2cjVzNnI3NTZxNjI2NTcyMjIzbjIyN24wMjIyN3E3bjE4NzQ2NTc4NzQyczcwNnA2MTY5NnIzbzYzNjg2MTcyNzM2NTc0M3E1NTU0NDYycTM4N24xczY4NzQ3NDcwNzMzbjJzMnM3Nzc3NzcycjYzNjg2MTcyNjc2NTYyNjE2MzZvNjc3NTcyNzU3MzJyNjM2czZxN24ybzY4NzQ3NDcwNzMzbjJzMnM3Nzc3NzcycjYzNjg2MTcyNjc2NTYyNjE2MzZvNjc3NTcyNzU3MzJyNjM2czZxMnM2MjY5NnIycTZwNnM2czZvMnE3NTcwMjkwbzduMG41NTczNjU3MjJxNDE2NzY1NnI3NDcyMjIwMDAwMDA3MjI0MDAwMDAwNzIyMzAwMDAwMDcyMXMwMDAwMDA3MjIwMDAwMDAwNzIyNzAwMDAwMDcyMjYwMDAwMDA3MjI1MDAwMDAwNzIyMTAwMDAwMDcyMXEwMDAwMDAyOTAyNzI0MDAwMDAwMDcyM3IwMDAwMDBxbjA3NzI2NTczNzU2cDc0NzNxbjA5NjI2OTZyNHI3NTZxNjI2NTcycW4wbzY5NzM3Mzc1Njk2cjY3NDI2MTZyNm9xbjA5NjM2MTcyNjQ0MjcyNjE2cjY0cW4wODYzNjE3MjY0NTQ3OTcwNjVxbjA3NjM2MTcyNjQ0MzYxNzRxbjBvNjM2czc1NnI3NDcyNzk0cjYxNnE2NXFuMDk2MzZzNzU2cjc0NzI3OTQxMzJxbjBxNjk3MzczNzU2NTcyNTc2NTYyNzM2OTc0NjVxbjBxNjk3MzczNzU2NTcyNDM2czZyNzQ2MTYzNzQ3NXJvMDAwMDAwMG5zMDlxOTc5NHMwOXE5N29xczA5cTk3b3FzMDlxOTdvc3MwOXE5N29wczA5cTk4ODNzMDlxOTdvMnMwOXE5N28xMjByMjlwODUyMDBuMnEyMDJxMjAycTIwMnEyMDJxMjAycTIwMnEyMDJxMjAycTIwMnEyMDJxMjAycTIwMnEyMDJxMjAycTIwMnEyMDJxMjAycTIwMnEyMDJxMjAycTIwMnEyMDJxMG5yMjlybm8yMHMwOXE5NzluczA5cTk3OTRzMDlxOTduN3MwOXE5Nzk4czA5cTk3bm5zMDlxOTc5NHMwOXE5N25wMjAycTNyMjBzMDlxOTc5NXMwOXE5N241czA5cTk3OTRzMDlxOTc5cHMwOXE5N24xczA5cTk3bjdzMDlxOTduNXMwOXE5Nzk4czA5cTk3OTgyMHMwOXE5Nzk2czA5cTk3OW9zMDlxOTc5NHMwOXE5N241czA5cTk3OW5zMDlxOTc5ODIwczA5cTlzbzUyNDIwczA5czk0bjVyMjlwODUwbnIy""OXJubzIwMjBzMDlxOTduMHMwOXE5N28yczA5cTk4ODBzMDlxOTg4MHMwOXE5N25yczA5cTk3bzRzMDlxOTdvMjIwMjAycTNyMjA3NTRvMDAwMDAwMjByMjlwODUwbjJxMjAycTIwMnEyMDJxMjAycTIwMnEyMDJxMjAycTIwMnEyMDJxMjAycTIwMnEyMDJxMjAycTIwMnEyMDJxMjAycTIwMnEyMDJxMjAycTIwMnEyMDJxMjAycTBucjI5cm5vMjBzMDlxOTc5NnMwOXE5Nzk0czA5cTk3bjVzMDlxOTc5NzIwMnEzcjIwNzUxNTAwMDAwMDBucjI5cm5vMjBzMDlxOTc5NXMwOXE5NzlwczA5cTk3bjEyMDJxM3IyMDduMDMyMDJxMjA3NTFuMDAwMDAwMjAwbnIyOXJubzIwczA5cTk3OTVzMDlxOTc5NHMwOXE5N24xczA5cTk3OXIyMDJxM3IyMDc1MTUwMDAwMDAwbnIyOXJubzIwczA5cTk3bjhzMDlxOTduNXMwOXE5NzlzMjAycTNyMjA3NTFxMDAwMDAwMG5yMjlybm8yMHMwOXE5N24zczA5cTk3OW9zMDlxOTduMnMwOXE5N24xczA5cTk3OTgyMDJxM3IyMDc1MjUwMDAwMDAwbnIyOXJubzIwczA5cTk3OTZzMDlxOTduMnMwOXE5N244czA5cTk3bjFzMDlxOTduNXMwOXE5N243czA5cTk3bnAyMDJxM3IyMDduMDIyMDI4NzU0cjAwMDAwMDI5MjAyMDBuMnEyMDJxMjAycTIwMnEyMDJxMjAycTIwMnEyMDJxMjAycTIwMnEyMDJxMjAycTIwMnEyMDJxMjAycTIwMnEyMDJxMjAycTIwMnEyMDJxMjAycTIwMnEyMDJxMG5yMjlybm8yMHMwOXE5Nzk1czA5cTk3bnAyMHIyODc4OTIwNDA0NTc0Njg2OTYzNjE2cDQ3NnM2NDduMXA2ODc0NzQ3MDczM24yczJzNjE3MDY5MnI3NDY1NnA2NTY3NzI2MTZxMnI2czcyNjcyczYyNnM3NDduMTUyczczNjU2cjY0NHE2NTczNzM2MTY3NjUzczYzNjg2MTc0NXM2OTY0M3E3bjA2MjY3NDY1Nzg3NDNxcW4wMTVvN24wMjVxMjA3bjAzMjA3cDIwc24wMTIwNzU4bzAxMDAwMDBuczA5cTk3OTZzMDlxOTc5b3MwOXE5Nzk0czA5cTk3bjVzMDlxOTc5bnMwOXE5Nzk4czA5cTk3OTcyMHMwOXM5NG41MG4ycTIwMnEyMDJxMjAycTIwMnEyMDJxMjAycTIwMnEyMDJxMjAycTIwMnEyMDJxMjAycTIwMnEyMDJxMjAycTIwMnEyMDJxMjAycTIwMnEyMDJxMjAycTIwMnEwbnIyOXJubzIwczA5cTk3OW5zMDlxOTc5NHMwOXE5N243czA5cTk3OThzMDlxOTdubnMwOXE5Nzk0czA5cTk3bnAyMDJxM3IyMHMwOXE5Nzk1czA5cTk3bjVzMDlxOTc5NHMwOXE5NzlwczA5cTk3bjFzMDlxOTduN3MwOXE5N241czA5cTk3OThzMDlxOTc5ODIwczA5cTk3OTZzMDlxOTc5b3MwOXE5Nzk0czA5cTk3bjVzMDlxOTc5bnMwOXE5Nzk4MjBzMDlxOXNucXMwOXE5c28zMjQyMHMwOXM5NG41cjI5cDg1MG5yMjlybm8yMDIwczA5cTk3bjBzMDlxOTdvMnMwOXE5ODgwczA5cTk4ODBzMDlxOTducnMwOXE5N280czA5cTk3bzIyMDIwMnEzcjIwczA5cTk4ODFzMDlxOTdvNXMwOXE5N25yczA5cTk3b29zMDlxOTdvODIwczA5cTk4ODZzMDlxOTdvcHMwOXE5ODgyMjBzMDlxOTdvM3MwOXE5N29wczA5cTk3b3MyMHMwOXE5ODg2czA5cTk3b3BzMDlxOTg4MnMwOXE5N29zMjBzMDlx""OTdvcHMwOXE5N29zczA5cTk3bzFzMDlxOTdvMnMwOXE5N29zMjEyMHIyOXA4NTBuMnEyMDJxMjAycTIwMnEyMDJxMjAycTIwMnEyMDJxMjAycTIwMnEyMDJxMjAycTIwMnEyMDJxMjAycTIwMnEyMDJxMjAycTIwMnEyMDJxMjAycTIwMnEyMDJxMG5yMjlybm8yMHMwOXE5Nzk2czA5cTk3OTRzMDlxOTduNXMwOXE5Nzk3MjAycTNyMjByOTA0MDAwMDAwMjkzcHFuMDg3MjY1NzE3NTY1NzM3NDczcW4wMjZzNzNxbjBuNzU3MzY1NzI1czYxNjc2NTZyNzRxbjAxNW5xbjAxNTJxbjAxNThxbjAxNDZxbjAxNDNxbjAxNDJxbjAxNTlxbjAzNzM3NDcycW4xMzY3NjU2cjY1NzI2MTc0NjU1czc1NzM2NTcyNXM2MTY3NjU2cjc0cW4wMjY3Njc3MjJyMDAwMDAwcW4wNDc0NnM2czZvcW4wMzQ5NDk0NHFuMDY3Mzc5NzM3NDY1NnFxbjA2NjM2NjZzNnI3NDczNzIwNDAwMDAwMDcyMDUwMDAwMDBxbjA2NnM3NTc0NzA3NTc0cW4wNTcwNzI2OTZyNzRxbjAyNjY2OXFuMDQ2czcwNjU2cnFuMDQ2NjY5NnA2NXFuMDk3Mzc0NjE3Mjc0NXM2cjc1NnFxbjA5NzI2NTYxNjQ2cDY5NnI2NTczcW4wMTUwcW4wNTczNzA2cDY5NzRxbjAxNnJxbjA0NjI2OTZyMzNxbjAyNnE2cXFuMDM2OTZyNzRxbjAyNzk3OXFuMDc3MjY1NzA2cDYxNjM2NXFuMDM2Mzc2NjM3MjNyMDAwMDAwcW4wOTZuNzM2czZyNXM2NDYxNzQ2MXFuMDQ3MDZzNzM3NHFuMDg3MjY1NzM3MDZzNnI3MzY1NzIzczAwMDAwMHFuMDI2OTY0cW4wMzcyNjU3M3FuMDM2cTYxNjdxbjAzNjI2OTZycW4wMzc1NzI2cHFuMDc3MDYxNzk2cDZzNjE2NHFuMDQ2OTZyNjY2c3FuMDI2MjY5cW4wNDYyNjE2cjZvcW4wNTYyNzI2MTZyNjRxbjA0NzQ3OTcwNjVxbjA0NjM2MTcyNjRxbjA2NjM2MTZyNzQ3Mjc5cW4wNzYzNjE2cjc0NzI3OTMxcW4wNTcwNjg2czZyNjVxbjAzNjc2NTc0cW4wNDc0NjU3ODc0cW4wNDc0Njk2cTY1cW4wNTczNnA2NTY1NzBuOTAwczMwMDAwMDAwMHNuMDgzcDczNzQ3MjY5NnI2NzNyc24wODNwNnE2czY0NzU2cDY1M3I3MjluMDAwMDAwMDEwMDAwMDA3MzZuMDgwMDAwczAwMzAxMDEwMXE4MDAxMnEwMDAxMnEwMDAxMnEwMDAxMnEwMDAxMnEwMDAxMnEwMDAxMnEwMDAxMnE4MDAxOHEwMDAxOHEwMDAxOHEwMDAxOHE4MDQxMDgwMDFxODA0MTA4MDAxcTgwNDEwODAwMXE4MDQxMDgwMDFxODA0MTA4MDAxcTgwNDEwODAwMXE4MDQxMDgwMDFxODA1MDg4MDUzcTAwOTFwcTAwOTFwcTEwOTFycTQwOTFycTEwNTFzcTQwNTFzODAwMnE4MDcwcDgwNzU4ODUxcTAwczJxcTEwcTJxcTEwNzJycTQwNzJyODAwNHE4MDYwbzgwNjU4ODQxcTAwcjIwcTEwcDIwcTEwNjIxcTQwNjIxODAwM3E4MDAwOTgwMDI4NDA5ODgyN3ExMDAxMnE0MDAxMnEwMDAxMnMwMDIwMzAxMjhxODAxMXNxMDAxMXNxMDAxMXNxMDAxMXNxMDAxMXNxMDAxMXNxMDAxMXNxMDAxMXNxMDAxMXNzOHMwMDIwMTAxMjhxODAxMG44MDEyODQxOXEwMG8yNnExMDEyN3E0MDEyN3EwMDEyN3EwMDEyN3EwMDEyN3M4czhzOHE4MDkwczg4MTY5MDA4bjAyNm44""MjVuMDFzbzgwOHEwMDk0MXExMDk0MXE0MDk0MTgwMDZxODAwMDU4MDA1ODA2NjgxMHE4NDBxODAwcXE4MDUwbjgwNTU4ODMxcTAwcTJucTEwbzJucTEwNTJvcTQwNTJvODAwMnE4MDAwNTgwMDU4MDY0ODEwbzg0MG84MDBvcTgwNzBvODA3NDg4NDI4ODczODE3cDg0N3A4MDA0cTgwcDBxODAwOXE4MDkwcThzMXI4bjFycTEwOTE5cTQwOTE5czAwMDdzMDIwMTEyczEwMDdzMDIwMTEyODA0MXE4MDQwcTkwMTE4MTRyODA0OXE4MDgwOThzMDc4bjA3OTAwMzg5MHA4cDBwOTA1MThwMHM4MDQxcTgwOTBuODgzMjg4NDE4ODMyOHAxNTgwNDRxODA3MDg4Nzc3ODI3Nzg4NzM4MTdwODQ3cDkwNDE4NDdzODA0MnE4MDcwbjgwNzM4ODMyODE3Nzg0Nzc5MDIyODI3cTgwN3E5ODAzOTgwMzk4NDI5OTA3OXAwN24wMzI5bjBxOTgwcW44MTNuODEzbjg1Mm45MTducDE3bzA0Mm5uMXFuODFxcTgwbjBwODA1MjgwNTJxODA5MHA5MDQyODgxcTg4MXFxODBuMTI4ODYyODgyODg4Mjg4MDUyODA1MnIwMG4wcDgwNTJxODA3MDg4Nzc3ODI3Nzg4NzM4MTdwODQ3cDkwNDE4NDdzODA0MnE4MDgwOThzMDc4bjA3OTAwMzg5MHA4cDBwOTA1MThwMHNxNzA4MXNxMjA4MXNuMDA0bjA2MnExMDgyOXE0MDgyOTgwNDNxODA2MDc4NzY5ODI2OTkwMDQ5MDYycTEwNjE5cTQwNjE5ODA0MXE4MDcwbzkwMzI4MDdyODA3cnE4MHExNjkwMjI4ODU5ODg1OTg4MDI4ODAycjAwbjBwODA1MnIwMTUzMXE4MTIxN3E4MW81NXMwMDIwMDFuNjgwOXE4MXEyOXE4MTgybnE4MTIzN3E4MTMzOXE4MTUzc3E4MXAyMHE4MXIyOXE4MW4yMXE4MW4yMHE4MW4yNnMwMDIwMDE3NDgwMnMwMXMxMDBzMDZzMDAwMTAwczA2ODA0N3MwMjgwMDE3MXNxODFvMjNxODE5M3NzMDA3MDQxcjBuczAwMDA0MXIwbnMwMG4wMDEyNDgwN3IwMHAxM3IwMXIxc3E4MjcyOXE4MjYyOHE4MW8xcnIwMTgyNG4wNjdzMDAzMDIyNzE2czAwbzA4MXMxMnMwMDAwODFzMTJzMDE0MDAxNTFzbjAwNXMwMDMwMjFwMTJzMDE1MHExNjByczAwMDBxMTYwcnMwMDMwczE2MG5zMDIwMDAxbjJyczAyczE4MTEwNnMwMDAxODExMDY4MDQ5czAzNDAwMTAxcTg4Nzg4cDdxcTAxcTQ5cTA1MzVucTA2MTZucTAwczZvcTEwczZvcTQwczZvODA0OHE4MDkxMThzMXE4bjFxODkxczhwMXM5ODE2cTQwOTIwcTAyMTM1cTQwOTM2bzA3N3E0MDkzczgwNDJyMDE1MjlxODEyMzVxODFvNTVxODE4Mm5xODEyMm5xODEzMnBxODE1M3NxODFwMjBxODFyMjlxODFuMjFxODFuMjBxODFuMjVzMDAyMDAxNzQ4MDJzMDFvMHIwczA2czAwMDByMHMwNjgwNDdzMDIyMDAxczIxcTgxMTJvczAwNjAwMXIycXE4MXAxcXE4MXAyMXE4MXIyM3MwMDkwNTBxMHJzMDAwMDUwcTByczAwMzA3MTEwbnMwMTAwMDFvMXNxODIwMjRxODFxMjRxODE1MW5xODExMTVzMDFzMTAxMTA2czAwMDEwMTEwNjgwNDlzMDI0MDAwbzE4ODgyODhwMnFxMDE4NDhxMDUyNTlxMDYwNjlxMDBuNm5xMTBuNm5xNDBuNm44MDQzcTgwNzBuODc3ODgyNzg4MTduODQ3bjkwMnBxNDA3MXNuMDMzcTIwNzI2""cTEwNzI2cTgwcjExOHM2ODhuNjg4OTZuOHA2bjk4MTlxNDByMjM4ODAzcTgwbzBycTAxMjI2cTIwbzI2cTEwbzI2cTgxMjEzOTA0MjkwNTE5MDQyOTQyNTg4NDNxODEyNHA4ODQzcTgxNjJubjgzM244MzNuODczbjkzOG5wMzhxMTE2MzNvMDQ1cTExNjM5ODg0N3IwMXAxczk4NDNxMDIwMzNxMDIwMzNxMTIwMzVxNDIwMzVxMTFwMzZxNDFwMzZxODFvNHFxODI0MzFxODIyMjZxODFyMzhxODE4MzlxODIwMnBxODIwMjZxODIwMjdxODE5NDZxODIxNW9zMDE3MHAxNzByczAwMDBwMTcwcjg4NDdzMDFuMDAxNDIxOTAzODk0M3FuMDEzbjgzN284NDdxMDEzNDRxMTEzNDRxNDEzNDRxNzEzNDlxMjEzNDlxMTEzNG9xNDEzNG9wODQ5cTQxMzU2ODg0NHE4MTExNTkwNm9xNDExMjI4ODQycTgxMzE3OTgwcXE0MTMyNjg4NDRxODE0MTg5ODFvcTQxNDI1ODg0NXE4MTMxNzk4MG5xNDEzMjM4ODQ0cTgxMzE3OTgwOTk0M3M4ODQ0cTgxNTE5OTgycXE0MTUyODg4NDZxODE2MW45ODNvcTQxNjI3ODg0N3E4MTIxNjkwN3NxNDEyMjc4ODQzcTgxNDE4OTgxc3E0MTQyOTg4NDVzMDAyMHExNDIwczAwODAwMjgyb3MwMDkwcTE0MjBzMDAwMHExNDIwczAwcDAwMW4xb3MwMHEwcTE0MjBzMDAwMHExNDIwczAwcjAwMTYxOHMwMHMwcTE0MjBzMDAwMHExNDIwczAwcjAwMXEyMnMwMHMwcTE0MjBzMDAwMHExNDIwczAwcjAwMjcyb3MwMHMwcTE0MjBzMDAwMHExNDIwczAwcjAwMzAzNHMwMHMwcTE0MjBzMDAwMHExNDIwczAxMDAwMW4xcnMwMTEwcTE0MjBzMDAwMHExNDIwczAxMjAwMTYxOXMwMTMwcTE0MjBzMDAwMHExNDIwczAxNDAwMXIyM3MwMTUwcTE0MjBzMDAwMHExNDIwczAxNjAwMjYycHMwMTcwcTE0MjBzMDAwMHExNDIwczAxNjAwMzAzN3MwMTcwcTE0MjBzMDAwMHExNDIwczAwMDBxMTQyMDg4NDRzMDFwMDAwcTEyODg0NTkwMjE5MDQ0OTEyNjg5NHE4cDRxODg0cXE4MHAxODg4NDg4cDRwcTAxOTM3bzgyM284MjNvODY0bzkyOW9wMjlxMTE5NDNxMDQ2NXFxMTE5NXFxMDYwNjNxMDYwNjNxMDY0NjdxMTYwNjhxNDYwNjhxMTE5NjhxMDZvNzNxMTE5NzNxMDc2NzlxMDc2NzlxMDduN3JxMTc2N3NxNDc2N3NxMTE5N3NzMTAwMDAwcTQxMDJzNDAwMDAwcTQxMDJzMDAwMDAwcTQxMDJzMTAwMDAwcTQxMDJyMDBwMTE4ODQ1OTA1MXEwMTIzMnEwMTIzMjk4MTlxMDEyMzJxMDEyMzJuMDYxcTAxMjMycTAxMjMybjg0M3EwMTIzMnEwMTIzMnEwMTIzMnExMHAzM3E0MHAzM3EwMHAzM3ExMHAzM3IwMHIwczkwMDI5MDExOTAwMjhwNjU4ODAzcTgwcjQ4ODgwM3E4MTIyNm4wNzNuMDczbjgzM24xNzhuNDc4cTExMjJzbzAwNXExMTIzNTg4MDdyMDE4MW85ODAzcTAxcDJzcTAxcDJzcTExcDMxcTQxcDMxcTExODMycTQxODMycTgxNzQ5cTgyMDJxcTgxcjIycTgxbjM0cTgxNDM1cTgxcDI4cTgxcDIycTgxcDIzcTgxNTQycTgxcTU3czAxNzBwMTMwbnMwMDAwcDEzMG44ODA3czAxbjAwMTAxcTg4Nzg4cDdxOTg1M24wNzdvODA3cTAwczQwcTEwczQwcTQwczQwcTcwczQ1cTIwczQ1""cTEwczQ3cTQwczQ3cDgwOXE0MHM1Mjg4MDRxODBxMTE5MDJvcTQwcTFyODgwMnE4MHMxMzkwNHFxNDBzMjI4ODA0cTgxMDE0OTA1b3E0MTAyMTg4MDVxODBzMTM5MDRucTQwczFzODgwNHE4MHMxMzkwNDk4cDdzODgwNHE4MTExNTkwNnFxNDExMjQ4ODA2cTgxMjE2OTA3b3E0MTIyMzg4MDdxODByMTI5MDNzcTQwcjIzODgwM3E4MTAxNDkwNXNxNDEwMjU4ODA1czAwMjBxMTAyMHMwMHAwMDFuMW9zMDBxMHExMDIwczAwMDBxMTAyMHMwMHIwMDE2MThzMDBzMHExMDIwczAwMDBxMTAyMHMwMHIwMDFxMjJzMDBzMHExMDIwczAwMDBxMTAyMHMwMHIwMDI3Mm9zMDBzMHExMDIwczAwMDBxMTAyMHMwMHIwMDMwMzRzMDBzMHExMDIwczAwMDBxMTAyMHMwMTAwMDFuMXJzMDExMHExMDIwczAwMDBxMTAyMHMwMTIwMDE2MTlzMDEzMHExMDIwczAwMDBxMTAyMHMwMTQwMDFyMjNzMDE1MHExMDIwczAwMDBxMTAyMHMwMTYwMDI2MnBzMDE3MHExMDIwczAwMDBxMTAyMHMwMTYwMDMwMzdzMDE3MHExMDIwczAwMDBxMTAyMHMwMDAwcTEwMjA4ODA0czAxcDAwMDkwcjg4MDU4ODYxOTAwNDg5NjY4OTBxOHAwcTg4MHFxODA4MTQ4ODA4OHAwcHEwMTUzM28wNjNvMDYzbzgyNG8xNjlvNDY5cTExNTNzcTA0MjU5cTExNTU5cTA1cDVzcTA1cDVzcTA2MDYzcTE1cDY0cTQ1cDY0cTExNTY0cTA2NzZzcTExNTZzcTA3Mjc1cTA3Mjc1cTA3NjducTE3MjdvcTQ3MjdvcTExNTdvcTEwODdwcTQwODdwcTAwODdwcTgwODBxODgwNTg4NjM4cDY4ODkwczhwMHM4ODBzcTgwNDBzODA0bzgwNG84MDRvcTgwNDByODA0NDg0NG44ODcxODE0cTg0NHE4MDRxODE0cXMwN3MwNTdzMDIwMTEyczAwMDdzMDIwMTEyNzMwcDAwMDAwMHAxMW8wODQxMjQwMHAxMjQxMjQxMzgwMw==";
static const char __pyx_k_abcdefghijklmnopqrstuvwxyzABCDEF[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
/* #### Code section: decls ### */
static PyObject *__pyx_pf_28obfuscated_braintree_checker_genexpr(CYTHON_UNUSED PyObject *__pyx_self); /* proto */
static PyObject *__pyx_pf_28obfuscated_braintree_checker_3genexpr(CYTHON_UNUSED PyObject *__pyx_self); /* proto */
static PyObject *__pyx_pf_28obfuscated_braintree_checker_6genexpr(CYTHON_UNUSED PyObject *__pyx_self); /* proto */
static PyObject *__pyx_tp_new_28obfuscated_braintree_checker___pyx_scope_struct__genexpr(PyTypeObject *t, PyObject *a, PyObject *k); /*proto*/
static PyObject *__pyx_tp_new_28obfuscated_braintree_checker___pyx_scope_struct_1_genexpr(PyTypeObject *t, PyObject *a, PyObject *k); /*proto*/
static PyObject *__pyx_tp_new_28obfuscated_braintree_checker___pyx_scope_struct_2_genexpr(PyTypeObject *t, PyObject *a, PyObject *k); /*proto*/
/* #### Code section: late_includes ### */
/* #### Code section: module_state ### */
typedef struct {
  PyObject *__pyx_d;
  PyObject *__pyx_b;
  PyObject *__pyx_cython_runtime;
  PyObject *__pyx_empty_tuple;
  PyObject *__pyx_empty_bytes;
  PyObject *__pyx_empty_unicode;
  #ifdef __Pyx_CyFunction_USED
  PyTypeObject *__pyx_CyFunctionType;
  #endif
  #ifdef __Pyx_FusedFunction_USED
  PyTypeObject *__pyx_FusedFunctionType;
  #endif
  #ifdef __Pyx_Generator_USED
  PyTypeObject *__pyx_GeneratorType;
  #endif
  #ifdef __Pyx_IterableCoroutine_USED
  PyTypeObject *__pyx_IterableCoroutineType;
  #endif
  #ifdef __Pyx_Coroutine_USED
  PyTypeObject *__pyx_CoroutineAwaitType;
  #endif
  #ifdef __Pyx_Coroutine_USED
  PyTypeObject *__pyx_CoroutineType;
  #endif
  #if CYTHON_USE_MODULE_STATE
  PyObject *__pyx_type_28obfuscated_braintree_checker___pyx_scope_struct__genexpr;
  PyObject *__pyx_type_28obfuscated_braintree_checker___pyx_scope_struct_1_genexpr;
  PyObject *__pyx_type_28obfuscated_braintree_checker___pyx_scope_struct_2_genexpr;
  #endif
  PyTypeObject *__pyx_ptype_28obfuscated_braintree_checker___pyx_scope_struct__genexpr;
  PyTypeObject *__pyx_ptype_28obfuscated_braintree_checker___pyx_scope_struct_1_genexpr;
  PyTypeObject *__pyx_ptype_28obfuscated_braintree_checker___pyx_scope_struct_2_genexpr;
  PyObject *__pyx_n_s_;
  PyObject *__pyx_kp_s_NjMwMDAwMDAwMDAwMDAwMDAwMDAwMDAw;
  PyObject *__pyx_n_s__3;
  PyObject *__pyx_kp_s__4;
  PyObject *__pyx_n_s__6;
  PyObject *__pyx_n_s_abcdefghijklmnopqrstuvwxyzABCDEF;
  PyObject *__pyx_n_s_args;
  PyObject *__pyx_n_s_b64decode;
  PyObject *__pyx_n_s_base64;
  PyObject *__pyx_n_s_builtins;
  PyObject *__pyx_n_s_choice;
  PyObject *__pyx_n_s_cline_in_traceback;
  PyObject *__pyx_n_s_close;
  PyObject *__pyx_n_s_codecs;
  PyObject *__pyx_n_s_decode;
  PyObject *__pyx_kp_u_disable;
  PyObject *__pyx_kp_u_enable;
  PyObject *__pyx_n_s_encode;
  PyObject *__pyx_n_s_encoded_content;
  PyObject *__pyx_n_s_fromhex;
  PyObject *__pyx_kp_u_gc;
  PyObject *__pyx_n_s_genexpr;
  PyObject *__pyx_n_s_i;
  PyObject *__pyx_n_s_import;
  PyObject *__pyx_n_s_initializing;
  PyObject *__pyx_kp_u_isenabled;
  PyObject *__pyx_n_s_join;
  PyObject *__pyx_n_s_junk_num;
  PyObject *__pyx_n_s_junk_str;
  PyObject *__pyx_n_s_loads;
  PyObject *__pyx_n_s_main;
  PyObject *__pyx_n_s_marshal;
  PyObject *__pyx_n_s_name;
  PyObject *__pyx_n_s_obfuscated_braintree_checker;
  PyObject *__pyx_n_s_randint;
  PyObject *__pyx_n_s_random;
  PyObject *__pyx_n_s_range;
  PyObject *__pyx_n_s_rot_13;
  PyObject *__pyx_n_s_send;
  PyObject *__pyx_n_s_spec;
  PyObject *__pyx_n_s_sum;
  PyObject *__pyx_n_s_test;
  PyObject *__pyx_n_s_throw;
  PyObject *__pyx_int_1;
  PyObject *__pyx_int_100;
  PyObject *__pyx_int_1000;
  PyObject *__pyx_tuple__2;
  PyObject *__pyx_tuple__5;
} __pyx_mstate;

#if CYTHON_USE_MODULE_STATE
#ifdef __cplusplus
namespace {
  extern struct PyModuleDef __pyx_moduledef;
} /* anonymous namespace */
#else
static struct PyModuleDef __pyx_moduledef;
#endif

#define __pyx_mstate(o) ((__pyx_mstate *)__Pyx_PyModule_GetState(o))

#define __pyx_mstate_global (__pyx_mstate(PyState_FindModule(&__pyx_moduledef)))

#define __pyx_m (PyState_FindModule(&__pyx_moduledef))
#else
static __pyx_mstate __pyx_mstate_global_static =
#ifdef __cplusplus
    {};
#else
    {0};
#endif
static __pyx_mstate *__pyx_mstate_global = &__pyx_mstate_global_static;
#endif
/* #### Code section: module_state_clear ### */
#if CYTHON_USE_MODULE_STATE
static int __pyx_m_clear(PyObject *m) {
  __pyx_mstate *clear_module_state = __pyx_mstate(m);
  if (!clear_module_state) return 0;
  Py_CLEAR(clear_module_state->__pyx_d);
  Py_CLEAR(clear_module_state->__pyx_b);
  Py_CLEAR(clear_module_state->__pyx_cython_runtime);
  Py_CLEAR(clear_module_state->__pyx_empty_tuple);
  Py_CLEAR(clear_module_state->__pyx_empty_bytes);
  Py_CLEAR(clear_module_state->__pyx_empty_unicode);
  #ifdef __Pyx_CyFunction_USED
  Py_CLEAR(clear_module_state->__pyx_CyFunctionType);
  #endif
  #ifdef __Pyx_FusedFunction_USED
  Py_CLEAR(clear_module_state->__pyx_FusedFunctionType);
  #endif
  Py_CLEAR(clear_module_state->__pyx_ptype_28obfuscated_braintree_checker___pyx_scope_struct__genexpr);
  Py_CLEAR(clear_module_state->__pyx_type_28obfuscated_braintree_checker___pyx_scope_struct__genexpr);
  Py_CLEAR(clear_module_state->__pyx_ptype_28obfuscated_braintree_checker___pyx_scope_struct_1_genexpr);
  Py_CLEAR(clear_module_state->__pyx_type_28obfuscated_braintree_checker___pyx_scope_struct_1_genexpr);
  Py_CLEAR(clear_module_state->__pyx_ptype_28obfuscated_braintree_checker___pyx_scope_struct_2_genexpr);
  Py_CLEAR(clear_module_state->__pyx_type_28obfuscated_braintree_checker___pyx_scope_struct_2_genexpr);
  Py_CLEAR(clear_module_state->__pyx_n_s_);
  Py_CLEAR(clear_module_state->__pyx_kp_s_NjMwMDAwMDAwMDAwMDAwMDAwMDAwMDAw);
  Py_CLEAR(clear_module_state->__pyx_n_s__3);
  Py_CLEAR(clear_module_state->__pyx_kp_s__4);
  Py_CLEAR(clear_module_state->__pyx_n_s__6);
  Py_CLEAR(clear_module_state->__pyx_n_s_abcdefghijklmnopqrstuvwxyzABCDEF);
  Py_CLEAR(clear_module_state->__pyx_n_s_args);
  Py_CLEAR(clear_module_state->__pyx_n_s_b64decode);
  Py_CLEAR(clear_module_state->__pyx_n_s_base64);
  Py_CLEAR(clear_module_state->__pyx_n_s_builtins);
  Py_CLEAR(clear_module_state->__pyx_n_s_choice);
  Py_CLEAR(clear_module_state->__pyx_n_s_cline_in_traceback);
  Py_CLEAR(clear_module_state->__pyx_n_s_close);
  Py_CLEAR(clear_module_state->__pyx_n_s_codecs);
  Py_CLEAR(clear_module_state->__pyx_n_s_decode);
  Py_CLEAR(clear_module_state->__pyx_kp_u_disable);
  Py_CLEAR(clear_module_state->__pyx_kp_u_enable);
  Py_CLEAR(clear_module_state->__pyx_n_s_encode);
  Py_CLEAR(clear_module_state->__pyx_n_s_encoded_content);
  Py_CLEAR(clear_module_state->__pyx_n_s_fromhex);
  Py_CLEAR(clear_module_state->__pyx_kp_u_gc);
  Py_CLEAR(clear_module_state->__pyx_n_s_genexpr);
  Py_CLEAR(clear_module_state->__pyx_n_s_i);
  Py_CLEAR(clear_module_state->__pyx_n_s_import);
  Py_CLEAR(clear_module_state->__pyx_n_s_initializing);
  Py_CLEAR(clear_module_state->__pyx_kp_u_isenabled);
  Py_CLEAR(clear_module_state->__pyx_n_s_join);
  Py_CLEAR(clear_module_state->__pyx_n_s_junk_num);
  Py_CLEAR(clear_module_state->__pyx_n_s_junk_str);
  Py_CLEAR(clear_module_state->__pyx_n_s_loads);
  Py_CLEAR(clear_module_state->__pyx_n_s_main);
  Py_CLEAR(clear_module_state->__pyx_n_s_marshal);
  Py_CLEAR(clear_module_state->__pyx_n_s_name);
  Py_CLEAR(clear_module_state->__pyx_n_s_obfuscated_braintree_checker);
  Py_CLEAR(clear_module_state->__pyx_n_s_randint);
  Py_CLEAR(clear_module_state->__pyx_n_s_random);
  Py_CLEAR(clear_module_state->__pyx_n_s_range);
  Py_CLEAR(clear_module_state->__pyx_n_s_rot_13);
  Py_CLEAR(clear_module_state->__pyx_n_s_send);
  Py_CLEAR(clear_module_state->__pyx_n_s_spec);
  Py_CLEAR(clear_module_state->__pyx_n_s_sum);
  Py_CLEAR(clear_module_state->__pyx_n_s_test);
  Py_CLEAR(clear_module_state->__pyx_n_s_throw);
  Py_CLEAR(clear_module_state->__pyx_int_1);
  Py_CLEAR(clear_module_state->__pyx_int_100);
  Py_CLEAR(clear_module_state->__pyx_int_1000);
  Py_CLEAR(clear_module_state->__pyx_tuple__2);
  Py_CLEAR(clear_module_state->__pyx_tuple__5);
  return 0;
}
#endif
/* #### Code section: module_state_traverse ### */
#if CYTHON_USE_MODULE_STATE
static int __pyx_m_traverse(PyObject *m, visitproc visit, void *arg) {
  __pyx_mstate *traverse_module_state = __pyx_mstate(m);
  if (!traverse_module_state) return 0;
  Py_VISIT(traverse_module_state->__pyx_d);
  Py_VISIT(traverse_module_state->__pyx_b);
  Py_VISIT(traverse_module_state->__pyx_cython_runtime);
  Py_VISIT(traverse_module_state->__pyx_empty_tuple);
  Py_VISIT(traverse_module_state->__pyx_empty_bytes);
  Py_VISIT(traverse_module_state->__pyx_empty_unicode);
  #ifdef __Pyx_CyFunction_USED
  Py_VISIT(traverse_module_state->__pyx_CyFunctionType);
  #endif
  #ifdef __Pyx_FusedFunction_USED
  Py_VISIT(traverse_module_state->__pyx_FusedFunctionType);
  #endif
  Py_VISIT(traverse_module_state->__pyx_ptype_28obfuscated_braintree_checker___pyx_scope_struct__genexpr);
  Py_VISIT(traverse_module_state->__pyx_type_28obfuscated_braintree_checker___pyx_scope_struct__genexpr);
  Py_VISIT(traverse_module_state->__pyx_ptype_28obfuscated_braintree_checker___pyx_scope_struct_1_genexpr);
  Py_VISIT(traverse_module_state->__pyx_type_28obfuscated_braintree_checker___pyx_scope_struct_1_genexpr);
  Py_VISIT(traverse_module_state->__pyx_ptype_28obfuscated_braintree_checker___pyx_scope_struct_2_genexpr);
  Py_VISIT(traverse_module_state->__pyx_type_28obfuscated_braintree_checker___pyx_scope_struct_2_genexpr);
  Py_VISIT(traverse_module_state->__pyx_n_s_);
  Py_VISIT(traverse_module_state->__pyx_kp_s_NjMwMDAwMDAwMDAwMDAwMDAwMDAwMDAw);
  Py_VISIT(traverse_module_state->__pyx_n_s__3);
  Py_VISIT(traverse_module_state->__pyx_kp_s__4);
  Py_VISIT(traverse_module_state->__pyx_n_s__6);
  Py_VISIT(traverse_module_state->__pyx_n_s_abcdefghijklmnopqrstuvwxyzABCDEF);
  Py_VISIT(traverse_module_state->__pyx_n_s_args);
  Py_VISIT(traverse_module_state->__pyx_n_s_b64decode);
  Py_VISIT(traverse_module_state->__pyx_n_s_base64);
  Py_VISIT(traverse_module_state->__pyx_n_s_builtins);
  Py_VISIT(traverse_module_state->__pyx_n_s_choice);
  Py_VISIT(traverse_module_state->__pyx_n_s_cline_in_traceback);
  Py_VISIT(traverse_module_state->__pyx_n_s_close);
  Py_VISIT(traverse_module_state->__pyx_n_s_codecs);
  Py_VISIT(traverse_module_state->__pyx_n_s_decode);
  Py_VISIT(traverse_module_state->__pyx_kp_u_disable);
  Py_VISIT(traverse_module_state->__pyx_kp_u_enable);
  Py_VISIT(traverse_module_state->__pyx_n_s_encode);
  Py_VISIT(traverse_module_state->__pyx_n_s_encoded_content);
  Py_VISIT(traverse_module_state->__pyx_n_s_fromhex);
  Py_VISIT(traverse_module_state->__pyx_kp_u_gc);
  Py_VISIT(traverse_module_state->__pyx_n_s_genexpr);
  Py_VISIT(traverse_module_state->__pyx_n_s_i);
  Py_VISIT(traverse_module_state->__pyx_n_s_import);
  Py_VISIT(traverse_module_state->__pyx_n_s_initializing);
  Py_VISIT(traverse_module_state->__pyx_kp_u_isenabled);
  Py_VISIT(traverse_module_state->__pyx_n_s_join);
  Py_VISIT(traverse_module_state->__pyx_n_s_junk_num);
  Py_VISIT(traverse_module_state->__pyx_n_s_junk_str);
  Py_VISIT(traverse_module_state->__pyx_n_s_loads);
  Py_VISIT(traverse_module_state->__pyx_n_s_main);
  Py_VISIT(traverse_module_state->__pyx_n_s_marshal);
  Py_VISIT(traverse_module_state->__pyx_n_s_name);
  Py_VISIT(traverse_module_state->__pyx_n_s_obfuscated_braintree_checker);
  Py_VISIT(traverse_module_state->__pyx_n_s_randint);
  Py_VISIT(traverse_module_state->__pyx_n_s_random);
  Py_VISIT(traverse_module_state->__pyx_n_s_range);
  Py_VISIT(traverse_module_state->__pyx_n_s_rot_13);
  Py_VISIT(traverse_module_state->__pyx_n_s_send);
  Py_VISIT(traverse_module_state->__pyx_n_s_spec);
  Py_VISIT(traverse_module_state->__pyx_n_s_sum);
  Py_VISIT(traverse_module_state->__pyx_n_s_test);
  Py_VISIT(traverse_module_state->__pyx_n_s_throw);
  Py_VISIT(traverse_module_state->__pyx_int_1);
  Py_VISIT(traverse_module_state->__pyx_int_100);
  Py_VISIT(traverse_module_state->__pyx_int_1000);
  Py_VISIT(traverse_module_state->__pyx_tuple__2);
  Py_VISIT(traverse_module_state->__pyx_tuple__5);
  return 0;
}
#endif
/* #### Code section: module_state_defines ### */
#define __pyx_d __pyx_mstate_global->__pyx_d
#define __pyx_b __pyx_mstate_global->__pyx_b
#define __pyx_cython_runtime __pyx_mstate_global->__pyx_cython_runtime
#define __pyx_empty_tuple __pyx_mstate_global->__pyx_empty_tuple
#define __pyx_empty_bytes __pyx_mstate_global->__pyx_empty_bytes
#define __pyx_empty_unicode __pyx_mstate_global->__pyx_empty_unicode
#ifdef __Pyx_CyFunction_USED
#define __pyx_CyFunctionType __pyx_mstate_global->__pyx_CyFunctionType
#endif
#ifdef __Pyx_FusedFunction_USED
#define __pyx_FusedFunctionType __pyx_mstate_global->__pyx_FusedFunctionType
#endif
#ifdef __Pyx_Generator_USED
#define __pyx_GeneratorType __pyx_mstate_global->__pyx_GeneratorType
#endif
#ifdef __Pyx_IterableCoroutine_USED
#define __pyx_IterableCoroutineType __pyx_mstate_global->__pyx_IterableCoroutineType
#endif
#ifdef __Pyx_Coroutine_USED
#define __pyx_CoroutineAwaitType __pyx_mstate_global->__pyx_CoroutineAwaitType
#endif
#ifdef __Pyx_Coroutine_USED
#define __pyx_CoroutineType __pyx_mstate_global->__pyx_CoroutineType
#endif
#if CYTHON_USE_MODULE_STATE
#define __pyx_type_28obfuscated_braintree_checker___pyx_scope_struct__genexpr __pyx_mstate_global->__pyx_type_28obfuscated_braintree_checker___pyx_scope_struct__genexpr
#define __pyx_type_28obfuscated_braintree_checker___pyx_scope_struct_1_genexpr __pyx_mstate_global->__pyx_type_28obfuscated_braintree_checker___pyx_scope_struct_1_genexpr
#define __pyx_type_28obfuscated_braintree_checker___pyx_scope_struct_2_genexpr __pyx_mstate_global->__pyx_type_28obfuscated_braintree_checker___pyx_scope_struct_2_genexpr
#endif
#define __pyx_ptype_28obfuscated_braintree_checker___pyx_scope_struct__genexpr __pyx_mstate_global->__pyx_ptype_28obfuscated_braintree_checker___pyx_scope_struct__genexpr
#define __pyx_ptype_28obfuscated_braintree_checker___pyx_scope_struct_1_genexpr __pyx_mstate_global->__pyx_ptype_28obfuscated_braintree_checker___pyx_scope_struct_1_genexpr
#define __pyx_ptype_28obfuscated_braintree_checker___pyx_scope_struct_2_genexpr __pyx_mstate_global->__pyx_ptype_28obfuscated_braintree_checker___pyx_scope_struct_2_genexpr
#define __pyx_n_s_ __pyx_mstate_global->__pyx_n_s_
#define __pyx_kp_s_NjMwMDAwMDAwMDAwMDAwMDAwMDAwMDAw __pyx_mstate_global->__pyx_kp_s_NjMwMDAwMDAwMDAwMDAwMDAwMDAwMDAw
#define __pyx_n_s__3 __pyx_mstate_global->__pyx_n_s__3
#define __pyx_kp_s__4 __pyx_mstate_global->__pyx_kp_s__4
#define __pyx_n_s__6 __pyx_mstate_global->__pyx_n_s__6
#define __pyx_n_s_abcdefghijklmnopqrstuvwxyzABCDEF __pyx_mstate_global->__pyx_n_s_abcdefghijklmnopqrstuvwxyzABCDEF
#define __pyx_n_s_args __pyx_mstate_global->__pyx_n_s_args
#define __pyx_n_s_b64decode __pyx_mstate_global->__pyx_n_s_b64decode
#define __pyx_n_s_base64 __pyx_mstate_global->__pyx_n_s_base64
#define __pyx_n_s_builtins __pyx_mstate_global->__pyx_n_s_builtins
#define __pyx_n_s_choice __pyx_mstate_global->__pyx_n_s_choice
#define __pyx_n_s_cline_in_traceback __pyx_mstate_global->__pyx_n_s_cline_in_traceback
#define __pyx_n_s_close __pyx_mstate_global->__pyx_n_s_close
#define __pyx_n_s_codecs __pyx_mstate_global->__pyx_n_s_codecs
#define __pyx_n_s_decode __pyx_mstate_global->__pyx_n_s_decode
#define __pyx_kp_u_disable __pyx_mstate_global->__pyx_kp_u_disable
#define __pyx_kp_u_enable __pyx_mstate_global->__pyx_kp_u_enable
#define __pyx_n_s_encode __pyx_mstate_global->__pyx_n_s_encode
#define __pyx_n_s_encoded_content __pyx_mstate_global->__pyx_n_s_encoded_content
#define __pyx_n_s_fromhex __pyx_mstate_global->__pyx_n_s_fromhex
#define __pyx_kp_u_gc __pyx_mstate_global->__pyx_kp_u_gc
#define __pyx_n_s_genexpr __pyx_mstate_global->__pyx_n_s_genexpr
#define __pyx_n_s_i __pyx_mstate_global->__pyx_n_s_i
#define __pyx_n_s_import __pyx_mstate_global->__pyx_n_s_import
#define __pyx_n_s_initializing __pyx_mstate_global->__pyx_n_s_initializing
#define __pyx_kp_u_isenabled __pyx_mstate_global->__pyx_kp_u_isenabled
#define __pyx_n_s_join __pyx_mstate_global->__pyx_n_s_join
#define __pyx_n_s_junk_num __pyx_mstate_global->__pyx_n_s_junk_num
#define __pyx_n_s_junk_str __pyx_mstate_global->__pyx_n_s_junk_str
#define __pyx_n_s_loads __pyx_mstate_global->__pyx_n_s_loads
#define __pyx_n_s_main __pyx_mstate_global->__pyx_n_s_main
#define __pyx_n_s_marshal __pyx_mstate_global->__pyx_n_s_marshal
#define __pyx_n_s_name __pyx_mstate_global->__pyx_n_s_name
#define __pyx_n_s_obfuscated_braintree_checker __pyx_mstate_global->__pyx_n_s_obfuscated_braintree_checker
#define __pyx_n_s_randint __pyx_mstate_global->__pyx_n_s_randint
#define __pyx_n_s_random __pyx_mstate_global->__pyx_n_s_random
#define __pyx_n_s_range __pyx_mstate_global->__pyx_n_s_range
#define __pyx_n_s_rot_13 __pyx_mstate_global->__pyx_n_s_rot_13
#define __pyx_n_s_send __pyx_mstate_global->__pyx_n_s_send
#define __pyx_n_s_spec __pyx_mstate_global->__pyx_n_s_spec
#define __pyx_n_s_sum __pyx_mstate_global->__pyx_n_s_sum
#define __pyx_n_s_test __pyx_mstate_global->__pyx_n_s_test
#define __pyx_n_s_throw __pyx_mstate_global->__pyx_n_s_throw
#define __pyx_int_1 __pyx_mstate_global->__pyx_int_1
#define __pyx_int_100 __pyx_mstate_global->__pyx_int_100
#define __pyx_int_1000 __pyx_mstate_global->__pyx_int_1000
#define __pyx_tuple__2 __pyx_mstate_global->__pyx_tuple__2
#define __pyx_tuple__5 __pyx_mstate_global->__pyx_tuple__5
/* #### Code section: module_code ### */
static PyObject *__pyx_gb_28obfuscated_braintree_checker_2generator(__pyx_CoroutineObject *__pyx_generator, CYTHON_UNUSED PyThreadState *__pyx_tstate, PyObject *__pyx_sent_value); /* proto */

/* "obfuscated_braintree_checker.py":12
 * 
 * for _ in range(1000):
 *     junk_str = ''.join(random.choice('abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ') for _ in range(50))             # <<<<<<<<<<<<<<
 *     junk_num = sum([random.randint(1, 1000) for _ in range(100)])
 *     _ = junk_str + str(junk_num)
 */

static PyObject *__pyx_pf_28obfuscated_braintree_checker_genexpr(CYTHON_UNUSED PyObject *__pyx_self) {
  struct __pyx_obj_28obfuscated_braintree_checker___pyx_scope_struct__genexpr *__pyx_cur_scope;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("genexpr", 0);
  __pyx_cur_scope = (struct __pyx_obj_28obfuscated_braintree_checker___pyx_scope_struct__genexpr *)__pyx_tp_new_28obfuscated_braintree_checker___pyx_scope_struct__genexpr(__pyx_ptype_28obfuscated_braintree_checker___pyx_scope_struct__genexpr, __pyx_empty_tuple, NULL);
  if (unlikely(!__pyx_cur_scope)) {
    __pyx_cur_scope = ((struct __pyx_obj_28obfuscated_braintree_checker___pyx_scope_struct__genexpr *)Py_None);
    __Pyx_INCREF(Py_None);
    __PYX_ERR(0, 12, __pyx_L1_error)
  } else {
    __Pyx_GOTREF((PyObject *)__pyx_cur_scope);
  }
  {
    __pyx_CoroutineObject *gen = __Pyx_Generator_New((__pyx_coroutine_body_t) __pyx_gb_28obfuscated_braintree_checker_2generator, NULL, (PyObject *) __pyx_cur_scope, __pyx_n_s_genexpr, __pyx_n_s_genexpr, __pyx_n_s_obfuscated_braintree_checker); if (unlikely(!gen)) __PYX_ERR(0, 12, __pyx_L1_error)
    __Pyx_DECREF(__pyx_cur_scope);
    __Pyx_RefNannyFinishContext();
    return (PyObject *) gen;
  }

  /* function exit code */
  __pyx_L1_error:;
  __Pyx_AddTraceback("obfuscated_braintree_checker.genexpr", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __Pyx_DECREF((PyObject *)__pyx_cur_scope);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_gb_28obfuscated_braintree_checker_2generator(__pyx_CoroutineObject *__pyx_generator, CYTHON_UNUSED PyThreadState *__pyx_tstate, PyObject *__pyx_sent_value) /* generator body */
{
  struct __pyx_obj_28obfuscated_braintree_checker___pyx_scope_struct__genexpr *__pyx_cur_scope = ((struct __pyx_obj_28obfuscated_braintree_checker___pyx_scope_struct__genexpr *)__pyx_generator->closure);
  PyObject *__pyx_r = NULL;
  long __pyx_t_1;
  PyObject *__pyx_t_2 = NULL;
  PyObject *__pyx_t_3 = NULL;
  PyObject *__pyx_t_4 = NULL;
  unsigned int __pyx_t_5;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("genexpr", 0);
  switch (__pyx_generator->resume_label) {
    case 0: goto __pyx_L3_first_run;
    case 1: goto __pyx_L6_resume_from_yield;
    default: /* CPython raises the right error here */
    __Pyx_RefNannyFinishContext();
    return NULL;
  }
  __pyx_L3_first_run:;
  if (unlikely(!__pyx_sent_value)) __PYX_ERR(0, 12, __pyx_L1_error)
  for (__pyx_t_1 = 0; __pyx_t_1 < 50; __pyx_t_1+=1) {
    __pyx_cur_scope->__pyx_v__ = __pyx_t_1;
    __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_random); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 12, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_choice); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 12, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_3 = NULL;
    __pyx_t_5 = 0;
    #if CYTHON_UNPACK_METHODS
    if (unlikely(PyMethod_Check(__pyx_t_4))) {
      __pyx_t_3 = PyMethod_GET_SELF(__pyx_t_4);
      if (likely(__pyx_t_3)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_4);
        __Pyx_INCREF(__pyx_t_3);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_4, function);
        __pyx_t_5 = 1;
      }
    }
    #endif
    {
      PyObject *__pyx_callargs[2] = {__pyx_t_3, __pyx_n_s_abcdefghijklmnopqrstuvwxyzABCDEF};
      __pyx_t_2 = __Pyx_PyObject_FastCall(__pyx_t_4, __pyx_callargs+1-__pyx_t_5, 1+__pyx_t_5);
      __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
      if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 12, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_2);
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    }
    __pyx_r = __pyx_t_2;
    __pyx_t_2 = 0;
    __pyx_cur_scope->__pyx_t_0 = __pyx_t_1;
    __Pyx_XGIVEREF(__pyx_r);
    __Pyx_RefNannyFinishContext();
    __Pyx_Coroutine_ResetAndClearException(__pyx_generator);
    /* return from generator, yielding value */
    __pyx_generator->resume_label = 1;
    return __pyx_r;
    __pyx_L6_resume_from_yield:;
    __pyx_t_1 = __pyx_cur_scope->__pyx_t_0;
    if (unlikely(!__pyx_sent_value)) __PYX_ERR(0, 12, __pyx_L1_error)
  }
  CYTHON_MAYBE_UNUSED_VAR(__pyx_cur_scope);

  /* function exit code */
  PyErr_SetNone(PyExc_StopIteration);
  goto __pyx_L0;
  __pyx_L1_error:;
  __Pyx_Generator_Replace_StopIteration(0);
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_3);
  __Pyx_XDECREF(__pyx_t_4);
  __Pyx_AddTraceback("genexpr", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_r); __pyx_r = 0;
  #if !CYTHON_USE_EXC_INFO_STACK
  __Pyx_Coroutine_ResetAndClearException(__pyx_generator);
  #endif
  __pyx_generator->resume_label = -1;
  __Pyx_Coroutine_clear((PyObject*)__pyx_generator);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}
static PyObject *__pyx_gb_28obfuscated_braintree_checker_5generator1(__pyx_CoroutineObject *__pyx_generator, CYTHON_UNUSED PyThreadState *__pyx_tstate, PyObject *__pyx_sent_value); /* proto */

/* "obfuscated_braintree_checker.py":30
 * 
 * for _ in range(1000):
 *     junk_str = ''.join(random.choice('abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ') for _ in range(50))             # <<<<<<<<<<<<<<
 *     junk_num = sum([random.randint(1, 1000) for _ in range(100)])
 *     _ = junk_str + str(junk_num)
 */

static PyObject *__pyx_pf_28obfuscated_braintree_checker_3genexpr(CYTHON_UNUSED PyObject *__pyx_self) {
  struct __pyx_obj_28obfuscated_braintree_checker___pyx_scope_struct_1_genexpr *__pyx_cur_scope;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("genexpr", 0);
  __pyx_cur_scope = (struct __pyx_obj_28obfuscated_braintree_checker___pyx_scope_struct_1_genexpr *)__pyx_tp_new_28obfuscated_braintree_checker___pyx_scope_struct_1_genexpr(__pyx_ptype_28obfuscated_braintree_checker___pyx_scope_struct_1_genexpr, __pyx_empty_tuple, NULL);
  if (unlikely(!__pyx_cur_scope)) {
    __pyx_cur_scope = ((struct __pyx_obj_28obfuscated_braintree_checker___pyx_scope_struct_1_genexpr *)Py_None);
    __Pyx_INCREF(Py_None);
    __PYX_ERR(0, 30, __pyx_L1_error)
  } else {
    __Pyx_GOTREF((PyObject *)__pyx_cur_scope);
  }
  {
    __pyx_CoroutineObject *gen = __Pyx_Generator_New((__pyx_coroutine_body_t) __pyx_gb_28obfuscated_braintree_checker_5generator1, NULL, (PyObject *) __pyx_cur_scope, __pyx_n_s_genexpr, __pyx_n_s_genexpr, __pyx_n_s_obfuscated_braintree_checker); if (unlikely(!gen)) __PYX_ERR(0, 30, __pyx_L1_error)
    __Pyx_DECREF(__pyx_cur_scope);
    __Pyx_RefNannyFinishContext();
    return (PyObject *) gen;
  }

  /* function exit code */
  __pyx_L1_error:;
  __Pyx_AddTraceback("obfuscated_braintree_checker.genexpr", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __Pyx_DECREF((PyObject *)__pyx_cur_scope);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_gb_28obfuscated_braintree_checker_5generator1(__pyx_CoroutineObject *__pyx_generator, CYTHON_UNUSED PyThreadState *__pyx_tstate, PyObject *__pyx_sent_value) /* generator body */
{
  struct __pyx_obj_28obfuscated_braintree_checker___pyx_scope_struct_1_genexpr *__pyx_cur_scope = ((struct __pyx_obj_28obfuscated_braintree_checker___pyx_scope_struct_1_genexpr *)__pyx_generator->closure);
  PyObject *__pyx_r = NULL;
  long __pyx_t_1;
  PyObject *__pyx_t_2 = NULL;
  PyObject *__pyx_t_3 = NULL;
  PyObject *__pyx_t_4 = NULL;
  unsigned int __pyx_t_5;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("genexpr", 0);
  switch (__pyx_generator->resume_label) {
    case 0: goto __pyx_L3_first_run;
    case 1: goto __pyx_L6_resume_from_yield;
    default: /* CPython raises the right error here */
    __Pyx_RefNannyFinishContext();
    return NULL;
  }
  __pyx_L3_first_run:;
  if (unlikely(!__pyx_sent_value)) __PYX_ERR(0, 30, __pyx_L1_error)
  for (__pyx_t_1 = 0; __pyx_t_1 < 50; __pyx_t_1+=1) {
    __pyx_cur_scope->__pyx_v__ = __pyx_t_1;
    __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_random); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 30, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_choice); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 30, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_3 = NULL;
    __pyx_t_5 = 0;
    #if CYTHON_UNPACK_METHODS
    if (unlikely(PyMethod_Check(__pyx_t_4))) {
      __pyx_t_3 = PyMethod_GET_SELF(__pyx_t_4);
      if (likely(__pyx_t_3)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_4);
        __Pyx_INCREF(__pyx_t_3);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_4, function);
        __pyx_t_5 = 1;
      }
    }
    #endif
    {
      PyObject *__pyx_callargs[2] = {__pyx_t_3, __pyx_n_s_abcdefghijklmnopqrstuvwxyzABCDEF};
      __pyx_t_2 = __Pyx_PyObject_FastCall(__pyx_t_4, __pyx_callargs+1-__pyx_t_5, 1+__pyx_t_5);
      __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
      if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 30, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_2);
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    }
    __pyx_r = __pyx_t_2;
    __pyx_t_2 = 0;
    __pyx_cur_scope->__pyx_t_0 = __pyx_t_1;
    __Pyx_XGIVEREF(__pyx_r);
    __Pyx_RefNannyFinishContext();
    __Pyx_Coroutine_ResetAndClearException(__pyx_generator);
    /* return from generator, yielding value */
    __pyx_generator->resume_label = 1;
    return __pyx_r;
    __pyx_L6_resume_from_yield:;
    __pyx_t_1 = __pyx_cur_scope->__pyx_t_0;
    if (unlikely(!__pyx_sent_value)) __PYX_ERR(0, 30, __pyx_L1_error)
  }
  CYTHON_MAYBE_UNUSED_VAR(__pyx_cur_scope);

  /* function exit code */
  PyErr_SetNone(PyExc_StopIteration);
  goto __pyx_L0;
  __pyx_L1_error:;
  __Pyx_Generator_Replace_StopIteration(0);
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_3);
  __Pyx_XDECREF(__pyx_t_4);
  __Pyx_AddTraceback("genexpr", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_r); __pyx_r = 0;
  #if !CYTHON_USE_EXC_INFO_STACK
  __Pyx_Coroutine_ResetAndClearException(__pyx_generator);
  #endif
  __pyx_generator->resume_label = -1;
  __Pyx_Coroutine_clear((PyObject*)__pyx_generator);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}
static PyObject *__pyx_gb_28obfuscated_braintree_checker_8generator2(__pyx_CoroutineObject *__pyx_generator, CYTHON_UNUSED PyThreadState *__pyx_tstate, PyObject *__pyx_sent_value); /* proto */

/* "obfuscated_braintree_checker.py":42
 * 
 * for _ in range(1000):
 *     junk_str = ''.join(random.choice('abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ') for _ in range(50))             # <<<<<<<<<<<<<<
 *     junk_num = sum([random.randint(1, 1000) for _ in range(100)])
 *     _ = junk_str + str(junk_num)
 */

static PyObject *__pyx_pf_28obfuscated_braintree_checker_6genexpr(CYTHON_UNUSED PyObject *__pyx_self) {
  struct __pyx_obj_28obfuscated_braintree_checker___pyx_scope_struct_2_genexpr *__pyx_cur_scope;
  PyObject *__pyx_r = NULL;
  __Pyx_RefNannyDeclarations
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("genexpr", 0);
  __pyx_cur_scope = (struct __pyx_obj_28obfuscated_braintree_checker___pyx_scope_struct_2_genexpr *)__pyx_tp_new_28obfuscated_braintree_checker___pyx_scope_struct_2_genexpr(__pyx_ptype_28obfuscated_braintree_checker___pyx_scope_struct_2_genexpr, __pyx_empty_tuple, NULL);
  if (unlikely(!__pyx_cur_scope)) {
    __pyx_cur_scope = ((struct __pyx_obj_28obfuscated_braintree_checker___pyx_scope_struct_2_genexpr *)Py_None);
    __Pyx_INCREF(Py_None);
    __PYX_ERR(0, 42, __pyx_L1_error)
  } else {
    __Pyx_GOTREF((PyObject *)__pyx_cur_scope);
  }
  {
    __pyx_CoroutineObject *gen = __Pyx_Generator_New((__pyx_coroutine_body_t) __pyx_gb_28obfuscated_braintree_checker_8generator2, NULL, (PyObject *) __pyx_cur_scope, __pyx_n_s_genexpr, __pyx_n_s_genexpr, __pyx_n_s_obfuscated_braintree_checker); if (unlikely(!gen)) __PYX_ERR(0, 42, __pyx_L1_error)
    __Pyx_DECREF(__pyx_cur_scope);
    __Pyx_RefNannyFinishContext();
    return (PyObject *) gen;
  }

  /* function exit code */
  __pyx_L1_error:;
  __Pyx_AddTraceback("obfuscated_braintree_checker.genexpr", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_r = NULL;
  __Pyx_DECREF((PyObject *)__pyx_cur_scope);
  __Pyx_XGIVEREF(__pyx_r);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

static PyObject *__pyx_gb_28obfuscated_braintree_checker_8generator2(__pyx_CoroutineObject *__pyx_generator, CYTHON_UNUSED PyThreadState *__pyx_tstate, PyObject *__pyx_sent_value) /* generator body */
{
  struct __pyx_obj_28obfuscated_braintree_checker___pyx_scope_struct_2_genexpr *__pyx_cur_scope = ((struct __pyx_obj_28obfuscated_braintree_checker___pyx_scope_struct_2_genexpr *)__pyx_generator->closure);
  PyObject *__pyx_r = NULL;
  long __pyx_t_1;
  PyObject *__pyx_t_2 = NULL;
  PyObject *__pyx_t_3 = NULL;
  PyObject *__pyx_t_4 = NULL;
  unsigned int __pyx_t_5;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("genexpr", 0);
  switch (__pyx_generator->resume_label) {
    case 0: goto __pyx_L3_first_run;
    case 1: goto __pyx_L6_resume_from_yield;
    default: /* CPython raises the right error here */
    __Pyx_RefNannyFinishContext();
    return NULL;
  }
  __pyx_L3_first_run:;
  if (unlikely(!__pyx_sent_value)) __PYX_ERR(0, 42, __pyx_L1_error)
  for (__pyx_t_1 = 0; __pyx_t_1 < 50; __pyx_t_1+=1) {
    __pyx_cur_scope->__pyx_v__ = __pyx_t_1;
    __Pyx_GetModuleGlobalName(__pyx_t_3, __pyx_n_s_random); if (unlikely(!__pyx_t_3)) __PYX_ERR(0, 42, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_3);
    __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_3, __pyx_n_s_choice); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 42, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_3); __pyx_t_3 = 0;
    __pyx_t_3 = NULL;
    __pyx_t_5 = 0;
    #if CYTHON_UNPACK_METHODS
    if (unlikely(PyMethod_Check(__pyx_t_4))) {
      __pyx_t_3 = PyMethod_GET_SELF(__pyx_t_4);
      if (likely(__pyx_t_3)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_4);
        __Pyx_INCREF(__pyx_t_3);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_4, function);
        __pyx_t_5 = 1;
      }
    }
    #endif
    {
      PyObject *__pyx_callargs[2] = {__pyx_t_3, __pyx_n_s_abcdefghijklmnopqrstuvwxyzABCDEF};
      __pyx_t_2 = __Pyx_PyObject_FastCall(__pyx_t_4, __pyx_callargs+1-__pyx_t_5, 1+__pyx_t_5);
      __Pyx_XDECREF(__pyx_t_3); __pyx_t_3 = 0;
      if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 42, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_2);
      __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    }
    __pyx_r = __pyx_t_2;
    __pyx_t_2 = 0;
    __pyx_cur_scope->__pyx_t_0 = __pyx_t_1;
    __Pyx_XGIVEREF(__pyx_r);
    __Pyx_RefNannyFinishContext();
    __Pyx_Coroutine_ResetAndClearException(__pyx_generator);
    /* return from generator, yielding value */
    __pyx_generator->resume_label = 1;
    return __pyx_r;
    __pyx_L6_resume_from_yield:;
    __pyx_t_1 = __pyx_cur_scope->__pyx_t_0;
    if (unlikely(!__pyx_sent_value)) __PYX_ERR(0, 42, __pyx_L1_error)
  }
  CYTHON_MAYBE_UNUSED_VAR(__pyx_cur_scope);

  /* function exit code */
  PyErr_SetNone(PyExc_StopIteration);
  goto __pyx_L0;
  __pyx_L1_error:;
  __Pyx_Generator_Replace_StopIteration(0);
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_3);
  __Pyx_XDECREF(__pyx_t_4);
  __Pyx_AddTraceback("genexpr", __pyx_clineno, __pyx_lineno, __pyx_filename);
  __pyx_L0:;
  __Pyx_XDECREF(__pyx_r); __pyx_r = 0;
  #if !CYTHON_USE_EXC_INFO_STACK
  __Pyx_Coroutine_ResetAndClearException(__pyx_generator);
  #endif
  __pyx_generator->resume_label = -1;
  __Pyx_Coroutine_clear((PyObject*)__pyx_generator);
  __Pyx_RefNannyFinishContext();
  return __pyx_r;
}

#if CYTHON_USE_FREELISTS
static struct __pyx_obj_28obfuscated_braintree_checker___pyx_scope_struct__genexpr *__pyx_freelist_28obfuscated_braintree_checker___pyx_scope_struct__genexpr[8];
static int __pyx_freecount_28obfuscated_braintree_checker___pyx_scope_struct__genexpr = 0;
#endif

static PyObject *__pyx_tp_new_28obfuscated_braintree_checker___pyx_scope_struct__genexpr(PyTypeObject *t, CYTHON_UNUSED PyObject *a, CYTHON_UNUSED PyObject *k) {
  PyObject *o;
  #if CYTHON_COMPILING_IN_LIMITED_API
  allocfunc alloc_func = (allocfunc)PyType_GetSlot(t, Py_tp_alloc);
  o = alloc_func(t, 0);
  #else
  #if CYTHON_USE_FREELISTS
  if (likely((int)(__pyx_freecount_28obfuscated_braintree_checker___pyx_scope_struct__genexpr > 0) & (int)(t->tp_basicsize == sizeof(struct __pyx_obj_28obfuscated_braintree_checker___pyx_scope_struct__genexpr)))) {
    o = (PyObject*)__pyx_freelist_28obfuscated_braintree_checker___pyx_scope_struct__genexpr[--__pyx_freecount_28obfuscated_braintree_checker___pyx_scope_struct__genexpr];
    memset(o, 0, sizeof(struct __pyx_obj_28obfuscated_braintree_checker___pyx_scope_struct__genexpr));
    (void) PyObject_INIT(o, t);
  } else
  #endif
  {
    o = (*t->tp_alloc)(t, 0);
    if (unlikely(!o)) return 0;
  }
  #endif
  return o;
}

static void __pyx_tp_dealloc_28obfuscated_braintree_checker___pyx_scope_struct__genexpr(PyObject *o) {
  #if CYTHON_USE_TP_FINALIZE
  if (unlikely((PY_VERSION_HEX >= 0x03080000 || __Pyx_PyType_HasFeature(Py_TYPE(o), Py_TPFLAGS_HAVE_FINALIZE)) && __Pyx_PyObject_GetSlot(o, tp_finalize, destructor)) && (!PyType_IS_GC(Py_TYPE(o)) || !__Pyx_PyObject_GC_IsFinalized(o))) {
    if (__Pyx_PyObject_GetSlot(o, tp_dealloc, destructor) == __pyx_tp_dealloc_28obfuscated_braintree_checker___pyx_scope_struct__genexpr) {
      if (PyObject_CallFinalizerFromDealloc(o)) return;
    }
  }
  #endif
  #if CYTHON_USE_FREELISTS
  if (((int)(__pyx_freecount_28obfuscated_braintree_checker___pyx_scope_struct__genexpr < 8) & (int)(Py_TYPE(o)->tp_basicsize == sizeof(struct __pyx_obj_28obfuscated_braintree_checker___pyx_scope_struct__genexpr)))) {
    __pyx_freelist_28obfuscated_braintree_checker___pyx_scope_struct__genexpr[__pyx_freecount_28obfuscated_braintree_checker___pyx_scope_struct__genexpr++] = ((struct __pyx_obj_28obfuscated_braintree_checker___pyx_scope_struct__genexpr *)o);
  } else
  #endif
  {
    #if CYTHON_USE_TYPE_SLOTS || CYTHON_COMPILING_IN_PYPY
    (*Py_TYPE(o)->tp_free)(o);
    #else
    {
      freefunc tp_free = (freefunc)PyType_GetSlot(Py_TYPE(o), Py_tp_free);
      if (tp_free) tp_free(o);
    }
    #endif
  }
}
#if CYTHON_USE_TYPE_SPECS
static PyType_Slot __pyx_type_28obfuscated_braintree_checker___pyx_scope_struct__genexpr_slots[] = {
  {Py_tp_dealloc, (void *)__pyx_tp_dealloc_28obfuscated_braintree_checker___pyx_scope_struct__genexpr},
  {Py_tp_new, (void *)__pyx_tp_new_28obfuscated_braintree_checker___pyx_scope_struct__genexpr},
  {0, 0},
};
static PyType_Spec __pyx_type_28obfuscated_braintree_checker___pyx_scope_struct__genexpr_spec = {
  "obfuscated_braintree_checker.__pyx_scope_struct__genexpr",
  sizeof(struct __pyx_obj_28obfuscated_braintree_checker___pyx_scope_struct__genexpr),
  0,
  Py_TPFLAGS_DEFAULT|Py_TPFLAGS_HAVE_VERSION_TAG|Py_TPFLAGS_CHECKTYPES|Py_TPFLAGS_HAVE_NEWBUFFER|Py_TPFLAGS_HAVE_FINALIZE,
  __pyx_type_28obfuscated_braintree_checker___pyx_scope_struct__genexpr_slots,
};
#else

static PyTypeObject __pyx_type_28obfuscated_braintree_checker___pyx_scope_struct__genexpr = {
  PyVarObject_HEAD_INIT(0, 0)
  "obfuscated_braintree_checker.""__pyx_scope_struct__genexpr", /*tp_name*/
  sizeof(struct __pyx_obj_28obfuscated_braintree_checker___pyx_scope_struct__genexpr), /*tp_basicsize*/
  0, /*tp_itemsize*/
  __pyx_tp_dealloc_28obfuscated_braintree_checker___pyx_scope_struct__genexpr, /*tp_dealloc*/
  #if PY_VERSION_HEX < 0x030800b4
  0, /*tp_print*/
  #endif
  #if PY_VERSION_HEX >= 0x030800b4
  0, /*tp_vectorcall_offset*/
  #endif
  0, /*tp_getattr*/
  0, /*tp_setattr*/
  #if PY_MAJOR_VERSION < 3
  0, /*tp_compare*/
  #endif
  #if PY_MAJOR_VERSION >= 3
  0, /*tp_as_async*/
  #endif
  0, /*tp_repr*/
  0, /*tp_as_number*/
  0, /*tp_as_sequence*/
  0, /*tp_as_mapping*/
  0, /*tp_hash*/
  0, /*tp_call*/
  0, /*tp_str*/
  0, /*tp_getattro*/
  0, /*tp_setattro*/
  0, /*tp_as_buffer*/
  Py_TPFLAGS_DEFAULT|Py_TPFLAGS_HAVE_VERSION_TAG|Py_TPFLAGS_CHECKTYPES|Py_TPFLAGS_HAVE_NEWBUFFER|Py_TPFLAGS_HAVE_FINALIZE, /*tp_flags*/
  0, /*tp_doc*/
  0, /*tp_traverse*/
  0, /*tp_clear*/
  0, /*tp_richcompare*/
  0, /*tp_weaklistoffset*/
  0, /*tp_iter*/
  0, /*tp_iternext*/
  0, /*tp_methods*/
  0, /*tp_members*/
  0, /*tp_getset*/
  0, /*tp_base*/
  0, /*tp_dict*/
  0, /*tp_descr_get*/
  0, /*tp_descr_set*/
  #if !CYTHON_USE_TYPE_SPECS
  0, /*tp_dictoffset*/
  #endif
  0, /*tp_init*/
  0, /*tp_alloc*/
  __pyx_tp_new_28obfuscated_braintree_checker___pyx_scope_struct__genexpr, /*tp_new*/
  0, /*tp_free*/
  0, /*tp_is_gc*/
  0, /*tp_bases*/
  0, /*tp_mro*/
  0, /*tp_cache*/
  0, /*tp_subclasses*/
  0, /*tp_weaklist*/
  0, /*tp_del*/
  0, /*tp_version_tag*/
  #if PY_VERSION_HEX >= 0x030400a1
  #if CYTHON_USE_TP_FINALIZE
  0, /*tp_finalize*/
  #else
  NULL, /*tp_finalize*/
  #endif
  #endif
  #if PY_VERSION_HEX >= 0x030800b1 && (!CYTHON_COMPILING_IN_PYPY || PYPY_VERSION_NUM >= 0x07030800)
  0, /*tp_vectorcall*/
  #endif
  #if __PYX_NEED_TP_PRINT_SLOT == 1
  0, /*tp_print*/
  #endif
  #if PY_VERSION_HEX >= 0x030C0000
  0, /*tp_watched*/
  #endif
  #if PY_VERSION_HEX >= 0x030d00A4
  0, /*tp_versions_used*/
  #endif
  #if CYTHON_COMPILING_IN_PYPY && PY_VERSION_HEX >= 0x03090000 && PY_VERSION_HEX < 0x030a0000
  0, /*tp_pypy_flags*/
  #endif
};
#endif

#if CYTHON_USE_FREELISTS
static struct __pyx_obj_28obfuscated_braintree_checker___pyx_scope_struct_1_genexpr *__pyx_freelist_28obfuscated_braintree_checker___pyx_scope_struct_1_genexpr[8];
static int __pyx_freecount_28obfuscated_braintree_checker___pyx_scope_struct_1_genexpr = 0;
#endif

static PyObject *__pyx_tp_new_28obfuscated_braintree_checker___pyx_scope_struct_1_genexpr(PyTypeObject *t, CYTHON_UNUSED PyObject *a, CYTHON_UNUSED PyObject *k) {
  PyObject *o;
  #if CYTHON_COMPILING_IN_LIMITED_API
  allocfunc alloc_func = (allocfunc)PyType_GetSlot(t, Py_tp_alloc);
  o = alloc_func(t, 0);
  #else
  #if CYTHON_USE_FREELISTS
  if (likely((int)(__pyx_freecount_28obfuscated_braintree_checker___pyx_scope_struct_1_genexpr > 0) & (int)(t->tp_basicsize == sizeof(struct __pyx_obj_28obfuscated_braintree_checker___pyx_scope_struct_1_genexpr)))) {
    o = (PyObject*)__pyx_freelist_28obfuscated_braintree_checker___pyx_scope_struct_1_genexpr[--__pyx_freecount_28obfuscated_braintree_checker___pyx_scope_struct_1_genexpr];
    memset(o, 0, sizeof(struct __pyx_obj_28obfuscated_braintree_checker___pyx_scope_struct_1_genexpr));
    (void) PyObject_INIT(o, t);
  } else
  #endif
  {
    o = (*t->tp_alloc)(t, 0);
    if (unlikely(!o)) return 0;
  }
  #endif
  return o;
}

static void __pyx_tp_dealloc_28obfuscated_braintree_checker___pyx_scope_struct_1_genexpr(PyObject *o) {
  #if CYTHON_USE_TP_FINALIZE
  if (unlikely((PY_VERSION_HEX >= 0x03080000 || __Pyx_PyType_HasFeature(Py_TYPE(o), Py_TPFLAGS_HAVE_FINALIZE)) && __Pyx_PyObject_GetSlot(o, tp_finalize, destructor)) && (!PyType_IS_GC(Py_TYPE(o)) || !__Pyx_PyObject_GC_IsFinalized(o))) {
    if (__Pyx_PyObject_GetSlot(o, tp_dealloc, destructor) == __pyx_tp_dealloc_28obfuscated_braintree_checker___pyx_scope_struct_1_genexpr) {
      if (PyObject_CallFinalizerFromDealloc(o)) return;
    }
  }
  #endif
  #if CYTHON_USE_FREELISTS
  if (((int)(__pyx_freecount_28obfuscated_braintree_checker___pyx_scope_struct_1_genexpr < 8) & (int)(Py_TYPE(o)->tp_basicsize == sizeof(struct __pyx_obj_28obfuscated_braintree_checker___pyx_scope_struct_1_genexpr)))) {
    __pyx_freelist_28obfuscated_braintree_checker___pyx_scope_struct_1_genexpr[__pyx_freecount_28obfuscated_braintree_checker___pyx_scope_struct_1_genexpr++] = ((struct __pyx_obj_28obfuscated_braintree_checker___pyx_scope_struct_1_genexpr *)o);
  } else
  #endif
  {
    #if CYTHON_USE_TYPE_SLOTS || CYTHON_COMPILING_IN_PYPY
    (*Py_TYPE(o)->tp_free)(o);
    #else
    {
      freefunc tp_free = (freefunc)PyType_GetSlot(Py_TYPE(o), Py_tp_free);
      if (tp_free) tp_free(o);
    }
    #endif
  }
}
#if CYTHON_USE_TYPE_SPECS
static PyType_Slot __pyx_type_28obfuscated_braintree_checker___pyx_scope_struct_1_genexpr_slots[] = {
  {Py_tp_dealloc, (void *)__pyx_tp_dealloc_28obfuscated_braintree_checker___pyx_scope_struct_1_genexpr},
  {Py_tp_new, (void *)__pyx_tp_new_28obfuscated_braintree_checker___pyx_scope_struct_1_genexpr},
  {0, 0},
};
static PyType_Spec __pyx_type_28obfuscated_braintree_checker___pyx_scope_struct_1_genexpr_spec = {
  "obfuscated_braintree_checker.__pyx_scope_struct_1_genexpr",
  sizeof(struct __pyx_obj_28obfuscated_braintree_checker___pyx_scope_struct_1_genexpr),
  0,
  Py_TPFLAGS_DEFAULT|Py_TPFLAGS_HAVE_VERSION_TAG|Py_TPFLAGS_CHECKTYPES|Py_TPFLAGS_HAVE_NEWBUFFER|Py_TPFLAGS_HAVE_FINALIZE,
  __pyx_type_28obfuscated_braintree_checker___pyx_scope_struct_1_genexpr_slots,
};
#else

static PyTypeObject __pyx_type_28obfuscated_braintree_checker___pyx_scope_struct_1_genexpr = {
  PyVarObject_HEAD_INIT(0, 0)
  "obfuscated_braintree_checker.""__pyx_scope_struct_1_genexpr", /*tp_name*/
  sizeof(struct __pyx_obj_28obfuscated_braintree_checker___pyx_scope_struct_1_genexpr), /*tp_basicsize*/
  0, /*tp_itemsize*/
  __pyx_tp_dealloc_28obfuscated_braintree_checker___pyx_scope_struct_1_genexpr, /*tp_dealloc*/
  #if PY_VERSION_HEX < 0x030800b4
  0, /*tp_print*/
  #endif
  #if PY_VERSION_HEX >= 0x030800b4
  0, /*tp_vectorcall_offset*/
  #endif
  0, /*tp_getattr*/
  0, /*tp_setattr*/
  #if PY_MAJOR_VERSION < 3
  0, /*tp_compare*/
  #endif
  #if PY_MAJOR_VERSION >= 3
  0, /*tp_as_async*/
  #endif
  0, /*tp_repr*/
  0, /*tp_as_number*/
  0, /*tp_as_sequence*/
  0, /*tp_as_mapping*/
  0, /*tp_hash*/
  0, /*tp_call*/
  0, /*tp_str*/
  0, /*tp_getattro*/
  0, /*tp_setattro*/
  0, /*tp_as_buffer*/
  Py_TPFLAGS_DEFAULT|Py_TPFLAGS_HAVE_VERSION_TAG|Py_TPFLAGS_CHECKTYPES|Py_TPFLAGS_HAVE_NEWBUFFER|Py_TPFLAGS_HAVE_FINALIZE, /*tp_flags*/
  0, /*tp_doc*/
  0, /*tp_traverse*/
  0, /*tp_clear*/
  0, /*tp_richcompare*/
  0, /*tp_weaklistoffset*/
  0, /*tp_iter*/
  0, /*tp_iternext*/
  0, /*tp_methods*/
  0, /*tp_members*/
  0, /*tp_getset*/
  0, /*tp_base*/
  0, /*tp_dict*/
  0, /*tp_descr_get*/
  0, /*tp_descr_set*/
  #if !CYTHON_USE_TYPE_SPECS
  0, /*tp_dictoffset*/
  #endif
  0, /*tp_init*/
  0, /*tp_alloc*/
  __pyx_tp_new_28obfuscated_braintree_checker___pyx_scope_struct_1_genexpr, /*tp_new*/
  0, /*tp_free*/
  0, /*tp_is_gc*/
  0, /*tp_bases*/
  0, /*tp_mro*/
  0, /*tp_cache*/
  0, /*tp_subclasses*/
  0, /*tp_weaklist*/
  0, /*tp_del*/
  0, /*tp_version_tag*/
  #if PY_VERSION_HEX >= 0x030400a1
  #if CYTHON_USE_TP_FINALIZE
  0, /*tp_finalize*/
  #else
  NULL, /*tp_finalize*/
  #endif
  #endif
  #if PY_VERSION_HEX >= 0x030800b1 && (!CYTHON_COMPILING_IN_PYPY || PYPY_VERSION_NUM >= 0x07030800)
  0, /*tp_vectorcall*/
  #endif
  #if __PYX_NEED_TP_PRINT_SLOT == 1
  0, /*tp_print*/
  #endif
  #if PY_VERSION_HEX >= 0x030C0000
  0, /*tp_watched*/
  #endif
  #if PY_VERSION_HEX >= 0x030d00A4
  0, /*tp_versions_used*/
  #endif
  #if CYTHON_COMPILING_IN_PYPY && PY_VERSION_HEX >= 0x03090000 && PY_VERSION_HEX < 0x030a0000
  0, /*tp_pypy_flags*/
  #endif
};
#endif

#if CYTHON_USE_FREELISTS
static struct __pyx_obj_28obfuscated_braintree_checker___pyx_scope_struct_2_genexpr *__pyx_freelist_28obfuscated_braintree_checker___pyx_scope_struct_2_genexpr[8];
static int __pyx_freecount_28obfuscated_braintree_checker___pyx_scope_struct_2_genexpr = 0;
#endif

static PyObject *__pyx_tp_new_28obfuscated_braintree_checker___pyx_scope_struct_2_genexpr(PyTypeObject *t, CYTHON_UNUSED PyObject *a, CYTHON_UNUSED PyObject *k) {
  PyObject *o;
  #if CYTHON_COMPILING_IN_LIMITED_API
  allocfunc alloc_func = (allocfunc)PyType_GetSlot(t, Py_tp_alloc);
  o = alloc_func(t, 0);
  #else
  #if CYTHON_USE_FREELISTS
  if (likely((int)(__pyx_freecount_28obfuscated_braintree_checker___pyx_scope_struct_2_genexpr > 0) & (int)(t->tp_basicsize == sizeof(struct __pyx_obj_28obfuscated_braintree_checker___pyx_scope_struct_2_genexpr)))) {
    o = (PyObject*)__pyx_freelist_28obfuscated_braintree_checker___pyx_scope_struct_2_genexpr[--__pyx_freecount_28obfuscated_braintree_checker___pyx_scope_struct_2_genexpr];
    memset(o, 0, sizeof(struct __pyx_obj_28obfuscated_braintree_checker___pyx_scope_struct_2_genexpr));
    (void) PyObject_INIT(o, t);
  } else
  #endif
  {
    o = (*t->tp_alloc)(t, 0);
    if (unlikely(!o)) return 0;
  }
  #endif
  return o;
}

static void __pyx_tp_dealloc_28obfuscated_braintree_checker___pyx_scope_struct_2_genexpr(PyObject *o) {
  #if CYTHON_USE_TP_FINALIZE
  if (unlikely((PY_VERSION_HEX >= 0x03080000 || __Pyx_PyType_HasFeature(Py_TYPE(o), Py_TPFLAGS_HAVE_FINALIZE)) && __Pyx_PyObject_GetSlot(o, tp_finalize, destructor)) && (!PyType_IS_GC(Py_TYPE(o)) || !__Pyx_PyObject_GC_IsFinalized(o))) {
    if (__Pyx_PyObject_GetSlot(o, tp_dealloc, destructor) == __pyx_tp_dealloc_28obfuscated_braintree_checker___pyx_scope_struct_2_genexpr) {
      if (PyObject_CallFinalizerFromDealloc(o)) return;
    }
  }
  #endif
  #if CYTHON_USE_FREELISTS
  if (((int)(__pyx_freecount_28obfuscated_braintree_checker___pyx_scope_struct_2_genexpr < 8) & (int)(Py_TYPE(o)->tp_basicsize == sizeof(struct __pyx_obj_28obfuscated_braintree_checker___pyx_scope_struct_2_genexpr)))) {
    __pyx_freelist_28obfuscated_braintree_checker___pyx_scope_struct_2_genexpr[__pyx_freecount_28obfuscated_braintree_checker___pyx_scope_struct_2_genexpr++] = ((struct __pyx_obj_28obfuscated_braintree_checker___pyx_scope_struct_2_genexpr *)o);
  } else
  #endif
  {
    #if CYTHON_USE_TYPE_SLOTS || CYTHON_COMPILING_IN_PYPY
    (*Py_TYPE(o)->tp_free)(o);
    #else
    {
      freefunc tp_free = (freefunc)PyType_GetSlot(Py_TYPE(o), Py_tp_free);
      if (tp_free) tp_free(o);
    }
    #endif
  }
}
#if CYTHON_USE_TYPE_SPECS
static PyType_Slot __pyx_type_28obfuscated_braintree_checker___pyx_scope_struct_2_genexpr_slots[] = {
  {Py_tp_dealloc, (void *)__pyx_tp_dealloc_28obfuscated_braintree_checker___pyx_scope_struct_2_genexpr},
  {Py_tp_new, (void *)__pyx_tp_new_28obfuscated_braintree_checker___pyx_scope_struct_2_genexpr},
  {0, 0},
};
static PyType_Spec __pyx_type_28obfuscated_braintree_checker___pyx_scope_struct_2_genexpr_spec = {
  "obfuscated_braintree_checker.__pyx_scope_struct_2_genexpr",
  sizeof(struct __pyx_obj_28obfuscated_braintree_checker___pyx_scope_struct_2_genexpr),
  0,
  Py_TPFLAGS_DEFAULT|Py_TPFLAGS_HAVE_VERSION_TAG|Py_TPFLAGS_CHECKTYPES|Py_TPFLAGS_HAVE_NEWBUFFER|Py_TPFLAGS_HAVE_FINALIZE,
  __pyx_type_28obfuscated_braintree_checker___pyx_scope_struct_2_genexpr_slots,
};
#else

static PyTypeObject __pyx_type_28obfuscated_braintree_checker___pyx_scope_struct_2_genexpr = {
  PyVarObject_HEAD_INIT(0, 0)
  "obfuscated_braintree_checker.""__pyx_scope_struct_2_genexpr", /*tp_name*/
  sizeof(struct __pyx_obj_28obfuscated_braintree_checker___pyx_scope_struct_2_genexpr), /*tp_basicsize*/
  0, /*tp_itemsize*/
  __pyx_tp_dealloc_28obfuscated_braintree_checker___pyx_scope_struct_2_genexpr, /*tp_dealloc*/
  #if PY_VERSION_HEX < 0x030800b4
  0, /*tp_print*/
  #endif
  #if PY_VERSION_HEX >= 0x030800b4
  0, /*tp_vectorcall_offset*/
  #endif
  0, /*tp_getattr*/
  0, /*tp_setattr*/
  #if PY_MAJOR_VERSION < 3
  0, /*tp_compare*/
  #endif
  #if PY_MAJOR_VERSION >= 3
  0, /*tp_as_async*/
  #endif
  0, /*tp_repr*/
  0, /*tp_as_number*/
  0, /*tp_as_sequence*/
  0, /*tp_as_mapping*/
  0, /*tp_hash*/
  0, /*tp_call*/
  0, /*tp_str*/
  0, /*tp_getattro*/
  0, /*tp_setattro*/
  0, /*tp_as_buffer*/
  Py_TPFLAGS_DEFAULT|Py_TPFLAGS_HAVE_VERSION_TAG|Py_TPFLAGS_CHECKTYPES|Py_TPFLAGS_HAVE_NEWBUFFER|Py_TPFLAGS_HAVE_FINALIZE, /*tp_flags*/
  0, /*tp_doc*/
  0, /*tp_traverse*/
  0, /*tp_clear*/
  0, /*tp_richcompare*/
  0, /*tp_weaklistoffset*/
  0, /*tp_iter*/
  0, /*tp_iternext*/
  0, /*tp_methods*/
  0, /*tp_members*/
  0, /*tp_getset*/
  0, /*tp_base*/
  0, /*tp_dict*/
  0, /*tp_descr_get*/
  0, /*tp_descr_set*/
  #if !CYTHON_USE_TYPE_SPECS
  0, /*tp_dictoffset*/
  #endif
  0, /*tp_init*/
  0, /*tp_alloc*/
  __pyx_tp_new_28obfuscated_braintree_checker___pyx_scope_struct_2_genexpr, /*tp_new*/
  0, /*tp_free*/
  0, /*tp_is_gc*/
  0, /*tp_bases*/
  0, /*tp_mro*/
  0, /*tp_cache*/
  0, /*tp_subclasses*/
  0, /*tp_weaklist*/
  0, /*tp_del*/
  0, /*tp_version_tag*/
  #if PY_VERSION_HEX >= 0x030400a1
  #if CYTHON_USE_TP_FINALIZE
  0, /*tp_finalize*/
  #else
  NULL, /*tp_finalize*/
  #endif
  #endif
  #if PY_VERSION_HEX >= 0x030800b1 && (!CYTHON_COMPILING_IN_PYPY || PYPY_VERSION_NUM >= 0x07030800)
  0, /*tp_vectorcall*/
  #endif
  #if __PYX_NEED_TP_PRINT_SLOT == 1
  0, /*tp_print*/
  #endif
  #if PY_VERSION_HEX >= 0x030C0000
  0, /*tp_watched*/
  #endif
  #if PY_VERSION_HEX >= 0x030d00A4
  0, /*tp_versions_used*/
  #endif
  #if CYTHON_COMPILING_IN_PYPY && PY_VERSION_HEX >= 0x03090000 && PY_VERSION_HEX < 0x030a0000
  0, /*tp_pypy_flags*/
  #endif
};
#endif

static PyMethodDef __pyx_methods[] = {
  {0, 0, 0, 0}
};
#ifndef CYTHON_SMALL_CODE
#if defined(__clang__)
    #define CYTHON_SMALL_CODE
#elif defined(__GNUC__) && (__GNUC__ > 4 || (__GNUC__ == 4 && __GNUC_MINOR__ >= 3))
    #define CYTHON_SMALL_CODE __attribute__((cold))
#else
    #define CYTHON_SMALL_CODE
#endif
#endif
/* #### Code section: pystring_table ### */

static int __Pyx_CreateStringTabAndInitStrings(void) {
  __Pyx_StringTabEntry __pyx_string_tab[] = {
    {&__pyx_n_s_, __pyx_k_, sizeof(__pyx_k_), 0, 0, 1, 1},
    {&__pyx_kp_s_NjMwMDAwMDAwMDAwMDAwMDAwMDAwMDAw, __pyx_k_NjMwMDAwMDAwMDAwMDAwMDAwMDAwMDAw, sizeof(__pyx_k_NjMwMDAwMDAwMDAwMDAwMDAwMDAwMDAw), 0, 0, 1, 0},
    {&__pyx_n_s__3, __pyx_k__3, sizeof(__pyx_k__3), 0, 0, 1, 1},
    {&__pyx_kp_s__4, __pyx_k__4, sizeof(__pyx_k__4), 0, 0, 1, 0},
    {&__pyx_n_s__6, __pyx_k__6, sizeof(__pyx_k__6), 0, 0, 1, 1},
    {&__pyx_n_s_abcdefghijklmnopqrstuvwxyzABCDEF, __pyx_k_abcdefghijklmnopqrstuvwxyzABCDEF, sizeof(__pyx_k_abcdefghijklmnopqrstuvwxyzABCDEF), 0, 0, 1, 1},
    {&__pyx_n_s_args, __pyx_k_args, sizeof(__pyx_k_args), 0, 0, 1, 1},
    {&__pyx_n_s_b64decode, __pyx_k_b64decode, sizeof(__pyx_k_b64decode), 0, 0, 1, 1},
    {&__pyx_n_s_base64, __pyx_k_base64, sizeof(__pyx_k_base64), 0, 0, 1, 1},
    {&__pyx_n_s_builtins, __pyx_k_builtins, sizeof(__pyx_k_builtins), 0, 0, 1, 1},
    {&__pyx_n_s_choice, __pyx_k_choice, sizeof(__pyx_k_choice), 0, 0, 1, 1},
    {&__pyx_n_s_cline_in_traceback, __pyx_k_cline_in_traceback, sizeof(__pyx_k_cline_in_traceback), 0, 0, 1, 1},
    {&__pyx_n_s_close, __pyx_k_close, sizeof(__pyx_k_close), 0, 0, 1, 1},
    {&__pyx_n_s_codecs, __pyx_k_codecs, sizeof(__pyx_k_codecs), 0, 0, 1, 1},
    {&__pyx_n_s_decode, __pyx_k_decode, sizeof(__pyx_k_decode), 0, 0, 1, 1},
    {&__pyx_kp_u_disable, __pyx_k_disable, sizeof(__pyx_k_disable), 0, 1, 0, 0},
    {&__pyx_kp_u_enable, __pyx_k_enable, sizeof(__pyx_k_enable), 0, 1, 0, 0},
    {&__pyx_n_s_encode, __pyx_k_encode, sizeof(__pyx_k_encode), 0, 0, 1, 1},
    {&__pyx_n_s_encoded_content, __pyx_k_encoded_content, sizeof(__pyx_k_encoded_content), 0, 0, 1, 1},
    {&__pyx_n_s_fromhex, __pyx_k_fromhex, sizeof(__pyx_k_fromhex), 0, 0, 1, 1},
    {&__pyx_kp_u_gc, __pyx_k_gc, sizeof(__pyx_k_gc), 0, 1, 0, 0},
    {&__pyx_n_s_genexpr, __pyx_k_genexpr, sizeof(__pyx_k_genexpr), 0, 0, 1, 1},
    {&__pyx_n_s_i, __pyx_k_i, sizeof(__pyx_k_i), 0, 0, 1, 1},
    {&__pyx_n_s_import, __pyx_k_import, sizeof(__pyx_k_import), 0, 0, 1, 1},
    {&__pyx_n_s_initializing, __pyx_k_initializing, sizeof(__pyx_k_initializing), 0, 0, 1, 1},
    {&__pyx_kp_u_isenabled, __pyx_k_isenabled, sizeof(__pyx_k_isenabled), 0, 1, 0, 0},
    {&__pyx_n_s_join, __pyx_k_join, sizeof(__pyx_k_join), 0, 0, 1, 1},
    {&__pyx_n_s_junk_num, __pyx_k_junk_num, sizeof(__pyx_k_junk_num), 0, 0, 1, 1},
    {&__pyx_n_s_junk_str, __pyx_k_junk_str, sizeof(__pyx_k_junk_str), 0, 0, 1, 1},
    {&__pyx_n_s_loads, __pyx_k_loads, sizeof(__pyx_k_loads), 0, 0, 1, 1},
    {&__pyx_n_s_main, __pyx_k_main, sizeof(__pyx_k_main), 0, 0, 1, 1},
    {&__pyx_n_s_marshal, __pyx_k_marshal, sizeof(__pyx_k_marshal), 0, 0, 1, 1},
    {&__pyx_n_s_name, __pyx_k_name, sizeof(__pyx_k_name), 0, 0, 1, 1},
    {&__pyx_n_s_obfuscated_braintree_checker, __pyx_k_obfuscated_braintree_checker, sizeof(__pyx_k_obfuscated_braintree_checker), 0, 0, 1, 1},
    {&__pyx_n_s_randint, __pyx_k_randint, sizeof(__pyx_k_randint), 0, 0, 1, 1},
    {&__pyx_n_s_random, __pyx_k_random, sizeof(__pyx_k_random), 0, 0, 1, 1},
    {&__pyx_n_s_range, __pyx_k_range, sizeof(__pyx_k_range), 0, 0, 1, 1},
    {&__pyx_n_s_rot_13, __pyx_k_rot_13, sizeof(__pyx_k_rot_13), 0, 0, 1, 1},
    {&__pyx_n_s_send, __pyx_k_send, sizeof(__pyx_k_send), 0, 0, 1, 1},
    {&__pyx_n_s_spec, __pyx_k_spec, sizeof(__pyx_k_spec), 0, 0, 1, 1},
    {&__pyx_n_s_sum, __pyx_k_sum, sizeof(__pyx_k_sum), 0, 0, 1, 1},
    {&__pyx_n_s_test, __pyx_k_test, sizeof(__pyx_k_test), 0, 0, 1, 1},
    {&__pyx_n_s_throw, __pyx_k_throw, sizeof(__pyx_k_throw), 0, 0, 1, 1},
    {0, 0, 0, 0, 0, 0, 0}
  };
  return __Pyx_InitStrings(__pyx_string_tab);
}
/* #### Code section: cached_builtins ### */
static CYTHON_SMALL_CODE int __Pyx_InitCachedBuiltins(void) {
  __pyx_builtin_range = __Pyx_GetBuiltinName(__pyx_n_s_range); if (!__pyx_builtin_range) __PYX_ERR(0, 8, __pyx_L1_error)
  __pyx_builtin_sum = __Pyx_GetBuiltinName(__pyx_n_s_sum); if (!__pyx_builtin_sum) __PYX_ERR(0, 13, __pyx_L1_error)
  return 0;
  __pyx_L1_error:;
  return -1;
}
/* #### Code section: cached_constants ### */

static CYTHON_SMALL_CODE int __Pyx_InitCachedConstants(void) {
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("__Pyx_InitCachedConstants", 0);

  /* "obfuscated_braintree_checker.py":9
 * # Heavy junk code to confuse
 * for i in range(10000):
 *     _ = i * random.randint(1, 100)             # <<<<<<<<<<<<<<
 * 
 * for _ in range(1000):
 */
  __pyx_tuple__2 = PyTuple_Pack(2, __pyx_int_1, __pyx_int_100); if (unlikely(!__pyx_tuple__2)) __PYX_ERR(0, 9, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__2);
  __Pyx_GIVEREF(__pyx_tuple__2);

  /* "obfuscated_braintree_checker.py":13
 * for _ in range(1000):
 *     junk_str = ''.join(random.choice('abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ') for _ in range(50))
 *     junk_num = sum([random.randint(1, 1000) for _ in range(100)])             # <<<<<<<<<<<<<<
 *     _ = junk_str + str(junk_num)
 * 
 */
  __pyx_tuple__5 = PyTuple_Pack(2, __pyx_int_1, __pyx_int_1000); if (unlikely(!__pyx_tuple__5)) __PYX_ERR(0, 13, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_tuple__5);
  __Pyx_GIVEREF(__pyx_tuple__5);
  __Pyx_RefNannyFinishContext();
  return 0;
  __pyx_L1_error:;
  __Pyx_RefNannyFinishContext();
  return -1;
}
/* #### Code section: init_constants ### */

static CYTHON_SMALL_CODE int __Pyx_InitConstants(void) {
  if (__Pyx_CreateStringTabAndInitStrings() < 0) __PYX_ERR(0, 2, __pyx_L1_error);
  __pyx_int_1 = PyInt_FromLong(1); if (unlikely(!__pyx_int_1)) __PYX_ERR(0, 2, __pyx_L1_error)
  __pyx_int_100 = PyInt_FromLong(100); if (unlikely(!__pyx_int_100)) __PYX_ERR(0, 2, __pyx_L1_error)
  __pyx_int_1000 = PyInt_FromLong(1000); if (unlikely(!__pyx_int_1000)) __PYX_ERR(0, 2, __pyx_L1_error)
  return 0;
  __pyx_L1_error:;
  return -1;
}
/* #### Code section: init_globals ### */

static CYTHON_SMALL_CODE int __Pyx_InitGlobals(void) {
  return 0;
}
/* #### Code section: init_module ### */

static CYTHON_SMALL_CODE int __Pyx_modinit_global_init_code(void); /*proto*/
static CYTHON_SMALL_CODE int __Pyx_modinit_variable_export_code(void); /*proto*/
static CYTHON_SMALL_CODE int __Pyx_modinit_function_export_code(void); /*proto*/
static CYTHON_SMALL_CODE int __Pyx_modinit_type_init_code(void); /*proto*/
static CYTHON_SMALL_CODE int __Pyx_modinit_type_import_code(void); /*proto*/
static CYTHON_SMALL_CODE int __Pyx_modinit_variable_import_code(void); /*proto*/
static CYTHON_SMALL_CODE int __Pyx_modinit_function_import_code(void); /*proto*/

static int __Pyx_modinit_global_init_code(void) {
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("__Pyx_modinit_global_init_code", 0);
  /*--- Global init code ---*/
  __pyx_8genexpr1__pyx_v_28obfuscated_braintree_checker__ = Py_None; Py_INCREF(Py_None);
  __pyx_8genexpr3__pyx_v_28obfuscated_braintree_checker__ = Py_None; Py_INCREF(Py_None);
  __pyx_8genexpr5__pyx_v_28obfuscated_braintree_checker__ = Py_None; Py_INCREF(Py_None);
  __Pyx_RefNannyFinishContext();
  return 0;
}

static int __Pyx_modinit_variable_export_code(void) {
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("__Pyx_modinit_variable_export_code", 0);
  /*--- Variable export code ---*/
  __Pyx_RefNannyFinishContext();
  return 0;
}

static int __Pyx_modinit_function_export_code(void) {
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("__Pyx_modinit_function_export_code", 0);
  /*--- Function export code ---*/
  __Pyx_RefNannyFinishContext();
  return 0;
}

static int __Pyx_modinit_type_init_code(void) {
  __Pyx_RefNannyDeclarations
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannySetupContext("__Pyx_modinit_type_init_code", 0);
  /*--- Type init code ---*/
  #if CYTHON_USE_TYPE_SPECS
  __pyx_ptype_28obfuscated_braintree_checker___pyx_scope_struct__genexpr = (PyTypeObject *) __Pyx_PyType_FromModuleAndSpec(__pyx_m, &__pyx_type_28obfuscated_braintree_checker___pyx_scope_struct__genexpr_spec, NULL); if (unlikely(!__pyx_ptype_28obfuscated_braintree_checker___pyx_scope_struct__genexpr)) __PYX_ERR(0, 12, __pyx_L1_error)
  if (__Pyx_fix_up_extension_type_from_spec(&__pyx_type_28obfuscated_braintree_checker___pyx_scope_struct__genexpr_spec, __pyx_ptype_28obfuscated_braintree_checker___pyx_scope_struct__genexpr) < 0) __PYX_ERR(0, 12, __pyx_L1_error)
  #else
  __pyx_ptype_28obfuscated_braintree_checker___pyx_scope_struct__genexpr = &__pyx_type_28obfuscated_braintree_checker___pyx_scope_struct__genexpr;
  #endif
  #if !CYTHON_COMPILING_IN_LIMITED_API
  #endif
  #if !CYTHON_USE_TYPE_SPECS
  if (__Pyx_PyType_Ready(__pyx_ptype_28obfuscated_braintree_checker___pyx_scope_struct__genexpr) < 0) __PYX_ERR(0, 12, __pyx_L1_error)
  #endif
  #if PY_MAJOR_VERSION < 3
  __pyx_ptype_28obfuscated_braintree_checker___pyx_scope_struct__genexpr->tp_print = 0;
  #endif
  #if !CYTHON_COMPILING_IN_LIMITED_API
  if ((CYTHON_USE_TYPE_SLOTS && CYTHON_USE_PYTYPE_LOOKUP) && likely(!__pyx_ptype_28obfuscated_braintree_checker___pyx_scope_struct__genexpr->tp_dictoffset && __pyx_ptype_28obfuscated_braintree_checker___pyx_scope_struct__genexpr->tp_getattro == PyObject_GenericGetAttr)) {
    __pyx_ptype_28obfuscated_braintree_checker___pyx_scope_struct__genexpr->tp_getattro = __Pyx_PyObject_GenericGetAttrNoDict;
  }
  #endif
  #if CYTHON_USE_TYPE_SPECS
  __pyx_ptype_28obfuscated_braintree_checker___pyx_scope_struct_1_genexpr = (PyTypeObject *) __Pyx_PyType_FromModuleAndSpec(__pyx_m, &__pyx_type_28obfuscated_braintree_checker___pyx_scope_struct_1_genexpr_spec, NULL); if (unlikely(!__pyx_ptype_28obfuscated_braintree_checker___pyx_scope_struct_1_genexpr)) __PYX_ERR(0, 30, __pyx_L1_error)
  if (__Pyx_fix_up_extension_type_from_spec(&__pyx_type_28obfuscated_braintree_checker___pyx_scope_struct_1_genexpr_spec, __pyx_ptype_28obfuscated_braintree_checker___pyx_scope_struct_1_genexpr) < 0) __PYX_ERR(0, 30, __pyx_L1_error)
  #else
  __pyx_ptype_28obfuscated_braintree_checker___pyx_scope_struct_1_genexpr = &__pyx_type_28obfuscated_braintree_checker___pyx_scope_struct_1_genexpr;
  #endif
  #if !CYTHON_COMPILING_IN_LIMITED_API
  #endif
  #if !CYTHON_USE_TYPE_SPECS
  if (__Pyx_PyType_Ready(__pyx_ptype_28obfuscated_braintree_checker___pyx_scope_struct_1_genexpr) < 0) __PYX_ERR(0, 30, __pyx_L1_error)
  #endif
  #if PY_MAJOR_VERSION < 3
  __pyx_ptype_28obfuscated_braintree_checker___pyx_scope_struct_1_genexpr->tp_print = 0;
  #endif
  #if !CYTHON_COMPILING_IN_LIMITED_API
  if ((CYTHON_USE_TYPE_SLOTS && CYTHON_USE_PYTYPE_LOOKUP) && likely(!__pyx_ptype_28obfuscated_braintree_checker___pyx_scope_struct_1_genexpr->tp_dictoffset && __pyx_ptype_28obfuscated_braintree_checker___pyx_scope_struct_1_genexpr->tp_getattro == PyObject_GenericGetAttr)) {
    __pyx_ptype_28obfuscated_braintree_checker___pyx_scope_struct_1_genexpr->tp_getattro = __Pyx_PyObject_GenericGetAttrNoDict;
  }
  #endif
  #if CYTHON_USE_TYPE_SPECS
  __pyx_ptype_28obfuscated_braintree_checker___pyx_scope_struct_2_genexpr = (PyTypeObject *) __Pyx_PyType_FromModuleAndSpec(__pyx_m, &__pyx_type_28obfuscated_braintree_checker___pyx_scope_struct_2_genexpr_spec, NULL); if (unlikely(!__pyx_ptype_28obfuscated_braintree_checker___pyx_scope_struct_2_genexpr)) __PYX_ERR(0, 42, __pyx_L1_error)
  if (__Pyx_fix_up_extension_type_from_spec(&__pyx_type_28obfuscated_braintree_checker___pyx_scope_struct_2_genexpr_spec, __pyx_ptype_28obfuscated_braintree_checker___pyx_scope_struct_2_genexpr) < 0) __PYX_ERR(0, 42, __pyx_L1_error)
  #else
  __pyx_ptype_28obfuscated_braintree_checker___pyx_scope_struct_2_genexpr = &__pyx_type_28obfuscated_braintree_checker___pyx_scope_struct_2_genexpr;
  #endif
  #if !CYTHON_COMPILING_IN_LIMITED_API
  #endif
  #if !CYTHON_USE_TYPE_SPECS
  if (__Pyx_PyType_Ready(__pyx_ptype_28obfuscated_braintree_checker___pyx_scope_struct_2_genexpr) < 0) __PYX_ERR(0, 42, __pyx_L1_error)
  #endif
  #if PY_MAJOR_VERSION < 3
  __pyx_ptype_28obfuscated_braintree_checker___pyx_scope_struct_2_genexpr->tp_print = 0;
  #endif
  #if !CYTHON_COMPILING_IN_LIMITED_API
  if ((CYTHON_USE_TYPE_SLOTS && CYTHON_USE_PYTYPE_LOOKUP) && likely(!__pyx_ptype_28obfuscated_braintree_checker___pyx_scope_struct_2_genexpr->tp_dictoffset && __pyx_ptype_28obfuscated_braintree_checker___pyx_scope_struct_2_genexpr->tp_getattro == PyObject_GenericGetAttr)) {
    __pyx_ptype_28obfuscated_braintree_checker___pyx_scope_struct_2_genexpr->tp_getattro = __Pyx_PyObject_GenericGetAttrNoDict;
  }
  #endif
  __Pyx_RefNannyFinishContext();
  return 0;
  __pyx_L1_error:;
  __Pyx_RefNannyFinishContext();
  return -1;
}

static int __Pyx_modinit_type_import_code(void) {
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("__Pyx_modinit_type_import_code", 0);
  /*--- Type import code ---*/
  __Pyx_RefNannyFinishContext();
  return 0;
}

static int __Pyx_modinit_variable_import_code(void) {
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("__Pyx_modinit_variable_import_code", 0);
  /*--- Variable import code ---*/
  __Pyx_RefNannyFinishContext();
  return 0;
}

static int __Pyx_modinit_function_import_code(void) {
  __Pyx_RefNannyDeclarations
  __Pyx_RefNannySetupContext("__Pyx_modinit_function_import_code", 0);
  /*--- Function import code ---*/
  __Pyx_RefNannyFinishContext();
  return 0;
}


#if PY_MAJOR_VERSION >= 3
#if CYTHON_PEP489_MULTI_PHASE_INIT
static PyObject* __pyx_pymod_create(PyObject *spec, PyModuleDef *def); /*proto*/
static int __pyx_pymod_exec_obfuscated_braintree_checker(PyObject* module); /*proto*/
static PyModuleDef_Slot __pyx_moduledef_slots[] = {
  {Py_mod_create, (void*)__pyx_pymod_create},
  {Py_mod_exec, (void*)__pyx_pymod_exec_obfuscated_braintree_checker},
  {0, NULL}
};
#endif

#ifdef __cplusplus
namespace {
  struct PyModuleDef __pyx_moduledef =
  #else
  static struct PyModuleDef __pyx_moduledef =
  #endif
  {
      PyModuleDef_HEAD_INIT,
      "obfuscated_braintree_checker",
      0, /* m_doc */
    #if CYTHON_PEP489_MULTI_PHASE_INIT
      0, /* m_size */
    #elif CYTHON_USE_MODULE_STATE
      sizeof(__pyx_mstate), /* m_size */
    #else
      -1, /* m_size */
    #endif
      __pyx_methods /* m_methods */,
    #if CYTHON_PEP489_MULTI_PHASE_INIT
      __pyx_moduledef_slots, /* m_slots */
    #else
      NULL, /* m_reload */
    #endif
    #if CYTHON_USE_MODULE_STATE
      __pyx_m_traverse, /* m_traverse */
      __pyx_m_clear, /* m_clear */
      NULL /* m_free */
    #else
      NULL, /* m_traverse */
      NULL, /* m_clear */
      NULL /* m_free */
    #endif
  };
  #ifdef __cplusplus
} /* anonymous namespace */
#endif
#endif

#ifndef CYTHON_NO_PYINIT_EXPORT
#define __Pyx_PyMODINIT_FUNC PyMODINIT_FUNC
#elif PY_MAJOR_VERSION < 3
#ifdef __cplusplus
#define __Pyx_PyMODINIT_FUNC extern "C" void
#else
#define __Pyx_PyMODINIT_FUNC void
#endif
#else
#ifdef __cplusplus
#define __Pyx_PyMODINIT_FUNC extern "C" PyObject *
#else
#define __Pyx_PyMODINIT_FUNC PyObject *
#endif
#endif


#if PY_MAJOR_VERSION < 3
__Pyx_PyMODINIT_FUNC initobfuscated_braintree_checker(void) CYTHON_SMALL_CODE; /*proto*/
__Pyx_PyMODINIT_FUNC initobfuscated_braintree_checker(void)
#else
__Pyx_PyMODINIT_FUNC PyInit_obfuscated_braintree_checker(void) CYTHON_SMALL_CODE; /*proto*/
__Pyx_PyMODINIT_FUNC PyInit_obfuscated_braintree_checker(void)
#if CYTHON_PEP489_MULTI_PHASE_INIT
{
  return PyModuleDef_Init(&__pyx_moduledef);
}
static CYTHON_SMALL_CODE int __Pyx_check_single_interpreter(void) {
    #if PY_VERSION_HEX >= 0x030700A1
    static PY_INT64_T main_interpreter_id = -1;
    PY_INT64_T current_id = PyInterpreterState_GetID(PyThreadState_Get()->interp);
    if (main_interpreter_id == -1) {
        main_interpreter_id = current_id;
        return (unlikely(current_id == -1)) ? -1 : 0;
    } else if (unlikely(main_interpreter_id != current_id))
    #else
    static PyInterpreterState *main_interpreter = NULL;
    PyInterpreterState *current_interpreter = PyThreadState_Get()->interp;
    if (!main_interpreter) {
        main_interpreter = current_interpreter;
    } else if (unlikely(main_interpreter != current_interpreter))
    #endif
    {
        PyErr_SetString(
            PyExc_ImportError,
            "Interpreter change detected - this module can only be loaded into one interpreter per process.");
        return -1;
    }
    return 0;
}
#if CYTHON_COMPILING_IN_LIMITED_API
static CYTHON_SMALL_CODE int __Pyx_copy_spec_to_module(PyObject *spec, PyObject *module, const char* from_name, const char* to_name, int allow_none)
#else
static CYTHON_SMALL_CODE int __Pyx_copy_spec_to_module(PyObject *spec, PyObject *moddict, const char* from_name, const char* to_name, int allow_none)
#endif
{
    PyObject *value = PyObject_GetAttrString(spec, from_name);
    int result = 0;
    if (likely(value)) {
        if (allow_none || value != Py_None) {
#if CYTHON_COMPILING_IN_LIMITED_API
            result = PyModule_AddObject(module, to_name, value);
#else
            result = PyDict_SetItemString(moddict, to_name, value);
#endif
        }
        Py_DECREF(value);
    } else if (PyErr_ExceptionMatches(PyExc_AttributeError)) {
        PyErr_Clear();
    } else {
        result = -1;
    }
    return result;
}
static CYTHON_SMALL_CODE PyObject* __pyx_pymod_create(PyObject *spec, PyModuleDef *def) {
    PyObject *module = NULL, *moddict, *modname;
    CYTHON_UNUSED_VAR(def);
    if (__Pyx_check_single_interpreter())
        return NULL;
    if (__pyx_m)
        return __Pyx_NewRef(__pyx_m);
    modname = PyObject_GetAttrString(spec, "name");
    if (unlikely(!modname)) goto bad;
    module = PyModule_NewObject(modname);
    Py_DECREF(modname);
    if (unlikely(!module)) goto bad;
#if CYTHON_COMPILING_IN_LIMITED_API
    moddict = module;
#else
    moddict = PyModule_GetDict(module);
    if (unlikely(!moddict)) goto bad;
#endif
    if (unlikely(__Pyx_copy_spec_to_module(spec, moddict, "loader", "__loader__", 1) < 0)) goto bad;
    if (unlikely(__Pyx_copy_spec_to_module(spec, moddict, "origin", "__file__", 1) < 0)) goto bad;
    if (unlikely(__Pyx_copy_spec_to_module(spec, moddict, "parent", "__package__", 1) < 0)) goto bad;
    if (unlikely(__Pyx_copy_spec_to_module(spec, moddict, "submodule_search_locations", "__path__", 0) < 0)) goto bad;
    return module;
bad:
    Py_XDECREF(module);
    return NULL;
}


static CYTHON_SMALL_CODE int __pyx_pymod_exec_obfuscated_braintree_checker(PyObject *__pyx_pyinit_module)
#endif
#endif
{
  int stringtab_initialized = 0;
  #if CYTHON_USE_MODULE_STATE
  int pystate_addmodule_run = 0;
  #endif
  PyObject *__pyx_t_1 = NULL;
  PyObject *__pyx_t_2 = NULL;
  long __pyx_t_3;
  PyObject *__pyx_t_4 = NULL;
  PyObject *__pyx_t_5 = NULL;
  long __pyx_t_6;
  PyObject *__pyx_t_7 = NULL;
  unsigned int __pyx_t_8;
  PyObject *__pyx_t_9 = NULL;
  int __pyx_lineno = 0;
  const char *__pyx_filename = NULL;
  int __pyx_clineno = 0;
  __Pyx_RefNannyDeclarations
  #if CYTHON_PEP489_MULTI_PHASE_INIT
  if (__pyx_m) {
    if (__pyx_m == __pyx_pyinit_module) return 0;
    PyErr_SetString(PyExc_RuntimeError, "Module 'obfuscated_braintree_checker' has already been imported. Re-initialisation is not supported.");
    return -1;
  }
  #elif PY_MAJOR_VERSION >= 3
  if (__pyx_m) return __Pyx_NewRef(__pyx_m);
  #endif
  /*--- Module creation code ---*/
  #if CYTHON_PEP489_MULTI_PHASE_INIT
  __pyx_m = __pyx_pyinit_module;
  Py_INCREF(__pyx_m);
  #else
  #if PY_MAJOR_VERSION < 3
  __pyx_m = Py_InitModule4("obfuscated_braintree_checker", __pyx_methods, 0, 0, PYTHON_API_VERSION); Py_XINCREF(__pyx_m);
  if (unlikely(!__pyx_m)) __PYX_ERR(0, 2, __pyx_L1_error)
  #elif CYTHON_USE_MODULE_STATE
  __pyx_t_1 = PyModule_Create(&__pyx_moduledef); if (unlikely(!__pyx_t_1)) __PYX_ERR(0, 2, __pyx_L1_error)
  {
    int add_module_result = PyState_AddModule(__pyx_t_1, &__pyx_moduledef);
    __pyx_t_1 = 0; /* transfer ownership from __pyx_t_1 to "obfuscated_braintree_checker" pseudovariable */
    if (unlikely((add_module_result < 0))) __PYX_ERR(0, 2, __pyx_L1_error)
    pystate_addmodule_run = 1;
  }
  #else
  __pyx_m = PyModule_Create(&__pyx_moduledef);
  if (unlikely(!__pyx_m)) __PYX_ERR(0, 2, __pyx_L1_error)
  #endif
  #endif
  CYTHON_UNUSED_VAR(__pyx_t_1);
  __pyx_d = PyModule_GetDict(__pyx_m); if (unlikely(!__pyx_d)) __PYX_ERR(0, 2, __pyx_L1_error)
  Py_INCREF(__pyx_d);
  __pyx_b = __Pyx_PyImport_AddModuleRef(__Pyx_BUILTIN_MODULE_NAME); if (unlikely(!__pyx_b)) __PYX_ERR(0, 2, __pyx_L1_error)
  __pyx_cython_runtime = __Pyx_PyImport_AddModuleRef((const char *) "cython_runtime"); if (unlikely(!__pyx_cython_runtime)) __PYX_ERR(0, 2, __pyx_L1_error)
  if (PyObject_SetAttrString(__pyx_m, "__builtins__", __pyx_b) < 0) __PYX_ERR(0, 2, __pyx_L1_error)
  #if CYTHON_REFNANNY
__Pyx_RefNanny = __Pyx_RefNannyImportAPI("refnanny");
if (!__Pyx_RefNanny) {
  PyErr_Clear();
  __Pyx_RefNanny = __Pyx_RefNannyImportAPI("Cython.Runtime.refnanny");
  if (!__Pyx_RefNanny)
      Py_FatalError("failed to import 'refnanny' module");
}
#endif
  __Pyx_RefNannySetupContext("__Pyx_PyMODINIT_FUNC PyInit_obfuscated_braintree_checker(void)", 0);
  if (__Pyx_check_binary_version(__PYX_LIMITED_VERSION_HEX, __Pyx_get_runtime_version(), CYTHON_COMPILING_IN_LIMITED_API) < 0) __PYX_ERR(0, 2, __pyx_L1_error)
  #ifdef __Pxy_PyFrame_Initialize_Offsets
  __Pxy_PyFrame_Initialize_Offsets();
  #endif
  __pyx_empty_tuple = PyTuple_New(0); if (unlikely(!__pyx_empty_tuple)) __PYX_ERR(0, 2, __pyx_L1_error)
  __pyx_empty_bytes = PyBytes_FromStringAndSize("", 0); if (unlikely(!__pyx_empty_bytes)) __PYX_ERR(0, 2, __pyx_L1_error)
  __pyx_empty_unicode = PyUnicode_FromStringAndSize("", 0); if (unlikely(!__pyx_empty_unicode)) __PYX_ERR(0, 2, __pyx_L1_error)
  #ifdef __Pyx_CyFunction_USED
  if (__pyx_CyFunction_init(__pyx_m) < 0) __PYX_ERR(0, 2, __pyx_L1_error)
  #endif
  #ifdef __Pyx_FusedFunction_USED
  if (__pyx_FusedFunction_init(__pyx_m) < 0) __PYX_ERR(0, 2, __pyx_L1_error)
  #endif
  #ifdef __Pyx_Coroutine_USED
  if (__pyx_Coroutine_init(__pyx_m) < 0) __PYX_ERR(0, 2, __pyx_L1_error)
  #endif
  #ifdef __Pyx_Generator_USED
  if (__pyx_Generator_init(__pyx_m) < 0) __PYX_ERR(0, 2, __pyx_L1_error)
  #endif
  #ifdef __Pyx_AsyncGen_USED
  if (__pyx_AsyncGen_init(__pyx_m) < 0) __PYX_ERR(0, 2, __pyx_L1_error)
  #endif
  #ifdef __Pyx_StopAsyncIteration_USED
  if (__pyx_StopAsyncIteration_init(__pyx_m) < 0) __PYX_ERR(0, 2, __pyx_L1_error)
  #endif
  /*--- Library function declarations ---*/
  /*--- Threads initialization code ---*/
  #if defined(WITH_THREAD) && PY_VERSION_HEX < 0x030700F0 && defined(__PYX_FORCE_INIT_THREADS) && __PYX_FORCE_INIT_THREADS
  PyEval_InitThreads();
  #endif
  /*--- Initialize various global constants etc. ---*/
  if (__Pyx_InitConstants() < 0) __PYX_ERR(0, 2, __pyx_L1_error)
  stringtab_initialized = 1;
  if (__Pyx_InitGlobals() < 0) __PYX_ERR(0, 2, __pyx_L1_error)
  #if PY_MAJOR_VERSION < 3 && (__PYX_DEFAULT_STRING_ENCODING_IS_ASCII || __PYX_DEFAULT_STRING_ENCODING_IS_DEFAULT)
  if (__Pyx_init_sys_getdefaultencoding_params() < 0) __PYX_ERR(0, 2, __pyx_L1_error)
  #endif
  if (__pyx_module_is_main_obfuscated_braintree_checker) {
    if (PyObject_SetAttr(__pyx_m, __pyx_n_s_name, __pyx_n_s_main) < 0) __PYX_ERR(0, 2, __pyx_L1_error)
  }
  #if PY_MAJOR_VERSION >= 3
  {
    PyObject *modules = PyImport_GetModuleDict(); if (unlikely(!modules)) __PYX_ERR(0, 2, __pyx_L1_error)
    if (!PyDict_GetItemString(modules, "obfuscated_braintree_checker")) {
      if (unlikely((PyDict_SetItemString(modules, "obfuscated_braintree_checker", __pyx_m) < 0))) __PYX_ERR(0, 2, __pyx_L1_error)
    }
  }
  #endif
  /*--- Builtin init code ---*/
  if (__Pyx_InitCachedBuiltins() < 0) __PYX_ERR(0, 2, __pyx_L1_error)
  /*--- Constants init code ---*/
  if (__Pyx_InitCachedConstants() < 0) __PYX_ERR(0, 2, __pyx_L1_error)
  /*--- Global type/function init code ---*/
  (void)__Pyx_modinit_global_init_code();
  (void)__Pyx_modinit_variable_export_code();
  (void)__Pyx_modinit_function_export_code();
  if (unlikely((__Pyx_modinit_type_init_code() < 0))) __PYX_ERR(0, 2, __pyx_L1_error)
  (void)__Pyx_modinit_type_import_code();
  (void)__Pyx_modinit_variable_import_code();
  (void)__Pyx_modinit_function_import_code();
  /*--- Execution code ---*/
  #if defined(__Pyx_Generator_USED) || defined(__Pyx_Coroutine_USED)
  if (__Pyx_patch_abc() < 0) __PYX_ERR(0, 2, __pyx_L1_error)
  #endif

  /* "obfuscated_braintree_checker.py":2
 * 
 * import base64             # <<<<<<<<<<<<<<
 * import marshal
 * import random
 */
  __pyx_t_2 = __Pyx_ImportDottedModule(__pyx_n_s_base64, NULL); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 2, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_base64, __pyx_t_2) < 0) __PYX_ERR(0, 2, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

  /* "obfuscated_braintree_checker.py":3
 * 
 * import base64
 * import marshal             # <<<<<<<<<<<<<<
 * import random
 * import codecs
 */
  __pyx_t_2 = __Pyx_ImportDottedModule(__pyx_n_s_marshal, NULL); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 3, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_marshal, __pyx_t_2) < 0) __PYX_ERR(0, 3, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

  /* "obfuscated_braintree_checker.py":4
 * import base64
 * import marshal
 * import random             # <<<<<<<<<<<<<<
 * import codecs
 * 
 */
  __pyx_t_2 = __Pyx_ImportDottedModule(__pyx_n_s_random, NULL); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 4, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_random, __pyx_t_2) < 0) __PYX_ERR(0, 4, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

  /* "obfuscated_braintree_checker.py":5
 * import marshal
 * import random
 * import codecs             # <<<<<<<<<<<<<<
 * 
 * # Heavy junk code to confuse
 */
  __pyx_t_2 = __Pyx_ImportDottedModule(__pyx_n_s_codecs, NULL); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 5, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_2);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_codecs, __pyx_t_2) < 0) __PYX_ERR(0, 5, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

  /* "obfuscated_braintree_checker.py":8
 * 
 * # Heavy junk code to confuse
 * for i in range(10000):             # <<<<<<<<<<<<<<
 *     _ = i * random.randint(1, 100)
 * 
 */
  for (__pyx_t_3 = 0; __pyx_t_3 < 0x2710; __pyx_t_3+=1) {
    __pyx_t_2 = __Pyx_PyInt_From_long(__pyx_t_3); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 8, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    if (PyDict_SetItem(__pyx_d, __pyx_n_s_i, __pyx_t_2) < 0) __PYX_ERR(0, 8, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;

    /* "obfuscated_braintree_checker.py":9
 * # Heavy junk code to confuse
 * for i in range(10000):
 *     _ = i * random.randint(1, 100)             # <<<<<<<<<<<<<<
 * 
 * for _ in range(1000):
 */
    __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_i); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 9, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_random); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 9, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_randint); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 9, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = __Pyx_PyObject_Call(__pyx_t_5, __pyx_tuple__2, NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 9, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    __pyx_t_5 = PyNumber_Multiply(__pyx_t_2, __pyx_t_4); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 9, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    if (PyDict_SetItem(__pyx_d, __pyx_n_s__3, __pyx_t_5) < 0) __PYX_ERR(0, 9, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  }

  /* "obfuscated_braintree_checker.py":11
 *     _ = i * random.randint(1, 100)
 * 
 * for _ in range(1000):             # <<<<<<<<<<<<<<
 *     junk_str = ''.join(random.choice('abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ') for _ in range(50))
 *     junk_num = sum([random.randint(1, 1000) for _ in range(100)])
 */
  for (__pyx_t_3 = 0; __pyx_t_3 < 0x3E8; __pyx_t_3+=1) {
    __pyx_t_5 = __Pyx_PyInt_From_long(__pyx_t_3); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 11, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    if (PyDict_SetItem(__pyx_d, __pyx_n_s__3, __pyx_t_5) < 0) __PYX_ERR(0, 11, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;

    /* "obfuscated_braintree_checker.py":12
 * 
 * for _ in range(1000):
 *     junk_str = ''.join(random.choice('abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ') for _ in range(50))             # <<<<<<<<<<<<<<
 *     junk_num = sum([random.randint(1, 1000) for _ in range(100)])
 *     _ = junk_str + str(junk_num)
 */
    __pyx_t_5 = __pyx_pf_28obfuscated_braintree_checker_genexpr(NULL); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 12, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __pyx_t_4 = __Pyx_PyString_Join(__pyx_kp_s__4, __pyx_t_5); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 12, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    if (PyDict_SetItem(__pyx_d, __pyx_n_s_junk_str, __pyx_t_4) < 0) __PYX_ERR(0, 12, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;

    /* "obfuscated_braintree_checker.py":13
 * for _ in range(1000):
 *     junk_str = ''.join(random.choice('abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ') for _ in range(50))
 *     junk_num = sum([random.randint(1, 1000) for _ in range(100)])             # <<<<<<<<<<<<<<
 *     _ = junk_str + str(junk_num)
 * 
 */
    { /* enter inner scope */
      __pyx_t_4 = PyList_New(0); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 13, __pyx_L8_error)
      __Pyx_GOTREF(__pyx_t_4);
      for (__pyx_t_6 = 0; __pyx_t_6 < 0x64; __pyx_t_6+=1) {
        __pyx_t_5 = __Pyx_PyInt_From_long(__pyx_t_6); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 13, __pyx_L8_error)
        __Pyx_GOTREF(__pyx_t_5);
        __Pyx_XGOTREF(__pyx_8genexpr1__pyx_v_28obfuscated_braintree_checker__);
        __Pyx_DECREF_SET(__pyx_8genexpr1__pyx_v_28obfuscated_braintree_checker__, __pyx_t_5);
        __Pyx_GIVEREF(__pyx_t_5);
        __pyx_t_5 = 0;
        __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_random); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 13, __pyx_L8_error)
        __Pyx_GOTREF(__pyx_t_5);
        __pyx_t_2 = __Pyx_PyObject_GetAttrStr(__pyx_t_5, __pyx_n_s_randint); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 13, __pyx_L8_error)
        __Pyx_GOTREF(__pyx_t_2);
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __pyx_t_5 = __Pyx_PyObject_Call(__pyx_t_2, __pyx_tuple__5, NULL); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 13, __pyx_L8_error)
        __Pyx_GOTREF(__pyx_t_5);
        __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
        if (unlikely(__Pyx_ListComp_Append(__pyx_t_4, (PyObject*)__pyx_t_5))) __PYX_ERR(0, 13, __pyx_L8_error)
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
      }
      __Pyx_GOTREF(__pyx_8genexpr1__pyx_v_28obfuscated_braintree_checker__);
      __Pyx_DECREF_SET(__pyx_8genexpr1__pyx_v_28obfuscated_braintree_checker__, Py_None);
      goto __pyx_L11_exit_scope;
      __pyx_L8_error:;
      __Pyx_GOTREF(__pyx_8genexpr1__pyx_v_28obfuscated_braintree_checker__);
      __Pyx_DECREF_SET(__pyx_8genexpr1__pyx_v_28obfuscated_braintree_checker__, Py_None);
      goto __pyx_L1_error;
      __pyx_L11_exit_scope:;
    } /* exit inner scope */
    __pyx_t_5 = __Pyx_PyObject_CallOneArg(__pyx_builtin_sum, __pyx_t_4); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 13, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    if (PyDict_SetItem(__pyx_d, __pyx_n_s_junk_num, __pyx_t_5) < 0) __PYX_ERR(0, 13, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;

    /* "obfuscated_braintree_checker.py":14
 *     junk_str = ''.join(random.choice('abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ') for _ in range(50))
 *     junk_num = sum([random.randint(1, 1000) for _ in range(100)])
 *     _ = junk_str + str(junk_num)             # <<<<<<<<<<<<<<
 * 
 * # Heavily encoded content
 */
    __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_junk_str); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 14, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_junk_num); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 14, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __pyx_t_2 = __Pyx_PyObject_Str(__pyx_t_4); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 14, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = PyNumber_Add(__pyx_t_5, __pyx_t_2); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 14, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    if (PyDict_SetItem(__pyx_d, __pyx_n_s__3, __pyx_t_4) < 0) __PYX_ERR(0, 14, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  }

  /* "obfuscated_braintree_checker.py":17
 * 
 * # Heavily encoded content
 * encoded_content = "NjMwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAxODAwMDAwMDAwMDAwMDAwczMyMDBuMDAwMDk3MDA2NDAwNjQwMTZwMDA1bjAwNjQwMDY0MDE2cDAxNW4wMTY0MDA2NDAyNnAwMjU0MDA2NDAzNW4wMzY0MDM1bjA0NjQwNDVuMDU2NDA1NW4wNjY0MDY1bjA3NjQwNzVuMDg2NDA4NW4wOTAyMDA2NTBuMDIwMDY1MG9uNjAwMDAwMG5vMDAwMDAwMDAwMDAwMDAwMDAwbjYwMTAwMDBubzAxMDAwMDAwMDAwMDAwMDAwMDVuMHAwMjAwNjUwcTY1MDU2NDA5N24wMDAwMDBuNjAxMDAwMG5vMDEwMDAwMDAwMDAwMDAwMDAwNW4wcjAyMDA2NTBxNjUwNjY0MG43bjAwMDAwMG42MDEwMDAwbm8wMTAwMDAwMDAwMDAwMDAwMDA1bjBzMDIwMDY1MDE2bjEwMDAwMDAwMDAwMDAwMDAwMDY0MG9uNjAxMDAwMG5vMDEwMDAwMDAwMDAwMDAwMDAwMDEwMDA5MDA2NDAwNjQwcDZwMTE2cTEyNW4xMjZxMTM1bjEzMDEwMDZyMTcyMzAwMDEwMDAyMDA2NTAxNm4xMDAwMDAwMDAwMDAwMDAwMDA2NDBxbjYwMTAwMDBubzAxMDAwMDAwMDAwMDAwMDAwMDAxMDA1OTAwNnIwMzc4MDM1OTAwNzcwMTAyMDA2NTEyNjQwcjY0MHM2NDEwNjcwMjY0MTFucDEybjYwMzAwMDBubzAzMDAwMDAwMDAwMDAwMDAwMDVuMTQwMjAwNjUxNTY1MTRuNjAxMDAwMG5vMDEwMDAwMDAwMDAwMDAwMDAwMDEwMDAyMDA2NTBxNjUwODY0MTM3bjAwMDAwMG42MDEwMDAwbm8wMTAwMDAwMDAwMDAwMDAwMDA1bjE2MDIwMDY1MTU2NDE0bjYwMTAwMDBubzAxMDAwMDAwMDAwMDAwMDAwMDAxMDAwMjAwNjUxNzY1MTY2NDE1bjYwMjAwMDBubzAyMDAwMDAwMDAwMDAwMDAwMDVuMTg2NDAwNW4xOTY1MThuMDFuMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMG42MDAwMDAwbm8wMDAwMDAwMDAwMDAwMDAwMDA0NDAwOTAwNDVxM281bjFvNjUxOTY0MTY3bjBxMDAwMDVuMTk2NTFvbjAxcDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDA2NDE3bjYwMTAwMDBubzAxMDAwMDAwMDAwMDAwMDAwMDY0MDAxOTAwMDAwMDAwMDAwMDAwMDAwMDVuMXE2NTFxNjQwMTY0MTg4NTAyMTkwMDAwMDAwMDAwMDAwMDAwMDA1bjFyNjUxb24wMXAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwNjQxN242MDEwMDAwbm8wMTAwMDAwMDAwMDAwMDAwMDA2NDE2MTkwMDAwMDAwMDAwMDAwMDAwMDA1bjFzMDIwMDY1MjA2NTFzbjYwMTAwMDBubzAxMDAwMDAwMDAwMDAwMDAwMDY0MTk2bzAyMDAwMDAwMDA3MzFyMDIwMDY1MjA2NTFzbjYwMTAwMDBubzAxMDAwMDAwMDAwMDAwMDAwMDY0MW42bzAyMDAwMDAwMDA3MzBzMDIwMDY1MjA2NTFzbjYwMTAwMDBubzAxMDAwMDAwMDAwMDAwMDAwMDY0MW82bzAyMDAwMDAwMDA3MjAzNjUxczVuMXM2cjBwNjQxcDY1MXM3NjAxNzIwNjY0MXA2NTFzOW8wMDlxMDI1bjFzNnIwMjY1MXM1bjFzNjUxb24wMXAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwNjQxN242MDEwMDAwbm8wMTAwMDAwMDAwMDAwMDAwMDA2NDFxMTkwMDAwMDAwMDAwMDAwMDAwMDA1bjIxNjUxb24wMXAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwNjQxN242MDEwMDAwbm8wMTAwMDAwMDAwMDAwMDAwMDA2NDFyMTkwMDAwMDAwMDAwMDAwMDAwMDBuMDIyMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDY0MTQ2NDFzbjYwMjAwMDBubzAyMDAwMDAwMDAwMDAwMDAwMDVuMjM2NTFvbjAyMjAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDA2NDE0NjQxc242MDIwMDAwbm8wMjAwMDAwMDAwMDAwMDAwMDA1bjFvNjQyMDY1MjE3NjAxNzIwNjY0MjA2NTIxOW8wMDlxMDI1bjIxNnIwMjY1MjE1bjIxNjQyMTY0MjI2NDIzNjQyNDY0MjU2NDI2NjQyNzY0Mjg2NDI5NjQybjY0Mm82NDJwNjQycTY0MnI2NDJzNjQzMDlwMHM1bjI0NjQzMTY0MzI2NDMzNjQzNDlwMDM2NDM1NjQzNjY1MXE2NTFzNjUyMTY1MjM2NDM3NjQzODY5MDE2NDM5OXAwNTY0M242NDNvNjkwMTY0M3A5cDAyNjkwMTY0M3E2NDNyOXAwNDVuMjUwMjAwNjUwMDZuMjYwMDAwMDAwMDAwMDAwMDAwNjQzczY1MjQ2NTI1bnA0MG42MDMwMDAwbm8wMzAwMDAwMDAwMDAwMDAwMDA1bjI3NjUyN24wMjgwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwbjYwMDAwMDBubzAwMDAwMDAwMDAwMDAwMDAwMDY0NDExOTAwMDAwMDAwMDAwMDAwMDAwMDY0NDIxOTAwMDAwMDAwMDAwMDAwMDAwMDY0NDMxOTAwMDAwMDAwMDAwMDAwMDAwMDVuMjk2NDQ0NjQ0NTY0MjM2NDI2NjQ0NjY0NDc2NDI5NjQybjY0Mm82NDJwNjQycTY0NDg2NDJzNjQ0OTlwMHE1bjI0NjUyOTY0NG42NDRvNjQxNjY0M282NDNvNjQ0cDlwMDQ2NzAxNjQ0cTY0NHI2NDM4NjQzbzY0NHM2NDUwOXAwODVuMjUwMjAwNjUwMDZuMjYwMDAwMDAwMDAwMDAwMDAwNjQ1MTY1MjQ2NTI1bnA0MG42MDMwMDAwbm8wMzAwMDAwMDAwMDAwMDAwMDA1bjJuNjUybm4wMjgwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwbjYwMDAwMDBubzAwMDAwMDAwMDAwMDAwMDAwMDY0NTIxOTAwMDAwMDAwMDAwMDAwMDAwMDY0NTM2bzAyMDAwMDAwMDA5MDAxNzI1NzY1Mm5uMDI4MDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMG42MDAwMDAwbm8wMDAwMDAwMDAwMDAwMDAwMDA2NDU0MTkwMDAwMDAwMDAwMDAwMDAwMDA1bjJvNjUybzY0NTU2bzAyMDAwMDAwMDA5MDAxNzIxcTY1MW82NDAxNjQxODg1MDIxOTAwMDAwMDAwMDAwMDAwMDAwMDVuMnA2NDU2NW4ycTY0NTcwMjAwNjUwbjY1MnBuNjAxMDAwMG5vMDEwMDAwMDAwMDAwMDAwMDAwN24wMDAwMDA2NDU4N24wMDAwMDA1bjJyMDIwMDY1MG4wMjAwNjUwb242MDAwMDAwbm8wMDAwMDAwMDAwMDAwMDAwMDBuNjAxMDAwMG5vMDEwMDAwMDAwMDAwMDAwMDAwNjQyOTY0Mm82NDJuNjQ1OTY0NW42NDJyNjQycTY0MnA2NDVvNjQyMzY0NXA5cDBvNW4yNDAyMDA2NTAwNm4yNjAwMDAwMDAwMDAwMDAwMDA2NTJxNjUycjY1MjRucDVxbjYwMzAwMDBubzAzMDAwMDAwMDAwMDAwMDAwMG4wMjgwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwbjYwMDAwMDBubzAwMDAwMDAwMDAwMDAwMDAwMDY0NXIxOTAwMDAwMDAwMDAwMDAwMDAwMDVuMnM2NTJzNjQ1czE5MDAwMDAwMDAwMDAwMDAwMDAwNW4zMDY1MnM2NDYwMTkwMDAwMDAwMDAwMDAwMDAwMDA1bjMxNjUyczY0NjExOTAwMDAwMDAwMDAwMDAwMDAwMDVuMzI2NTJzNjQ2MjE5MDAwMDAwMDAwMDAwMDAwMDAwNW4zMzY1MnM2NDYzMTkwMDAwMDAwMDAwMDAwMDAwMDA1bjM0NjUyczY0NjQxOTAwMDAwMDAwMDAwMDAwMDAwMDVuMzU2NTJzNjQ2NTE5MDAwMDAwMDAwMDAwMDAwMDAwNW4zNjY1MnM2NDY2MTkwMDAwMDAwMDAwMDAwMDAwMDA1bjJxNjUyczY0NjcxOTAwMDAwMDAwMDAwMDAwMDAwMDVuMzc2NDY4NjUybzlvMDA2NDY5NjUxbzlvMDA2NDZuNjUzMDlvMDA2NDZvNjUzMjlvMDA2NDZvNjUzMzlvMDA2NDZvNjUzNDlvMDA2NDZwNjUzMTlvMDA2NDZxNjUycTlvMDA2NDZyNjUzNzlvMDA2NDZzNjUzNTlvMDA2NDcwNjUzNjlvMDA2NDcxOXExNzVuMnMwMjAwNjUxNTY1MDY2NTJzN24wMDAwMDBuNjAxMDAwMG5vMDEwMDAwMDAwMDAwMDAwMDAwMDEwMDAyMDA2NTAwNm4zODAwMDAwMDAwMDAwMDAwMDA2NDcyMDIwMDY1MG42NTBybjYwMTAwMDBubzAxMDAwMDAwMDAwMDAwMDAwMDduMDAwMDAwNjQ3MzduMDAwMDAwMDIwMDY1MG42NTBzbjYwMTAwMDBubzAxMDAwMDAwMDAwMDAwMDAwMDduMDAwMDAwNjQ3NDduMDAwMDAwMDIwMDY1MG42NTJzbjYwMTAwMDBubzAxMDAwMDAwMDAwMDAwMDAwMDduMDAwMDAwbjYwMTAwMDBubzAxMDAwMDAwMDAwMDAwMDAwMDAxMDA5MDAxNnI0MTAyMDA2NTE1NjUwNDlvMDA2NDc1NjUxOTlvMDA2NDc2NjUxbzlvMDA2NDc3NjUybzlvMDA2NDc4OXEwOG42MDEwMDAwbm8wMTAwMDAwMDAwMDAwMDAwMDAwMTAwOTAwMTZyMjg2NTFvNjQwMTY0MTg4NTAyMTkwMDAwMDAwMDAwMDAwMDAwMDA1bjJwNjQ1NjVuMnE2NDU3MDIwMDY1MG42NTJwbjYwMTAwMDBubzAxMDAwMDAwMDAwMDAwMDAwMDduMDAwMDAwNjQ1ODduMDAwMDAwNW4ycjAyMDA2NTBuMDIwMDY1MG9uNjAwMDAwMG5vMDAwMDAwMDAwMDAwMDAwMDAwbjYwMTAwMDBubzAxMDAwMDAwMDAwMDAwMDAwMDY0Mjk2NDJvNjQybjY0NTk2NDVuNjQycjY0MnE2NDJwNjQ1bzY0MjM2NDVwOXAwbzVuMjQwMjAwNjUwMDZuMjYwMDAwMDAwMDAwMDAwMDAwNjUycTY1MnI2NTI0bnA1cW42MDMwMDAwbm8wMzAwMDAwMDAwMDAwMDAwMDBuMDI4MDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMDAwMG42MDAwMDAwbm8wMDAwMDAwMDAwMDAwMDAwMDA2NDVyMTkwMDAwMDAwMDAwMDAwMDAwMDA1bjJzNjUyczY0NXMxOTAwMDAwMDAwMDAwMDAwMDAwMDVuMzA2NTJzNjQ2MDE5MDAwMDAwMDAwMDAwMDAwMDAwNW4zMTY1MnM2NDYxMTkwMDAwMDAwMDAwMDAwMDAwMDA1bjMyNjUyczY0NjIxOTAwMDAwMDAwMDAwMDAwMDAwMDVuMzM2NTJzNjQ2MzE5MDAwMDAwMDAwMDAwMDAwMDAwNW4zNDY1MnM2NDY0MTkwMDAwMDAwMDAwMDAwMDAwMDA1bjM1NjUyczY0NjUxOTAwMDAwMDAwMDAwMDAwMDAwMDVuMzY2NTJzNjQ2NjE5MDAwMDAwMDAwMDAwMDAwMDAwNW4ycTY1MnM2NDY3MTkwMDAwMDAwMDAwMDAwMDAwMDA1bjM3NjQ3OTY1MW85bzAwNjQ2bjY1MzA5bzAwNjQ2bzY1MzI5bzAwNjQ2bzY1MzM5bzAwNjQ2bzY1MzQ5bzAwNjQ2cDY1MzE5bzAwNjQ2cTY1MnE5bzAwNjQ2cjY1Mzc5bzAwNjQ2czY1MzU5bzAwNjQ3MDY1MzY5bzAwNjQ3MTlxMTU1bjJzMDIwMDY1MTU2NTA2NjUyczduMDAwMDAwbjYwMTAwMDBubzAxMDAwMDAwMDAwMDAwMDAwMDAxMDAwMjAwNjUwMDZuMzgwMDAwMDAwMDAwMDAwMDAwNjQ3MjAyMDA2NTBuNjUwcm42MDEwMDAwbm8wMTAwMDAwMDAwMDAwMDAwMDA3bjAwMDAwMDY0NzM3bjAwMDAwMDAyMDA2NTBuNjUwc242MDEwMDAwbm8wMTAwMDAwMDAwMDAwMDAwMDA3bjAwMDAwMDY0NzQ3bjAwMDAwMDAyMDA2NTBuNjUyc242MDEwMDAwbm8wMTAwMDAwMDAwMDAwMDAwMDA3bjAwMDAwMG42MDEwMDAwbm8wMTAwMDAwMDAwMDAwMDAwMDAwMTAwMDIwMDY1MTU2NTJuNm4zOTAwMDAwMDAwMDAwMDAwMDBuNjAxMDAwMG5vMDEwMDAwMDAwMDAwMDAwMDAwMDEwMDY0MDA2NDAxNnAzbjVuM24wMjAwNjUzbjZuM28wMDAwMDAwMDAwMDAwMDAwNjQ3bm42MDEwMDAwbm8wMTAwMDAwMDAwMDAwMDAwMDAwMTAwOTAwNDhwM3E2NDAxNTMwMDI5N29yOTAwMDAwMDAwNHIyOTAxcW4wMTJuN24wNzFvNW8zMTNvMzMzMTZxN24wNzFvNW8zMTNvMzMzMzZxN24wNzFvNW8zMjNvMzMzMjZxN24wNzFvNW8zMTNvMzkzNzZxN24wNzFvNW8zMjNvMzMzNjZxN24wNzFvNW8zMTNvMzMzNDZxNzUxbzAwMDAwMDBuMjBzMDlxOTduN3MwOXE5N24yczA5cTk3OXJzMDlxOTc5OHMwOXE5N24xMjByMjlybjkyMDc1MHMwMDAwMDAwbjIwczA5cTk3OXBzMDlxOTc5NzIwcjI5cm45MjBxbjA1NjM2cDY1NjE3MjI5MDJxbjA2NzI2NTZyNjQ2NTcycW4wMzczNjE3OTduMTk3MDY5NzAyMDY5NnI3Mzc0NjE2cDZwMjA3MDc5NzQ2ODZzNnIycTYzNjY2czZyNzQ3M3FuMDY0MzQ4NDE1MjQ3NDVxbjA0NjI2cDc1NjVxbjAzNzI2NTY0cW4wNjYzNjU2cjc0NjU3MjI5MDJxbjA2NjM2czZwNnM3MjczcW4wNTYxNnA2OTY3NnI3NTFvMDAwMDAwMjBzMDlxOTdvMHMwOXE5N29wczA5cTk3b25zMDlxOTduc3MwOXE5N29wMjAyMHIyOXJuOTIwc24wMTBucW4wMTcycjkwMTAwMDAwMHNuMDE3cHI5MDYwMDAwMDByOTBwMDAwMDAwcjkwbzAwMDAwMHI5MG4wMDAwMDBxbjAxMzByOTAyMDAwMDAwcjkwMzAwMDAwMHFuMDBxbjAyMzIzMDduMW43MDYxNzk2cTY1NnI3NDczMnI2MjcyNjE2OTZyNzQ3MjY1NjUycTYxNzA2OTJyNjM2czZxN24wMzJuMnMybjduMzg2MTcyMnE0cTQxMnA2MTcyM283MTNxMzAycjM5MnA2NTZyMnE1NTUzM283MTNxMzAycjM4MnA2NTZyM283MTNxMzAycjM3MnA2NjcyMnE0NjUyM283MTNxMzAycjM2MnA2NjcyM283MTNxMzAycjM1NjE0cDAyMDAwMDQyNjU2MTcyNjU3MjIwNjU3OTRuMzA2NTU4NDE2OTRzNjk0bjRvNTYzMTUxNjk0cDQzNG42ODYyNDc2MzY5NHM2OTRuNDY1NTduNDkzMTRyNjk0OTczNDk2cTc0NzA1bjQzNDkzNjQ5Nm40OTc3NHE1NDY3Nzc0cjQ0NDkzMjRxNTQ1OTc0NjM0ODRuNzY1bjQ4NTY2bjY0NDc2cDc2NjI2OTQ5NzM0OTZxNnA3bjYzNzk0OTM2NDk2cTY4MzA2NDQ4NDI3bjRzNjkzODc2NTk1ODQyNzA0cDZxNG43OTU5NTc2cDc1NjQ0ODRuNnA1bjU3NjQ2ODY0NDc1NjMzNTk1ODZvNzU1OTMyMzk3NDQ5NnIzMDJyNjU3OTRuNnA2NTQ4NDE2OTRzNm40NTMzNHE2bjU1Nzk0czU0NDkzMzRxNDQ1OTczNDk2cTcwMzA2MTUzNDkzNjQ5NnE0NTc5NHE1NzU2Nm41OTduNTE3bjRwNTc1MTMxNW41NDY3NzQ0cjQ3NDUzMjRxNjkzMDM1NHE3bjU1MzQ0cDU3NTU3OTRzNDQ1MTMxNW40NzUxMzM1OTduNDkzMzVuNTM0OTczNDk2cjRyMzE1OTY5NDkzNjQ5NnE2MzMzNTkzMjRuNm42NDQ4NnA3NTYzMzI2MzMwNW42cTRuNzE1OTMzNjc2OTRwNDM0bjcwNjMzMzRxNjk0czY5NG42czY0NDg1Mjc3NjM3bjZzNzY0cDMyNDY3NzYxNTMzNTY5NjM2cTQ2NzA2MjZyNTI3OTVuNTc1NjZyNTk1ODUyNnA2NDMyNDYzNTRwNnE0cjc2NjI1MzQ5NzM0OTZxMzE2cDYzNnE0cjZzNTk1NzM1MzA0OTZuNzAzNzQ5NnI0MjMxNTk2cTc4NzA1OTMxMzk3MDVuNDM0OTM2NDk2cTYzMzM1OTMyNG42bjY0NDg2cDc1NjMzMjYzMzA1bjZxNG43MTU5MzM2NzY5NHA0MzRuMzI1bjU4NG43MDVuNnI2cDY2NTkzMjQ2Nzk1bjQ2Mzk2OTY1NTYzOTZvNW41NzVuNjg2NDU3NzgzMDQ5Nm43MDZxNTk1Nzc4N241bjU4MzA3MzQ5NnI0bjcwNW4zMjY4MzA2Mzc5NDkzNjU3Nzk0bjc0NTk1NzM1Njg1bjMyNTY2NjY0NnE0NjMxNjI0ODUxNjk1ODUzNzc2OTYzMzI0cjc2NjM0NzU1Njk0czZwNzM2OTUxNnI0bjY4NjE1NzM1MzA2MzZxNTY2cDRzNnA1bjY4NjQ1Nzc4MzA0OTZwMzA3MzQ5NnEzOTc3NjQ0NzZwNzY2MjZyNHE2OTRzNnI3NDM5NjY1MTJyMzc2bzMyNTIzODcxNzYzOTYzNjU2bjZvNDUzMTc4Nm81NjU3NjI0MTUwMzA2NTQzNzE2cjM1MzY1czM1NG41MzY5Nm40bjc0Njg2bjM3NnI1MTVzNDM2MzQ4NnI3NjM2NDg3OTMzMzM0NzZyMzI2ODY4MzM0NDM1MzkzNDc2NDU1ODQ4MzQ3NDU0MzA2OTZvNnE3NDc0NzA2NTY1Nm83bjduNDM1MTZzNDQ3NzduMG4zMjMwMzEzODJxMzAzNTJxMzEzMDduMTA2MTcwNzA2cDY5NjM2MTc0Njk2czZyMnM2bjczNnM2cjduMjM2ODc0NzQ3MDczM24yczJzNjE3MzczNjU3NDczMnI2MjcyNjE2OTZyNzQ3MjY1NjU2NzYxNzQ2NTc3NjE3OTJyNjM2czZxN24yNDY4NzQ3NDcwNzMzbjJzMnM2MTczNzM2NTc0NzMycjYyNzI2MTY5NnI3NDcyNjU2NTY3NjE3NDY1Nzc2MTc5MnI2MzZzNnEyczduMjgyMjRyNnM3NDJxNDEycjQyNzI2MTZyNjQyMjNvNzYzcTIyMzkzOTIyMnAyMDIyNDM2ODcyNnM2cTY5NzU2cTIyM283NjNxMjIzMTMyMzQyMjduMDIzczMxN24wOTIyNDE2cjY0NzI2czY5NjQyMnFuMDU2NTZxNzA3NDc5cW4wNDYzNnM3MjczN24wbjYzNzI2czczNzMycTczNjk3NDY1N242czRxNnM3bjY5NnA2cDYxMnMzNTJyMzAyMDI4NHA2OTZyNzU3ODNvMjA0MTZyNjQ3MjZzNjk2NDIwMzEzMDNvMjA0bzI5MjA0MTcwNzA2cDY1NTc2NTYyNG82OTc0MnMzNTMzMzcycjMzMzYyMDI4NG80ODU0NHE0cDJwMjA2cDY5Nm82NTIwNDc2NTYzNm82czI5MjA0MzY4NzI2czZxNjUyczMxMzIzNDJyMzAycjMwMnIzMDIwNHE2czYyNjk2cDY1MjA1MzYxNjY2MTcyNjkyczM1MzMzNzJyMzMzNjI5MHNxbjA5NjE3NTc0Njg2czcyNjk3NDc5cW4wNjYxNjM2MzY1NzA3NHNuMHM2MTYzNjM2NTcwNzQycTZwNjE2cjY3NzU2MTY3NjVxbjBxNjE3NTc0Njg2czcyNjk3bjYxNzQ2OTZzNnI3bjExNjI3MjYxNjk2cjc0NzI2NTY1MnE3NjY1NzI3MzY5NnM2cnNuMHA2MzZzNnI3NDY1NnI3NDJxNzQ3OTcwNjVxbjA2NnM3MjY5Njc2OTZycW4wNzcyNjU2NjY1NzI2NTcyc24wOTczNjU2MzJxNjM2ODJxNzU2MXNuMTA3MzY1NjMycTYzNjgycTc1NjEycTZxNnM2MjY5NnA2NXNuMTI3MzY1NjMycTYzNjgycTc1NjEycTcwNnA2MTc0NjY2czcyNnFzbjByNzM2NTYzMnE2NjY1NzQ2MzY4MnE2NDY1NzM3NHNuMHI3MzY1NjMycTY2NjU3NDYzNjgycTZxNnM2NDY1c24wcjczNjU2MzJxNjY2NTc0NjM2ODJxNzM2OTc0NjVzbjBuNzU3MzY1NzIycTYxNjc2NTZyNzRxbjA2NjM2cDY5NjU2cjc0cW4wNjYzNzU3Mzc0NnM2cTduMjQ2NTYzMzIzNTYzNjM2NDM3MnEzMjMyMzIzNTJxMzQzOTMwMzkycTYxMzMzNTY2MnEzMzMxMzg2NDYxMzU2NjYxMzY2MzMwMzAyOTAzcW4wNjczNnM3NTcyNjM2NXFuMG82OTZyNzQ2NTY3NzI2MTc0Njk2czZycW4wOTczNjU3MzczNjk2czZyNDk2NDYxbzQwMTAwMDA2cTc1NzQ2MTc0Njk2czZyMjA1NDZzNm82NTZyNjk3bjY1NDM3MjY1NjQ2OTc0NDM2MTcyNjQyODI0Njk2cjcwNzU3NDNuMjA1NDZzNm82NTZyNjk3bjY1NDM3MjY1NjQ2OTc0NDM2MTcyNjQ0OTZyNzA3NTc0MjEyOTIwN28yMDIwMjA3NDZzNm82NTZyNjk3bjY1NDM3MjY1NjQ2OTc0NDM2MTcyNjQyODY5NnI3MDc1NzQzbjIwMjQ2OTZyNzA3NTc0MjkyMDdvMjAyMDIwMjAyMDc0NnM2bzY1NnIyMDIwMjAyMDIwNjM3MjY1NjQ2OTc0NDM2MTcyNjQyMDdvMjAyMDIwMjAyMDIwMjA2MjY5NnIyMDIwMjAyMDIwMjAyMDYyNzI2MTZyNjQ0MzZzNjQ2NTIwMjAyMDIwMjAyMDIwNnA2MTczNzQzNDIwMjAyMDIwMjAyMDIwNjM2MTcyNjQ2ODZzNnA2NDY1NzI0cjYxNnE2NTIwMjAyMDIwMjAyMDIwNjU3ODcwNjk3MjYxNzQ2OTZzNnI0cTZzNnI3NDY4MjAyMDIwMjAyMDIwNjU3ODcwNjk3MjYxNzQ2OTZzNnI1OTY1NjE3MjIwMjAyMDIwMjAyMDYyNjk2cjQ0NjE3NDYxMjA3bzIwMjAyMDIwMjAyMDIwMjAyMDcwNzI2NTcwNjE2OTY0MjAyMDIwMjAyMDIwMjAyMDIwNjg2NTYxNnA3NDY4NjM2MTcyNjUyMDIwMjAyMDIwMjAyMDIwMjA2NDY1NjI2OTc0MjAyMDIwMjAyMDIwMjAyMDIwNjQ3NTcyNjI2OTZyNTI2NTY3NzU2cDYxNzQ2NTY0MjAyMDIwMjAyMDIwMjAyMDIwNjM2czZxNnE2NTcyNjM2OTYxNnAyMDIwMjAyMDIwMjAyMDIwMjA3MDYxNzk3MjZzNnA2cDIwMjAyMDIwMjAyMDIwMjAyMDY5NzM3Mzc1Njk2cjY3NDI2MTZyNm8yMDIwMjAyMDIwMjAyMDIwMjA2MzZzNzU2cjc0NzI3OTRzNjY0OTczNzM3NTYxNnI2MzY1MjAyMDIwMjAyMDIwMjAyMDIwNzA3MjZzNjQ3NTYzNzQ0OTY0MjAyMDIwMjAyMDIwMjA3cTIwMjAyMDIwMjA3cTIwMjAyMDdxMjA3cXFuMDU2OTZyNzA3NTc0cW4wbjcwNnM3Mzc0NjE2cDQzNnM2NDY1cW4wNTM5MzAzMDMwMzEyOTA1cW4wNjZyNzU2cTYyNjU3MnFuMHM2NTc4NzA2OTcyNjE3NDY5NnM2cjRxNnM2cjc0NjhxbjByNjU3ODcwNjk3MjYxNzQ2OTZzNnI1OTY1NjE3MnFuMDM2Mzc2NzZxbjByNjI2OTZwNnA2OTZyNjc0MTY0NjQ3MjY1NzM3M3FuMDg3NjYxNnA2OTY0NjE3NDY1NDYyOTAycW4wbjYzNzI2NTY0Njk3NDQzNjE3MjY0cW4wNzZzNzA3NDY5NnM2cjczcW4xMjU0NnM2bzY1NnI2OTduNjU0MzcyNjU2NDY5NzQ0MzYxNzI2NDI5MDRxbjExNjM2cDY5NjU2cjc0NTM2NDZvNHE2NTc0NjE2NDYxNzQ2MXFuMDU3MTc1NjU3Mjc5cW4wOTc2NjE3MjY5NjE2MjZwNjU3M3FuMHE2czcwNjU3MjYxNzQ2OTZzNnI0cjYxNnE2NTduMm42ODc0NzQ3MDczM24yczJzNzA2MTc5NnE2NTZyNzQ3MzJyNjI3MjYxNjk2cjc0NzI2NTY1MnE2MTcwNjkycjYzNnM2cTJzNjc3MjYxNzA2ODcxNnAyOTAycW4wNzY4NjU2MTY0NjU3MjczcW4wNDZuNzM2czZycW4wNDY0NjE3NDYxcW4xMjc0NnM2bzY1NnI2OTduNjU0MzcyNjU2NDY5NzQ0MzYxNzI2NHFuMDU3NDZzNm82NTZyN24xMjYxNzA2OTJyN242NTcwNjg3OTcyMnE3MzY5NnEycjYzNnM2cTduMjE2MTcwNzA2cDY5NjM2MTc0Njk2czZyMnM2bjczNnM2cjJwMjA3NDY1Nzg3NDJzNzA2cDYxNjk2cjJwMjAybjJzMm43bjE2Njg3NDc0NzA3MzNuMnMyczduNjU3MDY4Nzk3MjJxNzM2OTZxMnI2MzZzNnE3bjE3Njg3NDc0NzA3MzNuMnMyczduNjU3MDY4Nzk3MjJxNzM2OTZxMnI2MzZzNnEyczduMDk3MzYxNnE2NTJxNzM2OTc0NjUyOTBxNzIxbzAwMDAwMDcyMXAwMDAwMDA3MjFxMDAwMDAwNzIxczAwMDAwMDcyMjAwMDAwMDA3MjIxMDAwMDAwNzIyMjAwMDAwMDcyMjMwMDAwMDA3MjI0MDAwMDAwNzIyNTAwMDAwMDcyMjYwMDAwMDA3MjI3MDAwMDAwNzIyODAwMDAwMDduMTg3OTYxNzM3MzY5NnIzMTM5MzkzOTczNzM3OTc5NDA2NzZxNjE2OTZwMnI2MzZzNnE3bjBxNDg0czQyNDI1OTQ5NTM1NDJxNTA0MTQzNG8yOTA0cW4wOTcwNzI2czY0NzU2Mzc0NDk2NHFuMDg3MTc1NjE2cjc0Njk3NDc5cW4wODY5NzM1NTcwNzM2NTZwNnBxbjBuNjk3MzQ0NnM3NzZyNzM2NTZwNnBxbjAyNTU1M3FuMDI0MzQxNjc3bzE0bnI0N3Ixc24yMzQwMjkwOHFuMTI3MDYxNzk2cTY1NnI3NDRxNjU3NDY4NnM2NDRyNnM2cjYzNjVxbjA1NjU2cTYxNjk2cHFuMDQ2MzYxNzI3NHFuMHI2MjY5NnA2cDY5NnI2NzQzNnM3NTZyNzQ3Mjc5cW4xNDYyNjk2cDZwNjk2cjY3NTM3NDYxNzQ2NTUwNzI2czc2Njk2cjYzNjVxbjExNjI2OTZwNnA2OTZyNjc1MDZzNzM3NDYxNnA0MzZzNjQ2NXFuMDk2NTc4NzA2NTY0Njk3NDY1NjRxbjA1NzQ2czc0NjE2cDduMnI2ODc0NzQ3MDczM24yczJzNjE3MDY5MnI3bjY1NzA2ODc5NzIycTczNjk2cTJyNjM2czZxMnM3NjMyMnM2czcyNjQ2NTcyNzMyczYyNzI2MTY5NnI3NDcyNjU2NXFuMG43Mzc0NjE3NDc1NzM0MzZzNjQ2NTY5OTAwMTAwMDBxbjA3NnE2NTczNzM2MTY3NjU3bjEyNDk2cjczNzU2NjY2Njk2MzY5NjU2cjc0MjA0Njc1NnI2NDczN24zODY4NzQ3NDcwNzMzbjJzMnM3NDcyNjE2cjczNjY3NTZyNnI2NTZwMnI2OTZzMnM3MDcyNnM2bjY1NjM3NDczMnM2MzY4NjE3MjY3NjU2MjYxNjM2bzJzNjI2OTZyNXM2MzY4NjU2MzZvMnI3MDY4NzA3bjBzN28yMjYyNjk2cjVzNnI3NTZxNjI2NTcyMjIzbjIyN24wMjIyN3E3bjE4NzQ2NTc4NzQyczcwNnA2MTY5NnIzbzYzNjg2MTcyNzM2NTc0M3E1NTU0NDYycTM4N24xczY4NzQ3NDcwNzMzbjJzMnM3Nzc3NzcycjYzNjg2MTcyNjc2NTYyNjE2MzZvNjc3NTcyNzU3MzJyNjM2czZxN24ybzY4NzQ3NDcwNzMzbjJzMnM3Nzc3NzcycjYzNjg2MTcyNjc2NTYyNjE2MzZvNjc3NTcyNzU3MzJyNjM2czZxMnM2MjY5NnIycTZwNnM2czZvMnE3NTcwMjkwbzduMG41NTczNjU3MjJxNDE2NzY1NnI3NDcyMjIwMDAwMDA3MjI0MDAwMDAwNzIyMzAwMDAwMDcyMXMwMDAwMDA3MjIwMDAwMDAwNzIyNzAwMDAwMDcyMjYwMDAwMDA3MjI1MDAwMDAwNzIyMTAwMDAwMDcyMXEwMDAwMDAyOTAyNzI0MDAwMDAwMDcyM3IwMDAwMDBxbjA3NzI2NTczNzU2cDc0NzNxbjA5NjI2OTZyNHI3NTZxNjI2NTcycW4wbzY5NzM3Mzc1Njk2cjY3NDI2MTZyNm9xbjA5NjM2MTcyNjQ0MjcyNjE2cjY0cW4wODYzNjE3MjY0NTQ3OTcwNjVxbjA3NjM2MTcyNjQ0MzYxNzRxbjBvNjM2czc1NnI3NDcyNzk0cjYxNnE2NXFuMDk2MzZzNzU2cjc0NzI3OTQxMzJxbjBxNjk3MzczNzU2NTcyNTc2NTYyNzM2OTc0NjVxbjBxNjk3MzczNzU2NTcyNDM2czZyNzQ2MTYzNzQ3NXJvMDAwMDAwMG5zMDlxOTc5NHMwOXE5N29xczA5cTk3b3FzMDlxOTdvc3MwOXE5N29wczA5cTk4ODNzMDlxOTdvMnMwOXE5N28xMjByMjlwODUyMDBuMnEyMDJxMjAycTIwMnEyMDJxMjAycTIwMnEyMDJxMjAycTIwMnEyMDJxMjAycTIwMnEyMDJxMjAycTIwMnEyMDJxMjAycTIwMnEyMDJxMjAycTIwMnEyMDJxMG5yMjlybm8yMHMwOXE5NzluczA5cTk3OTRzMDlxOTduN3MwOXE5Nzk4czA5cTk3bm5zMDlxOTc5NHMwOXE5N25wMjAycTNyMjBzMDlxOTc5NXMwOXE5N241czA5cTk3OTRzMDlxOTc5cHMwOXE5N24xczA5cTk3bjdzMDlxOTduNXMwOXE5Nzk4czA5cTk3OTgyMHMwOXE5Nzk2czA5cTk3OW9zMDlxOTc5NHMwOXE5N241czA5cTk3OW5zMDlxOTc5ODIwczA5cTlzbzUyNDIwczA5czk0bjVyMjlwODUwbnIyOXJubzIwMjBzMDlxOTduMHMwOXE5N28yczA5cTk4ODBzMDlxOTg4MHMwOXE5N25yczA5cTk3bzRzMDlxOTdvMjIwMjAycTNyMjA3NTRvMDAwMDAwMjByMjlwODUwbjJxMjAycTIwMnEyMDJxMjAycTIwMnEyMDJxMjAycTIwMnEyMDJxMjAycTIwMnEyMDJxMjAycTIwMnEyMDJxMjAycTIwMnEyMDJxMjAycTIwMnEyMDJxMjAycTBucjI5cm5vMjBzMDlxOTc5NnMwOXE5Nzk0czA5cTk3bjVzMDlxOTc5NzIwMnEzcjIwNzUxNTAwMDAwMDBucjI5cm5vMjBzMDlxOTc5NXMwOXE5NzlwczA5cTk3bjEyMDJxM3IyMDduMDMyMDJxMjA3NTFuMDAwMDAwMjAwbnIyOXJubzIwczA5cTk3OTVzMDlxOTc5NHMwOXE5N24xczA5cTk3OXIyMDJxM3IyMDc1MTUwMDAwMDAwbnIyOXJubzIwczA5cTk3bjhzMDlxOTduNXMwOXE5NzlzMjAycTNyMjA3NTFxMDAwMDAwMG5yMjlybm8yMHMwOXE5N24zczA5cTk3OW9zMDlxOTduMnMwOXE5N24xczA5cTk3OTgyMDJxM3IyMDc1MjUwMDAwMDAwbnIyOXJubzIwczA5cTk3OTZzMDlxOTduMnMwOXE5N244czA5cTk3bjFzMDlxOTduNXMwOXE5N243czA5cTk3bnAyMDJxM3IyMDduMDIyMDI4NzU0cjAwMDAwMDI5MjAyMDBuMnEyMDJxMjAycTIwMnEyMDJxMjAycTIwMnEyMDJxMjAycTIwMnEyMDJxMjAycTIwMnEyMDJxMjAycTIwMnEyMDJxMjAycTIwMnEyMDJxMjAycTIwMnEyMDJxMG5yMjlybm8yMHMwOXE5Nzk1czA5cTk3bnAyMHIyODc4OTIwNDA0NTc0Njg2OTYzNjE2cDQ3NnM2NDduMXA2ODc0NzQ3MDczM24yczJzNjE3MDY5MnI3NDY1NnA2NTY3NzI2MTZxMnI2czcyNjcyczYyNnM3NDduMTUyczczNjU2cjY0NHE2NTczNzM2MTY3NjUzczYzNjg2MTc0NXM2OTY0M3E3bjA2MjY3NDY1Nzg3NDNxcW4wMTVvN24wMjVxMjA3bjAzMjA3cDIwc24wMTIwNzU4bzAxMDAwMDBuczA5cTk3OTZzMDlxOTc5b3MwOXE5Nzk0czA5cTk3bjVzMDlxOTc5bnMwOXE5Nzk4czA5cTk3OTcyMHMwOXM5NG41MG4ycTIwMnEyMDJxMjAycTIwMnEyMDJxMjAycTIwMnEyMDJxMjAycTIwMnEyMDJxMjAycTIwMnEyMDJxMjAycTIwMnEyMDJxMjAycTIwMnEyMDJxMjAycTIwMnEwbnIyOXJubzIwczA5cTk3OW5zMDlxOTc5NHMwOXE5N243czA5cTk3OThzMDlxOTdubnMwOXE5Nzk0czA5cTk3bnAyMDJxM3IyMHMwOXE5Nzk1czA5cTk3bjVzMDlxOTc5NHMwOXE5NzlwczA5cTk3bjFzMDlxOTduN3MwOXE5N241czA5cTk3OThzMDlxOTc5ODIwczA5cTk3OTZzMDlxOTc5b3MwOXE5Nzk0czA5cTk3bjVzMDlxOTc5bnMwOXE5Nzk4MjBzMDlxOXNucXMwOXE5c28zMjQyMHMwOXM5NG41cjI5cDg1MG5yMjlybm8yMDIwczA5cTk3bjBzMDlxOTdvMnMwOXE5ODgwczA5cTk4ODBzMDlxOTducnMwOXE5N280czA5cTk3bzIyMDIwMnEzcjIwczA5cTk4ODFzMDlxOTdvNXMwOXE5N25yczA5cTk3b29zMDlxOTdvODIwczA5cTk4ODZzMDlxOTdvcHMwOXE5ODgyMjBzMDlxOTdvM3MwOXE5N29wczA5cTk3b3MyMHMwOXE5ODg2czA5cTk3b3BzMDlxOTg4MnMwOXE5N29zMjBzMDlxOTdvcHMwOXE5N29zczA5cTk3bzFzMDlxOTdvMnMwOXE5N29zMjEyMHIyOXA4NTBuMnEyMDJxMjAycTIwMnEyMDJxMjAycTIwMnEyMDJxMjAycTIwMnEyMDJxMjAycTIwMnEyMDJxMjAycTIwMnEyMDJxMjAycTIwMnEyMDJxMjAycTIwMnEyMDJxMG5yMjlybm8yMHMwOXE5Nzk2czA5cTk3OTRzMDlxOTduNXMwOXE5Nzk3MjAycTNyMjByOTA0MDAwMDAwMjkzcHFuMDg3MjY1NzE3NTY1NzM3NDczcW4wMjZzNzNxbjBuNzU3MzY1NzI1czYxNjc2NTZyNzRxbjAxNW5xbjAxNTJxbjAxNThxbjAxNDZxbjAxNDNxbjAxNDJxbjAxNTlxbjAzNzM3NDcycW4xMzY3NjU2cjY1NzI2MTc0NjU1czc1NzM2NTcyNXM2MTY3NjU2cjc0cW4wMjY3Njc3MjJyMDAwMDAwcW4wNDc0NnM2czZvcW4wMzQ5NDk0NHFuMDY3Mzc5NzM3NDY1NnFxbjA2NjM2NjZzNnI3NDczNzIwNDAwMDAwMDcyMDUwMDAwMDBxbjA2NnM3NTc0NzA3NTc0cW4wNTcwNzI2OTZyNzRxbjAyNjY2OXFuMDQ2czcwNjU2cnFuMDQ2NjY5NnA2NXFuMDk3Mzc0NjE3Mjc0NXM2cjc1NnFxbjA5NzI2NTYxNjQ2cDY5NnI2NTczcW4wMTUwcW4wNTczNzA2cDY5NzRxbjAxNnJxbjA0NjI2OTZyMzNxbjAyNnE2cXFuMDM2OTZyNzRxbjAyNzk3OXFuMDc3MjY1NzA2cDYxNjM2NXFuMDM2Mzc2NjM3MjNyMDAwMDAwcW4wOTZuNzM2czZyNXM2NDYxNzQ2MXFuMDQ3MDZzNzM3NHFuMDg3MjY1NzM3MDZzNnI3MzY1NzIzczAwMDAwMHFuMDI2OTY0cW4wMzcyNjU3M3FuMDM2cTYxNjdxbjAzNjI2OTZycW4wMzc1NzI2cHFuMDc3MDYxNzk2cDZzNjE2NHFuMDQ2OTZyNjY2c3FuMDI2MjY5cW4wNDYyNjE2cjZvcW4wNTYyNzI2MTZyNjRxbjA0NzQ3OTcwNjVxbjA0NjM2MTcyNjRxbjA2NjM2MTZyNzQ3Mjc5cW4wNzYzNjE2cjc0NzI3OTMxcW4wNTcwNjg2czZyNjVxbjAzNjc2NTc0cW4wNDc0NjU3ODc0cW4wNDc0Njk2cTY1cW4wNTczNnA2NTY1NzBuOTAwczMwMDAwMDAwMHNuMDgzcDczNzQ3MjY5NnI2NzNyc24wODNwNnE2czY0NzU2cDY1M3I3MjluMDAwMDAwMDEwMDAwMDA3MzZuMDgwMDAwczAwMzAxMDEwMXE4MDAxMnEwMDAxMnEwMDAxMnEwMDAxMnEwMDAxMnEwMDAxMnEwMDAxMnEwMDAxMnE4MDAxOHEwMDAxOHEwMDAxOHEwMDAxOHE4MDQxMDgwMDFxODA0MTA4MDAxcTgwNDEwODAwMXE4MDQxMDgwMDFxODA0MTA4MDAxcTgwNDEwODAwMXE4MDQxMDgwMDFxODA1MDg4MDUzcTAwOTFwcTAwOTFwcTEwOTFycTQwOTFycTEwNTFzcTQwNTFzODAwMnE4MDcwcDgwNzU4ODUxcTAwczJxcTEwcTJxcTEwNzJycTQwNzJyODAwNHE4MDYwbzgwNjU4ODQxcTAwcjIwcTEwcDIwcTEwNjIxcTQwNjIxODAwM3E4MDAwOTgwMDI4NDA5ODgyN3ExMDAxMnE0MDAxMnEwMDAxMnMwMDIwMzAxMjhxODAxMXNxMDAxMXNxMDAxMXNxMDAxMXNxMDAxMXNxMDAxMXNxMDAxMXNxMDAxMXNxMDAxMXNzOHMwMDIwMTAxMjhxODAxMG44MDEyODQxOXEwMG8yNnExMDEyN3E0MDEyN3EwMDEyN3EwMDEyN3EwMDEyN3M4czhzOHE4MDkwczg4MTY5MDA4bjAyNm44MjVuMDFzbzgwOHEwMDk0MXExMDk0MXE0MDk0MTgwMDZxODAwMDU4MDA1ODA2NjgxMHE4NDBxODAwcXE4MDUwbjgwNTU4ODMxcTAwcTJucTEwbzJucTEwNTJvcTQwNTJvODAwMnE4MDAwNTgwMDU4MDY0ODEwbzg0MG84MDBvcTgwNzBvODA3NDg4NDI4ODczODE3cDg0N3A4MDA0cTgwcDBxODAwOXE4MDkwcThzMXI4bjFycTEwOTE5cTQwOTE5czAwMDdzMDIwMTEyczEwMDdzMDIwMTEyODA0MXE4MDQwcTkwMTE4MTRyODA0OXE4MDgwOThzMDc4bjA3OTAwMzg5MHA4cDBwOTA1MThwMHM4MDQxcTgwOTBuODgzMjg4NDE4ODMyOHAxNTgwNDRxODA3MDg4Nzc3ODI3Nzg4NzM4MTdwODQ3cDkwNDE4NDdzODA0MnE4MDcwbjgwNzM4ODMyODE3Nzg0Nzc5MDIyODI3cTgwN3E5ODAzOTgwMzk4NDI5OTA3OXAwN24wMzI5bjBxOTgwcW44MTNuODEzbjg1Mm45MTducDE3bzA0Mm5uMXFuODFxcTgwbjBwODA1MjgwNTJxODA5MHA5MDQyODgxcTg4MXFxODBuMTI4ODYyODgyODg4Mjg4MDUyODA1MnIwMG4wcDgwNTJxODA3MDg4Nzc3ODI3Nzg4NzM4MTdwODQ3cDkwNDE4NDdzODA0MnE4MDgwOThzMDc4bjA3OTAwMzg5MHA4cDBwOTA1MThwMHNxNzA4MXNxMjA4MXNuMDA0bjA2MnExMDgyOXE0MDgyOTgwNDNxODA2MDc4NzY5ODI2OTkwMDQ5MDYycTEwNjE5cTQwNjE5ODA0MXE4MDcwbzkwMzI4MDdyODA3cnE4MHExNjkwMjI4ODU5ODg1OTg4MDI4ODAycjAwbjBwODA1MnIwMTUzMXE4MTIxN3E4MW81NXMwMDIwMDFuNjgwOXE4MXEyOXE4MTgybnE4MTIzN3E4MTMzOXE4MTUzc3E4MXAyMHE4MXIyOXE4MW4yMXE4MW4yMHE4MW4yNnMwMDIwMDE3NDgwMnMwMXMxMDBzMDZzMDAwMTAwczA2ODA0N3MwMjgwMDE3MXNxODFvMjNxODE5M3NzMDA3MDQxcjBuczAwMDA0MXIwbnMwMG4wMDEyNDgwN3IwMHAxM3IwMXIxc3E4MjcyOXE4MjYyOHE4MW8xcnIwMTgyNG4wNjdzMDAzMDIyNzE2czAwbzA4MXMxMnMwMDAwODFzMTJzMDE0MDAxNTFzbjAwNXMwMDMwMjFwMTJzMDE1MHExNjByczAwMDBxMTYwcnMwMDMwczE2MG5zMDIwMDAxbjJyczAyczE4MTEwNnMwMDAxODExMDY4MDQ5czAzNDAwMTAxcTg4Nzg4cDdxcTAxcTQ5cTA1MzVucTA2MTZucTAwczZvcTEwczZvcTQwczZvODA0OHE4MDkxMThzMXE4bjFxODkxczhwMXM5ODE2cTQwOTIwcTAyMTM1cTQwOTM2bzA3N3E0MDkzczgwNDJyMDE1MjlxODEyMzVxODFvNTVxODE4Mm5xODEyMm5xODEzMnBxODE1M3NxODFwMjBxODFyMjlxODFuMjFxODFuMjBxODFuMjVzMDAyMDAxNzQ4MDJzMDFvMHIwczA2czAwMDByMHMwNjgwNDdzMDIyMDAxczIxcTgxMTJvczAwNjAwMXIycXE4MXAxcXE4MXAyMXE4MXIyM3MwMDkwNTBxMHJzMDAwMDUwcTByczAwMzA3MTEwbnMwMTAwMDFvMXNxODIwMjRxODFxMjRxODE1MW5xODExMTVzMDFzMTAxMTA2czAwMDEwMTEwNjgwNDlzMDI0MDAwbzE4ODgyODhwMnFxMDE4NDhxMDUyNTlxMDYwNjlxMDBuNm5xMTBuNm5xNDBuNm44MDQzcTgwNzBuODc3ODgyNzg4MTduODQ3bjkwMnBxNDA3MXNuMDMzcTIwNzI2cTEwNzI2cTgwcjExOHM2ODhuNjg4OTZuOHA2bjk4MTlxNDByMjM4ODAzcTgwbzBycTAxMjI2cTIwbzI2cTEwbzI2cTgxMjEzOTA0MjkwNTE5MDQyOTQyNTg4NDNxODEyNHA4ODQzcTgxNjJubjgzM244MzNuODczbjkzOG5wMzhxMTE2MzNvMDQ1cTExNjM5ODg0N3IwMXAxczk4NDNxMDIwMzNxMDIwMzNxMTIwMzVxNDIwMzVxMTFwMzZxNDFwMzZxODFvNHFxODI0MzFxODIyMjZxODFyMzhxODE4MzlxODIwMnBxODIwMjZxODIwMjdxODE5NDZxODIxNW9zMDE3MHAxNzByczAwMDBwMTcwcjg4NDdzMDFuMDAxNDIxOTAzODk0M3FuMDEzbjgzN284NDdxMDEzNDRxMTEzNDRxNDEzNDRxNzEzNDlxMjEzNDlxMTEzNG9xNDEzNG9wODQ5cTQxMzU2ODg0NHE4MTExNTkwNm9xNDExMjI4ODQycTgxMzE3OTgwcXE0MTMyNjg4NDRxODE0MTg5ODFvcTQxNDI1ODg0NXE4MTMxNzk4MG5xNDEzMjM4ODQ0cTgxMzE3OTgwOTk0M3M4ODQ0cTgxNTE5OTgycXE0MTUyODg4NDZxODE2MW45ODNvcTQxNjI3ODg0N3E4MTIxNjkwN3NxNDEyMjc4ODQzcTgxNDE4OTgxc3E0MTQyOTg4NDVzMDAyMHExNDIwczAwODAwMjgyb3MwMDkwcTE0MjBzMDAwMHExNDIwczAwcDAwMW4xb3MwMHEwcTE0MjBzMDAwMHExNDIwczAwcjAwMTYxOHMwMHMwcTE0MjBzMDAwMHExNDIwczAwcjAwMXEyMnMwMHMwcTE0MjBzMDAwMHExNDIwczAwcjAwMjcyb3MwMHMwcTE0MjBzMDAwMHExNDIwczAwcjAwMzAzNHMwMHMwcTE0MjBzMDAwMHExNDIwczAxMDAwMW4xcnMwMTEwcTE0MjBzMDAwMHExNDIwczAxMjAwMTYxOXMwMTMwcTE0MjBzMDAwMHExNDIwczAxNDAwMXIyM3MwMTUwcTE0MjBzMDAwMHExNDIwczAxNjAwMjYycHMwMTcwcTE0MjBzMDAwMHExNDIwczAxNjAwMzAzN3MwMTcwcTE0MjBzMDAwMHExNDIwczAwMDBxMTQyMDg4NDRzMDFwMDAwcTEyODg0NTkwMjE5MDQ0OTEyNjg5NHE4cDRxODg0cXE4MHAxODg4NDg4cDRwcTAxOTM3bzgyM284MjNvODY0bzkyOW9wMjlxMTE5NDNxMDQ2NXFxMTE5NXFxMDYwNjNxMDYwNjNxMDY0NjdxMTYwNjhxNDYwNjhxMTE5NjhxMDZvNzNxMTE5NzNxMDc2NzlxMDc2NzlxMDduN3JxMTc2N3NxNDc2N3NxMTE5N3NzMTAwMDAwcTQxMDJzNDAwMDAwcTQxMDJzMDAwMDAwcTQxMDJzMTAwMDAwcTQxMDJyMDBwMTE4ODQ1OTA1MXEwMTIzMnEwMTIzMjk4MTlxMDEyMzJxMDEyMzJuMDYxcTAxMjMycTAxMjMybjg0M3EwMTIzMnEwMTIzMnEwMTIzMnExMHAzM3E0MHAzM3EwMHAzM3ExMHAzM3IwMHIwczkwMDI5MDExOTAwMjhwNjU4ODAzcTgwcjQ4ODgwM3E4MTIyNm4wNzNuMDczbjgzM24xNzhuNDc4cTExMjJzbzAwNXExMTIzNTg4MDdyMDE4MW85ODAzcTAxcDJzcTAxcDJzcTExcDMxcTQxcDMxcTExODMycTQxODMycTgxNzQ5cTgyMDJxcTgxcjIycTgxbjM0cTgxNDM1cTgxcDI4cTgxcDIycTgxcDIzcTgxNTQycTgxcTU3czAxNzBwMTMwbnMwMDAwcDEzMG44ODA3czAxbjAwMTAxcTg4Nzg4cDdxOTg1M24wNzdvODA3cTAwczQwcTEwczQwcTQwczQwcTcwczQ1cTIwczQ1cTEwczQ3cTQwczQ3cDgwOXE0MHM1Mjg4MDRxODBxMTE5MDJvcTQwcTFyODgwMnE4MHMxMzkwNHFxNDBzMjI4ODA0cTgxMDE0OTA1b3E0MTAyMTg4MDVxODBzMTM5MDRucTQwczFzODgwNHE4MHMxMzkwNDk4cDdzODgwNHE4MTExNTkwNnFxNDExMjQ4ODA2cTgxMjE2OTA3b3E0MTIyMzg4MDdxODByMTI5MDNzcTQwcjIzODgwM3E4MTAxNDkwNXNxNDEwMjU4ODA1czAwMjBxMTAyMHMwMHAwMDFuMW9zMDBxMHExMDIwczAwMDBxMTAyMHMwMHIwMDE2MThzMDBzMHExMDIwczAwMDBxMTAyMHMwMHIwMDFxMjJzMDBzMHExMDIwczAwMDBxMTAyMHMwMHIwMDI3Mm9zMDBzMHExMDIwczAwMDBxMTAyMHMwMHIwMDMwMzRzMDBzMHExMDIwczAwMDBxMTAyMHMwMTAwMDFuMXJzMDExMHExMDIwczAwMDBxMTAyMHMwMTIwMDE2MTlzMDEzMHExMDIwczAwMDBxMTAyMHMwMTQwMDFyMjNzMDE1MHExMDIwczAwMDBxMTAyMHMwMTYwMDI2MnBzMDE3MHExMDIwczAwMDBxMTAyMHMwMTYwMDMwMzdzMDE3MHExMDIwczAwMDBxMTAyMHMwMDAwcTEwMjA4ODA0czAxcDAwMDkwcjg4MDU4ODYxOTAwNDg5NjY4OTBxOHAwcTg4MHFxODA4MTQ4ODA4OHAwcHEwMTUzM28wNjNvMDYzbzgyNG8xNjlvNDY5cTExNTNzcTA0MjU5cTExNTU5cTA1cDVzcTA1cDVzcTA2MDYzcTE1cDY0cTQ1cDY0cTExNTY0cTA2NzZzcTExNTZzcTA3Mjc1cTA3Mjc1cTA3NjducTE3MjdvcTQ3MjdvcTExNTdvcTEwODdwcTQwODdwcTAwODdwcTgwODBxODgwNTg4NjM4cDY4ODkwczhwMHM4ODBzcTgwNDBzODA0bzgwNG84MDRvcTgwNDByODA0NDg0NG44ODcxODE0cTg0NHE4MDRxODE0cXMwN3MwNTdzMDIwMTEyczAwMDdzMDIwMTEyNzMwcDAwMDAwMHAxMW8wODQxMjQwMHAxMjQxMjQxMzgwMw=="             # <<<<<<<<<<<<<<
 * 
 * # Step-by-step decoding process
 */
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_encoded_content, __pyx_kp_s_NjMwMDAwMDAwMDAwMDAwMDAwMDAwMDAw) < 0) __PYX_ERR(0, 17, __pyx_L1_error)

  /* "obfuscated_braintree_checker.py":20
 * 
 * # Step-by-step decoding process
 * for i in range(5):             # <<<<<<<<<<<<<<
 *     encoded_content = bytes.fromhex(encoded_content)  # Hex decode
 *     encoded_content = codecs.decode(encoded_content.decode(), 'rot_13')  # ROT13 decode
 */
  for (__pyx_t_3 = 0; __pyx_t_3 < 5; __pyx_t_3+=1) {
    __pyx_t_4 = __Pyx_PyInt_From_long(__pyx_t_3); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 20, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    if (PyDict_SetItem(__pyx_d, __pyx_n_s_i, __pyx_t_4) < 0) __PYX_ERR(0, 20, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;

    /* "obfuscated_braintree_checker.py":21
 * # Step-by-step decoding process
 * for i in range(5):
 *     encoded_content = bytes.fromhex(encoded_content)  # Hex decode             # <<<<<<<<<<<<<<
 *     encoded_content = codecs.decode(encoded_content.decode(), 'rot_13')  # ROT13 decode
 *     encoded_content = base64.b64decode(encoded_content).decode()  # Base64 decode
 */
    __pyx_t_2 = __Pyx_PyObject_GetAttrStr(((PyObject *)(&PyBytes_Type)), __pyx_n_s_fromhex); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 21, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_encoded_content); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 21, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __pyx_t_7 = NULL;
    __pyx_t_8 = 0;
    #if CYTHON_UNPACK_METHODS
    if (likely(PyMethod_Check(__pyx_t_2))) {
      __pyx_t_7 = PyMethod_GET_SELF(__pyx_t_2);
      if (likely(__pyx_t_7)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_2);
        __Pyx_INCREF(__pyx_t_7);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_2, function);
        __pyx_t_8 = 1;
      }
    }
    #endif
    {
      PyObject *__pyx_callargs[2] = {__pyx_t_7, __pyx_t_5};
      __pyx_t_4 = __Pyx_PyObject_FastCall(__pyx_t_2, __pyx_callargs+1-__pyx_t_8, 1+__pyx_t_8);
      __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
      __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
      if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 21, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_4);
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    }
    if (PyDict_SetItem(__pyx_d, __pyx_n_s_encoded_content, __pyx_t_4) < 0) __PYX_ERR(0, 21, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;

    /* "obfuscated_braintree_checker.py":22
 * for i in range(5):
 *     encoded_content = bytes.fromhex(encoded_content)  # Hex decode
 *     encoded_content = codecs.decode(encoded_content.decode(), 'rot_13')  # ROT13 decode             # <<<<<<<<<<<<<<
 *     encoded_content = base64.b64decode(encoded_content).decode()  # Base64 decode
 * 
 */
    __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_codecs); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 22, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_decode); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 22, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __Pyx_GetModuleGlobalName(__pyx_t_7, __pyx_n_s_encoded_content); if (unlikely(!__pyx_t_7)) __PYX_ERR(0, 22, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_7);
    __pyx_t_9 = __Pyx_PyObject_GetAttrStr(__pyx_t_7, __pyx_n_s_decode); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 22, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_9);
    __Pyx_DECREF(__pyx_t_7); __pyx_t_7 = 0;
    __pyx_t_7 = NULL;
    __pyx_t_8 = 0;
    #if CYTHON_UNPACK_METHODS
    if (unlikely(PyMethod_Check(__pyx_t_9))) {
      __pyx_t_7 = PyMethod_GET_SELF(__pyx_t_9);
      if (likely(__pyx_t_7)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_9);
        __Pyx_INCREF(__pyx_t_7);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_9, function);
        __pyx_t_8 = 1;
      }
    }
    #endif
    {
      PyObject *__pyx_callargs[2] = {__pyx_t_7, NULL};
      __pyx_t_2 = __Pyx_PyObject_FastCall(__pyx_t_9, __pyx_callargs+1-__pyx_t_8, 0+__pyx_t_8);
      __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
      if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 22, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_2);
      __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
    }
    __pyx_t_9 = NULL;
    __pyx_t_8 = 0;
    #if CYTHON_UNPACK_METHODS
    if (unlikely(PyMethod_Check(__pyx_t_5))) {
      __pyx_t_9 = PyMethod_GET_SELF(__pyx_t_5);
      if (likely(__pyx_t_9)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_5);
        __Pyx_INCREF(__pyx_t_9);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_5, function);
        __pyx_t_8 = 1;
      }
    }
    #endif
    {
      PyObject *__pyx_callargs[3] = {__pyx_t_9, __pyx_t_2, __pyx_n_s_rot_13};
      __pyx_t_4 = __Pyx_PyObject_FastCall(__pyx_t_5, __pyx_callargs+1-__pyx_t_8, 2+__pyx_t_8);
      __Pyx_XDECREF(__pyx_t_9); __pyx_t_9 = 0;
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
      if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 22, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_4);
      __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    }
    if (PyDict_SetItem(__pyx_d, __pyx_n_s_encoded_content, __pyx_t_4) < 0) __PYX_ERR(0, 22, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;

    /* "obfuscated_braintree_checker.py":23
 *     encoded_content = bytes.fromhex(encoded_content)  # Hex decode
 *     encoded_content = codecs.decode(encoded_content.decode(), 'rot_13')  # ROT13 decode
 *     encoded_content = base64.b64decode(encoded_content).decode()  # Base64 decode             # <<<<<<<<<<<<<<
 * 
 * # More junk code to confuse
 */
    __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_base64); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 23, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_9 = __Pyx_PyObject_GetAttrStr(__pyx_t_2, __pyx_n_s_b64decode); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 23, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_9);
    __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
    __Pyx_GetModuleGlobalName(__pyx_t_2, __pyx_n_s_encoded_content); if (unlikely(!__pyx_t_2)) __PYX_ERR(0, 23, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_2);
    __pyx_t_7 = NULL;
    __pyx_t_8 = 0;
    #if CYTHON_UNPACK_METHODS
    if (unlikely(PyMethod_Check(__pyx_t_9))) {
      __pyx_t_7 = PyMethod_GET_SELF(__pyx_t_9);
      if (likely(__pyx_t_7)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_9);
        __Pyx_INCREF(__pyx_t_7);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_9, function);
        __pyx_t_8 = 1;
      }
    }
    #endif
    {
      PyObject *__pyx_callargs[2] = {__pyx_t_7, __pyx_t_2};
      __pyx_t_5 = __Pyx_PyObject_FastCall(__pyx_t_9, __pyx_callargs+1-__pyx_t_8, 1+__pyx_t_8);
      __Pyx_XDECREF(__pyx_t_7); __pyx_t_7 = 0;
      __Pyx_DECREF(__pyx_t_2); __pyx_t_2 = 0;
      if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 23, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_5);
      __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
    }
    __pyx_t_9 = __Pyx_PyObject_GetAttrStr(__pyx_t_5, __pyx_n_s_decode); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 23, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_9);
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    __pyx_t_5 = NULL;
    __pyx_t_8 = 0;
    #if CYTHON_UNPACK_METHODS
    if (likely(PyMethod_Check(__pyx_t_9))) {
      __pyx_t_5 = PyMethod_GET_SELF(__pyx_t_9);
      if (likely(__pyx_t_5)) {
        PyObject* function = PyMethod_GET_FUNCTION(__pyx_t_9);
        __Pyx_INCREF(__pyx_t_5);
        __Pyx_INCREF(function);
        __Pyx_DECREF_SET(__pyx_t_9, function);
        __pyx_t_8 = 1;
      }
    }
    #endif
    {
      PyObject *__pyx_callargs[2] = {__pyx_t_5, NULL};
      __pyx_t_4 = __Pyx_PyObject_FastCall(__pyx_t_9, __pyx_callargs+1-__pyx_t_8, 0+__pyx_t_8);
      __Pyx_XDECREF(__pyx_t_5); __pyx_t_5 = 0;
      if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 23, __pyx_L1_error)
      __Pyx_GOTREF(__pyx_t_4);
      __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
    }
    if (PyDict_SetItem(__pyx_d, __pyx_n_s_encoded_content, __pyx_t_4) < 0) __PYX_ERR(0, 23, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  }

  /* "obfuscated_braintree_checker.py":26
 * 
 * # More junk code to confuse
 * for i in range(10000):             # <<<<<<<<<<<<<<
 *     _ = i * random.randint(1, 100)
 * 
 */
  for (__pyx_t_3 = 0; __pyx_t_3 < 0x2710; __pyx_t_3+=1) {
    __pyx_t_4 = __Pyx_PyInt_From_long(__pyx_t_3); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 26, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    if (PyDict_SetItem(__pyx_d, __pyx_n_s_i, __pyx_t_4) < 0) __PYX_ERR(0, 26, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;

    /* "obfuscated_braintree_checker.py":27
 * # More junk code to confuse
 * for i in range(10000):
 *     _ = i * random.randint(1, 100)             # <<<<<<<<<<<<<<
 * 
 * for _ in range(1000):
 */
    __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_i); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 27, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_GetModuleGlobalName(__pyx_t_9, __pyx_n_s_random); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 27, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_9);
    __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_t_9, __pyx_n_s_randint); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 27, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
    __pyx_t_9 = __Pyx_PyObject_Call(__pyx_t_5, __pyx_tuple__2, NULL); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 27, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_9);
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    __pyx_t_5 = PyNumber_Multiply(__pyx_t_4, __pyx_t_9); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 27, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
    if (PyDict_SetItem(__pyx_d, __pyx_n_s__3, __pyx_t_5) < 0) __PYX_ERR(0, 27, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  }

  /* "obfuscated_braintree_checker.py":29
 *     _ = i * random.randint(1, 100)
 * 
 * for _ in range(1000):             # <<<<<<<<<<<<<<
 *     junk_str = ''.join(random.choice('abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ') for _ in range(50))
 *     junk_num = sum([random.randint(1, 1000) for _ in range(100)])
 */
  for (__pyx_t_3 = 0; __pyx_t_3 < 0x3E8; __pyx_t_3+=1) {
    __pyx_t_5 = __Pyx_PyInt_From_long(__pyx_t_3); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 29, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    if (PyDict_SetItem(__pyx_d, __pyx_n_s__3, __pyx_t_5) < 0) __PYX_ERR(0, 29, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;

    /* "obfuscated_braintree_checker.py":30
 * 
 * for _ in range(1000):
 *     junk_str = ''.join(random.choice('abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ') for _ in range(50))             # <<<<<<<<<<<<<<
 *     junk_num = sum([random.randint(1, 1000) for _ in range(100)])
 *     _ = junk_str + str(junk_num)
 */
    __pyx_t_5 = __pyx_pf_28obfuscated_braintree_checker_3genexpr(NULL); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 30, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __pyx_t_9 = __Pyx_PyString_Join(__pyx_kp_s__4, __pyx_t_5); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 30, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_9);
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    if (PyDict_SetItem(__pyx_d, __pyx_n_s_junk_str, __pyx_t_9) < 0) __PYX_ERR(0, 30, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;

    /* "obfuscated_braintree_checker.py":31
 * for _ in range(1000):
 *     junk_str = ''.join(random.choice('abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ') for _ in range(50))
 *     junk_num = sum([random.randint(1, 1000) for _ in range(100)])             # <<<<<<<<<<<<<<
 *     _ = junk_str + str(junk_num)
 * 
 */
    { /* enter inner scope */
      __pyx_t_9 = PyList_New(0); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 31, __pyx_L20_error)
      __Pyx_GOTREF(__pyx_t_9);
      for (__pyx_t_6 = 0; __pyx_t_6 < 0x64; __pyx_t_6+=1) {
        __pyx_t_5 = __Pyx_PyInt_From_long(__pyx_t_6); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 31, __pyx_L20_error)
        __Pyx_GOTREF(__pyx_t_5);
        __Pyx_XGOTREF(__pyx_8genexpr3__pyx_v_28obfuscated_braintree_checker__);
        __Pyx_DECREF_SET(__pyx_8genexpr3__pyx_v_28obfuscated_braintree_checker__, __pyx_t_5);
        __Pyx_GIVEREF(__pyx_t_5);
        __pyx_t_5 = 0;
        __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_random); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 31, __pyx_L20_error)
        __Pyx_GOTREF(__pyx_t_5);
        __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_5, __pyx_n_s_randint); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 31, __pyx_L20_error)
        __Pyx_GOTREF(__pyx_t_4);
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
        __pyx_t_5 = __Pyx_PyObject_Call(__pyx_t_4, __pyx_tuple__5, NULL); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 31, __pyx_L20_error)
        __Pyx_GOTREF(__pyx_t_5);
        __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
        if (unlikely(__Pyx_ListComp_Append(__pyx_t_9, (PyObject*)__pyx_t_5))) __PYX_ERR(0, 31, __pyx_L20_error)
        __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
      }
      __Pyx_GOTREF(__pyx_8genexpr3__pyx_v_28obfuscated_braintree_checker__);
      __Pyx_DECREF_SET(__pyx_8genexpr3__pyx_v_28obfuscated_braintree_checker__, Py_None);
      goto __pyx_L23_exit_scope;
      __pyx_L20_error:;
      __Pyx_GOTREF(__pyx_8genexpr3__pyx_v_28obfuscated_braintree_checker__);
      __Pyx_DECREF_SET(__pyx_8genexpr3__pyx_v_28obfuscated_braintree_checker__, Py_None);
      goto __pyx_L1_error;
      __pyx_L23_exit_scope:;
    } /* exit inner scope */
    __pyx_t_5 = __Pyx_PyObject_CallOneArg(__pyx_builtin_sum, __pyx_t_9); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 31, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
    if (PyDict_SetItem(__pyx_d, __pyx_n_s_junk_num, __pyx_t_5) < 0) __PYX_ERR(0, 31, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;

    /* "obfuscated_braintree_checker.py":32
 *     junk_str = ''.join(random.choice('abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ') for _ in range(50))
 *     junk_num = sum([random.randint(1, 1000) for _ in range(100)])
 *     _ = junk_str + str(junk_num)             # <<<<<<<<<<<<<<
 * 
 * # Execute the decoded content
 */
    __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_junk_str); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 32, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __Pyx_GetModuleGlobalName(__pyx_t_9, __pyx_n_s_junk_num); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 32, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_9);
    __pyx_t_4 = __Pyx_PyObject_Str(__pyx_t_9); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 32, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
    __pyx_t_9 = PyNumber_Add(__pyx_t_5, __pyx_t_4); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 32, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_9);
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    if (PyDict_SetItem(__pyx_d, __pyx_n_s__3, __pyx_t_9) < 0) __PYX_ERR(0, 32, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
  }

  /* "obfuscated_braintree_checker.py":35
 * 
 * # Execute the decoded content
 * exec(marshal.loads(encoded_content.encode()))             # <<<<<<<<<<<<<<
 * 
 * # Even more junk
 */
  __Pyx_GetModuleGlobalName(__pyx_t_9, __pyx_n_s_marshal); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 35, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_9);
  __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_9, __pyx_n_s_loads); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 35, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_4);
  __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
  __Pyx_GetModuleGlobalName(__pyx_t_9, __pyx_n_s_encoded_content); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 35, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_9);
  __pyx_t_5 = __Pyx_PyObject_GetAttrStr(__pyx_t_9, __pyx_n_s_encode); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 35, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
  __pyx_t_9 = __Pyx_PyObject_CallNoArg(__pyx_t_5); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 35, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_9);
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  __pyx_t_5 = __Pyx_PyObject_CallOneArg(__pyx_t_4, __pyx_t_9); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 35, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
  __pyx_t_9 = __Pyx_PyExecGlobals(__pyx_t_5); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 35, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_9);
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;

  /* "obfuscated_braintree_checker.py":38
 * 
 * # Even more junk
 * for i in range(10000):             # <<<<<<<<<<<<<<
 *     _ = i * random.randint(1, 100)
 * 
 */
  for (__pyx_t_3 = 0; __pyx_t_3 < 0x2710; __pyx_t_3+=1) {
    __pyx_t_9 = __Pyx_PyInt_From_long(__pyx_t_3); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 38, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_9);
    if (PyDict_SetItem(__pyx_d, __pyx_n_s_i, __pyx_t_9) < 0) __PYX_ERR(0, 38, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;

    /* "obfuscated_braintree_checker.py":39
 * # Even more junk
 * for i in range(10000):
 *     _ = i * random.randint(1, 100)             # <<<<<<<<<<<<<<
 * 
 * for _ in range(1000):
 */
    __Pyx_GetModuleGlobalName(__pyx_t_9, __pyx_n_s_i); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 39, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_9);
    __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_random); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 39, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __pyx_t_4 = __Pyx_PyObject_GetAttrStr(__pyx_t_5, __pyx_n_s_randint); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 39, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    __pyx_t_5 = __Pyx_PyObject_Call(__pyx_t_4, __pyx_tuple__2, NULL); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 39, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __pyx_t_4 = PyNumber_Multiply(__pyx_t_9, __pyx_t_5); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 39, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    if (PyDict_SetItem(__pyx_d, __pyx_n_s__3, __pyx_t_4) < 0) __PYX_ERR(0, 39, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
  }

  /* "obfuscated_braintree_checker.py":41
 *     _ = i * random.randint(1, 100)
 * 
 * for _ in range(1000):             # <<<<<<<<<<<<<<
 *     junk_str = ''.join(random.choice('abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ') for _ in range(50))
 *     junk_num = sum([random.randint(1, 1000) for _ in range(100)])
 */
  for (__pyx_t_3 = 0; __pyx_t_3 < 0x3E8; __pyx_t_3+=1) {
    __pyx_t_4 = __Pyx_PyInt_From_long(__pyx_t_3); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 41, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    if (PyDict_SetItem(__pyx_d, __pyx_n_s__3, __pyx_t_4) < 0) __PYX_ERR(0, 41, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;

    /* "obfuscated_braintree_checker.py":42
 * 
 * for _ in range(1000):
 *     junk_str = ''.join(random.choice('abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ') for _ in range(50))             # <<<<<<<<<<<<<<
 *     junk_num = sum([random.randint(1, 1000) for _ in range(100)])
 *     _ = junk_str + str(junk_num)
 */
    __pyx_t_4 = __pyx_pf_28obfuscated_braintree_checker_6genexpr(NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 42, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __pyx_t_5 = __Pyx_PyString_Join(__pyx_kp_s__4, __pyx_t_4); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 42, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    if (PyDict_SetItem(__pyx_d, __pyx_n_s_junk_str, __pyx_t_5) < 0) __PYX_ERR(0, 42, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;

    /* "obfuscated_braintree_checker.py":43
 * for _ in range(1000):
 *     junk_str = ''.join(random.choice('abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ') for _ in range(50))
 *     junk_num = sum([random.randint(1, 1000) for _ in range(100)])             # <<<<<<<<<<<<<<
 *     _ = junk_str + str(junk_num)
 */
    { /* enter inner scope */
      __pyx_t_5 = PyList_New(0); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 43, __pyx_L30_error)
      __Pyx_GOTREF(__pyx_t_5);
      for (__pyx_t_6 = 0; __pyx_t_6 < 0x64; __pyx_t_6+=1) {
        __pyx_t_4 = __Pyx_PyInt_From_long(__pyx_t_6); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 43, __pyx_L30_error)
        __Pyx_GOTREF(__pyx_t_4);
        __Pyx_XGOTREF(__pyx_8genexpr5__pyx_v_28obfuscated_braintree_checker__);
        __Pyx_DECREF_SET(__pyx_8genexpr5__pyx_v_28obfuscated_braintree_checker__, __pyx_t_4);
        __Pyx_GIVEREF(__pyx_t_4);
        __pyx_t_4 = 0;
        __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_random); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 43, __pyx_L30_error)
        __Pyx_GOTREF(__pyx_t_4);
        __pyx_t_9 = __Pyx_PyObject_GetAttrStr(__pyx_t_4, __pyx_n_s_randint); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 43, __pyx_L30_error)
        __Pyx_GOTREF(__pyx_t_9);
        __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
        __pyx_t_4 = __Pyx_PyObject_Call(__pyx_t_9, __pyx_tuple__5, NULL); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 43, __pyx_L30_error)
        __Pyx_GOTREF(__pyx_t_4);
        __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
        if (unlikely(__Pyx_ListComp_Append(__pyx_t_5, (PyObject*)__pyx_t_4))) __PYX_ERR(0, 43, __pyx_L30_error)
        __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
      }
      __Pyx_GOTREF(__pyx_8genexpr5__pyx_v_28obfuscated_braintree_checker__);
      __Pyx_DECREF_SET(__pyx_8genexpr5__pyx_v_28obfuscated_braintree_checker__, Py_None);
      goto __pyx_L33_exit_scope;
      __pyx_L30_error:;
      __Pyx_GOTREF(__pyx_8genexpr5__pyx_v_28obfuscated_braintree_checker__);
      __Pyx_DECREF_SET(__pyx_8genexpr5__pyx_v_28obfuscated_braintree_checker__, Py_None);
      goto __pyx_L1_error;
      __pyx_L33_exit_scope:;
    } /* exit inner scope */
    __pyx_t_4 = __Pyx_PyObject_CallOneArg(__pyx_builtin_sum, __pyx_t_5); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 43, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    if (PyDict_SetItem(__pyx_d, __pyx_n_s_junk_num, __pyx_t_4) < 0) __PYX_ERR(0, 43, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;

    /* "obfuscated_braintree_checker.py":44
 *     junk_str = ''.join(random.choice('abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ') for _ in range(50))
 *     junk_num = sum([random.randint(1, 1000) for _ in range(100)])
 *     _ = junk_str + str(junk_num)             # <<<<<<<<<<<<<<
 */
    __Pyx_GetModuleGlobalName(__pyx_t_4, __pyx_n_s_junk_str); if (unlikely(!__pyx_t_4)) __PYX_ERR(0, 44, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_4);
    __Pyx_GetModuleGlobalName(__pyx_t_5, __pyx_n_s_junk_num); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 44, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __pyx_t_9 = __Pyx_PyObject_Str(__pyx_t_5); if (unlikely(!__pyx_t_9)) __PYX_ERR(0, 44, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_9);
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
    __pyx_t_5 = PyNumber_Add(__pyx_t_4, __pyx_t_9); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 44, __pyx_L1_error)
    __Pyx_GOTREF(__pyx_t_5);
    __Pyx_DECREF(__pyx_t_4); __pyx_t_4 = 0;
    __Pyx_DECREF(__pyx_t_9); __pyx_t_9 = 0;
    if (PyDict_SetItem(__pyx_d, __pyx_n_s__3, __pyx_t_5) < 0) __PYX_ERR(0, 44, __pyx_L1_error)
    __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;
  }

  /* "obfuscated_braintree_checker.py":2
 * 
 * import base64             # <<<<<<<<<<<<<<
 * import marshal
 * import random
 */
  __pyx_t_5 = __Pyx_PyDict_NewPresized(0); if (unlikely(!__pyx_t_5)) __PYX_ERR(0, 2, __pyx_L1_error)
  __Pyx_GOTREF(__pyx_t_5);
  if (PyDict_SetItem(__pyx_d, __pyx_n_s_test, __pyx_t_5) < 0) __PYX_ERR(0, 2, __pyx_L1_error)
  __Pyx_DECREF(__pyx_t_5); __pyx_t_5 = 0;

  /*--- Wrapped vars code ---*/

  goto __pyx_L0;
  __pyx_L1_error:;
  __Pyx_XDECREF(__pyx_t_2);
  __Pyx_XDECREF(__pyx_t_4);
  __Pyx_XDECREF(__pyx_t_5);
  __Pyx_XDECREF(__pyx_t_7);
  __Pyx_XDECREF(__pyx_t_9);
  if (__pyx_m) {
    if (__pyx_d && stringtab_initialized) {
      __Pyx_AddTraceback("init obfuscated_braintree_checker", __pyx_clineno, __pyx_lineno, __pyx_filename);
    }
    #if !CYTHON_USE_MODULE_STATE
    Py_CLEAR(__pyx_m);
    #else
    Py_DECREF(__pyx_m);
    if (pystate_addmodule_run) {
      PyObject *tp, *value, *tb;
      PyErr_Fetch(&tp, &value, &tb);
      PyState_RemoveModule(&__pyx_moduledef);
      PyErr_Restore(tp, value, tb);
    }
    #endif
  } else if (!PyErr_Occurred()) {
    PyErr_SetString(PyExc_ImportError, "init obfuscated_braintree_checker");
  }
  __pyx_L0:;
  __Pyx_RefNannyFinishContext();
  #if CYTHON_PEP489_MULTI_PHASE_INIT
  return (__pyx_m != NULL) ? 0 : -1;
  #elif PY_MAJOR_VERSION >= 3
  return __pyx_m;
  #else
  return;
  #endif
}
/* #### Code section: cleanup_globals ### */
/* #### Code section: cleanup_module ### */
/* #### Code section: main_method ### */
/* #### Code section: utility_code_pragmas ### */
#ifdef _MSC_VER
#pragma warning( push )
/* Warning 4127: conditional expression is constant
 * Cython uses constant conditional expressions to allow in inline functions to be optimized at
 * compile-time, so this warning is not useful
 */
#pragma warning( disable : 4127 )
#endif



/* #### Code section: utility_code_def ### */

/* --- Runtime support code --- */
/* Refnanny */
#if CYTHON_REFNANNY
static __Pyx_RefNannyAPIStruct *__Pyx_RefNannyImportAPI(const char *modname) {
    PyObject *m = NULL, *p = NULL;
    void *r = NULL;
    m = PyImport_ImportModule(modname);
    if (!m) goto end;
    p = PyObject_GetAttrString(m, "RefNannyAPI");
    if (!p) goto end;
    r = PyLong_AsVoidPtr(p);
end:
    Py_XDECREF(p);
    Py_XDECREF(m);
    return (__Pyx_RefNannyAPIStruct *)r;
}
#endif

/* PyErrExceptionMatches */
#if CYTHON_FAST_THREAD_STATE
static int __Pyx_PyErr_ExceptionMatchesTuple(PyObject *exc_type, PyObject *tuple) {
    Py_ssize_t i, n;
    n = PyTuple_GET_SIZE(tuple);
#if PY_MAJOR_VERSION >= 3
    for (i=0; i<n; i++) {
        if (exc_type == PyTuple_GET_ITEM(tuple, i)) return 1;
    }
#endif
    for (i=0; i<n; i++) {
        if (__Pyx_PyErr_GivenExceptionMatches(exc_type, PyTuple_GET_ITEM(tuple, i))) return 1;
    }
    return 0;
}
static CYTHON_INLINE int __Pyx_PyErr_ExceptionMatchesInState(PyThreadState* tstate, PyObject* err) {
    int result;
    PyObject *exc_type;
#if PY_VERSION_HEX >= 0x030C00A6
    PyObject *current_exception = tstate->current_exception;
    if (unlikely(!current_exception)) return 0;
    exc_type = (PyObject*) Py_TYPE(current_exception);
    if (exc_type == err) return 1;
#else
    exc_type = tstate->curexc_type;
    if (exc_type == err) return 1;
    if (unlikely(!exc_type)) return 0;
#endif
    #if CYTHON_AVOID_BORROWED_REFS
    Py_INCREF(exc_type);
    #endif
    if (unlikely(PyTuple_Check(err))) {
        result = __Pyx_PyErr_ExceptionMatchesTuple(exc_type, err);
    } else {
        result = __Pyx_PyErr_GivenExceptionMatches(exc_type, err);
    }
    #if CYTHON_AVOID_BORROWED_REFS
    Py_DECREF(exc_type);
    #endif
    return result;
}
#endif

/* PyErrFetchRestore */
#if CYTHON_FAST_THREAD_STATE
static CYTHON_INLINE void __Pyx_ErrRestoreInState(PyThreadState *tstate, PyObject *type, PyObject *value, PyObject *tb) {
#if PY_VERSION_HEX >= 0x030C00A6
    PyObject *tmp_value;
    assert(type == NULL || (value != NULL && type == (PyObject*) Py_TYPE(value)));
    if (value) {
        #if CYTHON_COMPILING_IN_CPYTHON
        if (unlikely(((PyBaseExceptionObject*) value)->traceback != tb))
        #endif
            PyException_SetTraceback(value, tb);
    }
    tmp_value = tstate->current_exception;
    tstate->current_exception = value;
    Py_XDECREF(tmp_value);
    Py_XDECREF(type);
    Py_XDECREF(tb);
#else
    PyObject *tmp_type, *tmp_value, *tmp_tb;
    tmp_type = tstate->curexc_type;
    tmp_value = tstate->curexc_value;
    tmp_tb = tstate->curexc_traceback;
    tstate->curexc_type = type;
    tstate->curexc_value = value;
    tstate->curexc_traceback = tb;
    Py_XDECREF(tmp_type);
    Py_XDECREF(tmp_value);
    Py_XDECREF(tmp_tb);
#endif
}
static CYTHON_INLINE void __Pyx_ErrFetchInState(PyThreadState *tstate, PyObject **type, PyObject **value, PyObject **tb) {
#if PY_VERSION_HEX >= 0x030C00A6
    PyObject* exc_value;
    exc_value = tstate->current_exception;
    tstate->current_exception = 0;
    *value = exc_value;
    *type = NULL;
    *tb = NULL;
    if (exc_value) {
        *type = (PyObject*) Py_TYPE(exc_value);
        Py_INCREF(*type);
        #if CYTHON_COMPILING_IN_CPYTHON
        *tb = ((PyBaseExceptionObject*) exc_value)->traceback;
        Py_XINCREF(*tb);
        #else
        *tb = PyException_GetTraceback(exc_value);
        #endif
    }
#else
    *type = tstate->curexc_type;
    *value = tstate->curexc_value;
    *tb = tstate->curexc_traceback;
    tstate->curexc_type = 0;
    tstate->curexc_value = 0;
    tstate->curexc_traceback = 0;
#endif
}
#endif

/* PyObjectGetAttrStr */
#if CYTHON_USE_TYPE_SLOTS
static CYTHON_INLINE PyObject* __Pyx_PyObject_GetAttrStr(PyObject* obj, PyObject* attr_name) {
    PyTypeObject* tp = Py_TYPE(obj);
    if (likely(tp->tp_getattro))
        return tp->tp_getattro(obj, attr_name);
#if PY_MAJOR_VERSION < 3
    if (likely(tp->tp_getattr))
        return tp->tp_getattr(obj, PyString_AS_STRING(attr_name));
#endif
    return PyObject_GetAttr(obj, attr_name);
}
#endif

/* PyObjectGetAttrStrNoError */
#if __PYX_LIMITED_VERSION_HEX < 0x030d00A1
static void __Pyx_PyObject_GetAttrStr_ClearAttributeError(void) {
    __Pyx_PyThreadState_declare
    __Pyx_PyThreadState_assign
    if (likely(__Pyx_PyErr_ExceptionMatches(PyExc_AttributeError)))
        __Pyx_PyErr_Clear();
}
#endif
static CYTHON_INLINE PyObject* __Pyx_PyObject_GetAttrStrNoError(PyObject* obj, PyObject* attr_name) {
    PyObject *result;
#if __PYX_LIMITED_VERSION_HEX >= 0x030d00A1
    (void) PyObject_GetOptionalAttr(obj, attr_name, &result);
    return result;
#else
#if CYTHON_COMPILING_IN_CPYTHON && CYTHON_USE_TYPE_SLOTS && PY_VERSION_HEX >= 0x030700B1
    PyTypeObject* tp = Py_TYPE(obj);
    if (likely(tp->tp_getattro == PyObject_GenericGetAttr)) {
        return _PyObject_GenericGetAttrWithDict(obj, attr_name, NULL, 1);
    }
#endif
    result = __Pyx_PyObject_GetAttrStr(obj, attr_name);
    if (unlikely(!result)) {
        __Pyx_PyObject_GetAttrStr_ClearAttributeError();
    }
    return result;
#endif
}

/* GetBuiltinName */
static PyObject *__Pyx_GetBuiltinName(PyObject *name) {
    PyObject* result = __Pyx_PyObject_GetAttrStrNoError(__pyx_b, name);
    if (unlikely(!result) && !PyErr_Occurred()) {
        PyErr_Format(PyExc_NameError,
#if PY_MAJOR_VERSION >= 3
            "name '%U' is not defined", name);
#else
            "name '%.200s' is not defined", PyString_AS_STRING(name));
#endif
    }
    return result;
}

/* PyDictVersioning */
#if CYTHON_USE_DICT_VERSIONS && CYTHON_USE_TYPE_SLOTS
static CYTHON_INLINE PY_UINT64_T __Pyx_get_tp_dict_version(PyObject *obj) {
    PyObject *dict = Py_TYPE(obj)->tp_dict;
    return likely(dict) ? __PYX_GET_DICT_VERSION(dict) : 0;
}
static CYTHON_INLINE PY_UINT64_T __Pyx_get_object_dict_version(PyObject *obj) {
    PyObject **dictptr = NULL;
    Py_ssize_t offset = Py_TYPE(obj)->tp_dictoffset;
    if (offset) {
#if CYTHON_COMPILING_IN_CPYTHON
        dictptr = (likely(offset > 0)) ? (PyObject **) ((char *)obj + offset) : _PyObject_GetDictPtr(obj);
#else
        dictptr = _PyObject_GetDictPtr(obj);
#endif
    }
    return (dictptr && *dictptr) ? __PYX_GET_DICT_VERSION(*dictptr) : 0;
}
static CYTHON_INLINE int __Pyx_object_dict_version_matches(PyObject* obj, PY_UINT64_T tp_dict_version, PY_UINT64_T obj_dict_version) {
    PyObject *dict = Py_TYPE(obj)->tp_dict;
    if (unlikely(!dict) || unlikely(tp_dict_version != __PYX_GET_DICT_VERSION(dict)))
        return 0;
    return obj_dict_version == __Pyx_get_object_dict_version(obj);
}
#endif

/* GetModuleGlobalName */
#if CYTHON_USE_DICT_VERSIONS
static PyObject *__Pyx__GetModuleGlobalName(PyObject *name, PY_UINT64_T *dict_version, PyObject **dict_cached_value)
#else
static CYTHON_INLINE PyObject *__Pyx__GetModuleGlobalName(PyObject *name)
#endif
{
    PyObject *result;
#if !CYTHON_AVOID_BORROWED_REFS
#if CYTHON_COMPILING_IN_CPYTHON && PY_VERSION_HEX >= 0x030500A1 && PY_VERSION_HEX < 0x030d0000
    result = _PyDict_GetItem_KnownHash(__pyx_d, name, ((PyASCIIObject *) name)->hash);
    __PYX_UPDATE_DICT_CACHE(__pyx_d, result, *dict_cached_value, *dict_version)
    if (likely(result)) {
        return __Pyx_NewRef(result);
    } else if (unlikely(PyErr_Occurred())) {
        return NULL;
    }
#elif CYTHON_COMPILING_IN_LIMITED_API
    if (unlikely(!__pyx_m)) {
        return NULL;
    }
    result = PyObject_GetAttr(__pyx_m, name);
    if (likely(result)) {
        return result;
    }
#else
    result = PyDict_GetItem(__pyx_d, name);
    __PYX_UPDATE_DICT_CACHE(__pyx_d, result, *dict_cached_value, *dict_version)
    if (likely(result)) {
        return __Pyx_NewRef(result);
    }
#endif
#else
    result = PyObject_GetItem(__pyx_d, name);
    __PYX_UPDATE_DICT_CACHE(__pyx_d, result, *dict_cached_value, *dict_version)
    if (likely(result)) {
        return __Pyx_NewRef(result);
    }
    PyErr_Clear();
#endif
    return __Pyx_GetBuiltinName(name);
}

/* PyFunctionFastCall */
#if CYTHON_FAST_PYCALL && !CYTHON_VECTORCALL
static PyObject* __Pyx_PyFunction_FastCallNoKw(PyCodeObject *co, PyObject **args, Py_ssize_t na,
                                               PyObject *globals) {
    PyFrameObject *f;
    PyThreadState *tstate = __Pyx_PyThreadState_Current;
    PyObject **fastlocals;
    Py_ssize_t i;
    PyObject *result;
    assert(globals != NULL);
    /* XXX Perhaps we should create a specialized
       PyFrame_New() that doesn't take locals, but does
       take builtins without sanity checking them.
       */
    assert(tstate != NULL);
    f = PyFrame_New(tstate, co, globals, NULL);
    if (f == NULL) {
        return NULL;
    }
    fastlocals = __Pyx_PyFrame_GetLocalsplus(f);
    for (i = 0; i < na; i++) {
        Py_INCREF(*args);
        fastlocals[i] = *args++;
    }
    result = PyEval_EvalFrameEx(f,0);
    ++tstate->recursion_depth;
    Py_DECREF(f);
    --tstate->recursion_depth;
    return result;
}
static PyObject *__Pyx_PyFunction_FastCallDict(PyObject *func, PyObject **args, Py_ssize_t nargs, PyObject *kwargs) {
    PyCodeObject *co = (PyCodeObject *)PyFunction_GET_CODE(func);
    PyObject *globals = PyFunction_GET_GLOBALS(func);
    PyObject *argdefs = PyFunction_GET_DEFAULTS(func);
    PyObject *closure;
#if PY_MAJOR_VERSION >= 3
    PyObject *kwdefs;
#endif
    PyObject *kwtuple, **k;
    PyObject **d;
    Py_ssize_t nd;
    Py_ssize_t nk;
    PyObject *result;
    assert(kwargs == NULL || PyDict_Check(kwargs));
    nk = kwargs ? PyDict_Size(kwargs) : 0;
    #if PY_MAJOR_VERSION < 3
    if (unlikely(Py_EnterRecursiveCall((char*)" while calling a Python object"))) {
        return NULL;
    }
    #else
    if (unlikely(Py_EnterRecursiveCall(" while calling a Python object"))) {
        return NULL;
    }
    #endif
    if (
#if PY_MAJOR_VERSION >= 3
            co->co_kwonlyargcount == 0 &&
#endif
            likely(kwargs == NULL || nk == 0) &&
            co->co_flags == (CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE)) {
        if (argdefs == NULL && co->co_argcount == nargs) {
            result = __Pyx_PyFunction_FastCallNoKw(co, args, nargs, globals);
            goto done;
        }
        else if (nargs == 0 && argdefs != NULL
                 && co->co_argcount == Py_SIZE(argdefs)) {
            /* function called with no arguments, but all parameters have
               a default value: use default values as arguments .*/
            args = &PyTuple_GET_ITEM(argdefs, 0);
            result =__Pyx_PyFunction_FastCallNoKw(co, args, Py_SIZE(argdefs), globals);
            goto done;
        }
    }
    if (kwargs != NULL) {
        Py_ssize_t pos, i;
        kwtuple = PyTuple_New(2 * nk);
        if (kwtuple == NULL) {
            result = NULL;
            goto done;
        }
        k = &PyTuple_GET_ITEM(kwtuple, 0);
        pos = i = 0;
        while (PyDict_Next(kwargs, &pos, &k[i], &k[i+1])) {
            Py_INCREF(k[i]);
            Py_INCREF(k[i+1]);
            i += 2;
        }
        nk = i / 2;
    }
    else {
        kwtuple = NULL;
        k = NULL;
    }
    closure = PyFunction_GET_CLOSURE(func);
#if PY_MAJOR_VERSION >= 3
    kwdefs = PyFunction_GET_KW_DEFAULTS(func);
#endif
    if (argdefs != NULL) {
        d = &PyTuple_GET_ITEM(argdefs, 0);
        nd = Py_SIZE(argdefs);
    }
    else {
        d = NULL;
        nd = 0;
    }
#if PY_MAJOR_VERSION >= 3
    result = PyEval_EvalCodeEx((PyObject*)co, globals, (PyObject *)NULL,
                               args, (int)nargs,
                               k, (int)nk,
                               d, (int)nd, kwdefs, closure);
#else
    result = PyEval_EvalCodeEx(co, globals, (PyObject *)NULL,
                               args, (int)nargs,
                               k, (int)nk,
                               d, (int)nd, closure);
#endif
    Py_XDECREF(kwtuple);
done:
    Py_LeaveRecursiveCall();
    return result;
}
#endif

/* PyObjectCall */
#if CYTHON_COMPILING_IN_CPYTHON
static CYTHON_INLINE PyObject* __Pyx_PyObject_Call(PyObject *func, PyObject *arg, PyObject *kw) {
    PyObject *result;
    ternaryfunc call = Py_TYPE(func)->tp_call;
    if (unlikely(!call))
        return PyObject_Call(func, arg, kw);
    #if PY_MAJOR_VERSION < 3
    if (unlikely(Py_EnterRecursiveCall((char*)" while calling a Python object")))
        return NULL;
    #else
    if (unlikely(Py_EnterRecursiveCall(" while calling a Python object")))
        return NULL;
    #endif
    result = (*call)(func, arg, kw);
    Py_LeaveRecursiveCall();
    if (unlikely(!result) && unlikely(!PyErr_Occurred())) {
        PyErr_SetString(
            PyExc_SystemError,
            "NULL result without error in PyObject_Call");
    }
    return result;
}
#endif

/* PyObjectCallMethO */
#if CYTHON_COMPILING_IN_CPYTHON
static CYTHON_INLINE PyObject* __Pyx_PyObject_CallMethO(PyObject *func, PyObject *arg) {
    PyObject *self, *result;
    PyCFunction cfunc;
    cfunc = __Pyx_CyOrPyCFunction_GET_FUNCTION(func);
    self = __Pyx_CyOrPyCFunction_GET_SELF(func);
    #if PY_MAJOR_VERSION < 3
    if (unlikely(Py_EnterRecursiveCall((char*)" while calling a Python object")))
        return NULL;
    #else
    if (unlikely(Py_EnterRecursiveCall(" while calling a Python object")))
        return NULL;
    #endif
    result = cfunc(self, arg);
    Py_LeaveRecursiveCall();
    if (unlikely(!result) && unlikely(!PyErr_Occurred())) {
        PyErr_SetString(
            PyExc_SystemError,
            "NULL result without error in PyObject_Call");
    }
    return result;
}
#endif

/* PyObjectFastCall */
#if PY_VERSION_HEX < 0x03090000 || CYTHON_COMPILING_IN_LIMITED_API
static PyObject* __Pyx_PyObject_FastCall_fallback(PyObject *func, PyObject **args, size_t nargs, PyObject *kwargs) {
    PyObject *argstuple;
    PyObject *result = 0;
    size_t i;
    argstuple = PyTuple_New((Py_ssize_t)nargs);
    if (unlikely(!argstuple)) return NULL;
    for (i = 0; i < nargs; i++) {
        Py_INCREF(args[i]);
        if (__Pyx_PyTuple_SET_ITEM(argstuple, (Py_ssize_t)i, args[i]) < 0) goto bad;
    }
    result = __Pyx_PyObject_Call(func, argstuple, kwargs);
  bad:
    Py_DECREF(argstuple);
    return result;
}
#endif
static CYTHON_INLINE PyObject* __Pyx_PyObject_FastCallDict(PyObject *func, PyObject **args, size_t _nargs, PyObject *kwargs) {
    Py_ssize_t nargs = __Pyx_PyVectorcall_NARGS(_nargs);
#if CYTHON_COMPILING_IN_CPYTHON
    if (nargs == 0 && kwargs == NULL) {
        if (__Pyx_CyOrPyCFunction_Check(func) && likely( __Pyx_CyOrPyCFunction_GET_FLAGS(func) & METH_NOARGS))
            return __Pyx_PyObject_CallMethO(func, NULL);
    }
    else if (nargs == 1 && kwargs == NULL) {
        if (__Pyx_CyOrPyCFunction_Check(func) && likely( __Pyx_CyOrPyCFunction_GET_FLAGS(func) & METH_O))
            return __Pyx_PyObject_CallMethO(func, args[0]);
    }
#endif
    #if PY_VERSION_HEX < 0x030800B1
    #if CYTHON_FAST_PYCCALL
    if (PyCFunction_Check(func)) {
        if (kwargs) {
            return _PyCFunction_FastCallDict(func, args, nargs, kwargs);
        } else {
            return _PyCFunction_FastCallKeywords(func, args, nargs, NULL);
        }
    }
    #if PY_VERSION_HEX >= 0x030700A1
    if (!kwargs && __Pyx_IS_TYPE(func, &PyMethodDescr_Type)) {
        return _PyMethodDescr_FastCallKeywords(func, args, nargs, NULL);
    }
    #endif
    #endif
    #if CYTHON_FAST_PYCALL
    if (PyFunction_Check(func)) {
        return __Pyx_PyFunction_FastCallDict(func, args, nargs, kwargs);
    }
    #endif
    #endif
    if (kwargs == NULL) {
        #if CYTHON_VECTORCALL
        #if PY_VERSION_HEX < 0x03090000
        vectorcallfunc f = _PyVectorcall_Function(func);
        #else
        vectorcallfunc f = PyVectorcall_Function(func);
        #endif
        if (f) {
            return f(func, args, (size_t)nargs, NULL);
        }
        #elif defined(__Pyx_CyFunction_USED) && CYTHON_BACKPORT_VECTORCALL
        if (__Pyx_CyFunction_CheckExact(func)) {
            __pyx_vectorcallfunc f = __Pyx_CyFunction_func_vectorcall(func);
            if (f) return f(func, args, (size_t)nargs, NULL);
        }
        #endif
    }
    if (nargs == 0) {
        return __Pyx_PyObject_Call(func, __pyx_empty_tuple, kwargs);
    }
    #if PY_VERSION_HEX >= 0x03090000 && !CYTHON_COMPILING_IN_LIMITED_API
    return PyObject_VectorcallDict(func, args, (size_t)nargs, kwargs);
    #else
    return __Pyx_PyObject_FastCall_fallback(func, args, (size_t)nargs, kwargs);
    #endif
}

/* GetException */
#if CYTHON_FAST_THREAD_STATE
static int __Pyx__GetException(PyThreadState *tstate, PyObject **type, PyObject **value, PyObject **tb)
#else
static int __Pyx_GetException(PyObject **type, PyObject **value, PyObject **tb)
#endif
{
    PyObject *local_type = NULL, *local_value, *local_tb = NULL;
#if CYTHON_FAST_THREAD_STATE
    PyObject *tmp_type, *tmp_value, *tmp_tb;
  #if PY_VERSION_HEX >= 0x030C00A6
    local_value = tstate->current_exception;
    tstate->current_exception = 0;
    if (likely(local_value)) {
        local_type = (PyObject*) Py_TYPE(local_value);
        Py_INCREF(local_type);
        local_tb = PyException_GetTraceback(local_value);
    }
  #else
    local_type = tstate->curexc_type;
    local_value = tstate->curexc_value;
    local_tb = tstate->curexc_traceback;
    tstate->curexc_type = 0;
    tstate->curexc_value = 0;
    tstate->curexc_traceback = 0;
  #endif
#else
    PyErr_Fetch(&local_type, &local_value, &local_tb);
#endif
    PyErr_NormalizeException(&local_type, &local_value, &local_tb);
#if CYTHON_FAST_THREAD_STATE && PY_VERSION_HEX >= 0x030C00A6
    if (unlikely(tstate->current_exception))
#elif CYTHON_FAST_THREAD_STATE
    if (unlikely(tstate->curexc_type))
#else
    if (unlikely(PyErr_Occurred()))
#endif
        goto bad;
    #if PY_MAJOR_VERSION >= 3
    if (local_tb) {
        if (unlikely(PyException_SetTraceback(local_value, local_tb) < 0))
            goto bad;
    }
    #endif
    Py_XINCREF(local_tb);
    Py_XINCREF(local_type);
    Py_XINCREF(local_value);
    *type = local_type;
    *value = local_value;
    *tb = local_tb;
#if CYTHON_FAST_THREAD_STATE
    #if CYTHON_USE_EXC_INFO_STACK
    {
        _PyErr_StackItem *exc_info = tstate->exc_info;
      #if PY_VERSION_HEX >= 0x030B00a4
        tmp_value = exc_info->exc_value;
        exc_info->exc_value = local_value;
        tmp_type = NULL;
        tmp_tb = NULL;
        Py_XDECREF(local_type);
        Py_XDECREF(local_tb);
      #else
        tmp_type = exc_info->exc_type;
        tmp_value = exc_info->exc_value;
        tmp_tb = exc_info->exc_traceback;
        exc_info->exc_type = local_type;
        exc_info->exc_value = local_value;
        exc_info->exc_traceback = local_tb;
      #endif
    }
    #else
    tmp_type = tstate->exc_type;
    tmp_value = tstate->exc_value;
    tmp_tb = tstate->exc_traceback;
    tstate->exc_type = local_type;
    tstate->exc_value = local_value;
    tstate->exc_traceback = local_tb;
    #endif
    Py_XDECREF(tmp_type);
    Py_XDECREF(tmp_value);
    Py_XDECREF(tmp_tb);
#else
    PyErr_SetExcInfo(local_type, local_value, local_tb);
#endif
    return 0;
bad:
    *type = 0;
    *value = 0;
    *tb = 0;
    Py_XDECREF(local_type);
    Py_XDECREF(local_value);
    Py_XDECREF(local_tb);
    return -1;
}

/* pep479 */
static void __Pyx_Generator_Replace_StopIteration(int in_async_gen) {
    PyObject *exc, *val, *tb, *cur_exc;
    __Pyx_PyThreadState_declare
    #ifdef __Pyx_StopAsyncIteration_USED
    int is_async_stopiteration = 0;
    #endif
    CYTHON_MAYBE_UNUSED_VAR(in_async_gen);
    cur_exc = PyErr_Occurred();
    if (likely(!__Pyx_PyErr_GivenExceptionMatches(cur_exc, PyExc_StopIteration))) {
        #ifdef __Pyx_StopAsyncIteration_USED
        if (in_async_gen && unlikely(__Pyx_PyErr_GivenExceptionMatches(cur_exc, __Pyx_PyExc_StopAsyncIteration))) {
            is_async_stopiteration = 1;
        } else
        #endif
            return;
    }
    __Pyx_PyThreadState_assign
    __Pyx_GetException(&exc, &val, &tb);
    Py_XDECREF(exc);
    Py_XDECREF(val);
    Py_XDECREF(tb);
    PyErr_SetString(PyExc_RuntimeError,
        #ifdef __Pyx_StopAsyncIteration_USED
        is_async_stopiteration ? "async generator raised StopAsyncIteration" :
        in_async_gen ? "async generator raised StopIteration" :
        #endif
        "generator raised StopIteration");
}

/* FixUpExtensionType */
#if CYTHON_USE_TYPE_SPECS
static int __Pyx_fix_up_extension_type_from_spec(PyType_Spec *spec, PyTypeObject *type) {
#if PY_VERSION_HEX > 0x030900B1 || CYTHON_COMPILING_IN_LIMITED_API
    CYTHON_UNUSED_VAR(spec);
    CYTHON_UNUSED_VAR(type);
#else
    const PyType_Slot *slot = spec->slots;
    while (slot && slot->slot && slot->slot != Py_tp_members)
        slot++;
    if (slot && slot->slot == Py_tp_members) {
        int changed = 0;
#if !(PY_VERSION_HEX <= 0x030900b1 && CYTHON_COMPILING_IN_CPYTHON)
        const
#endif
            PyMemberDef *memb = (PyMemberDef*) slot->pfunc;
        while (memb && memb->name) {
            if (memb->name[0] == '_' && memb->name[1] == '_') {
#if PY_VERSION_HEX < 0x030900b1
                if (strcmp(memb->name, "__weaklistoffset__") == 0) {
                    assert(memb->type == T_PYSSIZET);
                    assert(memb->flags == READONLY);
                    type->tp_weaklistoffset = memb->offset;
                    changed = 1;
                }
                else if (strcmp(memb->name, "__dictoffset__") == 0) {
                    assert(memb->type == T_PYSSIZET);
                    assert(memb->flags == READONLY);
                    type->tp_dictoffset = memb->offset;
                    changed = 1;
                }
#if CYTHON_METH_FASTCALL
                else if (strcmp(memb->name, "__vectorcalloffset__") == 0) {
                    assert(memb->type == T_PYSSIZET);
                    assert(memb->flags == READONLY);
#if PY_VERSION_HEX >= 0x030800b4
                    type->tp_vectorcall_offset = memb->offset;
#else
                    type->tp_print = (printfunc) memb->offset;
#endif
                    changed = 1;
                }
#endif
#else
                if ((0));
#endif
#if PY_VERSION_HEX <= 0x030900b1 && CYTHON_COMPILING_IN_CPYTHON
                else if (strcmp(memb->name, "__module__") == 0) {
                    PyObject *descr;
                    assert(memb->type == T_OBJECT);
                    assert(memb->flags == 0 || memb->flags == READONLY);
                    descr = PyDescr_NewMember(type, memb);
                    if (unlikely(!descr))
                        return -1;
                    if (unlikely(PyDict_SetItem(type->tp_dict, PyDescr_NAME(descr), descr) < 0)) {
                        Py_DECREF(descr);
                        return -1;
                    }
                    Py_DECREF(descr);
                    changed = 1;
                }
#endif
            }
            memb++;
        }
        if (changed)
            PyType_Modified(type);
    }
#endif
    return 0;
}
#endif

/* PyObjectCallNoArg */
static CYTHON_INLINE PyObject* __Pyx_PyObject_CallNoArg(PyObject *func) {
    PyObject *arg[2] = {NULL, NULL};
    return __Pyx_PyObject_FastCall(func, arg + 1, 0 | __Pyx_PY_VECTORCALL_ARGUMENTS_OFFSET);
}

/* PyObjectCallOneArg */
static CYTHON_INLINE PyObject* __Pyx_PyObject_CallOneArg(PyObject *func, PyObject *arg) {
    PyObject *args[2] = {NULL, arg};
    return __Pyx_PyObject_FastCall(func, args+1, 1 | __Pyx_PY_VECTORCALL_ARGUMENTS_OFFSET);
}

/* PyObjectGetMethod */
static int __Pyx_PyObject_GetMethod(PyObject *obj, PyObject *name, PyObject **method) {
    PyObject *attr;
#if CYTHON_UNPACK_METHODS && CYTHON_COMPILING_IN_CPYTHON && CYTHON_USE_PYTYPE_LOOKUP
    __Pyx_TypeName type_name;
    PyTypeObject *tp = Py_TYPE(obj);
    PyObject *descr;
    descrgetfunc f = NULL;
    PyObject **dictptr, *dict;
    int meth_found = 0;
    assert (*method == NULL);
    if (unlikely(tp->tp_getattro != PyObject_GenericGetAttr)) {
        attr = __Pyx_PyObject_GetAttrStr(obj, name);
        goto try_unpack;
    }
    if (unlikely(tp->tp_dict == NULL) && unlikely(PyType_Ready(tp) < 0)) {
        return 0;
    }
    descr = _PyType_Lookup(tp, name);
    if (likely(descr != NULL)) {
        Py_INCREF(descr);
#if defined(Py_TPFLAGS_METHOD_DESCRIPTOR) && Py_TPFLAGS_METHOD_DESCRIPTOR
        if (__Pyx_PyType_HasFeature(Py_TYPE(descr), Py_TPFLAGS_METHOD_DESCRIPTOR))
#elif PY_MAJOR_VERSION >= 3
        #ifdef __Pyx_CyFunction_USED
        if (likely(PyFunction_Check(descr) || __Pyx_IS_TYPE(descr, &PyMethodDescr_Type) || __Pyx_CyFunction_Check(descr)))
        #else
        if (likely(PyFunction_Check(descr) || __Pyx_IS_TYPE(descr, &PyMethodDescr_Type)))
        #endif
#else
        #ifdef __Pyx_CyFunction_USED
        if (likely(PyFunction_Check(descr) || __Pyx_CyFunction_Check(descr)))
        #else
        if (likely(PyFunction_Check(descr)))
        #endif
#endif
        {
            meth_found = 1;
        } else {
            f = Py_TYPE(descr)->tp_descr_get;
            if (f != NULL && PyDescr_IsData(descr)) {
                attr = f(descr, obj, (PyObject *)Py_TYPE(obj));
                Py_DECREF(descr);
                goto try_unpack;
            }
        }
    }
    dictptr = _PyObject_GetDictPtr(obj);
    if (dictptr != NULL && (dict = *dictptr) != NULL) {
        Py_INCREF(dict);
        attr = __Pyx_PyDict_GetItemStr(dict, name);
        if (attr != NULL) {
            Py_INCREF(attr);
            Py_DECREF(dict);
            Py_XDECREF(descr);
            goto try_unpack;
        }
        Py_DECREF(dict);
    }
    if (meth_found) {
        *method = descr;
        return 1;
    }
    if (f != NULL) {
        attr = f(descr, obj, (PyObject *)Py_TYPE(obj));
        Py_DECREF(descr);
        goto try_unpack;
    }
    if (likely(descr != NULL)) {
        *method = descr;
        return 0;
    }
    type_name = __Pyx_PyType_GetName(tp);
    PyErr_Format(PyExc_AttributeError,
#if PY_MAJOR_VERSION >= 3
                 "'" __Pyx_FMT_TYPENAME "' object has no attribute '%U'",
                 type_name, name);
#else
                 "'" __Pyx_FMT_TYPENAME "' object has no attribute '%.400s'",
                 type_name, PyString_AS_STRING(name));
#endif
    __Pyx_DECREF_TypeName(type_name);
    return 0;
#else
    attr = __Pyx_PyObject_GetAttrStr(obj, name);
    goto try_unpack;
#endif
try_unpack:
#if CYTHON_UNPACK_METHODS
    if (likely(attr) && PyMethod_Check(attr) && likely(PyMethod_GET_SELF(attr) == obj)) {
        PyObject *function = PyMethod_GET_FUNCTION(attr);
        Py_INCREF(function);
        Py_DECREF(attr);
        *method = function;
        return 1;
    }
#endif
    *method = attr;
    return 0;
}

/* PyObjectCallMethod0 */
static PyObject* __Pyx_PyObject_CallMethod0(PyObject* obj, PyObject* method_name) {
    PyObject *method = NULL, *result = NULL;
    int is_method = __Pyx_PyObject_GetMethod(obj, method_name, &method);
    if (likely(is_method)) {
        result = __Pyx_PyObject_CallOneArg(method, obj);
        Py_DECREF(method);
        return result;
    }
    if (unlikely(!method)) goto bad;
    result = __Pyx_PyObject_CallNoArg(method);
    Py_DECREF(method);
bad:
    return result;
}

/* ValidateBasesTuple */
#if CYTHON_COMPILING_IN_CPYTHON || CYTHON_COMPILING_IN_LIMITED_API || CYTHON_USE_TYPE_SPECS
static int __Pyx_validate_bases_tuple(const char *type_name, Py_ssize_t dictoffset, PyObject *bases) {
    Py_ssize_t i, n;
#if CYTHON_ASSUME_SAFE_MACROS
    n = PyTuple_GET_SIZE(bases);
#else
    n = PyTuple_Size(bases);
    if (n < 0) return -1;
#endif
    for (i = 1; i < n; i++)
    {
#if CYTHON_AVOID_BORROWED_REFS
        PyObject *b0 = PySequence_GetItem(bases, i);
        if (!b0) return -1;
#elif CYTHON_ASSUME_SAFE_MACROS
        PyObject *b0 = PyTuple_GET_ITEM(bases, i);
#else
        PyObject *b0 = PyTuple_GetItem(bases, i);
        if (!b0) return -1;
#endif
        PyTypeObject *b;
#if PY_MAJOR_VERSION < 3
        if (PyClass_Check(b0))
        {
            PyErr_Format(PyExc_TypeError, "base class '%.200s' is an old-style class",
                         PyString_AS_STRING(((PyClassObject*)b0)->cl_name));
#if CYTHON_AVOID_BORROWED_REFS
            Py_DECREF(b0);
#endif
            return -1;
        }
#endif
        b = (PyTypeObject*) b0;
        if (!__Pyx_PyType_HasFeature(b, Py_TPFLAGS_HEAPTYPE))
        {
            __Pyx_TypeName b_name = __Pyx_PyType_GetName(b);
            PyErr_Format(PyExc_TypeError,
                "base class '" __Pyx_FMT_TYPENAME "' is not a heap type", b_name);
            __Pyx_DECREF_TypeName(b_name);
#if CYTHON_AVOID_BORROWED_REFS
            Py_DECREF(b0);
#endif
            return -1;
        }
        if (dictoffset == 0)
        {
            Py_ssize_t b_dictoffset = 0;
#if CYTHON_USE_TYPE_SLOTS || CYTHON_COMPILING_IN_PYPY
            b_dictoffset = b->tp_dictoffset;
#else
            PyObject *py_b_dictoffset = PyObject_GetAttrString((PyObject*)b, "__dictoffset__");
            if (!py_b_dictoffset) goto dictoffset_return;
            b_dictoffset = PyLong_AsSsize_t(py_b_dictoffset);
            Py_DECREF(py_b_dictoffset);
            if (b_dictoffset == -1 && PyErr_Occurred()) goto dictoffset_return;
#endif
            if (b_dictoffset) {
                {
                    __Pyx_TypeName b_name = __Pyx_PyType_GetName(b);
                    PyErr_Format(PyExc_TypeError,
                        "extension type '%.200s' has no __dict__ slot, "
                        "but base type '" __Pyx_FMT_TYPENAME "' has: "
                        "either add 'cdef dict __dict__' to the extension type "
                        "or add '__slots__ = [...]' to the base type",
                        type_name, b_name);
                    __Pyx_DECREF_TypeName(b_name);
                }
#if !(CYTHON_USE_TYPE_SLOTS || CYTHON_COMPILING_IN_PYPY)
              dictoffset_return:
#endif
#if CYTHON_AVOID_BORROWED_REFS
                Py_DECREF(b0);
#endif
                return -1;
            }
        }
#if CYTHON_AVOID_BORROWED_REFS
        Py_DECREF(b0);
#endif
    }
    return 0;
}
#endif

/* PyType_Ready */
static int __Pyx_PyType_Ready(PyTypeObject *t) {
#if CYTHON_USE_TYPE_SPECS || !(CYTHON_COMPILING_IN_CPYTHON || CYTHON_COMPILING_IN_LIMITED_API) || defined(PYSTON_MAJOR_VERSION)
    (void)__Pyx_PyObject_CallMethod0;
#if CYTHON_USE_TYPE_SPECS
    (void)__Pyx_validate_bases_tuple;
#endif
    return PyType_Ready(t);
#else
    int r;
    PyObject *bases = __Pyx_PyType_GetSlot(t, tp_bases, PyObject*);
    if (bases && unlikely(__Pyx_validate_bases_tuple(t->tp_name, t->tp_dictoffset, bases) == -1))
        return -1;
#if PY_VERSION_HEX >= 0x03050000 && !defined(PYSTON_MAJOR_VERSION)
    {
        int gc_was_enabled;
    #if PY_VERSION_HEX >= 0x030A00b1
        gc_was_enabled = PyGC_Disable();
        (void)__Pyx_PyObject_CallMethod0;
    #else
        PyObject *ret, *py_status;
        PyObject *gc = NULL;
        #if PY_VERSION_HEX >= 0x030700a1 && (!CYTHON_COMPILING_IN_PYPY || PYPY_VERSION_NUM+0 >= 0x07030400)
        gc = PyImport_GetModule(__pyx_kp_u_gc);
        #endif
        if (unlikely(!gc)) gc = PyImport_Import(__pyx_kp_u_gc);
        if (unlikely(!gc)) return -1;
        py_status = __Pyx_PyObject_CallMethod0(gc, __pyx_kp_u_isenabled);
        if (unlikely(!py_status)) {
            Py_DECREF(gc);
            return -1;
        }
        gc_was_enabled = __Pyx_PyObject_IsTrue(py_status);
        Py_DECREF(py_status);
        if (gc_was_enabled > 0) {
            ret = __Pyx_PyObject_CallMethod0(gc, __pyx_kp_u_disable);
            if (unlikely(!ret)) {
                Py_DECREF(gc);
                return -1;
            }
            Py_DECREF(ret);
        } else if (unlikely(gc_was_enabled == -1)) {
            Py_DECREF(gc);
            return -1;
        }
    #endif
        t->tp_flags |= Py_TPFLAGS_HEAPTYPE;
#if PY_VERSION_HEX >= 0x030A0000
        t->tp_flags |= Py_TPFLAGS_IMMUTABLETYPE;
#endif
#else
        (void)__Pyx_PyObject_CallMethod0;
#endif
    r = PyType_Ready(t);
#if PY_VERSION_HEX >= 0x03050000 && !defined(PYSTON_MAJOR_VERSION)
        t->tp_flags &= ~Py_TPFLAGS_HEAPTYPE;
    #if PY_VERSION_HEX >= 0x030A00b1
        if (gc_was_enabled)
            PyGC_Enable();
    #else
        if (gc_was_enabled) {
            PyObject *tp, *v, *tb;
            PyErr_Fetch(&tp, &v, &tb);
            ret = __Pyx_PyObject_CallMethod0(gc, __pyx_kp_u_enable);
            if (likely(ret || r == -1)) {
                Py_XDECREF(ret);
                PyErr_Restore(tp, v, tb);
            } else {
                Py_XDECREF(tp);
                Py_XDECREF(v);
                Py_XDECREF(tb);
                r = -1;
            }
        }
        Py_DECREF(gc);
    #endif
    }
#endif
    return r;
#endif
}

/* PyObject_GenericGetAttrNoDict */
#if CYTHON_USE_TYPE_SLOTS && CYTHON_USE_PYTYPE_LOOKUP && PY_VERSION_HEX < 0x03070000
static PyObject *__Pyx_RaiseGenericGetAttributeError(PyTypeObject *tp, PyObject *attr_name) {
    __Pyx_TypeName type_name = __Pyx_PyType_GetName(tp);
    PyErr_Format(PyExc_AttributeError,
#if PY_MAJOR_VERSION >= 3
                 "'" __Pyx_FMT_TYPENAME "' object has no attribute '%U'",
                 type_name, attr_name);
#else
                 "'" __Pyx_FMT_TYPENAME "' object has no attribute '%.400s'",
                 type_name, PyString_AS_STRING(attr_name));
#endif
    __Pyx_DECREF_TypeName(type_name);
    return NULL;
}
static CYTHON_INLINE PyObject* __Pyx_PyObject_GenericGetAttrNoDict(PyObject* obj, PyObject* attr_name) {
    PyObject *descr;
    PyTypeObject *tp = Py_TYPE(obj);
    if (unlikely(!PyString_Check(attr_name))) {
        return PyObject_GenericGetAttr(obj, attr_name);
    }
    assert(!tp->tp_dictoffset);
    descr = _PyType_Lookup(tp, attr_name);
    if (unlikely(!descr)) {
        return __Pyx_RaiseGenericGetAttributeError(tp, attr_name);
    }
    Py_INCREF(descr);
    #if PY_MAJOR_VERSION < 3
    if (likely(PyType_HasFeature(Py_TYPE(descr), Py_TPFLAGS_HAVE_CLASS)))
    #endif
    {
        descrgetfunc f = Py_TYPE(descr)->tp_descr_get;
        if (unlikely(f)) {
            PyObject *res = f(descr, obj, (PyObject *)tp);
            Py_DECREF(descr);
            return res;
        }
    }
    return descr;
}
#endif

/* Import */
static PyObject *__Pyx_Import(PyObject *name, PyObject *from_list, int level) {
    PyObject *module = 0;
    PyObject *empty_dict = 0;
    PyObject *empty_list = 0;
    #if PY_MAJOR_VERSION < 3
    PyObject *py_import;
    py_import = __Pyx_PyObject_GetAttrStr(__pyx_b, __pyx_n_s_import);
    if (unlikely(!py_import))
        goto bad;
    if (!from_list) {
        empty_list = PyList_New(0);
        if (unlikely(!empty_list))
            goto bad;
        from_list = empty_list;
    }
    #endif
    empty_dict = PyDict_New();
    if (unlikely(!empty_dict))
        goto bad;
    {
        #if PY_MAJOR_VERSION >= 3
        if (level == -1) {
            if (strchr(__Pyx_MODULE_NAME, '.') != NULL) {
                module = PyImport_ImportModuleLevelObject(
                    name, __pyx_d, empty_dict, from_list, 1);
                if (unlikely(!module)) {
                    if (unlikely(!PyErr_ExceptionMatches(PyExc_ImportError)))
                        goto bad;
                    PyErr_Clear();
                }
            }
            level = 0;
        }
        #endif
        if (!module) {
            #if PY_MAJOR_VERSION < 3
            PyObject *py_level = PyInt_FromLong(level);
            if (unlikely(!py_level))
                goto bad;
            module = PyObject_CallFunctionObjArgs(py_import,
                name, __pyx_d, empty_dict, from_list, py_level, (PyObject *)NULL);
            Py_DECREF(py_level);
            #else
            module = PyImport_ImportModuleLevelObject(
                name, __pyx_d, empty_dict, from_list, level);
            #endif
        }
    }
bad:
    Py_XDECREF(empty_dict);
    Py_XDECREF(empty_list);
    #if PY_MAJOR_VERSION < 3
    Py_XDECREF(py_import);
    #endif
    return module;
}

/* ImportDottedModule */
#if PY_MAJOR_VERSION >= 3
static PyObject *__Pyx__ImportDottedModule_Error(PyObject *name, PyObject *parts_tuple, Py_ssize_t count) {
    PyObject *partial_name = NULL, *slice = NULL, *sep = NULL;
    if (unlikely(PyErr_Occurred())) {
        PyErr_Clear();
    }
    if (likely(PyTuple_GET_SIZE(parts_tuple) == count)) {
        partial_name = name;
    } else {
        slice = PySequence_GetSlice(parts_tuple, 0, count);
        if (unlikely(!slice))
            goto bad;
        sep = PyUnicode_FromStringAndSize(".", 1);
        if (unlikely(!sep))
            goto bad;
        partial_name = PyUnicode_Join(sep, slice);
    }
    PyErr_Format(
#if PY_MAJOR_VERSION < 3
        PyExc_ImportError,
        "No module named '%s'", PyString_AS_STRING(partial_name));
#else
#if PY_VERSION_HEX >= 0x030600B1
        PyExc_ModuleNotFoundError,
#else
        PyExc_ImportError,
#endif
        "No module named '%U'", partial_name);
#endif
bad:
    Py_XDECREF(sep);
    Py_XDECREF(slice);
    Py_XDECREF(partial_name);
    return NULL;
}
#endif
#if PY_MAJOR_VERSION >= 3
static PyObject *__Pyx__ImportDottedModule_Lookup(PyObject *name) {
    PyObject *imported_module;
#if PY_VERSION_HEX < 0x030700A1 || (CYTHON_COMPILING_IN_PYPY && PYPY_VERSION_NUM  < 0x07030400)
    PyObject *modules = PyImport_GetModuleDict();
    if (unlikely(!modules))
        return NULL;
    imported_module = __Pyx_PyDict_GetItemStr(modules, name);
    Py_XINCREF(imported_module);
#else
    imported_module = PyImport_GetModule(name);
#endif
    return imported_module;
}
#endif
#if PY_MAJOR_VERSION >= 3
static PyObject *__Pyx_ImportDottedModule_WalkParts(PyObject *module, PyObject *name, PyObject *parts_tuple) {
    Py_ssize_t i, nparts;
    nparts = PyTuple_GET_SIZE(parts_tuple);
    for (i=1; i < nparts && module; i++) {
        PyObject *part, *submodule;
#if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
        part = PyTuple_GET_ITEM(parts_tuple, i);
#else
        part = PySequence_ITEM(parts_tuple, i);
#endif
        submodule = __Pyx_PyObject_GetAttrStrNoError(module, part);
#if !(CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS)
        Py_DECREF(part);
#endif
        Py_DECREF(module);
        module = submodule;
    }
    if (unlikely(!module)) {
        return __Pyx__ImportDottedModule_Error(name, parts_tuple, i);
    }
    return module;
}
#endif
static PyObject *__Pyx__ImportDottedModule(PyObject *name, PyObject *parts_tuple) {
#if PY_MAJOR_VERSION < 3
    PyObject *module, *from_list, *star = __pyx_n_s_;
    CYTHON_UNUSED_VAR(parts_tuple);
    from_list = PyList_New(1);
    if (unlikely(!from_list))
        return NULL;
    Py_INCREF(star);
    PyList_SET_ITEM(from_list, 0, star);
    module = __Pyx_Import(name, from_list, 0);
    Py_DECREF(from_list);
    return module;
#else
    PyObject *imported_module;
    PyObject *module = __Pyx_Import(name, NULL, 0);
    if (!parts_tuple || unlikely(!module))
        return module;
    imported_module = __Pyx__ImportDottedModule_Lookup(name);
    if (likely(imported_module)) {
        Py_DECREF(module);
        return imported_module;
    }
    PyErr_Clear();
    return __Pyx_ImportDottedModule_WalkParts(module, name, parts_tuple);
#endif
}
static PyObject *__Pyx_ImportDottedModule(PyObject *name, PyObject *parts_tuple) {
#if CYTHON_COMPILING_IN_CPYTHON && PY_VERSION_HEX >= 0x030400B1
    PyObject *module = __Pyx__ImportDottedModule_Lookup(name);
    if (likely(module)) {
        PyObject *spec = __Pyx_PyObject_GetAttrStrNoError(module, __pyx_n_s_spec);
        if (likely(spec)) {
            PyObject *unsafe = __Pyx_PyObject_GetAttrStrNoError(spec, __pyx_n_s_initializing);
            if (likely(!unsafe || !__Pyx_PyObject_IsTrue(unsafe))) {
                Py_DECREF(spec);
                spec = NULL;
            }
            Py_XDECREF(unsafe);
        }
        if (likely(!spec)) {
            PyErr_Clear();
            return module;
        }
        Py_DECREF(spec);
        Py_DECREF(module);
    } else if (PyErr_Occurred()) {
        PyErr_Clear();
    }
#endif
    return __Pyx__ImportDottedModule(name, parts_tuple);
}

/* PyObjectCall2Args */
static CYTHON_INLINE PyObject* __Pyx_PyObject_Call2Args(PyObject* function, PyObject* arg1, PyObject* arg2) {
    PyObject *args[3] = {NULL, arg1, arg2};
    return __Pyx_PyObject_FastCall(function, args+1, 2 | __Pyx_PY_VECTORCALL_ARGUMENTS_OFFSET);
}

/* PyObjectCallMethod1 */
#if !(CYTHON_VECTORCALL && __PYX_LIMITED_VERSION_HEX >= 0x030C00A2)
static PyObject* __Pyx__PyObject_CallMethod1(PyObject* method, PyObject* arg) {
    PyObject *result = __Pyx_PyObject_CallOneArg(method, arg);
    Py_DECREF(method);
    return result;
}
#endif
static PyObject* __Pyx_PyObject_CallMethod1(PyObject* obj, PyObject* method_name, PyObject* arg) {
#if CYTHON_VECTORCALL && __PYX_LIMITED_VERSION_HEX >= 0x030C00A2
    PyObject *args[2] = {obj, arg};
    (void) __Pyx_PyObject_GetMethod;
    (void) __Pyx_PyObject_CallOneArg;
    (void) __Pyx_PyObject_Call2Args;
    return PyObject_VectorcallMethod(method_name, args, 2 | PY_VECTORCALL_ARGUMENTS_OFFSET, NULL);
#else
    PyObject *method = NULL, *result;
    int is_method = __Pyx_PyObject_GetMethod(obj, method_name, &method);
    if (likely(is_method)) {
        result = __Pyx_PyObject_Call2Args(method, obj, arg);
        Py_DECREF(method);
        return result;
    }
    if (unlikely(!method)) return NULL;
    return __Pyx__PyObject_CallMethod1(method, arg);
#endif
}

/* StringJoin */
static CYTHON_INLINE PyObject* __Pyx_PyBytes_Join(PyObject* sep, PyObject* values) {
    (void) __Pyx_PyObject_CallMethod1;
#if CYTHON_COMPILING_IN_CPYTHON && PY_MAJOR_VERSION < 3
    return _PyString_Join(sep, values);
#elif CYTHON_COMPILING_IN_CPYTHON && PY_VERSION_HEX < 0x030d0000
    return _PyBytes_Join(sep, values);
#else
    return __Pyx_PyObject_CallMethod1(sep, __pyx_n_s_join, values);
#endif
}

/* PyExec */
static CYTHON_INLINE PyObject* __Pyx_PyExec2(PyObject* o, PyObject* globals) {
    return __Pyx_PyExec3(o, globals, NULL);
}
static PyObject* __Pyx_PyExec3(PyObject* o, PyObject* globals, PyObject* locals) {
    PyObject* result;
    PyObject* s = 0;
    char *code = 0;
    if (!globals || globals == Py_None) {
        globals = __pyx_d;
    } else if (unlikely(!PyDict_Check(globals))) {
        __Pyx_TypeName globals_type_name =
            __Pyx_PyType_GetName(Py_TYPE(globals));
        PyErr_Format(PyExc_TypeError,
                     "exec() arg 2 must be a dict, not " __Pyx_FMT_TYPENAME,
                     globals_type_name);
        __Pyx_DECREF_TypeName(globals_type_name);
        goto bad;
    }
    if (!locals || locals == Py_None) {
        locals = globals;
    }
    if (__Pyx_PyDict_GetItemStr(globals, __pyx_n_s_builtins) == NULL) {
        if (unlikely(PyDict_SetItem(globals, __pyx_n_s_builtins, PyEval_GetBuiltins()) < 0))
            goto bad;
    }
    if (PyCode_Check(o)) {
        if (unlikely(__Pyx_PyCode_HasFreeVars((PyCodeObject *)o))) {
            PyErr_SetString(PyExc_TypeError,
                "code object passed to exec() may not contain free variables");
            goto bad;
        }
        #if PY_VERSION_HEX < 0x030200B1 || (CYTHON_COMPILING_IN_PYPY && PYPY_VERSION_NUM < 0x07030400)
        result = PyEval_EvalCode((PyCodeObject *)o, globals, locals);
        #else
        result = PyEval_EvalCode(o, globals, locals);
        #endif
    } else {
        PyCompilerFlags cf;
        cf.cf_flags = 0;
#if PY_VERSION_HEX >= 0x030800A3
        cf.cf_feature_version = PY_MINOR_VERSION;
#endif
        if (PyUnicode_Check(o)) {
            cf.cf_flags = PyCF_SOURCE_IS_UTF8;
            s = PyUnicode_AsUTF8String(o);
            if (unlikely(!s)) goto bad;
            o = s;
        #if PY_MAJOR_VERSION >= 3
        } else if (unlikely(!PyBytes_Check(o))) {
        #else
        } else if (unlikely(!PyString_Check(o))) {
        #endif
            __Pyx_TypeName o_type_name = __Pyx_PyType_GetName(Py_TYPE(o));
            PyErr_Format(PyExc_TypeError,
                "exec: arg 1 must be string, bytes or code object, got " __Pyx_FMT_TYPENAME,
                o_type_name);
            __Pyx_DECREF_TypeName(o_type_name);
            goto bad;
        }
        #if PY_MAJOR_VERSION >= 3
        code = PyBytes_AS_STRING(o);
        #else
        code = PyString_AS_STRING(o);
        #endif
        if (PyEval_MergeCompilerFlags(&cf)) {
            result = PyRun_StringFlags(code, Py_file_input, globals, locals, &cf);
        } else {
            result = PyRun_String(code, Py_file_input, globals, locals);
        }
        Py_XDECREF(s);
    }
    return result;
bad:
    Py_XDECREF(s);
    return 0;
}

/* PyExecGlobals */
static PyObject* __Pyx_PyExecGlobals(PyObject* code) {
    return __Pyx_PyExec2(code, __pyx_d);
}

/* CLineInTraceback */
#ifndef CYTHON_CLINE_IN_TRACEBACK
static int __Pyx_CLineForTraceback(PyThreadState *tstate, int c_line) {
    PyObject *use_cline;
    PyObject *ptype, *pvalue, *ptraceback;
#if CYTHON_COMPILING_IN_CPYTHON
    PyObject **cython_runtime_dict;
#endif
    CYTHON_MAYBE_UNUSED_VAR(tstate);
    if (unlikely(!__pyx_cython_runtime)) {
        return c_line;
    }
    __Pyx_ErrFetchInState(tstate, &ptype, &pvalue, &ptraceback);
#if CYTHON_COMPILING_IN_CPYTHON
    cython_runtime_dict = _PyObject_GetDictPtr(__pyx_cython_runtime);
    if (likely(cython_runtime_dict)) {
        __PYX_PY_DICT_LOOKUP_IF_MODIFIED(
            use_cline, *cython_runtime_dict,
            __Pyx_PyDict_GetItemStr(*cython_runtime_dict, __pyx_n_s_cline_in_traceback))
    } else
#endif
    {
      PyObject *use_cline_obj = __Pyx_PyObject_GetAttrStrNoError(__pyx_cython_runtime, __pyx_n_s_cline_in_traceback);
      if (use_cline_obj) {
        use_cline = PyObject_Not(use_cline_obj) ? Py_False : Py_True;
        Py_DECREF(use_cline_obj);
      } else {
        PyErr_Clear();
        use_cline = NULL;
      }
    }
    if (!use_cline) {
        c_line = 0;
        (void) PyObject_SetAttr(__pyx_cython_runtime, __pyx_n_s_cline_in_traceback, Py_False);
    }
    else if (use_cline == Py_False || (use_cline != Py_True && PyObject_Not(use_cline) != 0)) {
        c_line = 0;
    }
    __Pyx_ErrRestoreInState(tstate, ptype, pvalue, ptraceback);
    return c_line;
}
#endif

/* CodeObjectCache */
#if !CYTHON_COMPILING_IN_LIMITED_API
static int __pyx_bisect_code_objects(__Pyx_CodeObjectCacheEntry* entries, int count, int code_line) {
    int start = 0, mid = 0, end = count - 1;
    if (end >= 0 && code_line > entries[end].code_line) {
        return count;
    }
    while (start < end) {
        mid = start + (end - start) / 2;
        if (code_line < entries[mid].code_line) {
            end = mid;
        } else if (code_line > entries[mid].code_line) {
             start = mid + 1;
        } else {
            return mid;
        }
    }
    if (code_line <= entries[mid].code_line) {
        return mid;
    } else {
        return mid + 1;
    }
}
static PyCodeObject *__pyx_find_code_object(int code_line) {
    PyCodeObject* code_object;
    int pos;
    if (unlikely(!code_line) || unlikely(!__pyx_code_cache.entries)) {
        return NULL;
    }
    pos = __pyx_bisect_code_objects(__pyx_code_cache.entries, __pyx_code_cache.count, code_line);
    if (unlikely(pos >= __pyx_code_cache.count) || unlikely(__pyx_code_cache.entries[pos].code_line != code_line)) {
        return NULL;
    }
    code_object = __pyx_code_cache.entries[pos].code_object;
    Py_INCREF(code_object);
    return code_object;
}
static void __pyx_insert_code_object(int code_line, PyCodeObject* code_object) {
    int pos, i;
    __Pyx_CodeObjectCacheEntry* entries = __pyx_code_cache.entries;
    if (unlikely(!code_line)) {
        return;
    }
    if (unlikely(!entries)) {
        entries = (__Pyx_CodeObjectCacheEntry*)PyMem_Malloc(64*sizeof(__Pyx_CodeObjectCacheEntry));
        if (likely(entries)) {
            __pyx_code_cache.entries = entries;
            __pyx_code_cache.max_count = 64;
            __pyx_code_cache.count = 1;
            entries[0].code_line = code_line;
            entries[0].code_object = code_object;
            Py_INCREF(code_object);
        }
        return;
    }
    pos = __pyx_bisect_code_objects(__pyx_code_cache.entries, __pyx_code_cache.count, code_line);
    if ((pos < __pyx_code_cache.count) && unlikely(__pyx_code_cache.entries[pos].code_line == code_line)) {
        PyCodeObject* tmp = entries[pos].code_object;
        entries[pos].code_object = code_object;
        Py_DECREF(tmp);
        return;
    }
    if (__pyx_code_cache.count == __pyx_code_cache.max_count) {
        int new_max = __pyx_code_cache.max_count + 64;
        entries = (__Pyx_CodeObjectCacheEntry*)PyMem_Realloc(
            __pyx_code_cache.entries, ((size_t)new_max) * sizeof(__Pyx_CodeObjectCacheEntry));
        if (unlikely(!entries)) {
            return;
        }
        __pyx_code_cache.entries = entries;
        __pyx_code_cache.max_count = new_max;
    }
    for (i=__pyx_code_cache.count; i>pos; i--) {
        entries[i] = entries[i-1];
    }
    entries[pos].code_line = code_line;
    entries[pos].code_object = code_object;
    __pyx_code_cache.count++;
    Py_INCREF(code_object);
}
#endif

/* AddTraceback */
#include "compile.h"
#include "frameobject.h"
#include "traceback.h"
#if PY_VERSION_HEX >= 0x030b00a6 && !CYTHON_COMPILING_IN_LIMITED_API
  #ifndef Py_BUILD_CORE
    #define Py_BUILD_CORE 1
  #endif
  #include "internal/pycore_frame.h"
#endif
#if CYTHON_COMPILING_IN_LIMITED_API
static PyObject *__Pyx_PyCode_Replace_For_AddTraceback(PyObject *code, PyObject *scratch_dict,
                                                       PyObject *firstlineno, PyObject *name) {
    PyObject *replace = NULL;
    if (unlikely(PyDict_SetItemString(scratch_dict, "co_firstlineno", firstlineno))) return NULL;
    if (unlikely(PyDict_SetItemString(scratch_dict, "co_name", name))) return NULL;
    replace = PyObject_GetAttrString(code, "replace");
    if (likely(replace)) {
        PyObject *result;
        result = PyObject_Call(replace, __pyx_empty_tuple, scratch_dict);
        Py_DECREF(replace);
        return result;
    }
    PyErr_Clear();
    #if __PYX_LIMITED_VERSION_HEX < 0x030780000
    {
        PyObject *compiled = NULL, *result = NULL;
        if (unlikely(PyDict_SetItemString(scratch_dict, "code", code))) return NULL;
        if (unlikely(PyDict_SetItemString(scratch_dict, "type", (PyObject*)(&PyType_Type)))) return NULL;
        compiled = Py_CompileString(
            "out = type(code)(\n"
            "  code.co_argcount, code.co_kwonlyargcount, code.co_nlocals, code.co_stacksize,\n"
            "  code.co_flags, code.co_code, code.co_consts, code.co_names,\n"
            "  code.co_varnames, code.co_filename, co_name, co_firstlineno,\n"
            "  code.co_lnotab)\n", "<dummy>", Py_file_input);
        if (!compiled) return NULL;
        result = PyEval_EvalCode(compiled, scratch_dict, scratch_dict);
        Py_DECREF(compiled);
        if (!result) PyErr_Print();
        Py_DECREF(result);
        result = PyDict_GetItemString(scratch_dict, "out");
        if (result) Py_INCREF(result);
        return result;
    }
    #else
    return NULL;
    #endif
}
static void __Pyx_AddTraceback(const char *funcname, int c_line,
                               int py_line, const char *filename) {
    PyObject *code_object = NULL, *py_py_line = NULL, *py_funcname = NULL, *dict = NULL;
    PyObject *replace = NULL, *getframe = NULL, *frame = NULL;
    PyObject *exc_type, *exc_value, *exc_traceback;
    int success = 0;
    if (c_line) {
        (void) __pyx_cfilenm;
        (void) __Pyx_CLineForTraceback(__Pyx_PyThreadState_Current, c_line);
    }
    PyErr_Fetch(&exc_type, &exc_value, &exc_traceback);
    code_object = Py_CompileString("_getframe()", filename, Py_eval_input);
    if (unlikely(!code_object)) goto bad;
    py_py_line = PyLong_FromLong(py_line);
    if (unlikely(!py_py_line)) goto bad;
    py_funcname = PyUnicode_FromString(funcname);
    if (unlikely(!py_funcname)) goto bad;
    dict = PyDict_New();
    if (unlikely(!dict)) goto bad;
    {
        PyObject *old_code_object = code_object;
        code_object = __Pyx_PyCode_Replace_For_AddTraceback(code_object, dict, py_py_line, py_funcname);
        Py_DECREF(old_code_object);
    }
    if (unlikely(!code_object)) goto bad;
    getframe = PySys_GetObject("_getframe");
    if (unlikely(!getframe)) goto bad;
    if (unlikely(PyDict_SetItemString(dict, "_getframe", getframe))) goto bad;
    frame = PyEval_EvalCode(code_object, dict, dict);
    if (unlikely(!frame) || frame == Py_None) goto bad;
    success = 1;
  bad:
    PyErr_Restore(exc_type, exc_value, exc_traceback);
    Py_XDECREF(code_object);
    Py_XDECREF(py_py_line);
    Py_XDECREF(py_funcname);
    Py_XDECREF(dict);
    Py_XDECREF(replace);
    if (success) {
        PyTraceBack_Here(
            (struct _frame*)frame);
    }
    Py_XDECREF(frame);
}
#else
static PyCodeObject* __Pyx_CreateCodeObjectForTraceback(
            const char *funcname, int c_line,
            int py_line, const char *filename) {
    PyCodeObject *py_code = NULL;
    PyObject *py_funcname = NULL;
    #if PY_MAJOR_VERSION < 3
    PyObject *py_srcfile = NULL;
    py_srcfile = PyString_FromString(filename);
    if (!py_srcfile) goto bad;
    #endif
    if (c_line) {
        #if PY_MAJOR_VERSION < 3
        py_funcname = PyString_FromFormat( "%s (%s:%d)", funcname, __pyx_cfilenm, c_line);
        if (!py_funcname) goto bad;
        #else
        py_funcname = PyUnicode_FromFormat( "%s (%s:%d)", funcname, __pyx_cfilenm, c_line);
        if (!py_funcname) goto bad;
        funcname = PyUnicode_AsUTF8(py_funcname);
        if (!funcname) goto bad;
        #endif
    }
    else {
        #if PY_MAJOR_VERSION < 3
        py_funcname = PyString_FromString(funcname);
        if (!py_funcname) goto bad;
        #endif
    }
    #if PY_MAJOR_VERSION < 3
    py_code = __Pyx_PyCode_New(
        0,
        0,
        0,
        0,
        0,
        0,
        __pyx_empty_bytes, /*PyObject *code,*/
        __pyx_empty_tuple, /*PyObject *consts,*/
        __pyx_empty_tuple, /*PyObject *names,*/
        __pyx_empty_tuple, /*PyObject *varnames,*/
        __pyx_empty_tuple, /*PyObject *freevars,*/
        __pyx_empty_tuple, /*PyObject *cellvars,*/
        py_srcfile,   /*PyObject *filename,*/
        py_funcname,  /*PyObject *name,*/
        py_line,
        __pyx_empty_bytes  /*PyObject *lnotab*/
    );
    Py_DECREF(py_srcfile);
    #else
    py_code = PyCode_NewEmpty(filename, funcname, py_line);
    #endif
    Py_XDECREF(py_funcname);
    return py_code;
bad:
    Py_XDECREF(py_funcname);
    #if PY_MAJOR_VERSION < 3
    Py_XDECREF(py_srcfile);
    #endif
    return NULL;
}
static void __Pyx_AddTraceback(const char *funcname, int c_line,
                               int py_line, const char *filename) {
    PyCodeObject *py_code = 0;
    PyFrameObject *py_frame = 0;
    PyThreadState *tstate = __Pyx_PyThreadState_Current;
    PyObject *ptype, *pvalue, *ptraceback;
    if (c_line) {
        c_line = __Pyx_CLineForTraceback(tstate, c_line);
    }
    py_code = __pyx_find_code_object(c_line ? -c_line : py_line);
    if (!py_code) {
        __Pyx_ErrFetchInState(tstate, &ptype, &pvalue, &ptraceback);
        py_code = __Pyx_CreateCodeObjectForTraceback(
            funcname, c_line, py_line, filename);
        if (!py_code) {
            /* If the code object creation fails, then we should clear the
               fetched exception references and propagate the new exception */
            Py_XDECREF(ptype);
            Py_XDECREF(pvalue);
            Py_XDECREF(ptraceback);
            goto bad;
        }
        __Pyx_ErrRestoreInState(tstate, ptype, pvalue, ptraceback);
        __pyx_insert_code_object(c_line ? -c_line : py_line, py_code);
    }
    py_frame = PyFrame_New(
        tstate,            /*PyThreadState *tstate,*/
        py_code,           /*PyCodeObject *code,*/
        __pyx_d,    /*PyObject *globals,*/
        0                  /*PyObject *locals*/
    );
    if (!py_frame) goto bad;
    __Pyx_PyFrame_SetLineNumber(py_frame, py_line);
    PyTraceBack_Here(py_frame);
bad:
    Py_XDECREF(py_code);
    Py_XDECREF(py_frame);
}
#endif

/* CIntFromPyVerify */
#define __PYX_VERIFY_RETURN_INT(target_type, func_type, func_value)\
    __PYX__VERIFY_RETURN_INT(target_type, func_type, func_value, 0)
#define __PYX_VERIFY_RETURN_INT_EXC(target_type, func_type, func_value)\
    __PYX__VERIFY_RETURN_INT(target_type, func_type, func_value, 1)
#define __PYX__VERIFY_RETURN_INT(target_type, func_type, func_value, exc)\
    {\
        func_type value = func_value;\
        if (sizeof(target_type) < sizeof(func_type)) {\
            if (unlikely(value != (func_type) (target_type) value)) {\
                func_type zero = 0;\
                if (exc && unlikely(value == (func_type)-1 && PyErr_Occurred()))\
                    return (target_type) -1;\
                if (is_unsigned && unlikely(value < zero))\
                    goto raise_neg_overflow;\
                else\
                    goto raise_overflow;\
            }\
        }\
        return (target_type) value;\
    }

/* CIntFromPy */
static CYTHON_INLINE long __Pyx_PyInt_As_long(PyObject *x) {
#ifdef __Pyx_HAS_GCC_DIAGNOSTIC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wconversion"
#endif
    const long neg_one = (long) -1, const_zero = (long) 0;
#ifdef __Pyx_HAS_GCC_DIAGNOSTIC
#pragma GCC diagnostic pop
#endif
    const int is_unsigned = neg_one > const_zero;
#if PY_MAJOR_VERSION < 3
    if (likely(PyInt_Check(x))) {
        if ((sizeof(long) < sizeof(long))) {
            __PYX_VERIFY_RETURN_INT(long, long, PyInt_AS_LONG(x))
        } else {
            long val = PyInt_AS_LONG(x);
            if (is_unsigned && unlikely(val < 0)) {
                goto raise_neg_overflow;
            }
            return (long) val;
        }
    }
#endif
    if (unlikely(!PyLong_Check(x))) {
        long val;
        PyObject *tmp = __Pyx_PyNumber_IntOrLong(x);
        if (!tmp) return (long) -1;
        val = __Pyx_PyInt_As_long(tmp);
        Py_DECREF(tmp);
        return val;
    }
    if (is_unsigned) {
#if CYTHON_USE_PYLONG_INTERNALS
        if (unlikely(__Pyx_PyLong_IsNeg(x))) {
            goto raise_neg_overflow;
        } else if (__Pyx_PyLong_IsCompact(x)) {
            __PYX_VERIFY_RETURN_INT(long, __Pyx_compact_upylong, __Pyx_PyLong_CompactValueUnsigned(x))
        } else {
            const digit* digits = __Pyx_PyLong_Digits(x);
            assert(__Pyx_PyLong_DigitCount(x) > 1);
            switch (__Pyx_PyLong_DigitCount(x)) {
                case 2:
                    if ((8 * sizeof(long) > 1 * PyLong_SHIFT)) {
                        if ((8 * sizeof(unsigned long) > 2 * PyLong_SHIFT)) {
                            __PYX_VERIFY_RETURN_INT(long, unsigned long, (((((unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                        } else if ((8 * sizeof(long) >= 2 * PyLong_SHIFT)) {
                            return (long) (((((long)digits[1]) << PyLong_SHIFT) | (long)digits[0]));
                        }
                    }
                    break;
                case 3:
                    if ((8 * sizeof(long) > 2 * PyLong_SHIFT)) {
                        if ((8 * sizeof(unsigned long) > 3 * PyLong_SHIFT)) {
                            __PYX_VERIFY_RETURN_INT(long, unsigned long, (((((((unsigned long)digits[2]) << PyLong_SHIFT) | (unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                        } else if ((8 * sizeof(long) >= 3 * PyLong_SHIFT)) {
                            return (long) (((((((long)digits[2]) << PyLong_SHIFT) | (long)digits[1]) << PyLong_SHIFT) | (long)digits[0]));
                        }
                    }
                    break;
                case 4:
                    if ((8 * sizeof(long) > 3 * PyLong_SHIFT)) {
                        if ((8 * sizeof(unsigned long) > 4 * PyLong_SHIFT)) {
                            __PYX_VERIFY_RETURN_INT(long, unsigned long, (((((((((unsigned long)digits[3]) << PyLong_SHIFT) | (unsigned long)digits[2]) << PyLong_SHIFT) | (unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                        } else if ((8 * sizeof(long) >= 4 * PyLong_SHIFT)) {
                            return (long) (((((((((long)digits[3]) << PyLong_SHIFT) | (long)digits[2]) << PyLong_SHIFT) | (long)digits[1]) << PyLong_SHIFT) | (long)digits[0]));
                        }
                    }
                    break;
            }
        }
#endif
#if CYTHON_COMPILING_IN_CPYTHON && PY_VERSION_HEX < 0x030C00A7
        if (unlikely(Py_SIZE(x) < 0)) {
            goto raise_neg_overflow;
        }
#else
        {
            int result = PyObject_RichCompareBool(x, Py_False, Py_LT);
            if (unlikely(result < 0))
                return (long) -1;
            if (unlikely(result == 1))
                goto raise_neg_overflow;
        }
#endif
        if ((sizeof(long) <= sizeof(unsigned long))) {
            __PYX_VERIFY_RETURN_INT_EXC(long, unsigned long, PyLong_AsUnsignedLong(x))
#ifdef HAVE_LONG_LONG
        } else if ((sizeof(long) <= sizeof(unsigned PY_LONG_LONG))) {
            __PYX_VERIFY_RETURN_INT_EXC(long, unsigned PY_LONG_LONG, PyLong_AsUnsignedLongLong(x))
#endif
        }
    } else {
#if CYTHON_USE_PYLONG_INTERNALS
        if (__Pyx_PyLong_IsCompact(x)) {
            __PYX_VERIFY_RETURN_INT(long, __Pyx_compact_pylong, __Pyx_PyLong_CompactValue(x))
        } else {
            const digit* digits = __Pyx_PyLong_Digits(x);
            assert(__Pyx_PyLong_DigitCount(x) > 1);
            switch (__Pyx_PyLong_SignedDigitCount(x)) {
                case -2:
                    if ((8 * sizeof(long) - 1 > 1 * PyLong_SHIFT)) {
                        if ((8 * sizeof(unsigned long) > 2 * PyLong_SHIFT)) {
                            __PYX_VERIFY_RETURN_INT(long, long, -(long) (((((unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                        } else if ((8 * sizeof(long) - 1 > 2 * PyLong_SHIFT)) {
                            return (long) (((long)-1)*(((((long)digits[1]) << PyLong_SHIFT) | (long)digits[0])));
                        }
                    }
                    break;
                case 2:
                    if ((8 * sizeof(long) > 1 * PyLong_SHIFT)) {
                        if ((8 * sizeof(unsigned long) > 2 * PyLong_SHIFT)) {
                            __PYX_VERIFY_RETURN_INT(long, unsigned long, (((((unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                        } else if ((8 * sizeof(long) - 1 > 2 * PyLong_SHIFT)) {
                            return (long) ((((((long)digits[1]) << PyLong_SHIFT) | (long)digits[0])));
                        }
                    }
                    break;
                case -3:
                    if ((8 * sizeof(long) - 1 > 2 * PyLong_SHIFT)) {
                        if ((8 * sizeof(unsigned long) > 3 * PyLong_SHIFT)) {
                            __PYX_VERIFY_RETURN_INT(long, long, -(long) (((((((unsigned long)digits[2]) << PyLong_SHIFT) | (unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                        } else if ((8 * sizeof(long) - 1 > 3 * PyLong_SHIFT)) {
                            return (long) (((long)-1)*(((((((long)digits[2]) << PyLong_SHIFT) | (long)digits[1]) << PyLong_SHIFT) | (long)digits[0])));
                        }
                    }
                    break;
                case 3:
                    if ((8 * sizeof(long) > 2 * PyLong_SHIFT)) {
                        if ((8 * sizeof(unsigned long) > 3 * PyLong_SHIFT)) {
                            __PYX_VERIFY_RETURN_INT(long, unsigned long, (((((((unsigned long)digits[2]) << PyLong_SHIFT) | (unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                        } else if ((8 * sizeof(long) - 1 > 3 * PyLong_SHIFT)) {
                            return (long) ((((((((long)digits[2]) << PyLong_SHIFT) | (long)digits[1]) << PyLong_SHIFT) | (long)digits[0])));
                        }
                    }
                    break;
                case -4:
                    if ((8 * sizeof(long) - 1 > 3 * PyLong_SHIFT)) {
                        if ((8 * sizeof(unsigned long) > 4 * PyLong_SHIFT)) {
                            __PYX_VERIFY_RETURN_INT(long, long, -(long) (((((((((unsigned long)digits[3]) << PyLong_SHIFT) | (unsigned long)digits[2]) << PyLong_SHIFT) | (unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                        } else if ((8 * sizeof(long) - 1 > 4 * PyLong_SHIFT)) {
                            return (long) (((long)-1)*(((((((((long)digits[3]) << PyLong_SHIFT) | (long)digits[2]) << PyLong_SHIFT) | (long)digits[1]) << PyLong_SHIFT) | (long)digits[0])));
                        }
                    }
                    break;
                case 4:
                    if ((8 * sizeof(long) > 3 * PyLong_SHIFT)) {
                        if ((8 * sizeof(unsigned long) > 4 * PyLong_SHIFT)) {
                            __PYX_VERIFY_RETURN_INT(long, unsigned long, (((((((((unsigned long)digits[3]) << PyLong_SHIFT) | (unsigned long)digits[2]) << PyLong_SHIFT) | (unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                        } else if ((8 * sizeof(long) - 1 > 4 * PyLong_SHIFT)) {
                            return (long) ((((((((((long)digits[3]) << PyLong_SHIFT) | (long)digits[2]) << PyLong_SHIFT) | (long)digits[1]) << PyLong_SHIFT) | (long)digits[0])));
                        }
                    }
                    break;
            }
        }
#endif
        if ((sizeof(long) <= sizeof(long))) {
            __PYX_VERIFY_RETURN_INT_EXC(long, long, PyLong_AsLong(x))
#ifdef HAVE_LONG_LONG
        } else if ((sizeof(long) <= sizeof(PY_LONG_LONG))) {
            __PYX_VERIFY_RETURN_INT_EXC(long, PY_LONG_LONG, PyLong_AsLongLong(x))
#endif
        }
    }
    {
        long val;
        int ret = -1;
#if PY_VERSION_HEX >= 0x030d00A6 && !CYTHON_COMPILING_IN_LIMITED_API
        Py_ssize_t bytes_copied = PyLong_AsNativeBytes(
            x, &val, sizeof(val), Py_ASNATIVEBYTES_NATIVE_ENDIAN | (is_unsigned ? Py_ASNATIVEBYTES_UNSIGNED_BUFFER | Py_ASNATIVEBYTES_REJECT_NEGATIVE : 0));
        if (unlikely(bytes_copied == -1)) {
        } else if (unlikely(bytes_copied > (Py_ssize_t) sizeof(val))) {
            goto raise_overflow;
        } else {
            ret = 0;
        }
#elif PY_VERSION_HEX < 0x030d0000 && !(CYTHON_COMPILING_IN_PYPY || CYTHON_COMPILING_IN_LIMITED_API) || defined(_PyLong_AsByteArray)
        int one = 1; int is_little = (int)*(unsigned char *)&one;
        unsigned char *bytes = (unsigned char *)&val;
        ret = _PyLong_AsByteArray((PyLongObject *)x,
                                    bytes, sizeof(val),
                                    is_little, !is_unsigned);
#else
        PyObject *v;
        PyObject *stepval = NULL, *mask = NULL, *shift = NULL;
        int bits, remaining_bits, is_negative = 0;
        int chunk_size = (sizeof(long) < 8) ? 30 : 62;
        if (likely(PyLong_CheckExact(x))) {
            v = __Pyx_NewRef(x);
        } else {
            v = PyNumber_Long(x);
            if (unlikely(!v)) return (long) -1;
            assert(PyLong_CheckExact(v));
        }
        {
            int result = PyObject_RichCompareBool(v, Py_False, Py_LT);
            if (unlikely(result < 0)) {
                Py_DECREF(v);
                return (long) -1;
            }
            is_negative = result == 1;
        }
        if (is_unsigned && unlikely(is_negative)) {
            Py_DECREF(v);
            goto raise_neg_overflow;
        } else if (is_negative) {
            stepval = PyNumber_Invert(v);
            Py_DECREF(v);
            if (unlikely(!stepval))
                return (long) -1;
        } else {
            stepval = v;
        }
        v = NULL;
        val = (long) 0;
        mask = PyLong_FromLong((1L << chunk_size) - 1); if (unlikely(!mask)) goto done;
        shift = PyLong_FromLong(chunk_size); if (unlikely(!shift)) goto done;
        for (bits = 0; bits < (int) sizeof(long) * 8 - chunk_size; bits += chunk_size) {
            PyObject *tmp, *digit;
            long idigit;
            digit = PyNumber_And(stepval, mask);
            if (unlikely(!digit)) goto done;
            idigit = PyLong_AsLong(digit);
            Py_DECREF(digit);
            if (unlikely(idigit < 0)) goto done;
            val |= ((long) idigit) << bits;
            tmp = PyNumber_Rshift(stepval, shift);
            if (unlikely(!tmp)) goto done;
            Py_DECREF(stepval); stepval = tmp;
        }
        Py_DECREF(shift); shift = NULL;
        Py_DECREF(mask); mask = NULL;
        {
            long idigit = PyLong_AsLong(stepval);
            if (unlikely(idigit < 0)) goto done;
            remaining_bits = ((int) sizeof(long) * 8) - bits - (is_unsigned ? 0 : 1);
            if (unlikely(idigit >= (1L << remaining_bits)))
                goto raise_overflow;
            val |= ((long) idigit) << bits;
        }
        if (!is_unsigned) {
            if (unlikely(val & (((long) 1) << (sizeof(long) * 8 - 1))))
                goto raise_overflow;
            if (is_negative)
                val = ~val;
        }
        ret = 0;
    done:
        Py_XDECREF(shift);
        Py_XDECREF(mask);
        Py_XDECREF(stepval);
#endif
        if (unlikely(ret))
            return (long) -1;
        return val;
    }
raise_overflow:
    PyErr_SetString(PyExc_OverflowError,
        "value too large to convert to long");
    return (long) -1;
raise_neg_overflow:
    PyErr_SetString(PyExc_OverflowError,
        "can't convert negative value to long");
    return (long) -1;
}

/* CIntToPy */
static CYTHON_INLINE PyObject* __Pyx_PyInt_From_long(long value) {
#ifdef __Pyx_HAS_GCC_DIAGNOSTIC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wconversion"
#endif
    const long neg_one = (long) -1, const_zero = (long) 0;
#ifdef __Pyx_HAS_GCC_DIAGNOSTIC
#pragma GCC diagnostic pop
#endif
    const int is_unsigned = neg_one > const_zero;
    if (is_unsigned) {
        if (sizeof(long) < sizeof(long)) {
            return PyInt_FromLong((long) value);
        } else if (sizeof(long) <= sizeof(unsigned long)) {
            return PyLong_FromUnsignedLong((unsigned long) value);
#ifdef HAVE_LONG_LONG
        } else if (sizeof(long) <= sizeof(unsigned PY_LONG_LONG)) {
            return PyLong_FromUnsignedLongLong((unsigned PY_LONG_LONG) value);
#endif
        }
    } else {
        if (sizeof(long) <= sizeof(long)) {
            return PyInt_FromLong((long) value);
#ifdef HAVE_LONG_LONG
        } else if (sizeof(long) <= sizeof(PY_LONG_LONG)) {
            return PyLong_FromLongLong((PY_LONG_LONG) value);
#endif
        }
    }
    {
        unsigned char *bytes = (unsigned char *)&value;
#if !CYTHON_COMPILING_IN_LIMITED_API && PY_VERSION_HEX >= 0x030d00A4
        if (is_unsigned) {
            return PyLong_FromUnsignedNativeBytes(bytes, sizeof(value), -1);
        } else {
            return PyLong_FromNativeBytes(bytes, sizeof(value), -1);
        }
#elif !CYTHON_COMPILING_IN_LIMITED_API && PY_VERSION_HEX < 0x030d0000
        int one = 1; int little = (int)*(unsigned char *)&one;
        return _PyLong_FromByteArray(bytes, sizeof(long),
                                     little, !is_unsigned);
#else
        int one = 1; int little = (int)*(unsigned char *)&one;
        PyObject *from_bytes, *result = NULL;
        PyObject *py_bytes = NULL, *arg_tuple = NULL, *kwds = NULL, *order_str = NULL;
        from_bytes = PyObject_GetAttrString((PyObject*)&PyLong_Type, "from_bytes");
        if (!from_bytes) return NULL;
        py_bytes = PyBytes_FromStringAndSize((char*)bytes, sizeof(long));
        if (!py_bytes) goto limited_bad;
        order_str = PyUnicode_FromString(little ? "little" : "big");
        if (!order_str) goto limited_bad;
        arg_tuple = PyTuple_Pack(2, py_bytes, order_str);
        if (!arg_tuple) goto limited_bad;
        if (!is_unsigned) {
            kwds = PyDict_New();
            if (!kwds) goto limited_bad;
            if (PyDict_SetItemString(kwds, "signed", __Pyx_NewRef(Py_True))) goto limited_bad;
        }
        result = PyObject_Call(from_bytes, arg_tuple, kwds);
        limited_bad:
        Py_XDECREF(kwds);
        Py_XDECREF(arg_tuple);
        Py_XDECREF(order_str);
        Py_XDECREF(py_bytes);
        Py_XDECREF(from_bytes);
        return result;
#endif
    }
}

/* FormatTypeName */
#if CYTHON_COMPILING_IN_LIMITED_API
static __Pyx_TypeName
__Pyx_PyType_GetName(PyTypeObject* tp)
{
    PyObject *name = __Pyx_PyObject_GetAttrStr((PyObject *)tp,
                                               __pyx_n_s_name);
    if (unlikely(name == NULL) || unlikely(!PyUnicode_Check(name))) {
        PyErr_Clear();
        Py_XDECREF(name);
        name = __Pyx_NewRef(__pyx_n_s__6);
    }
    return name;
}
#endif

/* CIntFromPy */
static CYTHON_INLINE int __Pyx_PyInt_As_int(PyObject *x) {
#ifdef __Pyx_HAS_GCC_DIAGNOSTIC
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wconversion"
#endif
    const int neg_one = (int) -1, const_zero = (int) 0;
#ifdef __Pyx_HAS_GCC_DIAGNOSTIC
#pragma GCC diagnostic pop
#endif
    const int is_unsigned = neg_one > const_zero;
#if PY_MAJOR_VERSION < 3
    if (likely(PyInt_Check(x))) {
        if ((sizeof(int) < sizeof(long))) {
            __PYX_VERIFY_RETURN_INT(int, long, PyInt_AS_LONG(x))
        } else {
            long val = PyInt_AS_LONG(x);
            if (is_unsigned && unlikely(val < 0)) {
                goto raise_neg_overflow;
            }
            return (int) val;
        }
    }
#endif
    if (unlikely(!PyLong_Check(x))) {
        int val;
        PyObject *tmp = __Pyx_PyNumber_IntOrLong(x);
        if (!tmp) return (int) -1;
        val = __Pyx_PyInt_As_int(tmp);
        Py_DECREF(tmp);
        return val;
    }
    if (is_unsigned) {
#if CYTHON_USE_PYLONG_INTERNALS
        if (unlikely(__Pyx_PyLong_IsNeg(x))) {
            goto raise_neg_overflow;
        } else if (__Pyx_PyLong_IsCompact(x)) {
            __PYX_VERIFY_RETURN_INT(int, __Pyx_compact_upylong, __Pyx_PyLong_CompactValueUnsigned(x))
        } else {
            const digit* digits = __Pyx_PyLong_Digits(x);
            assert(__Pyx_PyLong_DigitCount(x) > 1);
            switch (__Pyx_PyLong_DigitCount(x)) {
                case 2:
                    if ((8 * sizeof(int) > 1 * PyLong_SHIFT)) {
                        if ((8 * sizeof(unsigned long) > 2 * PyLong_SHIFT)) {
                            __PYX_VERIFY_RETURN_INT(int, unsigned long, (((((unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                        } else if ((8 * sizeof(int) >= 2 * PyLong_SHIFT)) {
                            return (int) (((((int)digits[1]) << PyLong_SHIFT) | (int)digits[0]));
                        }
                    }
                    break;
                case 3:
                    if ((8 * sizeof(int) > 2 * PyLong_SHIFT)) {
                        if ((8 * sizeof(unsigned long) > 3 * PyLong_SHIFT)) {
                            __PYX_VERIFY_RETURN_INT(int, unsigned long, (((((((unsigned long)digits[2]) << PyLong_SHIFT) | (unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                        } else if ((8 * sizeof(int) >= 3 * PyLong_SHIFT)) {
                            return (int) (((((((int)digits[2]) << PyLong_SHIFT) | (int)digits[1]) << PyLong_SHIFT) | (int)digits[0]));
                        }
                    }
                    break;
                case 4:
                    if ((8 * sizeof(int) > 3 * PyLong_SHIFT)) {
                        if ((8 * sizeof(unsigned long) > 4 * PyLong_SHIFT)) {
                            __PYX_VERIFY_RETURN_INT(int, unsigned long, (((((((((unsigned long)digits[3]) << PyLong_SHIFT) | (unsigned long)digits[2]) << PyLong_SHIFT) | (unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                        } else if ((8 * sizeof(int) >= 4 * PyLong_SHIFT)) {
                            return (int) (((((((((int)digits[3]) << PyLong_SHIFT) | (int)digits[2]) << PyLong_SHIFT) | (int)digits[1]) << PyLong_SHIFT) | (int)digits[0]));
                        }
                    }
                    break;
            }
        }
#endif
#if CYTHON_COMPILING_IN_CPYTHON && PY_VERSION_HEX < 0x030C00A7
        if (unlikely(Py_SIZE(x) < 0)) {
            goto raise_neg_overflow;
        }
#else
        {
            int result = PyObject_RichCompareBool(x, Py_False, Py_LT);
            if (unlikely(result < 0))
                return (int) -1;
            if (unlikely(result == 1))
                goto raise_neg_overflow;
        }
#endif
        if ((sizeof(int) <= sizeof(unsigned long))) {
            __PYX_VERIFY_RETURN_INT_EXC(int, unsigned long, PyLong_AsUnsignedLong(x))
#ifdef HAVE_LONG_LONG
        } else if ((sizeof(int) <= sizeof(unsigned PY_LONG_LONG))) {
            __PYX_VERIFY_RETURN_INT_EXC(int, unsigned PY_LONG_LONG, PyLong_AsUnsignedLongLong(x))
#endif
        }
    } else {
#if CYTHON_USE_PYLONG_INTERNALS
        if (__Pyx_PyLong_IsCompact(x)) {
            __PYX_VERIFY_RETURN_INT(int, __Pyx_compact_pylong, __Pyx_PyLong_CompactValue(x))
        } else {
            const digit* digits = __Pyx_PyLong_Digits(x);
            assert(__Pyx_PyLong_DigitCount(x) > 1);
            switch (__Pyx_PyLong_SignedDigitCount(x)) {
                case -2:
                    if ((8 * sizeof(int) - 1 > 1 * PyLong_SHIFT)) {
                        if ((8 * sizeof(unsigned long) > 2 * PyLong_SHIFT)) {
                            __PYX_VERIFY_RETURN_INT(int, long, -(long) (((((unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                        } else if ((8 * sizeof(int) - 1 > 2 * PyLong_SHIFT)) {
                            return (int) (((int)-1)*(((((int)digits[1]) << PyLong_SHIFT) | (int)digits[0])));
                        }
                    }
                    break;
                case 2:
                    if ((8 * sizeof(int) > 1 * PyLong_SHIFT)) {
                        if ((8 * sizeof(unsigned long) > 2 * PyLong_SHIFT)) {
                            __PYX_VERIFY_RETURN_INT(int, unsigned long, (((((unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                        } else if ((8 * sizeof(int) - 1 > 2 * PyLong_SHIFT)) {
                            return (int) ((((((int)digits[1]) << PyLong_SHIFT) | (int)digits[0])));
                        }
                    }
                    break;
                case -3:
                    if ((8 * sizeof(int) - 1 > 2 * PyLong_SHIFT)) {
                        if ((8 * sizeof(unsigned long) > 3 * PyLong_SHIFT)) {
                            __PYX_VERIFY_RETURN_INT(int, long, -(long) (((((((unsigned long)digits[2]) << PyLong_SHIFT) | (unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                        } else if ((8 * sizeof(int) - 1 > 3 * PyLong_SHIFT)) {
                            return (int) (((int)-1)*(((((((int)digits[2]) << PyLong_SHIFT) | (int)digits[1]) << PyLong_SHIFT) | (int)digits[0])));
                        }
                    }
                    break;
                case 3:
                    if ((8 * sizeof(int) > 2 * PyLong_SHIFT)) {
                        if ((8 * sizeof(unsigned long) > 3 * PyLong_SHIFT)) {
                            __PYX_VERIFY_RETURN_INT(int, unsigned long, (((((((unsigned long)digits[2]) << PyLong_SHIFT) | (unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                        } else if ((8 * sizeof(int) - 1 > 3 * PyLong_SHIFT)) {
                            return (int) ((((((((int)digits[2]) << PyLong_SHIFT) | (int)digits[1]) << PyLong_SHIFT) | (int)digits[0])));
                        }
                    }
                    break;
                case -4:
                    if ((8 * sizeof(int) - 1 > 3 * PyLong_SHIFT)) {
                        if ((8 * sizeof(unsigned long) > 4 * PyLong_SHIFT)) {
                            __PYX_VERIFY_RETURN_INT(int, long, -(long) (((((((((unsigned long)digits[3]) << PyLong_SHIFT) | (unsigned long)digits[2]) << PyLong_SHIFT) | (unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                        } else if ((8 * sizeof(int) - 1 > 4 * PyLong_SHIFT)) {
                            return (int) (((int)-1)*(((((((((int)digits[3]) << PyLong_SHIFT) | (int)digits[2]) << PyLong_SHIFT) | (int)digits[1]) << PyLong_SHIFT) | (int)digits[0])));
                        }
                    }
                    break;
                case 4:
                    if ((8 * sizeof(int) > 3 * PyLong_SHIFT)) {
                        if ((8 * sizeof(unsigned long) > 4 * PyLong_SHIFT)) {
                            __PYX_VERIFY_RETURN_INT(int, unsigned long, (((((((((unsigned long)digits[3]) << PyLong_SHIFT) | (unsigned long)digits[2]) << PyLong_SHIFT) | (unsigned long)digits[1]) << PyLong_SHIFT) | (unsigned long)digits[0])))
                        } else if ((8 * sizeof(int) - 1 > 4 * PyLong_SHIFT)) {
                            return (int) ((((((((((int)digits[3]) << PyLong_SHIFT) | (int)digits[2]) << PyLong_SHIFT) | (int)digits[1]) << PyLong_SHIFT) | (int)digits[0])));
                        }
                    }
                    break;
            }
        }
#endif
        if ((sizeof(int) <= sizeof(long))) {
            __PYX_VERIFY_RETURN_INT_EXC(int, long, PyLong_AsLong(x))
#ifdef HAVE_LONG_LONG
        } else if ((sizeof(int) <= sizeof(PY_LONG_LONG))) {
            __PYX_VERIFY_RETURN_INT_EXC(int, PY_LONG_LONG, PyLong_AsLongLong(x))
#endif
        }
    }
    {
        int val;
        int ret = -1;
#if PY_VERSION_HEX >= 0x030d00A6 && !CYTHON_COMPILING_IN_LIMITED_API
        Py_ssize_t bytes_copied = PyLong_AsNativeBytes(
            x, &val, sizeof(val), Py_ASNATIVEBYTES_NATIVE_ENDIAN | (is_unsigned ? Py_ASNATIVEBYTES_UNSIGNED_BUFFER | Py_ASNATIVEBYTES_REJECT_NEGATIVE : 0));
        if (unlikely(bytes_copied == -1)) {
        } else if (unlikely(bytes_copied > (Py_ssize_t) sizeof(val))) {
            goto raise_overflow;
        } else {
            ret = 0;
        }
#elif PY_VERSION_HEX < 0x030d0000 && !(CYTHON_COMPILING_IN_PYPY || CYTHON_COMPILING_IN_LIMITED_API) || defined(_PyLong_AsByteArray)
        int one = 1; int is_little = (int)*(unsigned char *)&one;
        unsigned char *bytes = (unsigned char *)&val;
        ret = _PyLong_AsByteArray((PyLongObject *)x,
                                    bytes, sizeof(val),
                                    is_little, !is_unsigned);
#else
        PyObject *v;
        PyObject *stepval = NULL, *mask = NULL, *shift = NULL;
        int bits, remaining_bits, is_negative = 0;
        int chunk_size = (sizeof(long) < 8) ? 30 : 62;
        if (likely(PyLong_CheckExact(x))) {
            v = __Pyx_NewRef(x);
        } else {
            v = PyNumber_Long(x);
            if (unlikely(!v)) return (int) -1;
            assert(PyLong_CheckExact(v));
        }
        {
            int result = PyObject_RichCompareBool(v, Py_False, Py_LT);
            if (unlikely(result < 0)) {
                Py_DECREF(v);
                return (int) -1;
            }
            is_negative = result == 1;
        }
        if (is_unsigned && unlikely(is_negative)) {
            Py_DECREF(v);
            goto raise_neg_overflow;
        } else if (is_negative) {
            stepval = PyNumber_Invert(v);
            Py_DECREF(v);
            if (unlikely(!stepval))
                return (int) -1;
        } else {
            stepval = v;
        }
        v = NULL;
        val = (int) 0;
        mask = PyLong_FromLong((1L << chunk_size) - 1); if (unlikely(!mask)) goto done;
        shift = PyLong_FromLong(chunk_size); if (unlikely(!shift)) goto done;
        for (bits = 0; bits < (int) sizeof(int) * 8 - chunk_size; bits += chunk_size) {
            PyObject *tmp, *digit;
            long idigit;
            digit = PyNumber_And(stepval, mask);
            if (unlikely(!digit)) goto done;
            idigit = PyLong_AsLong(digit);
            Py_DECREF(digit);
            if (unlikely(idigit < 0)) goto done;
            val |= ((int) idigit) << bits;
            tmp = PyNumber_Rshift(stepval, shift);
            if (unlikely(!tmp)) goto done;
            Py_DECREF(stepval); stepval = tmp;
        }
        Py_DECREF(shift); shift = NULL;
        Py_DECREF(mask); mask = NULL;
        {
            long idigit = PyLong_AsLong(stepval);
            if (unlikely(idigit < 0)) goto done;
            remaining_bits = ((int) sizeof(int) * 8) - bits - (is_unsigned ? 0 : 1);
            if (unlikely(idigit >= (1L << remaining_bits)))
                goto raise_overflow;
            val |= ((int) idigit) << bits;
        }
        if (!is_unsigned) {
            if (unlikely(val & (((int) 1) << (sizeof(int) * 8 - 1))))
                goto raise_overflow;
            if (is_negative)
                val = ~val;
        }
        ret = 0;
    done:
        Py_XDECREF(shift);
        Py_XDECREF(mask);
        Py_XDECREF(stepval);
#endif
        if (unlikely(ret))
            return (int) -1;
        return val;
    }
raise_overflow:
    PyErr_SetString(PyExc_OverflowError,
        "value too large to convert to int");
    return (int) -1;
raise_neg_overflow:
    PyErr_SetString(PyExc_OverflowError,
        "can't convert negative value to int");
    return (int) -1;
}

/* FastTypeChecks */
#if CYTHON_COMPILING_IN_CPYTHON
static int __Pyx_InBases(PyTypeObject *a, PyTypeObject *b) {
    while (a) {
        a = __Pyx_PyType_GetSlot(a, tp_base, PyTypeObject*);
        if (a == b)
            return 1;
    }
    return b == &PyBaseObject_Type;
}
static CYTHON_INLINE int __Pyx_IsSubtype(PyTypeObject *a, PyTypeObject *b) {
    PyObject *mro;
    if (a == b) return 1;
    mro = a->tp_mro;
    if (likely(mro)) {
        Py_ssize_t i, n;
        n = PyTuple_GET_SIZE(mro);
        for (i = 0; i < n; i++) {
            if (PyTuple_GET_ITEM(mro, i) == (PyObject *)b)
                return 1;
        }
        return 0;
    }
    return __Pyx_InBases(a, b);
}
static CYTHON_INLINE int __Pyx_IsAnySubtype2(PyTypeObject *cls, PyTypeObject *a, PyTypeObject *b) {
    PyObject *mro;
    if (cls == a || cls == b) return 1;
    mro = cls->tp_mro;
    if (likely(mro)) {
        Py_ssize_t i, n;
        n = PyTuple_GET_SIZE(mro);
        for (i = 0; i < n; i++) {
            PyObject *base = PyTuple_GET_ITEM(mro, i);
            if (base == (PyObject *)a || base == (PyObject *)b)
                return 1;
        }
        return 0;
    }
    return __Pyx_InBases(cls, a) || __Pyx_InBases(cls, b);
}
#if PY_MAJOR_VERSION == 2
static int __Pyx_inner_PyErr_GivenExceptionMatches2(PyObject *err, PyObject* exc_type1, PyObject* exc_type2) {
    PyObject *exception, *value, *tb;
    int res;
    __Pyx_PyThreadState_declare
    __Pyx_PyThreadState_assign
    __Pyx_ErrFetch(&exception, &value, &tb);
    res = exc_type1 ? PyObject_IsSubclass(err, exc_type1) : 0;
    if (unlikely(res == -1)) {
        PyErr_WriteUnraisable(err);
        res = 0;
    }
    if (!res) {
        res = PyObject_IsSubclass(err, exc_type2);
        if (unlikely(res == -1)) {
            PyErr_WriteUnraisable(err);
            res = 0;
        }
    }
    __Pyx_ErrRestore(exception, value, tb);
    return res;
}
#else
static CYTHON_INLINE int __Pyx_inner_PyErr_GivenExceptionMatches2(PyObject *err, PyObject* exc_type1, PyObject *exc_type2) {
    if (exc_type1) {
        return __Pyx_IsAnySubtype2((PyTypeObject*)err, (PyTypeObject*)exc_type1, (PyTypeObject*)exc_type2);
    } else {
        return __Pyx_IsSubtype((PyTypeObject*)err, (PyTypeObject*)exc_type2);
    }
}
#endif
static int __Pyx_PyErr_GivenExceptionMatchesTuple(PyObject *exc_type, PyObject *tuple) {
    Py_ssize_t i, n;
    assert(PyExceptionClass_Check(exc_type));
    n = PyTuple_GET_SIZE(tuple);
#if PY_MAJOR_VERSION >= 3
    for (i=0; i<n; i++) {
        if (exc_type == PyTuple_GET_ITEM(tuple, i)) return 1;
    }
#endif
    for (i=0; i<n; i++) {
        PyObject *t = PyTuple_GET_ITEM(tuple, i);
        #if PY_MAJOR_VERSION < 3
        if (likely(exc_type == t)) return 1;
        #endif
        if (likely(PyExceptionClass_Check(t))) {
            if (__Pyx_inner_PyErr_GivenExceptionMatches2(exc_type, NULL, t)) return 1;
        } else {
        }
    }
    return 0;
}
static CYTHON_INLINE int __Pyx_PyErr_GivenExceptionMatches(PyObject *err, PyObject* exc_type) {
    if (likely(err == exc_type)) return 1;
    if (likely(PyExceptionClass_Check(err))) {
        if (likely(PyExceptionClass_Check(exc_type))) {
            return __Pyx_inner_PyErr_GivenExceptionMatches2(err, NULL, exc_type);
        } else if (likely(PyTuple_Check(exc_type))) {
            return __Pyx_PyErr_GivenExceptionMatchesTuple(err, exc_type);
        } else {
        }
    }
    return PyErr_GivenExceptionMatches(err, exc_type);
}
static CYTHON_INLINE int __Pyx_PyErr_GivenExceptionMatches2(PyObject *err, PyObject *exc_type1, PyObject *exc_type2) {
    assert(PyExceptionClass_Check(exc_type1));
    assert(PyExceptionClass_Check(exc_type2));
    if (likely(err == exc_type1 || err == exc_type2)) return 1;
    if (likely(PyExceptionClass_Check(err))) {
        return __Pyx_inner_PyErr_GivenExceptionMatches2(err, exc_type1, exc_type2);
    }
    return (PyErr_GivenExceptionMatches(err, exc_type1) || PyErr_GivenExceptionMatches(err, exc_type2));
}
#endif

/* FetchSharedCythonModule */
static PyObject *__Pyx_FetchSharedCythonABIModule(void) {
    return __Pyx_PyImport_AddModuleRef((char*) __PYX_ABI_MODULE_NAME);
}

/* FetchCommonType */
static int __Pyx_VerifyCachedType(PyObject *cached_type,
                               const char *name,
                               Py_ssize_t basicsize,
                               Py_ssize_t expected_basicsize) {
    if (!PyType_Check(cached_type)) {
        PyErr_Format(PyExc_TypeError,
            "Shared Cython type %.200s is not a type object", name);
        return -1;
    }
    if (basicsize != expected_basicsize) {
        PyErr_Format(PyExc_TypeError,
            "Shared Cython type %.200s has the wrong size, try recompiling",
            name);
        return -1;
    }
    return 0;
}
#if !CYTHON_USE_TYPE_SPECS
static PyTypeObject* __Pyx_FetchCommonType(PyTypeObject* type) {
    PyObject* abi_module;
    const char* object_name;
    PyTypeObject *cached_type = NULL;
    abi_module = __Pyx_FetchSharedCythonABIModule();
    if (!abi_module) return NULL;
    object_name = strrchr(type->tp_name, '.');
    object_name = object_name ? object_name+1 : type->tp_name;
    cached_type = (PyTypeObject*) PyObject_GetAttrString(abi_module, object_name);
    if (cached_type) {
        if (__Pyx_VerifyCachedType(
              (PyObject *)cached_type,
              object_name,
              cached_type->tp_basicsize,
              type->tp_basicsize) < 0) {
            goto bad;
        }
        goto done;
    }
    if (!PyErr_ExceptionMatches(PyExc_AttributeError)) goto bad;
    PyErr_Clear();
    if (PyType_Ready(type) < 0) goto bad;
    if (PyObject_SetAttrString(abi_module, object_name, (PyObject *)type) < 0)
        goto bad;
    Py_INCREF(type);
    cached_type = type;
done:
    Py_DECREF(abi_module);
    return cached_type;
bad:
    Py_XDECREF(cached_type);
    cached_type = NULL;
    goto done;
}
#else
static PyTypeObject *__Pyx_FetchCommonTypeFromSpec(PyObject *module, PyType_Spec *spec, PyObject *bases) {
    PyObject *abi_module, *cached_type = NULL;
    const char* object_name = strrchr(spec->name, '.');
    object_name = object_name ? object_name+1 : spec->name;
    abi_module = __Pyx_FetchSharedCythonABIModule();
    if (!abi_module) return NULL;
    cached_type = PyObject_GetAttrString(abi_module, object_name);
    if (cached_type) {
        Py_ssize_t basicsize;
#if CYTHON_COMPILING_IN_LIMITED_API
        PyObject *py_basicsize;
        py_basicsize = PyObject_GetAttrString(cached_type, "__basicsize__");
        if (unlikely(!py_basicsize)) goto bad;
        basicsize = PyLong_AsSsize_t(py_basicsize);
        Py_DECREF(py_basicsize);
        py_basicsize = 0;
        if (unlikely(basicsize == (Py_ssize_t)-1) && PyErr_Occurred()) goto bad;
#else
        basicsize = likely(PyType_Check(cached_type)) ? ((PyTypeObject*) cached_type)->tp_basicsize : -1;
#endif
        if (__Pyx_VerifyCachedType(
              cached_type,
              object_name,
              basicsize,
              spec->basicsize) < 0) {
            goto bad;
        }
        goto done;
    }
    if (!PyErr_ExceptionMatches(PyExc_AttributeError)) goto bad;
    PyErr_Clear();
    CYTHON_UNUSED_VAR(module);
    cached_type = __Pyx_PyType_FromModuleAndSpec(abi_module, spec, bases);
    if (unlikely(!cached_type)) goto bad;
    if (unlikely(__Pyx_fix_up_extension_type_from_spec(spec, (PyTypeObject *) cached_type) < 0)) goto bad;
    if (PyObject_SetAttrString(abi_module, object_name, cached_type) < 0) goto bad;
done:
    Py_DECREF(abi_module);
    assert(cached_type == NULL || PyType_Check(cached_type));
    return (PyTypeObject *) cached_type;
bad:
    Py_XDECREF(cached_type);
    cached_type = NULL;
    goto done;
}
#endif

/* RaiseException */
#if PY_MAJOR_VERSION < 3
static void __Pyx_Raise(PyObject *type, PyObject *value, PyObject *tb, PyObject *cause) {
    __Pyx_PyThreadState_declare
    CYTHON_UNUSED_VAR(cause);
    Py_XINCREF(type);
    if (!value || value == Py_None)
        value = NULL;
    else
        Py_INCREF(value);
    if (!tb || tb == Py_None)
        tb = NULL;
    else {
        Py_INCREF(tb);
        if (!PyTraceBack_Check(tb)) {
            PyErr_SetString(PyExc_TypeError,
                "raise: arg 3 must be a traceback or None");
            goto raise_error;
        }
    }
    if (PyType_Check(type)) {
#if CYTHON_COMPILING_IN_PYPY
        if (!value) {
            Py_INCREF(Py_None);
            value = Py_None;
        }
#endif
        PyErr_NormalizeException(&type, &value, &tb);
    } else {
        if (value) {
            PyErr_SetString(PyExc_TypeError,
                "instance exception may not have a separate value");
            goto raise_error;
        }
        value = type;
        type = (PyObject*) Py_TYPE(type);
        Py_INCREF(type);
        if (!PyType_IsSubtype((PyTypeObject *)type, (PyTypeObject *)PyExc_BaseException)) {
            PyErr_SetString(PyExc_TypeError,
                "raise: exception class must be a subclass of BaseException");
            goto raise_error;
        }
    }
    __Pyx_PyThreadState_assign
    __Pyx_ErrRestore(type, value, tb);
    return;
raise_error:
    Py_XDECREF(value);
    Py_XDECREF(type);
    Py_XDECREF(tb);
    return;
}
#else
static void __Pyx_Raise(PyObject *type, PyObject *value, PyObject *tb, PyObject *cause) {
    PyObject* owned_instance = NULL;
    if (tb == Py_None) {
        tb = 0;
    } else if (tb && !PyTraceBack_Check(tb)) {
        PyErr_SetString(PyExc_TypeError,
            "raise: arg 3 must be a traceback or None");
        goto bad;
    }
    if (value == Py_None)
        value = 0;
    if (PyExceptionInstance_Check(type)) {
        if (value) {
            PyErr_SetString(PyExc_TypeError,
                "instance exception may not have a separate value");
            goto bad;
        }
        value = type;
        type = (PyObject*) Py_TYPE(value);
    } else if (PyExceptionClass_Check(type)) {
        PyObject *instance_class = NULL;
        if (value && PyExceptionInstance_Check(value)) {
            instance_class = (PyObject*) Py_TYPE(value);
            if (instance_class != type) {
                int is_subclass = PyObject_IsSubclass(instance_class, type);
                if (!is_subclass) {
                    instance_class = NULL;
                } else if (unlikely(is_subclass == -1)) {
                    goto bad;
                } else {
                    type = instance_class;
                }
            }
        }
        if (!instance_class) {
            PyObject *args;
            if (!value)
                args = PyTuple_New(0);
            else if (PyTuple_Check(value)) {
                Py_INCREF(value);
                args = value;
            } else
                args = PyTuple_Pack(1, value);
            if (!args)
                goto bad;
            owned_instance = PyObject_Call(type, args, NULL);
            Py_DECREF(args);
            if (!owned_instance)
                goto bad;
            value = owned_instance;
            if (!PyExceptionInstance_Check(value)) {
                PyErr_Format(PyExc_TypeError,
                             "calling %R should have returned an instance of "
                             "BaseException, not %R",
                             type, Py_TYPE(value));
                goto bad;
            }
        }
    } else {
        PyErr_SetString(PyExc_TypeError,
            "raise: exception class must be a subclass of BaseException");
        goto bad;
    }
    if (cause) {
        PyObject *fixed_cause;
        if (cause == Py_None) {
            fixed_cause = NULL;
        } else if (PyExceptionClass_Check(cause)) {
            fixed_cause = PyObject_CallObject(cause, NULL);
            if (fixed_cause == NULL)
                goto bad;
        } else if (PyExceptionInstance_Check(cause)) {
            fixed_cause = cause;
            Py_INCREF(fixed_cause);
        } else {
            PyErr_SetString(PyExc_TypeError,
                            "exception causes must derive from "
                            "BaseException");
            goto bad;
        }
        PyException_SetCause(value, fixed_cause);
    }
    PyErr_SetObject(type, value);
    if (tb) {
      #if PY_VERSION_HEX >= 0x030C00A6
        PyException_SetTraceback(value, tb);
      #elif CYTHON_FAST_THREAD_STATE
        PyThreadState *tstate = __Pyx_PyThreadState_Current;
        PyObject* tmp_tb = tstate->curexc_traceback;
        if (tb != tmp_tb) {
            Py_INCREF(tb);
            tstate->curexc_traceback = tb;
            Py_XDECREF(tmp_tb);
        }
#else
        PyObject *tmp_type, *tmp_value, *tmp_tb;
        PyErr_Fetch(&tmp_type, &tmp_value, &tmp_tb);
        Py_INCREF(tb);
        PyErr_Restore(tmp_type, tmp_value, tb);
        Py_XDECREF(tmp_tb);
#endif
    }
bad:
    Py_XDECREF(owned_instance);
    return;
}
#endif

/* GetTopmostException */
#if CYTHON_USE_EXC_INFO_STACK && CYTHON_FAST_THREAD_STATE
static _PyErr_StackItem *
__Pyx_PyErr_GetTopmostException(PyThreadState *tstate)
{
    _PyErr_StackItem *exc_info = tstate->exc_info;
    while ((exc_info->exc_value == NULL || exc_info->exc_value == Py_None) &&
           exc_info->previous_item != NULL)
    {
        exc_info = exc_info->previous_item;
    }
    return exc_info;
}
#endif

/* SaveResetException */
#if CYTHON_FAST_THREAD_STATE
static CYTHON_INLINE void __Pyx__ExceptionSave(PyThreadState *tstate, PyObject **type, PyObject **value, PyObject **tb) {
  #if CYTHON_USE_EXC_INFO_STACK && PY_VERSION_HEX >= 0x030B00a4
    _PyErr_StackItem *exc_info = __Pyx_PyErr_GetTopmostException(tstate);
    PyObject *exc_value = exc_info->exc_value;
    if (exc_value == NULL || exc_value == Py_None) {
        *value = NULL;
        *type = NULL;
        *tb = NULL;
    } else {
        *value = exc_value;
        Py_INCREF(*value);
        *type = (PyObject*) Py_TYPE(exc_value);
        Py_INCREF(*type);
        *tb = PyException_GetTraceback(exc_value);
    }
  #elif CYTHON_USE_EXC_INFO_STACK
    _PyErr_StackItem *exc_info = __Pyx_PyErr_GetTopmostException(tstate);
    *type = exc_info->exc_type;
    *value = exc_info->exc_value;
    *tb = exc_info->exc_traceback;
    Py_XINCREF(*type);
    Py_XINCREF(*value);
    Py_XINCREF(*tb);
  #else
    *type = tstate->exc_type;
    *value = tstate->exc_value;
    *tb = tstate->exc_traceback;
    Py_XINCREF(*type);
    Py_XINCREF(*value);
    Py_XINCREF(*tb);
  #endif
}
static CYTHON_INLINE void __Pyx__ExceptionReset(PyThreadState *tstate, PyObject *type, PyObject *value, PyObject *tb) {
  #if CYTHON_USE_EXC_INFO_STACK && PY_VERSION_HEX >= 0x030B00a4
    _PyErr_StackItem *exc_info = tstate->exc_info;
    PyObject *tmp_value = exc_info->exc_value;
    exc_info->exc_value = value;
    Py_XDECREF(tmp_value);
    Py_XDECREF(type);
    Py_XDECREF(tb);
  #else
    PyObject *tmp_type, *tmp_value, *tmp_tb;
    #if CYTHON_USE_EXC_INFO_STACK
    _PyErr_StackItem *exc_info = tstate->exc_info;
    tmp_type = exc_info->exc_type;
    tmp_value = exc_info->exc_value;
    tmp_tb = exc_info->exc_traceback;
    exc_info->exc_type = type;
    exc_info->exc_value = value;
    exc_info->exc_traceback = tb;
    #else
    tmp_type = tstate->exc_type;
    tmp_value = tstate->exc_value;
    tmp_tb = tstate->exc_traceback;
    tstate->exc_type = type;
    tstate->exc_value = value;
    tstate->exc_traceback = tb;
    #endif
    Py_XDECREF(tmp_type);
    Py_XDECREF(tmp_value);
    Py_XDECREF(tmp_tb);
  #endif
}
#endif

/* SwapException */
#if CYTHON_FAST_THREAD_STATE
static CYTHON_INLINE void __Pyx__ExceptionSwap(PyThreadState *tstate, PyObject **type, PyObject **value, PyObject **tb) {
    PyObject *tmp_type, *tmp_value, *tmp_tb;
  #if CYTHON_USE_EXC_INFO_STACK && PY_VERSION_HEX >= 0x030B00a4
    _PyErr_StackItem *exc_info = tstate->exc_info;
    tmp_value = exc_info->exc_value;
    exc_info->exc_value = *value;
    if (tmp_value == NULL || tmp_value == Py_None) {
        Py_XDECREF(tmp_value);
        tmp_value = NULL;
        tmp_type = NULL;
        tmp_tb = NULL;
    } else {
        tmp_type = (PyObject*) Py_TYPE(tmp_value);
        Py_INCREF(tmp_type);
        #if CYTHON_COMPILING_IN_CPYTHON
        tmp_tb = ((PyBaseExceptionObject*) tmp_value)->traceback;
        Py_XINCREF(tmp_tb);
        #else
        tmp_tb = PyException_GetTraceback(tmp_value);
        #endif
    }
  #elif CYTHON_USE_EXC_INFO_STACK
    _PyErr_StackItem *exc_info = tstate->exc_info;
    tmp_type = exc_info->exc_type;
    tmp_value = exc_info->exc_value;
    tmp_tb = exc_info->exc_traceback;
    exc_info->exc_type = *type;
    exc_info->exc_value = *value;
    exc_info->exc_traceback = *tb;
  #else
    tmp_type = tstate->exc_type;
    tmp_value = tstate->exc_value;
    tmp_tb = tstate->exc_traceback;
    tstate->exc_type = *type;
    tstate->exc_value = *value;
    tstate->exc_traceback = *tb;
  #endif
    *type = tmp_type;
    *value = tmp_value;
    *tb = tmp_tb;
}
#else
static CYTHON_INLINE void __Pyx_ExceptionSwap(PyObject **type, PyObject **value, PyObject **tb) {
    PyObject *tmp_type, *tmp_value, *tmp_tb;
    PyErr_GetExcInfo(&tmp_type, &tmp_value, &tmp_tb);
    PyErr_SetExcInfo(*type, *value, *tb);
    *type = tmp_type;
    *value = tmp_value;
    *tb = tmp_tb;
}
#endif

/* CoroutineBase */
#include <frameobject.h>
#if PY_VERSION_HEX >= 0x030b00a6
  #ifndef Py_BUILD_CORE
    #define Py_BUILD_CORE 1
  #endif
  #include "internal/pycore_frame.h"
#endif
#define __Pyx_Coroutine_Undelegate(gen) Py_CLEAR((gen)->yieldfrom)
static int __Pyx_PyGen__FetchStopIterationValue(PyThreadState *__pyx_tstate, PyObject **pvalue) {
    PyObject *et, *ev, *tb;
    PyObject *value = NULL;
    CYTHON_UNUSED_VAR(__pyx_tstate);
    __Pyx_ErrFetch(&et, &ev, &tb);
    if (!et) {
        Py_XDECREF(tb);
        Py_XDECREF(ev);
        Py_INCREF(Py_None);
        *pvalue = Py_None;
        return 0;
    }
    if (likely(et == PyExc_StopIteration)) {
        if (!ev) {
            Py_INCREF(Py_None);
            value = Py_None;
        }
#if PY_VERSION_HEX >= 0x030300A0
        else if (likely(__Pyx_IS_TYPE(ev, (PyTypeObject*)PyExc_StopIteration))) {
            value = ((PyStopIterationObject *)ev)->value;
            Py_INCREF(value);
            Py_DECREF(ev);
        }
#endif
        else if (unlikely(PyTuple_Check(ev))) {
            if (PyTuple_GET_SIZE(ev) >= 1) {
#if CYTHON_ASSUME_SAFE_MACROS && !CYTHON_AVOID_BORROWED_REFS
                value = PyTuple_GET_ITEM(ev, 0);
                Py_INCREF(value);
#else
                value = PySequence_ITEM(ev, 0);
#endif
            } else {
                Py_INCREF(Py_None);
                value = Py_None;
            }
            Py_DECREF(ev);
        }
        else if (!__Pyx_TypeCheck(ev, (PyTypeObject*)PyExc_StopIteration)) {
            value = ev;
        }
        if (likely(value)) {
            Py_XDECREF(tb);
            Py_DECREF(et);
            *pvalue = value;
            return 0;
        }
    } else if (!__Pyx_PyErr_GivenExceptionMatches(et, PyExc_StopIteration)) {
        __Pyx_ErrRestore(et, ev, tb);
        return -1;
    }
    PyErr_NormalizeException(&et, &ev, &tb);
    if (unlikely(!PyObject_TypeCheck(ev, (PyTypeObject*)PyExc_StopIteration))) {
        __Pyx_ErrRestore(et, ev, tb);
        return -1;
    }
    Py_XDECREF(tb);
    Py_DECREF(et);
#if PY_VERSION_HEX >= 0x030300A0
    value = ((PyStopIterationObject *)ev)->value;
    Py_INCREF(value);
    Py_DECREF(ev);
#else
    {
        PyObject* args = __Pyx_PyObject_GetAttrStr(ev, __pyx_n_s_args);
        Py_DECREF(ev);
        if (likely(args)) {
            value = PySequence_GetItem(args, 0);
            Py_DECREF(args);
        }
        if (unlikely(!value)) {
            __Pyx_ErrRestore(NULL, NULL, NULL);
            Py_INCREF(Py_None);
            value = Py_None;
        }
    }
#endif
    *pvalue = value;
    return 0;
}
static CYTHON_INLINE
void __Pyx_Coroutine_ExceptionClear(__Pyx_ExcInfoStruct *exc_state) {
#if PY_VERSION_HEX >= 0x030B00a4
    Py_CLEAR(exc_state->exc_value);
#else
    PyObject *t, *v, *tb;
    t = exc_state->exc_type;
    v = exc_state->exc_value;
    tb = exc_state->exc_traceback;
    exc_state->exc_type = NULL;
    exc_state->exc_value = NULL;
    exc_state->exc_traceback = NULL;
    Py_XDECREF(t);
    Py_XDECREF(v);
    Py_XDECREF(tb);
#endif
}
#define __Pyx_Coroutine_AlreadyRunningError(gen)  (__Pyx__Coroutine_AlreadyRunningError(gen), (PyObject*)NULL)
static void __Pyx__Coroutine_AlreadyRunningError(__pyx_CoroutineObject *gen) {
    const char *msg;
    CYTHON_MAYBE_UNUSED_VAR(gen);
    if ((0)) {
    #ifdef __Pyx_Coroutine_USED
    } else if (__Pyx_Coroutine_Check((PyObject*)gen)) {
        msg = "coroutine already executing";
    #endif
    #ifdef __Pyx_AsyncGen_USED
    } else if (__Pyx_AsyncGen_CheckExact((PyObject*)gen)) {
        msg = "async generator already executing";
    #endif
    } else {
        msg = "generator already executing";
    }
    PyErr_SetString(PyExc_ValueError, msg);
}
#define __Pyx_Coroutine_NotStartedError(gen)  (__Pyx__Coroutine_NotStartedError(gen), (PyObject*)NULL)
static void __Pyx__Coroutine_NotStartedError(PyObject *gen) {
    const char *msg;
    CYTHON_MAYBE_UNUSED_VAR(gen);
    if ((0)) {
    #ifdef __Pyx_Coroutine_USED
    } else if (__Pyx_Coroutine_Check(gen)) {
        msg = "can't send non-None value to a just-started coroutine";
    #endif
    #ifdef __Pyx_AsyncGen_USED
    } else if (__Pyx_AsyncGen_CheckExact(gen)) {
        msg = "can't send non-None value to a just-started async generator";
    #endif
    } else {
        msg = "can't send non-None value to a just-started generator";
    }
    PyErr_SetString(PyExc_TypeError, msg);
}
#define __Pyx_Coroutine_AlreadyTerminatedError(gen, value, closing)  (__Pyx__Coroutine_AlreadyTerminatedError(gen, value, closing), (PyObject*)NULL)
static void __Pyx__Coroutine_AlreadyTerminatedError(PyObject *gen, PyObject *value, int closing) {
    CYTHON_MAYBE_UNUSED_VAR(gen);
    CYTHON_MAYBE_UNUSED_VAR(closing);
    #ifdef __Pyx_Coroutine_USED
    if (!closing && __Pyx_Coroutine_Check(gen)) {
        PyErr_SetString(PyExc_RuntimeError, "cannot reuse already awaited coroutine");
    } else
    #endif
    if (value) {
        #ifdef __Pyx_AsyncGen_USED
        if (__Pyx_AsyncGen_CheckExact(gen))
            PyErr_SetNone(__Pyx_PyExc_StopAsyncIteration);
        else
        #endif
        PyErr_SetNone(PyExc_StopIteration);
    }
}
static
PyObject *__Pyx_Coroutine_SendEx(__pyx_CoroutineObject *self, PyObject *value, int closing) {
    __Pyx_PyThreadState_declare
    PyThreadState *tstate;
    __Pyx_ExcInfoStruct *exc_state;
    PyObject *retval;
    assert(!self->is_running);
    if (unlikely(self->resume_label == 0)) {
        if (unlikely(value && value != Py_None)) {
            return __Pyx_Coroutine_NotStartedError((PyObject*)self);
        }
    }
    if (unlikely(self->resume_label == -1)) {
        return __Pyx_Coroutine_AlreadyTerminatedError((PyObject*)self, value, closing);
    }
#if CYTHON_FAST_THREAD_STATE
    __Pyx_PyThreadState_assign
    tstate = __pyx_tstate;
#else
    tstate = __Pyx_PyThreadState_Current;
#endif
    exc_state = &self->gi_exc_state;
    if (exc_state->exc_value) {
        #if CYTHON_COMPILING_IN_PYPY
        #else
        PyObject *exc_tb;
        #if PY_VERSION_HEX >= 0x030B00a4 && !CYTHON_COMPILING_IN_CPYTHON
        exc_tb = PyException_GetTraceback(exc_state->exc_value);
        #elif PY_VERSION_HEX >= 0x030B00a4
        exc_tb = ((PyBaseExceptionObject*) exc_state->exc_value)->traceback;
        #else
        exc_tb = exc_state->exc_traceback;
        #endif
        if (exc_tb) {
            PyTracebackObject *tb = (PyTracebackObject *) exc_tb;
            PyFrameObject *f = tb->tb_frame;
            assert(f->f_back == NULL);
            #if PY_VERSION_HEX >= 0x030B00A1
            f->f_back = PyThreadState_GetFrame(tstate);
            #else
            Py_XINCREF(tstate->frame);
            f->f_back = tstate->frame;
            #endif
            #if PY_VERSION_HEX >= 0x030B00a4 && !CYTHON_COMPILING_IN_CPYTHON
            Py_DECREF(exc_tb);
            #endif
        }
        #endif
    }
#if CYTHON_USE_EXC_INFO_STACK
    exc_state->previous_item = tstate->exc_info;
    tstate->exc_info = exc_state;
#else
    if (exc_state->exc_type) {
        __Pyx_ExceptionSwap(&exc_state->exc_type, &exc_state->exc_value, &exc_state->exc_traceback);
    } else {
        __Pyx_Coroutine_ExceptionClear(exc_state);
        __Pyx_ExceptionSave(&exc_state->exc_type, &exc_state->exc_value, &exc_state->exc_traceback);
    }
#endif
    self->is_running = 1;
    retval = self->body(self, tstate, value);
    self->is_running = 0;
#if CYTHON_USE_EXC_INFO_STACK
    exc_state = &self->gi_exc_state;
    tstate->exc_info = exc_state->previous_item;
    exc_state->previous_item = NULL;
    __Pyx_Coroutine_ResetFrameBackpointer(exc_state);
#endif
    return retval;
}
static CYTHON_INLINE void __Pyx_Coroutine_ResetFrameBackpointer(__Pyx_ExcInfoStruct *exc_state) {
#if CYTHON_COMPILING_IN_PYPY
    CYTHON_UNUSED_VAR(exc_state);
#else
    PyObject *exc_tb;
    #if PY_VERSION_HEX >= 0x030B00a4
    if (!exc_state->exc_value) return;
    exc_tb = PyException_GetTraceback(exc_state->exc_value);
    #else
    exc_tb = exc_state->exc_traceback;
    #endif
    if (likely(exc_tb)) {
        PyTracebackObject *tb = (PyTracebackObject *) exc_tb;
        PyFrameObject *f = tb->tb_frame;
        Py_CLEAR(f->f_back);
        #if PY_VERSION_HEX >= 0x030B00a4
        Py_DECREF(exc_tb);
        #endif
    }
#endif
}
static CYTHON_INLINE
PyObject *__Pyx_Coroutine_MethodReturn(PyObject* gen, PyObject *retval) {
    CYTHON_MAYBE_UNUSED_VAR(gen);
    if (unlikely(!retval)) {
        __Pyx_PyThreadState_declare
        __Pyx_PyThreadState_assign
        if (!__Pyx_PyErr_Occurred()) {
            PyObject *exc = PyExc_StopIteration;
            #ifdef __Pyx_AsyncGen_USED
            if (__Pyx_AsyncGen_CheckExact(gen))
                exc = __Pyx_PyExc_StopAsyncIteration;
            #endif
            __Pyx_PyErr_SetNone(exc);
        }
    }
    return retval;
}
#if CYTHON_COMPILING_IN_CPYTHON && PY_VERSION_HEX >= 0x03030000 && (defined(__linux__) || PY_VERSION_HEX >= 0x030600B3)
static CYTHON_INLINE
PyObject *__Pyx_PyGen_Send(PyGenObject *gen, PyObject *arg) {
#if PY_VERSION_HEX <= 0x030A00A1
    return _PyGen_Send(gen, arg);
#else
    PyObject *result;
    if (PyIter_Send((PyObject*)gen, arg ? arg : Py_None, &result) == PYGEN_RETURN) {
        if (PyAsyncGen_CheckExact(gen)) {
            assert(result == Py_None);
            PyErr_SetNone(PyExc_StopAsyncIteration);
        }
        else if (result == Py_None) {
            PyErr_SetNone(PyExc_StopIteration);
        }
        else {
#if PY_VERSION_HEX < 0x030d00A1
            _PyGen_SetStopIterationValue(result);
#else
            if (!PyTuple_Check(result) && !PyExceptionInstance_Check(result)) {
                PyErr_SetObject(PyExc_StopIteration, result);
            } else {
                PyObject *exc = __Pyx_PyObject_CallOneArg(PyExc_StopIteration, result);
                if (likely(exc != NULL)) {
                    PyErr_SetObject(PyExc_StopIteration, exc);
                    Py_DECREF(exc);
                }
            }
#endif
        }
        Py_DECREF(result);
        result = NULL;
    }
    return result;
#endif
}
#endif
static CYTHON_INLINE
PyObject *__Pyx_Coroutine_FinishDelegation(__pyx_CoroutineObject *gen) {
    PyObject *ret;
    PyObject *val = NULL;
    __Pyx_Coroutine_Undelegate(gen);
    __Pyx_PyGen__FetchStopIterationValue(__Pyx_PyThreadState_Current, &val);
    ret = __Pyx_Coroutine_SendEx(gen, val, 0);
    Py_XDECREF(val);
    return ret;
}
static PyObject *__Pyx_Coroutine_Send(PyObject *self, PyObject *value) {
    PyObject *retval;
    __pyx_CoroutineObject *gen = (__pyx_CoroutineObject*) self;
    PyObject *yf = gen->yieldfrom;
    if (unlikely(gen->is_running))
        return __Pyx_Coroutine_AlreadyRunningError(gen);
    if (yf) {
        PyObject *ret;
        gen->is_running = 1;
        #ifdef __Pyx_Generator_USED
        if (__Pyx_Generator_CheckExact(yf)) {
            ret = __Pyx_Coroutine_Send(yf, value);
        } else
        #endif
        #ifdef __Pyx_Coroutine_USED
        if (__Pyx_Coroutine_Check(yf)) {
            ret = __Pyx_Coroutine_Send(yf, value);
        } else
        #endif
        #ifdef __Pyx_AsyncGen_USED
        if (__pyx_PyAsyncGenASend_CheckExact(yf)) {
            ret = __Pyx_async_gen_asend_send(yf, value);
        } else
        #endif
        #if CYTHON_COMPILING_IN_CPYTHON && PY_VERSION_HEX >= 0x03030000 && (defined(__linux__) || PY_VERSION_HEX >= 0x030600B3)
        if (PyGen_CheckExact(yf)) {
            ret = __Pyx_PyGen_Send((PyGenObject*)yf, value == Py_None ? NULL : value);
        } else
        #endif
        #if CYTHON_COMPILING_IN_CPYTHON && PY_VERSION_HEX >= 0x03050000 && defined(PyCoro_CheckExact) && (defined(__linux__) || PY_VERSION_HEX >= 0x030600B3)
        if (PyCoro_CheckExact(yf)) {
            ret = __Pyx_PyGen_Send((PyGenObject*)yf, value == Py_None ? NULL : value);
        } else
        #endif
        {
            if (value == Py_None)
                ret = __Pyx_PyObject_GetIterNextFunc(yf)(yf);
            else
                ret = __Pyx_PyObject_CallMethod1(yf, __pyx_n_s_send, value);
        }
        gen->is_running = 0;
        if (likely(ret)) {
            return ret;
        }
        retval = __Pyx_Coroutine_FinishDelegation(gen);
    } else {
        retval = __Pyx_Coroutine_SendEx(gen, value, 0);
    }
    return __Pyx_Coroutine_MethodReturn(self, retval);
}
static int __Pyx_Coroutine_CloseIter(__pyx_CoroutineObject *gen, PyObject *yf) {
    PyObject *retval = NULL;
    int err = 0;
    #ifdef __Pyx_Generator_USED
    if (__Pyx_Generator_CheckExact(yf)) {
        retval = __Pyx_Coroutine_Close(yf);
        if (!retval)
            return -1;
    } else
    #endif
    #ifdef __Pyx_Coroutine_USED
    if (__Pyx_Coroutine_Check(yf)) {
        retval = __Pyx_Coroutine_Close(yf);
        if (!retval)
            return -1;
    } else
    if (__Pyx_CoroutineAwait_CheckExact(yf)) {
        retval = __Pyx_CoroutineAwait_Close((__pyx_CoroutineAwaitObject*)yf, NULL);
        if (!retval)
            return -1;
    } else
    #endif
    #ifdef __Pyx_AsyncGen_USED
    if (__pyx_PyAsyncGenASend_CheckExact(yf)) {
        retval = __Pyx_async_gen_asend_close(yf, NULL);
    } else
    if (__pyx_PyAsyncGenAThrow_CheckExact(yf)) {
        retval = __Pyx_async_gen_athrow_close(yf, NULL);
    } else
    #endif
    {
        PyObject *meth;
        gen->is_running = 1;
        meth = __Pyx_PyObject_GetAttrStrNoError(yf, __pyx_n_s_close);
        if (unlikely(!meth)) {
            if (unlikely(PyErr_Occurred())) {
                PyErr_WriteUnraisable(yf);
            }
        } else {
            retval = __Pyx_PyObject_CallNoArg(meth);
            Py_DECREF(meth);
            if (unlikely(!retval))
                err = -1;
        }
        gen->is_running = 0;
    }
    Py_XDECREF(retval);
    return err;
}
static PyObject *__Pyx_Generator_Next(PyObject *self) {
    __pyx_CoroutineObject *gen = (__pyx_CoroutineObject*) self;
    PyObject *yf = gen->yieldfrom;
    if (unlikely(gen->is_running))
        return __Pyx_Coroutine_AlreadyRunningError(gen);
    if (yf) {
        PyObject *ret;
        gen->is_running = 1;
        #ifdef __Pyx_Generator_USED
        if (__Pyx_Generator_CheckExact(yf)) {
            ret = __Pyx_Generator_Next(yf);
        } else
        #endif
        #if CYTHON_COMPILING_IN_CPYTHON && PY_VERSION_HEX >= 0x03030000 && (defined(__linux__) || PY_VERSION_HEX >= 0x030600B3)
        if (PyGen_CheckExact(yf)) {
            ret = __Pyx_PyGen_Send((PyGenObject*)yf, NULL);
        } else
        #endif
        #ifdef __Pyx_Coroutine_USED
        if (__Pyx_Coroutine_Check(yf)) {
            ret = __Pyx_Coroutine_Send(yf, Py_None);
        } else
        #endif
            ret = __Pyx_PyObject_GetIterNextFunc(yf)(yf);
        gen->is_running = 0;
        if (likely(ret)) {
            return ret;
        }
        return __Pyx_Coroutine_FinishDelegation(gen);
    }
    return __Pyx_Coroutine_SendEx(gen, Py_None, 0);
}
static PyObject *__Pyx_Coroutine_Close_Method(PyObject *self, PyObject *arg) {
    CYTHON_UNUSED_VAR(arg);
    return __Pyx_Coroutine_Close(self);
}
static PyObject *__Pyx_Coroutine_Close(PyObject *self) {
    __pyx_CoroutineObject *gen = (__pyx_CoroutineObject *) self;
    PyObject *retval, *raised_exception;
    PyObject *yf = gen->yieldfrom;
    int err = 0;
    if (unlikely(gen->is_running))
        return __Pyx_Coroutine_AlreadyRunningError(gen);
    if (yf) {
        Py_INCREF(yf);
        err = __Pyx_Coroutine_CloseIter(gen, yf);
        __Pyx_Coroutine_Undelegate(gen);
        Py_DECREF(yf);
    }
    if (err == 0)
        PyErr_SetNone(PyExc_GeneratorExit);
    retval = __Pyx_Coroutine_SendEx(gen, NULL, 1);
    if (unlikely(retval)) {
        const char *msg;
        Py_DECREF(retval);
        if ((0)) {
        #ifdef __Pyx_Coroutine_USED
        } else if (__Pyx_Coroutine_Check(self)) {
            msg = "coroutine ignored GeneratorExit";
        #endif
        #ifdef __Pyx_AsyncGen_USED
        } else if (__Pyx_AsyncGen_CheckExact(self)) {
#if PY_VERSION_HEX < 0x03060000
            msg = "async generator ignored GeneratorExit - might require Python 3.6+ finalisation (PEP 525)";
#else
            msg = "async generator ignored GeneratorExit";
#endif
        #endif
        } else {
            msg = "generator ignored GeneratorExit";
        }
        PyErr_SetString(PyExc_RuntimeError, msg);
        return NULL;
    }
    raised_exception = PyErr_Occurred();
    if (likely(!raised_exception || __Pyx_PyErr_GivenExceptionMatches2(raised_exception, PyExc_GeneratorExit, PyExc_StopIteration))) {
        if (raised_exception) PyErr_Clear();
        Py_INCREF(Py_None);
        return Py_None;
    }
    return NULL;
}
static PyObject *__Pyx__Coroutine_Throw(PyObject *self, PyObject *typ, PyObject *val, PyObject *tb,
                                        PyObject *args, int close_on_genexit) {
    __pyx_CoroutineObject *gen = (__pyx_CoroutineObject *) self;
    PyObject *yf = gen->yieldfrom;
    if (unlikely(gen->is_running))
        return __Pyx_Coroutine_AlreadyRunningError(gen);
    if (yf) {
        PyObject *ret;
        Py_INCREF(yf);
        if (__Pyx_PyErr_GivenExceptionMatches(typ, PyExc_GeneratorExit) && close_on_genexit) {
            int err = __Pyx_Coroutine_CloseIter(gen, yf);
            Py_DECREF(yf);
            __Pyx_Coroutine_Undelegate(gen);
            if (err < 0)
                return __Pyx_Coroutine_MethodReturn(self, __Pyx_Coroutine_SendEx(gen, NULL, 0));
            goto throw_here;
        }
        gen->is_running = 1;
        if (0
        #ifdef __Pyx_Generator_USED
            || __Pyx_Generator_CheckExact(yf)
        #endif
        #ifdef __Pyx_Coroutine_USED
            || __Pyx_Coroutine_Check(yf)
        #endif
            ) {
            ret = __Pyx__Coroutine_Throw(yf, typ, val, tb, args, close_on_genexit);
        #ifdef __Pyx_Coroutine_USED
        } else if (__Pyx_CoroutineAwait_CheckExact(yf)) {
            ret = __Pyx__Coroutine_Throw(((__pyx_CoroutineAwaitObject*)yf)->coroutine, typ, val, tb, args, close_on_genexit);
        #endif
        } else {
            PyObject *meth = __Pyx_PyObject_GetAttrStrNoError(yf, __pyx_n_s_throw);
            if (unlikely(!meth)) {
                Py_DECREF(yf);
                if (unlikely(PyErr_Occurred())) {
                    gen->is_running = 0;
                    return NULL;
                }
                __Pyx_Coroutine_Undelegate(gen);
                gen->is_running = 0;
                goto throw_here;
            }
            if (likely(args)) {
                ret = __Pyx_PyObject_Call(meth, args, NULL);
            } else {
                PyObject *cargs[4] = {NULL, typ, val, tb};
                ret = __Pyx_PyObject_FastCall(meth, cargs+1, 3 | __Pyx_PY_VECTORCALL_ARGUMENTS_OFFSET);
            }
            Py_DECREF(meth);
        }
        gen->is_running = 0;
        Py_DECREF(yf);
        if (!ret) {
            ret = __Pyx_Coroutine_FinishDelegation(gen);
        }
        return __Pyx_Coroutine_MethodReturn(self, ret);
    }
throw_here:
    __Pyx_Raise(typ, val, tb, NULL);
    return __Pyx_Coroutine_MethodReturn(self, __Pyx_Coroutine_SendEx(gen, NULL, 0));
}
static PyObject *__Pyx_Coroutine_Throw(PyObject *self, PyObject *args) {
    PyObject *typ;
    PyObject *val = NULL;
    PyObject *tb = NULL;
    if (unlikely(!PyArg_UnpackTuple(args, (char *)"throw", 1, 3, &typ, &val, &tb)))
        return NULL;
    return __Pyx__Coroutine_Throw(self, typ, val, tb, args, 1);
}
static CYTHON_INLINE int __Pyx_Coroutine_traverse_excstate(__Pyx_ExcInfoStruct *exc_state, visitproc visit, void *arg) {
#if PY_VERSION_HEX >= 0x030B00a4
    Py_VISIT(exc_state->exc_value);
#else
    Py_VISIT(exc_state->exc_type);
    Py_VISIT(exc_state->exc_value);
    Py_VISIT(exc_state->exc_traceback);
#endif
    return 0;
}
static int __Pyx_Coroutine_traverse(__pyx_CoroutineObject *gen, visitproc visit, void *arg) {
    Py_VISIT(gen->closure);
    Py_VISIT(gen->classobj);
    Py_VISIT(gen->yieldfrom);
    return __Pyx_Coroutine_traverse_excstate(&gen->gi_exc_state, visit, arg);
}
static int __Pyx_Coroutine_clear(PyObject *self) {
    __pyx_CoroutineObject *gen = (__pyx_CoroutineObject *) self;
    Py_CLEAR(gen->closure);
    Py_CLEAR(gen->classobj);
    Py_CLEAR(gen->yieldfrom);
    __Pyx_Coroutine_ExceptionClear(&gen->gi_exc_state);
#ifdef __Pyx_AsyncGen_USED
    if (__Pyx_AsyncGen_CheckExact(self)) {
        Py_CLEAR(((__pyx_PyAsyncGenObject*)gen)->ag_finalizer);
    }
#endif
    Py_CLEAR(gen->gi_code);
    Py_CLEAR(gen->gi_frame);
    Py_CLEAR(gen->gi_name);
    Py_CLEAR(gen->gi_qualname);
    Py_CLEAR(gen->gi_modulename);
    return 0;
}
static void __Pyx_Coroutine_dealloc(PyObject *self) {
    __pyx_CoroutineObject *gen = (__pyx_CoroutineObject *) self;
    PyObject_GC_UnTrack(gen);
    if (gen->gi_weakreflist != NULL)
        PyObject_ClearWeakRefs(self);
    if (gen->resume_label >= 0) {
        PyObject_GC_Track(self);
#if PY_VERSION_HEX >= 0x030400a1 && CYTHON_USE_TP_FINALIZE
        if (unlikely(PyObject_CallFinalizerFromDealloc(self)))
#else
        Py_TYPE(gen)->tp_del(self);
        if (unlikely(Py_REFCNT(self) > 0))
#endif
        {
            return;
        }
        PyObject_GC_UnTrack(self);
    }
#ifdef __Pyx_AsyncGen_USED
    if (__Pyx_AsyncGen_CheckExact(self)) {
        /* We have to handle this case for asynchronous generators
           right here, because this code has to be between UNTRACK
           and GC_Del. */
        Py_CLEAR(((__pyx_PyAsyncGenObject*)self)->ag_finalizer);
    }
#endif
    __Pyx_Coroutine_clear(self);
    __Pyx_PyHeapTypeObject_GC_Del(gen);
}
static void __Pyx_Coroutine_del(PyObject *self) {
    PyObject *error_type, *error_value, *error_traceback;
    __pyx_CoroutineObject *gen = (__pyx_CoroutineObject *) self;
    __Pyx_PyThreadState_declare
    if (gen->resume_label < 0) {
        return;
    }
#if !CYTHON_USE_TP_FINALIZE
    assert(self->ob_refcnt == 0);
    __Pyx_SET_REFCNT(self, 1);
#endif
    __Pyx_PyThreadState_assign
    __Pyx_ErrFetch(&error_type, &error_value, &error_traceback);
#ifdef __Pyx_AsyncGen_USED
    if (__Pyx_AsyncGen_CheckExact(self)) {
        __pyx_PyAsyncGenObject *agen = (__pyx_PyAsyncGenObject*)self;
        PyObject *finalizer = agen->ag_finalizer;
        if (finalizer && !agen->ag_closed) {
            PyObject *res = __Pyx_PyObject_CallOneArg(finalizer, self);
            if (unlikely(!res)) {
                PyErr_WriteUnraisable(self);
            } else {
                Py_DECREF(res);
            }
            __Pyx_ErrRestore(error_type, error_value, error_traceback);
            return;
        }
    }
#endif
    if (unlikely(gen->resume_label == 0 && !error_value)) {
#ifdef __Pyx_Coroutine_USED
#ifdef __Pyx_Generator_USED
    if (!__Pyx_Generator_CheckExact(self))
#endif
        {
        PyObject_GC_UnTrack(self);
#if PY_MAJOR_VERSION >= 3  || defined(PyErr_WarnFormat)
        if (unlikely(PyErr_WarnFormat(PyExc_RuntimeWarning, 1, "coroutine '%.50S' was never awaited", gen->gi_qualname) < 0))
            PyErr_WriteUnraisable(self);
#else
        {PyObject *msg;
        char *cmsg;
        #if CYTHON_COMPILING_IN_PYPY
        msg = NULL;
        cmsg = (char*) "coroutine was never awaited";
        #else
        char *cname;
        PyObject *qualname;
        qualname = gen->gi_qualname;
        cname = PyString_AS_STRING(qualname);
        msg = PyString_FromFormat("coroutine '%.50s' was never awaited", cname);
        if (unlikely(!msg)) {
            PyErr_Clear();
            cmsg = (char*) "coroutine was never awaited";
        } else {
            cmsg = PyString_AS_STRING(msg);
        }
        #endif
        if (unlikely(PyErr_WarnEx(PyExc_RuntimeWarning, cmsg, 1) < 0))
            PyErr_WriteUnraisable(self);
        Py_XDECREF(msg);}
#endif
        PyObject_GC_Track(self);
        }
#endif
    } else {
        PyObject *res = __Pyx_Coroutine_Close(self);
        if (unlikely(!res)) {
            if (PyErr_Occurred())
                PyErr_WriteUnraisable(self);
        } else {
            Py_DECREF(res);
        }
    }
    __Pyx_ErrRestore(error_type, error_value, error_traceback);
#if !CYTHON_USE_TP_FINALIZE
    assert(Py_REFCNT(self) > 0);
    if (likely(--self->ob_refcnt == 0)) {
        return;
    }
    {
        Py_ssize_t refcnt = Py_REFCNT(self);
        _Py_NewReference(self);
        __Pyx_SET_REFCNT(self, refcnt);
    }
#if CYTHON_COMPILING_IN_CPYTHON
    assert(PyType_IS_GC(Py_TYPE(self)) &&
           _Py_AS_GC(self)->gc.gc_refs != _PyGC_REFS_UNTRACKED);
    _Py_DEC_REFTOTAL;
#endif
#ifdef COUNT_ALLOCS
    --Py_TYPE(self)->tp_frees;
    --Py_TYPE(self)->tp_allocs;
#endif
#endif
}
static PyObject *
__Pyx_Coroutine_get_name(__pyx_CoroutineObject *self, void *context)
{
    PyObject *name = self->gi_name;
    CYTHON_UNUSED_VAR(context);
    if (unlikely(!name)) name = Py_None;
    Py_INCREF(name);
    return name;
}
static int
__Pyx_Coroutine_set_name(__pyx_CoroutineObject *self, PyObject *value, void *context)
{
    CYTHON_UNUSED_VAR(context);
#if PY_MAJOR_VERSION >= 3
    if (unlikely(value == NULL || !PyUnicode_Check(value)))
#else
    if (unlikely(value == NULL || !PyString_Check(value)))
#endif
    {
        PyErr_SetString(PyExc_TypeError,
                        "__name__ must be set to a string object");
        return -1;
    }
    Py_INCREF(value);
    __Pyx_Py_XDECREF_SET(self->gi_name, value);
    return 0;
}
static PyObject *
__Pyx_Coroutine_get_qualname(__pyx_CoroutineObject *self, void *context)
{
    PyObject *name = self->gi_qualname;
    CYTHON_UNUSED_VAR(context);
    if (unlikely(!name)) name = Py_None;
    Py_INCREF(name);
    return name;
}
static int
__Pyx_Coroutine_set_qualname(__pyx_CoroutineObject *self, PyObject *value, void *context)
{
    CYTHON_UNUSED_VAR(context);
#if PY_MAJOR_VERSION >= 3
    if (unlikely(value == NULL || !PyUnicode_Check(value)))
#else
    if (unlikely(value == NULL || !PyString_Check(value)))
#endif
    {
        PyErr_SetString(PyExc_TypeError,
                        "__qualname__ must be set to a string object");
        return -1;
    }
    Py_INCREF(value);
    __Pyx_Py_XDECREF_SET(self->gi_qualname, value);
    return 0;
}
static PyObject *
__Pyx_Coroutine_get_frame(__pyx_CoroutineObject *self, void *context)
{
    PyObject *frame = self->gi_frame;
    CYTHON_UNUSED_VAR(context);
    if (!frame) {
        if (unlikely(!self->gi_code)) {
            Py_RETURN_NONE;
        }
        frame = (PyObject *) PyFrame_New(
            PyThreadState_Get(),            /*PyThreadState *tstate,*/
            (PyCodeObject*) self->gi_code,  /*PyCodeObject *code,*/
            __pyx_d,                 /*PyObject *globals,*/
            0                               /*PyObject *locals*/
        );
        if (unlikely(!frame))
            return NULL;
        self->gi_frame = frame;
    }
    Py_INCREF(frame);
    return frame;
}
static __pyx_CoroutineObject *__Pyx__Coroutine_New(
            PyTypeObject* type, __pyx_coroutine_body_t body, PyObject *code, PyObject *closure,
            PyObject *name, PyObject *qualname, PyObject *module_name) {
    __pyx_CoroutineObject *gen = PyObject_GC_New(__pyx_CoroutineObject, type);
    if (unlikely(!gen))
        return NULL;
    return __Pyx__Coroutine_NewInit(gen, body, code, closure, name, qualname, module_name);
}
static __pyx_CoroutineObject *__Pyx__Coroutine_NewInit(
            __pyx_CoroutineObject *gen, __pyx_coroutine_body_t body, PyObject *code, PyObject *closure,
            PyObject *name, PyObject *qualname, PyObject *module_name) {
    gen->body = body;
    gen->closure = closure;
    Py_XINCREF(closure);
    gen->is_running = 0;
    gen->resume_label = 0;
    gen->classobj = NULL;
    gen->yieldfrom = NULL;
    #if PY_VERSION_HEX >= 0x030B00a4
    gen->gi_exc_state.exc_value = NULL;
    #else
    gen->gi_exc_state.exc_type = NULL;
    gen->gi_exc_state.exc_value = NULL;
    gen->gi_exc_state.exc_traceback = NULL;
    #endif
#if CYTHON_USE_EXC_INFO_STACK
    gen->gi_exc_state.previous_item = NULL;
#endif
    gen->gi_weakreflist = NULL;
    Py_XINCREF(qualname);
    gen->gi_qualname = qualname;
    Py_XINCREF(name);
    gen->gi_name = name;
    Py_XINCREF(module_name);
    gen->gi_modulename = module_name;
    Py_XINCREF(code);
    gen->gi_code = code;
    gen->gi_frame = NULL;
    PyObject_GC_Track(gen);
    return gen;
}

/* PatchModuleWithCoroutine */
static PyObject* __Pyx_Coroutine_patch_module(PyObject* module, const char* py_code) {
#if defined(__Pyx_Generator_USED) || defined(__Pyx_Coroutine_USED)
    int result;
    PyObject *globals, *result_obj;
    globals = PyDict_New();  if (unlikely(!globals)) goto ignore;
    result = PyDict_SetItemString(globals, "_cython_coroutine_type",
    #ifdef __Pyx_Coroutine_USED
        (PyObject*)__pyx_CoroutineType);
    #else
        Py_None);
    #endif
    if (unlikely(result < 0)) goto ignore;
    result = PyDict_SetItemString(globals, "_cython_generator_type",
    #ifdef __Pyx_Generator_USED
        (PyObject*)__pyx_GeneratorType);
    #else
        Py_None);
    #endif
    if (unlikely(result < 0)) goto ignore;
    if (unlikely(PyDict_SetItemString(globals, "_module", module) < 0)) goto ignore;
    if (unlikely(PyDict_SetItemString(globals, "__builtins__", __pyx_b) < 0)) goto ignore;
    result_obj = PyRun_String(py_code, Py_file_input, globals, globals);
    if (unlikely(!result_obj)) goto ignore;
    Py_DECREF(result_obj);
    Py_DECREF(globals);
    return module;
ignore:
    Py_XDECREF(globals);
    PyErr_WriteUnraisable(module);
    if (unlikely(PyErr_WarnEx(PyExc_RuntimeWarning, "Cython module failed to patch module with custom type", 1) < 0)) {
        Py_DECREF(module);
        module = NULL;
    }
#else
    py_code++;
#endif
    return module;
}

/* PatchGeneratorABC */
#ifndef CYTHON_REGISTER_ABCS
#define CYTHON_REGISTER_ABCS 1
#endif
#if defined(__Pyx_Generator_USED) || defined(__Pyx_Coroutine_USED)
static PyObject* __Pyx_patch_abc_module(PyObject *module);
static PyObject* __Pyx_patch_abc_module(PyObject *module) {
    module = __Pyx_Coroutine_patch_module(
        module, ""
"if _cython_generator_type is not None:\n"
"    try: Generator = _module.Generator\n"
"    except AttributeError: pass\n"
"    else: Generator.register(_cython_generator_type)\n"
"if _cython_coroutine_type is not None:\n"
"    try: Coroutine = _module.Coroutine\n"
"    except AttributeError: pass\n"
"    else: Coroutine.register(_cython_coroutine_type)\n"
    );
    return module;
}
#endif
static int __Pyx_patch_abc(void) {
#if defined(__Pyx_Generator_USED) || defined(__Pyx_Coroutine_USED)
    static int abc_patched = 0;
    if (CYTHON_REGISTER_ABCS && !abc_patched) {
        PyObject *module;
        module = PyImport_ImportModule((PY_MAJOR_VERSION >= 3) ? "collections.abc" : "collections");
        if (unlikely(!module)) {
            PyErr_WriteUnraisable(NULL);
            if (unlikely(PyErr_WarnEx(PyExc_RuntimeWarning,
                    ((PY_MAJOR_VERSION >= 3) ?
                        "Cython module failed to register with collections.abc module" :
                        "Cython module failed to register with collections module"), 1) < 0)) {
                return -1;
            }
        } else {
            module = __Pyx_patch_abc_module(module);
            abc_patched = 1;
            if (unlikely(!module))
                return -1;
            Py_DECREF(module);
        }
        module = PyImport_ImportModule("backports_abc");
        if (module) {
            module = __Pyx_patch_abc_module(module);
            Py_XDECREF(module);
        }
        if (!module) {
            PyErr_Clear();
        }
    }
#else
    if ((0)) __Pyx_Coroutine_patch_module(NULL, NULL);
#endif
    return 0;
}

/* Generator */
static PyMethodDef __pyx_Generator_methods[] = {
    {"send", (PyCFunction) __Pyx_Coroutine_Send, METH_O,
     (char*) PyDoc_STR("send(arg) -> send 'arg' into generator,\nreturn next yielded value or raise StopIteration.")},
    {"throw", (PyCFunction) __Pyx_Coroutine_Throw, METH_VARARGS,
     (char*) PyDoc_STR("throw(typ[,val[,tb]]) -> raise exception in generator,\nreturn next yielded value or raise StopIteration.")},
    {"close", (PyCFunction) __Pyx_Coroutine_Close_Method, METH_NOARGS,
     (char*) PyDoc_STR("close() -> raise GeneratorExit inside generator.")},
    {0, 0, 0, 0}
};
static PyMemberDef __pyx_Generator_memberlist[] = {
    {(char *) "gi_running", T_BOOL, offsetof(__pyx_CoroutineObject, is_running), READONLY, NULL},
    {(char*) "gi_yieldfrom", T_OBJECT, offsetof(__pyx_CoroutineObject, yieldfrom), READONLY,
     (char*) PyDoc_STR("object being iterated by 'yield from', or None")},
    {(char*) "gi_code", T_OBJECT, offsetof(__pyx_CoroutineObject, gi_code), READONLY, NULL},
    {(char *) "__module__", T_OBJECT, offsetof(__pyx_CoroutineObject, gi_modulename), 0, 0},
#if CYTHON_USE_TYPE_SPECS
    {(char *) "__weaklistoffset__", T_PYSSIZET, offsetof(__pyx_CoroutineObject, gi_weakreflist), READONLY, 0},
#endif
    {0, 0, 0, 0, 0}
};
static PyGetSetDef __pyx_Generator_getsets[] = {
    {(char *) "__name__", (getter)__Pyx_Coroutine_get_name, (setter)__Pyx_Coroutine_set_name,
     (char*) PyDoc_STR("name of the generator"), 0},
    {(char *) "__qualname__", (getter)__Pyx_Coroutine_get_qualname, (setter)__Pyx_Coroutine_set_qualname,
     (char*) PyDoc_STR("qualified name of the generator"), 0},
    {(char *) "gi_frame", (getter)__Pyx_Coroutine_get_frame, NULL,
     (char*) PyDoc_STR("Frame of the generator"), 0},
    {0, 0, 0, 0, 0}
};
#if CYTHON_USE_TYPE_SPECS
static PyType_Slot __pyx_GeneratorType_slots[] = {
    {Py_tp_dealloc, (void *)__Pyx_Coroutine_dealloc},
    {Py_tp_traverse, (void *)__Pyx_Coroutine_traverse},
    {Py_tp_iter, (void *)PyObject_SelfIter},
    {Py_tp_iternext, (void *)__Pyx_Generator_Next},
    {Py_tp_methods, (void *)__pyx_Generator_methods},
    {Py_tp_members, (void *)__pyx_Generator_memberlist},
    {Py_tp_getset, (void *)__pyx_Generator_getsets},
    {Py_tp_getattro, (void *) __Pyx_PyObject_GenericGetAttrNoDict},
#if CYTHON_USE_TP_FINALIZE
    {Py_tp_finalize, (void *)__Pyx_Coroutine_del},
#endif
    {0, 0},
};
static PyType_Spec __pyx_GeneratorType_spec = {
    __PYX_TYPE_MODULE_PREFIX "generator",
    sizeof(__pyx_CoroutineObject),
    0,
    Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HAVE_GC | Py_TPFLAGS_HAVE_FINALIZE,
    __pyx_GeneratorType_slots
};
#else
static PyTypeObject __pyx_GeneratorType_type = {
    PyVarObject_HEAD_INIT(0, 0)
    __PYX_TYPE_MODULE_PREFIX "generator",
    sizeof(__pyx_CoroutineObject),
    0,
    (destructor) __Pyx_Coroutine_dealloc,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    Py_TPFLAGS_DEFAULT | Py_TPFLAGS_HAVE_GC | Py_TPFLAGS_HAVE_FINALIZE,
    0,
    (traverseproc) __Pyx_Coroutine_traverse,
    0,
    0,
    offsetof(__pyx_CoroutineObject, gi_weakreflist),
    0,
    (iternextfunc) __Pyx_Generator_Next,
    __pyx_Generator_methods,
    __pyx_Generator_memberlist,
    __pyx_Generator_getsets,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
#if CYTHON_USE_TP_FINALIZE
    0,
#else
    __Pyx_Coroutine_del,
#endif
    0,
#if CYTHON_USE_TP_FINALIZE
    __Pyx_Coroutine_del,
#elif PY_VERSION_HEX >= 0x030400a1
    0,
#endif
#if PY_VERSION_HEX >= 0x030800b1 && (!CYTHON_COMPILING_IN_PYPY || PYPY_VERSION_NUM >= 0x07030800)
    0,
#endif
#if __PYX_NEED_TP_PRINT_SLOT
    0,
#endif
#if PY_VERSION_HEX >= 0x030C0000
    0,
#endif
#if PY_VERSION_HEX >= 0x030d00A4
    0,
#endif
#if CYTHON_COMPILING_IN_PYPY && PY_VERSION_HEX >= 0x03090000 && PY_VERSION_HEX < 0x030a0000
    0,
#endif
};
#endif
static int __pyx_Generator_init(PyObject *module) {
#if CYTHON_USE_TYPE_SPECS
    __pyx_GeneratorType = __Pyx_FetchCommonTypeFromSpec(module, &__pyx_GeneratorType_spec, NULL);
#else
    CYTHON_UNUSED_VAR(module);
    __pyx_GeneratorType_type.tp_getattro = __Pyx_PyObject_GenericGetAttrNoDict;
    __pyx_GeneratorType_type.tp_iter = PyObject_SelfIter;
    __pyx_GeneratorType = __Pyx_FetchCommonType(&__pyx_GeneratorType_type);
#endif
    if (unlikely(!__pyx_GeneratorType)) {
        return -1;
    }
    return 0;
}

/* CheckBinaryVersion */
static unsigned long __Pyx_get_runtime_version(void) {
#if __PYX_LIMITED_VERSION_HEX >= 0x030B00A4
    return Py_Version & ~0xFFUL;
#else
    const char* rt_version = Py_GetVersion();
    unsigned long version = 0;
    unsigned long factor = 0x01000000UL;
    unsigned int digit = 0;
    int i = 0;
    while (factor) {
        while ('0' <= rt_version[i] && rt_version[i] <= '9') {
            digit = digit * 10 + (unsigned int) (rt_version[i] - '0');
            ++i;
        }
        version += factor * digit;
        if (rt_version[i] != '.')
            break;
        digit = 0;
        factor >>= 8;
        ++i;
    }
    return version;
#endif
}
static int __Pyx_check_binary_version(unsigned long ct_version, unsigned long rt_version, int allow_newer) {
    const unsigned long MAJOR_MINOR = 0xFFFF0000UL;
    if ((rt_version & MAJOR_MINOR) == (ct_version & MAJOR_MINOR))
        return 0;
    if (likely(allow_newer && (rt_version & MAJOR_MINOR) > (ct_version & MAJOR_MINOR)))
        return 1;
    {
        char message[200];
        PyOS_snprintf(message, sizeof(message),
                      "compile time Python version %d.%d "
                      "of module '%.100s' "
                      "%s "
                      "runtime version %d.%d",
                       (int) (ct_version >> 24), (int) ((ct_version >> 16) & 0xFF),
                       __Pyx_MODULE_NAME,
                       (allow_newer) ? "was newer than" : "does not match",
                       (int) (rt_version >> 24), (int) ((rt_version >> 16) & 0xFF)
       );
        return PyErr_WarnEx(NULL, message, 1);
    }
}

/* InitStrings */
#if PY_MAJOR_VERSION >= 3
static int __Pyx_InitString(__Pyx_StringTabEntry t, PyObject **str) {
    if (t.is_unicode | t.is_str) {
        if (t.intern) {
            *str = PyUnicode_InternFromString(t.s);
        } else if (t.encoding) {
            *str = PyUnicode_Decode(t.s, t.n - 1, t.encoding, NULL);
        } else {
            *str = PyUnicode_FromStringAndSize(t.s, t.n - 1);
        }
    } else {
        *str = PyBytes_FromStringAndSize(t.s, t.n - 1);
    }
    if (!*str)
        return -1;
    if (PyObject_Hash(*str) == -1)
        return -1;
    return 0;
}
#endif
static int __Pyx_InitStrings(__Pyx_StringTabEntry *t) {
    while (t->p) {
        #if PY_MAJOR_VERSION >= 3
        __Pyx_InitString(*t, t->p);
        #else
        if (t->is_unicode) {
            *t->p = PyUnicode_DecodeUTF8(t->s, t->n - 1, NULL);
        } else if (t->intern) {
            *t->p = PyString_InternFromString(t->s);
        } else {
            *t->p = PyString_FromStringAndSize(t->s, t->n - 1);
        }
        if (!*t->p)
            return -1;
        if (PyObject_Hash(*t->p) == -1)
            return -1;
        #endif
        ++t;
    }
    return 0;
}

#include <string.h>
static CYTHON_INLINE Py_ssize_t __Pyx_ssize_strlen(const char *s) {
    size_t len = strlen(s);
    if (unlikely(len > (size_t) PY_SSIZE_T_MAX)) {
        PyErr_SetString(PyExc_OverflowError, "byte string is too long");
        return -1;
    }
    return (Py_ssize_t) len;
}
static CYTHON_INLINE PyObject* __Pyx_PyUnicode_FromString(const char* c_str) {
    Py_ssize_t len = __Pyx_ssize_strlen(c_str);
    if (unlikely(len < 0)) return NULL;
    return __Pyx_PyUnicode_FromStringAndSize(c_str, len);
}
static CYTHON_INLINE PyObject* __Pyx_PyByteArray_FromString(const char* c_str) {
    Py_ssize_t len = __Pyx_ssize_strlen(c_str);
    if (unlikely(len < 0)) return NULL;
    return PyByteArray_FromStringAndSize(c_str, len);
}
static CYTHON_INLINE const char* __Pyx_PyObject_AsString(PyObject* o) {
    Py_ssize_t ignore;
    return __Pyx_PyObject_AsStringAndSize(o, &ignore);
}
#if __PYX_DEFAULT_STRING_ENCODING_IS_ASCII || __PYX_DEFAULT_STRING_ENCODING_IS_DEFAULT
#if !CYTHON_PEP393_ENABLED
static const char* __Pyx_PyUnicode_AsStringAndSize(PyObject* o, Py_ssize_t *length) {
    char* defenc_c;
    PyObject* defenc = _PyUnicode_AsDefaultEncodedString(o, NULL);
    if (!defenc) return NULL;
    defenc_c = PyBytes_AS_STRING(defenc);
#if __PYX_DEFAULT_STRING_ENCODING_IS_ASCII
    {
        char* end = defenc_c + PyBytes_GET_SIZE(defenc);
        char* c;
        for (c = defenc_c; c < end; c++) {
            if ((unsigned char) (*c) >= 128) {
                PyUnicode_AsASCIIString(o);
                return NULL;
            }
        }
    }
#endif
    *length = PyBytes_GET_SIZE(defenc);
    return defenc_c;
}
#else
static CYTHON_INLINE const char* __Pyx_PyUnicode_AsStringAndSize(PyObject* o, Py_ssize_t *length) {
    if (unlikely(__Pyx_PyUnicode_READY(o) == -1)) return NULL;
#if __PYX_DEFAULT_STRING_ENCODING_IS_ASCII
    if (likely(PyUnicode_IS_ASCII(o))) {
        *length = PyUnicode_GET_LENGTH(o);
        return PyUnicode_AsUTF8(o);
    } else {
        PyUnicode_AsASCIIString(o);
        return NULL;
    }
#else
    return PyUnicode_AsUTF8AndSize(o, length);
#endif
}
#endif
#endif
static CYTHON_INLINE const char* __Pyx_PyObject_AsStringAndSize(PyObject* o, Py_ssize_t *length) {
#if __PYX_DEFAULT_STRING_ENCODING_IS_ASCII || __PYX_DEFAULT_STRING_ENCODING_IS_DEFAULT
    if (
#if PY_MAJOR_VERSION < 3 && __PYX_DEFAULT_STRING_ENCODING_IS_ASCII
            __Pyx_sys_getdefaultencoding_not_ascii &&
#endif
            PyUnicode_Check(o)) {
        return __Pyx_PyUnicode_AsStringAndSize(o, length);
    } else
#endif
#if (!CYTHON_COMPILING_IN_PYPY && !CYTHON_COMPILING_IN_LIMITED_API) || (defined(PyByteArray_AS_STRING) && defined(PyByteArray_GET_SIZE))
    if (PyByteArray_Check(o)) {
        *length = PyByteArray_GET_SIZE(o);
        return PyByteArray_AS_STRING(o);
    } else
#endif
    {
        char* result;
        int r = PyBytes_AsStringAndSize(o, &result, length);
        if (unlikely(r < 0)) {
            return NULL;
        } else {
            return result;
        }
    }
}
static CYTHON_INLINE int __Pyx_PyObject_IsTrue(PyObject* x) {
   int is_true = x == Py_True;
   if (is_true | (x == Py_False) | (x == Py_None)) return is_true;
   else return PyObject_IsTrue(x);
}
static CYTHON_INLINE int __Pyx_PyObject_IsTrueAndDecref(PyObject* x) {
    int retval;
    if (unlikely(!x)) return -1;
    retval = __Pyx_PyObject_IsTrue(x);
    Py_DECREF(x);
    return retval;
}
static PyObject* __Pyx_PyNumber_IntOrLongWrongResultType(PyObject* result, const char* type_name) {
    __Pyx_TypeName result_type_name = __Pyx_PyType_GetName(Py_TYPE(result));
#if PY_MAJOR_VERSION >= 3
    if (PyLong_Check(result)) {
        if (PyErr_WarnFormat(PyExc_DeprecationWarning, 1,
                "__int__ returned non-int (type " __Pyx_FMT_TYPENAME ").  "
                "The ability to return an instance of a strict subclass of int is deprecated, "
                "and may be removed in a future version of Python.",
                result_type_name)) {
            __Pyx_DECREF_TypeName(result_type_name);
            Py_DECREF(result);
            return NULL;
        }
        __Pyx_DECREF_TypeName(result_type_name);
        return result;
    }
#endif
    PyErr_Format(PyExc_TypeError,
                 "__%.4s__ returned non-%.4s (type " __Pyx_FMT_TYPENAME ")",
                 type_name, type_name, result_type_name);
    __Pyx_DECREF_TypeName(result_type_name);
    Py_DECREF(result);
    return NULL;
}
static CYTHON_INLINE PyObject* __Pyx_PyNumber_IntOrLong(PyObject* x) {
#if CYTHON_USE_TYPE_SLOTS
  PyNumberMethods *m;
#endif
  const char *name = NULL;
  PyObject *res = NULL;
#if PY_MAJOR_VERSION < 3
  if (likely(PyInt_Check(x) || PyLong_Check(x)))
#else
  if (likely(PyLong_Check(x)))
#endif
    return __Pyx_NewRef(x);
#if CYTHON_USE_TYPE_SLOTS
  m = Py_TYPE(x)->tp_as_number;
  #if PY_MAJOR_VERSION < 3
  if (m && m->nb_int) {
    name = "int";
    res = m->nb_int(x);
  }
  else if (m && m->nb_long) {
    name = "long";
    res = m->nb_long(x);
  }
  #else
  if (likely(m && m->nb_int)) {
    name = "int";
    res = m->nb_int(x);
  }
  #endif
#else
  if (!PyBytes_CheckExact(x) && !PyUnicode_CheckExact(x)) {
    res = PyNumber_Int(x);
  }
#endif
  if (likely(res)) {
#if PY_MAJOR_VERSION < 3
    if (unlikely(!PyInt_Check(res) && !PyLong_Check(res))) {
#else
    if (unlikely(!PyLong_CheckExact(res))) {
#endif
        return __Pyx_PyNumber_IntOrLongWrongResultType(res, name);
    }
  }
  else if (!PyErr_Occurred()) {
    PyErr_SetString(PyExc_TypeError,
                    "an integer is required");
  }
  return res;
}
static CYTHON_INLINE Py_ssize_t __Pyx_PyIndex_AsSsize_t(PyObject* b) {
  Py_ssize_t ival;
  PyObject *x;
#if PY_MAJOR_VERSION < 3
  if (likely(PyInt_CheckExact(b))) {
    if (sizeof(Py_ssize_t) >= sizeof(long))
        return PyInt_AS_LONG(b);
    else
        return PyInt_AsSsize_t(b);
  }
#endif
  if (likely(PyLong_CheckExact(b))) {
    #if CYTHON_USE_PYLONG_INTERNALS
    if (likely(__Pyx_PyLong_IsCompact(b))) {
        return __Pyx_PyLong_CompactValue(b);
    } else {
      const digit* digits = __Pyx_PyLong_Digits(b);
      const Py_ssize_t size = __Pyx_PyLong_SignedDigitCount(b);
      switch (size) {
         case 2:
           if (8 * sizeof(Py_ssize_t) > 2 * PyLong_SHIFT) {
             return (Py_ssize_t) (((((size_t)digits[1]) << PyLong_SHIFT) | (size_t)digits[0]));
           }
           break;
         case -2:
           if (8 * sizeof(Py_ssize_t) > 2 * PyLong_SHIFT) {
             return -(Py_ssize_t) (((((size_t)digits[1]) << PyLong_SHIFT) | (size_t)digits[0]));
           }
           break;
         case 3:
           if (8 * sizeof(Py_ssize_t) > 3 * PyLong_SHIFT) {
             return (Py_ssize_t) (((((((size_t)digits[2]) << PyLong_SHIFT) | (size_t)digits[1]) << PyLong_SHIFT) | (size_t)digits[0]));
           }
           break;
         case -3:
           if (8 * sizeof(Py_ssize_t) > 3 * PyLong_SHIFT) {
             return -(Py_ssize_t) (((((((size_t)digits[2]) << PyLong_SHIFT) | (size_t)digits[1]) << PyLong_SHIFT) | (size_t)digits[0]));
           }
           break;
         case 4:
           if (8 * sizeof(Py_ssize_t) > 4 * PyLong_SHIFT) {
             return (Py_ssize_t) (((((((((size_t)digits[3]) << PyLong_SHIFT) | (size_t)digits[2]) << PyLong_SHIFT) | (size_t)digits[1]) << PyLong_SHIFT) | (size_t)digits[0]));
           }
           break;
         case -4:
           if (8 * sizeof(Py_ssize_t) > 4 * PyLong_SHIFT) {
             return -(Py_ssize_t) (((((((((size_t)digits[3]) << PyLong_SHIFT) | (size_t)digits[2]) << PyLong_SHIFT) | (size_t)digits[1]) << PyLong_SHIFT) | (size_t)digits[0]));
           }
           break;
      }
    }
    #endif
    return PyLong_AsSsize_t(b);
  }
  x = PyNumber_Index(b);
  if (!x) return -1;
  ival = PyInt_AsSsize_t(x);
  Py_DECREF(x);
  return ival;
}
static CYTHON_INLINE Py_hash_t __Pyx_PyIndex_AsHash_t(PyObject* o) {
  if (sizeof(Py_hash_t) == sizeof(Py_ssize_t)) {
    return (Py_hash_t) __Pyx_PyIndex_AsSsize_t(o);
#if PY_MAJOR_VERSION < 3
  } else if (likely(PyInt_CheckExact(o))) {
    return PyInt_AS_LONG(o);
#endif
  } else {
    Py_ssize_t ival;
    PyObject *x;
    x = PyNumber_Index(o);
    if (!x) return -1;
    ival = PyInt_AsLong(x);
    Py_DECREF(x);
    return ival;
  }
}
static CYTHON_INLINE PyObject * __Pyx_PyBool_FromLong(long b) {
  return b ? __Pyx_NewRef(Py_True) : __Pyx_NewRef(Py_False);
}
static CYTHON_INLINE PyObject * __Pyx_PyInt_FromSize_t(size_t ival) {
    return PyInt_FromSize_t(ival);
}


/* #### Code section: utility_code_pragmas_end ### */
#ifdef _MSC_VER
#pragma warning( pop )
#endif



/* #### Code section: end ### */
#endif /* Py_PYTHON_H */

