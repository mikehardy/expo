// Copyright © 2015 650 Industries. All rights reserved.

#import <Foundation/Foundation.h>

// Protocol that must be implemented by Kernel Services that want to be registered in Module Registry

@protocol ABI33_0_0UMKernelService <NSObject>

+ (instancetype)sharedInstance;
+ (NSString *)name;

@end