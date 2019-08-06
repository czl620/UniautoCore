//
//  UniautoKeychain.h
//  UniautoCore
//
//  Created by Chen Zhangli on 2018/8/24.
//  Copyright © 2018年 车微联技术中心 (汽车后市场技术部). All rights reserved.
//

#import <Foundation/Foundation.h>

@interface UniautoKeychain : NSObject

/**
 保存数据

 @param value 待保存的数据
 @param key 键
 */
+ (void)setValue:(id)value forKey:(NSString *)key;

/**
 获取保存的数据

 @param key 键
 @return 保存的数据
 */
+ (id)valueForKey:(NSString *)key;

/**
 删除数据

 @param key 键
 */
+ (void)removeValueForKey:(NSString *)key;

@end
