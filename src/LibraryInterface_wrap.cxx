/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 3.0.8
 *
 * This file is not intended to be easily readable and contains a number of
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG
 * interface file instead.
 * ----------------------------------------------------------------------------- */


#ifndef SWIGJAVA
#define SWIGJAVA
#endif



#ifdef __cplusplus
/* SwigValueWrapper is described in swig.swg */
template<typename T> class SwigValueWrapper {
  struct SwigMovePointer {
    T *ptr;
    SwigMovePointer(T *p) : ptr(p) { }
    ~SwigMovePointer() { delete ptr; }
    SwigMovePointer& operator=(SwigMovePointer& rhs) { T* oldptr = ptr; ptr = 0; delete oldptr; ptr = rhs.ptr; rhs.ptr = 0; return *this; }
  } pointer;
  SwigValueWrapper& operator=(const SwigValueWrapper<T>& rhs);
  SwigValueWrapper(const SwigValueWrapper<T>& rhs);
public:
  SwigValueWrapper() : pointer(0) { }
  SwigValueWrapper& operator=(const T& t) { SwigMovePointer tmp(new T(t)); pointer = tmp; return *this; }
  operator T&() const { return *pointer.ptr; }
  T *operator&() { return pointer.ptr; }
};

template <typename T> T SwigValueInit() {
  return T();
}
#endif

/* -----------------------------------------------------------------------------
 *  This section contains generic SWIG labels for method/variable
 *  declarations/attributes, and other compiler dependent labels.
 * ----------------------------------------------------------------------------- */

/* template workaround for compilers that cannot correctly implement the C++ standard */
#ifndef SWIGTEMPLATEDISAMBIGUATOR
# if defined(__SUNPRO_CC) && (__SUNPRO_CC <= 0x560)
#  define SWIGTEMPLATEDISAMBIGUATOR template
# elif defined(__HP_aCC)
/* Needed even with `aCC -AA' when `aCC -V' reports HP ANSI C++ B3910B A.03.55 */
/* If we find a maximum version that requires this, the test would be __HP_aCC <= 35500 for A.03.55 */
#  define SWIGTEMPLATEDISAMBIGUATOR template
# else
#  define SWIGTEMPLATEDISAMBIGUATOR
# endif
#endif

/* inline attribute */
#ifndef SWIGINLINE
# if defined(__cplusplus) || (defined(__GNUC__) && !defined(__STRICT_ANSI__))
#   define SWIGINLINE inline
# else
#   define SWIGINLINE
# endif
#endif

/* attribute recognised by some compilers to avoid 'unused' warnings */
#ifndef SWIGUNUSED
# if defined(__GNUC__)
#   if !(defined(__cplusplus)) || (__GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4))
#     define SWIGUNUSED __attribute__ ((__unused__))
#   else
#     define SWIGUNUSED
#   endif
# elif defined(__ICC)
#   define SWIGUNUSED __attribute__ ((__unused__))
# else
#   define SWIGUNUSED
# endif
#endif

#ifndef SWIG_MSC_UNSUPPRESS_4505
# if defined(_MSC_VER)
#   pragma warning(disable : 4505) /* unreferenced local function has been removed */
# endif
#endif

#ifndef SWIGUNUSEDPARM
# ifdef __cplusplus
#   define SWIGUNUSEDPARM(p)
# else
#   define SWIGUNUSEDPARM(p) p SWIGUNUSED
# endif
#endif

/* internal SWIG method */
#ifndef SWIGINTERN
# define SWIGINTERN static SWIGUNUSED
#endif

/* internal inline SWIG method */
#ifndef SWIGINTERNINLINE
# define SWIGINTERNINLINE SWIGINTERN SWIGINLINE
#endif

/* exporting methods */
#if (__GNUC__ >= 4) || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4)
#  ifndef GCC_HASCLASSVISIBILITY
#    define GCC_HASCLASSVISIBILITY
#  endif
#endif

#ifndef SWIGEXPORT
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   if defined(STATIC_LINKED)
#     define SWIGEXPORT
#   else
#     define SWIGEXPORT __declspec(dllexport)
#   endif
# else
#   if defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
#     define SWIGEXPORT __attribute__ ((visibility("default")))
#   else
#     define SWIGEXPORT
#   endif
# endif
#endif

/* calling conventions for Windows */
#ifndef SWIGSTDCALL
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   define SWIGSTDCALL __stdcall
# else
#   define SWIGSTDCALL
# endif
#endif

/* Deal with Microsoft's attempt at deprecating C standard runtime functions */
#if !defined(SWIG_NO_CRT_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_CRT_SECURE_NO_DEPRECATE)
# define _CRT_SECURE_NO_DEPRECATE
#endif

/* Deal with Microsoft's attempt at deprecating methods in the standard C++ library */
#if !defined(SWIG_NO_SCL_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_SCL_SECURE_NO_DEPRECATE)
# define _SCL_SECURE_NO_DEPRECATE
#endif

/* Deal with Apple's deprecated 'AssertMacros.h' from Carbon-framework */
#if defined(__APPLE__) && !defined(__ASSERT_MACROS_DEFINE_VERSIONS_WITHOUT_UNDERSCORES)
# define __ASSERT_MACROS_DEFINE_VERSIONS_WITHOUT_UNDERSCORES 0
#endif

/* Intel's compiler complains if a variable which was never initialised is
 * cast to void, which is a common idiom which we use to indicate that we
 * are aware a variable isn't used.  So we just silence that warning.
 * See: https://github.com/swig/swig/issues/192 for more discussion.
 */
#ifdef __INTEL_COMPILER
# pragma warning disable 592
#endif


/* Fix for jlong on some versions of gcc on Windows */
#if defined(__GNUC__) && !defined(__INTEL_COMPILER)
  typedef long long __int64;
#endif

/* Fix for jlong on 64-bit x86 Solaris */
#if defined(__x86_64)
# ifdef _LP64
#   undef _LP64
# endif
#endif

#include <jni.h>
#include <stdlib.h>
#include <string.h>


/* Support for throwing Java exceptions */
typedef enum {
  SWIG_JavaOutOfMemoryError = 1, 
  SWIG_JavaIOException, 
  SWIG_JavaRuntimeException, 
  SWIG_JavaIndexOutOfBoundsException,
  SWIG_JavaArithmeticException,
  SWIG_JavaIllegalArgumentException,
  SWIG_JavaNullPointerException,
  SWIG_JavaDirectorPureVirtual,
  SWIG_JavaUnknownError
} SWIG_JavaExceptionCodes;

typedef struct {
  SWIG_JavaExceptionCodes code;
  const char *java_exception;
} SWIG_JavaExceptions_t;


static void SWIGUNUSED SWIG_JavaThrowException(JNIEnv *jenv, SWIG_JavaExceptionCodes code, const char *msg) {
  jclass excep;
  static const SWIG_JavaExceptions_t java_exceptions[] = {
    { SWIG_JavaOutOfMemoryError, "java/lang/OutOfMemoryError" },
    { SWIG_JavaIOException, "java/io/IOException" },
    { SWIG_JavaRuntimeException, "java/lang/RuntimeException" },
    { SWIG_JavaIndexOutOfBoundsException, "java/lang/IndexOutOfBoundsException" },
    { SWIG_JavaArithmeticException, "java/lang/ArithmeticException" },
    { SWIG_JavaIllegalArgumentException, "java/lang/IllegalArgumentException" },
    { SWIG_JavaNullPointerException, "java/lang/NullPointerException" },
    { SWIG_JavaDirectorPureVirtual, "java/lang/RuntimeException" },
    { SWIG_JavaUnknownError,  "java/lang/UnknownError" },
    { (SWIG_JavaExceptionCodes)0,  "java/lang/UnknownError" }
  };
  const SWIG_JavaExceptions_t *except_ptr = java_exceptions;

  while (except_ptr->code != code && except_ptr->code)
    except_ptr++;

  jenv->ExceptionClear();
  excep = jenv->FindClass(except_ptr->java_exception);
  if (excep)
    jenv->ThrowNew(excep, msg);
}


/* Contract support */

#define SWIG_contract_assert(nullreturn, expr, msg) if (!(expr)) {SWIG_JavaThrowException(jenv, SWIG_JavaIllegalArgumentException, msg); return nullreturn; } else


#include <string>


#include <stdexcept>


#include <vector>
#include <stdexcept>


	#include "ClusterEditingSolutions.h"
	using namespace ysk;


	#include "input/LibraryInput.h"
	using namespace yskInput;

	
	#include "LibraryInterface.h"
	using namespace yskLib;


#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT jlong JNICALL Java_de_hhu_ba_yoshikoWrapper_swig_LibraryInterfaceJNI_new_1ClusterEditingSolutions(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  ysk::ClusterEditingSolutions *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (ysk::ClusterEditingSolutions *)new ysk::ClusterEditingSolutions();
  *(ysk::ClusterEditingSolutions **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_de_hhu_ba_yoshikoWrapper_swig_LibraryInterfaceJNI_ClusterEditingSolutions_1getNumberOfClusters(JNIEnv *jenv, jclass jcls, jlong jarg1, jlong jarg2) {
  jlong jresult = 0 ;
  ysk::ClusterEditingSolutions *arg1 = (ysk::ClusterEditingSolutions *) 0 ;
  size_t arg2 ;
  size_t result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(ysk::ClusterEditingSolutions **)&jarg1; 
  arg2 = (size_t)jarg2; 
  result = ((ysk::ClusterEditingSolutions const *)arg1)->getNumberOfClusters(arg2);
  jresult = (jlong)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_de_hhu_ba_yoshikoWrapper_swig_LibraryInterfaceJNI_ClusterEditingSolutions_1getCluster(JNIEnv *jenv, jclass jcls, jlong jarg1, jlong jarg2, jlong jarg3) {
  jlong jresult = 0 ;
  ysk::ClusterEditingSolutions *arg1 = (ysk::ClusterEditingSolutions *) 0 ;
  size_t arg2 ;
  size_t arg3 ;
  std::vector< int > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(ysk::ClusterEditingSolutions **)&jarg1; 
  arg2 = (size_t)jarg2; 
  arg3 = (size_t)jarg3; 
  result = (std::vector< int > *) &(arg1)->getCluster(arg2,arg3);
  *(std::vector< int > **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_de_hhu_ba_yoshikoWrapper_swig_LibraryInterfaceJNI_ClusterEditingSolutions_1getSolution(JNIEnv *jenv, jclass jcls, jlong jarg1, jlong jarg2) {
  jlong jresult = 0 ;
  ysk::ClusterEditingSolutions *arg1 = (ysk::ClusterEditingSolutions *) 0 ;
  size_t arg2 ;
  std::vector< std::vector< int > > *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(ysk::ClusterEditingSolutions **)&jarg1; 
  arg2 = (size_t)jarg2; 
  result = (std::vector< std::vector< int > > *) &(arg1)->getSolution(arg2);
  *(std::vector< std::vector< int > > **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_de_hhu_ba_yoshikoWrapper_swig_LibraryInterfaceJNI_ClusterEditingSolutions_1getNumberOfSolutions(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jlong jresult = 0 ;
  ysk::ClusterEditingSolutions *arg1 = (ysk::ClusterEditingSolutions *) 0 ;
  size_t result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(ysk::ClusterEditingSolutions **)&jarg1; 
  result = ((ysk::ClusterEditingSolutions const *)arg1)->getNumberOfSolutions();
  jresult = (jlong)result; 
  return jresult;
}


SWIGEXPORT jdouble JNICALL Java_de_hhu_ba_yoshikoWrapper_swig_LibraryInterfaceJNI_ClusterEditingSolutions_1getTotalCost(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jdouble jresult = 0 ;
  ysk::ClusterEditingSolutions *arg1 = (ysk::ClusterEditingSolutions *) 0 ;
  double result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(ysk::ClusterEditingSolutions **)&jarg1; 
  result = (double)((ysk::ClusterEditingSolutions const *)arg1)->getTotalCost();
  jresult = (jdouble)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_de_hhu_ba_yoshikoWrapper_swig_LibraryInterfaceJNI_delete_1ClusterEditingSolutions(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  ysk::ClusterEditingSolutions *arg1 = (ysk::ClusterEditingSolutions *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(ysk::ClusterEditingSolutions **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jlong JNICALL Java_de_hhu_ba_yoshikoWrapper_swig_LibraryInterfaceJNI_new_1LibraryInput(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jlong jresult = 0 ;
  ysk::ClusterEditingInstance *arg1 = (ysk::ClusterEditingInstance *) 0 ;
  yskInput::LibraryInput *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(ysk::ClusterEditingInstance **)&jarg1; 
  result = (yskInput::LibraryInput *)new yskInput::LibraryInput(arg1);
  *(yskInput::LibraryInput **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_de_hhu_ba_yoshikoWrapper_swig_LibraryInterfaceJNI_LibraryInput_1setSize(JNIEnv *jenv, jclass jcls, jlong jarg1, jint jarg2) {
  yskInput::LibraryInput *arg1 = (yskInput::LibraryInput *) 0 ;
  int arg2 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(yskInput::LibraryInput **)&jarg1; 
  arg2 = (int)jarg2; 
  (arg1)->setSize(arg2);
}


SWIGEXPORT void JNICALL Java_de_hhu_ba_yoshikoWrapper_swig_LibraryInterfaceJNI_LibraryInput_1addEdge(JNIEnv *jenv, jclass jcls, jlong jarg1, jint jarg2, jint jarg3, jdouble jarg4) {
  yskInput::LibraryInput *arg1 = (yskInput::LibraryInput *) 0 ;
  int arg2 ;
  int arg3 ;
  double arg4 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(yskInput::LibraryInput **)&jarg1; 
  arg2 = (int)jarg2; 
  arg3 = (int)jarg3; 
  arg4 = (double)jarg4; 
  (arg1)->addEdge(arg2,arg3,arg4);
}


SWIGEXPORT void JNICALL Java_de_hhu_ba_yoshikoWrapper_swig_LibraryInterfaceJNI_delete_1LibraryInput(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  yskInput::LibraryInput *arg1 = (yskInput::LibraryInput *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(yskInput::LibraryInput **)&jarg1; 
  delete arg1;
}


SWIGEXPORT jint JNICALL Java_de_hhu_ba_yoshikoWrapper_swig_LibraryInterfaceJNI_CPXSIZE_1BITS_1get(JNIEnv *jenv, jclass jcls) {
  jint jresult = 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  result = (int)(64);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_de_hhu_ba_yoshikoWrapper_swig_LibraryInterfaceJNI_getVersionString(JNIEnv *jenv, jclass jcls) {
  jstring jresult = 0 ;
  std::string result;
  
  (void)jenv;
  (void)jcls;
  result = yskLib::getVersionString();
  jresult = jenv->NewStringUTF((&result)->c_str()); 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_de_hhu_ba_yoshikoWrapper_swig_LibraryInterfaceJNI_processLibraryInput(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jlong jresult = 0 ;
  SwigValueWrapper< yskInput::LibraryInput > arg1 ;
  yskInput::LibraryInput *argp1 ;
  ysk::ClusterEditingSolutions *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  argp1 = *(yskInput::LibraryInput **)&jarg1; 
  if (!argp1) {
    SWIG_JavaThrowException(jenv, SWIG_JavaNullPointerException, "Attempt to dereference null yskInput::LibraryInput");
    return 0;
  }
  arg1 = *argp1; 
  result = (ysk::ClusterEditingSolutions *)yskLib::processLibraryInput(arg1);
  *(ysk::ClusterEditingSolutions **)&jresult = result; 
  return jresult;
}


#ifdef __cplusplus
}
#endif

