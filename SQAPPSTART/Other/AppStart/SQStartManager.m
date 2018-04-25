//
//  SQStartManager.m
//  SQAPPSTART
//
//  Created by apple on 2018/4/25.
//  Copyright © 2018年 apple. All rights reserved.
//

#import "SQStartManager.h"

@implementation SQStartManager

+ (instancetype)shareManager {
    static SQStartManager *manager = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        manager = [[SQStartManager alloc] init];
    });
    return manager;
}

- (void)startApplication:(UIApplication *)appcation withOptions:(NSDictionary *)launchOptions {
    
}



@end
