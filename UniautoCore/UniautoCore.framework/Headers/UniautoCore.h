//
//  UniautoCore.h
//  UniautoCore
//
//  Created by Chen Zhangli on 2018/8/16.
//  Copyright © 2018年 车微联技术中心 (汽车后市场技术部).All rights reserved.
//

/**
 * 第三方依赖库

    pod 'GTMBase64', '~> 1.0.0''
 */

#import <UniautoCore/UniautoConstants.h>
#import <UniautoCore/UniautoDefines.h>

#import <UniautoCore/NSString+uniauto.h>
#import <UniautoCore/NSNumber+uniauto.h>
#import <UniautoCore/NSArray+uniauto.h>
#import <UniautoCore/NSMutableArray+uniauto.h>
#import <UniautoCore/NSDictionary+uniauto.h>
#import <UniautoCore/NSMutableDictionary+uniauto.h>
#import <UniautoCore/NSData+uniauto.h>
#import <UniautoCore/NSDate+uniauto.h>
#import <UniautoCore/NSObject+uniauto.h>

#import <UniautoCore/UniautoSecurity.h>
#import <UniautoCore/UniautoKeychain.h>
#import <UniautoCore/UniautoFile.h>
#import <UniautoCore/UniautoJSON.h>

@interface UniautoCore : NSObject

+ (NSString *)version;

@end
