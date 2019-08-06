//
//  UniautoJSON.h
//  UniautoCore
//
//  Created by Chen Zhangli on 2018/8/28.
//  Copyright © 2018年 车微联技术中心 (汽车后市场技术部). All rights reserved.
//

#import <Foundation/Foundation.h>

@interface UniautoJSON : NSObject

/**
 JSON解析

 @param jsonString JSON字符串
 @return 解析后的NSDictionary或NSArray
 */
+ (id)objectFromJson:(NSString *)jsonString;

/**
 JSON解析

 @param jsonData data
 @return 解析后的NSDictionary或NSArray
 */
+ (id)objectFromData:(NSData *)jsonData;

/**
 NSDictionary或NSArray转化为JSON字符串

 @param obj NSDictionary或NSArray
 @return JSON字符串
 */
+ (NSString *)jsonFromObject:(id)obj;

@end
