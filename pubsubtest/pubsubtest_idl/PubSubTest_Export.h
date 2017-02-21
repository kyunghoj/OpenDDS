
// -*- C++ -*-
// $Id$
// Definition for Win32 Export directives.
// This file is generated automatically by generate_export_file.pl PubSubTest
// ------------------------------
#ifndef PUBSUBTEST_EXPORT_H
#define PUBSUBTEST_EXPORT_H

#include "ace/config-all.h"

#if defined (ACE_AS_STATIC_LIBS) && !defined (PUBSUBTEST_HAS_DLL)
#  define PUBSUBTEST_HAS_DLL 0
#endif /* ACE_AS_STATIC_LIBS && PUBSUBTEST_HAS_DLL */

#if !defined (PUBSUBTEST_HAS_DLL)
#  define PUBSUBTEST_HAS_DLL 1
#endif /* ! PUBSUBTEST_HAS_DLL */

#if defined (PUBSUBTEST_HAS_DLL) && (PUBSUBTEST_HAS_DLL == 1)
#  if defined (PUBSUBTEST_BUILD_DLL)
#    define PubSubTest_Export ACE_Proper_Export_Flag
#    define PUBSUBTEST_SINGLETON_DECLARATION(T) ACE_EXPORT_SINGLETON_DECLARATION (T)
#    define PUBSUBTEST_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_EXPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  else /* PUBSUBTEST_BUILD_DLL */
#    define PubSubTest_Export ACE_Proper_Import_Flag
#    define PUBSUBTEST_SINGLETON_DECLARATION(T) ACE_IMPORT_SINGLETON_DECLARATION (T)
#    define PUBSUBTEST_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_IMPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  endif /* PUBSUBTEST_BUILD_DLL */
#else /* PUBSUBTEST_HAS_DLL == 1 */
#  define PubSubTest_Export
#  define PUBSUBTEST_SINGLETON_DECLARATION(T)
#  define PUBSUBTEST_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#endif /* PUBSUBTEST_HAS_DLL == 1 */

// Set PUBSUBTEST_NTRACE = 0 to turn on library specific tracing even if
// tracing is turned off for ACE.
#if !defined (PUBSUBTEST_NTRACE)
#  if (ACE_NTRACE == 1)
#    define PUBSUBTEST_NTRACE 1
#  else /* (ACE_NTRACE == 1) */
#    define PUBSUBTEST_NTRACE 0
#  endif /* (ACE_NTRACE == 1) */
#endif /* !PUBSUBTEST_NTRACE */

#if (PUBSUBTEST_NTRACE == 1)
#  define PUBSUBTEST_TRACE(X)
#else /* (PUBSUBTEST_NTRACE == 1) */
#  if !defined (ACE_HAS_TRACE)
#    define ACE_HAS_TRACE
#  endif /* ACE_HAS_TRACE */
#  define PUBSUBTEST_TRACE(X) ACE_TRACE_IMPL(X)
#  include "ace/Trace.h"
#endif /* (PUBSUBTEST_NTRACE == 1) */

#endif /* PUBSUBTEST_EXPORT_H */

// End of auto generated file.
