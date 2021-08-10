//
//  TEST_public_test.m
//  TEST_public_dynamic_framework
//
//  Created by Shepherd on 2021/8/10.
//

#import "TEST_public_test.h"
#import <TEST_dynamic_framework/TEST_static_lib.h>

@implementation TEST_public_test

- (void)public_test {
    [[TEST_static_lib new] test];
}

@end
