#ifdef __OBJC__
#import <Cocoa/Cocoa.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "TEST_dynamic_framework.h"
#import "TEST_dynamic_test.h"
#import "TEST_static_lib.h"

FOUNDATION_EXPORT double TEST_dynamic_frameworkVersionNumber;
FOUNDATION_EXPORT const unsigned char TEST_dynamic_frameworkVersionString[];

