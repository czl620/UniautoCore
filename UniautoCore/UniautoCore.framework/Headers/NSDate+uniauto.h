//
//  NSDate+uniauto.h
//  UniautoUtil
//
//  Created by Chen Zhangli on 2018/1/18.
//  Copyright © 2018年 车微联技术中心 (汽车后市场技术部). All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDate (uniauto)

/**
 日期转换字符串

 @param format 格式
 @return 格式化后的字符串
 */
- (NSString *)toStringWithFormat:(NSString *)format;

/**
 日期转换字符串

 @return @"yyyy-MM-dd"格式的字符串
 */
- (NSString *)toString;

/**
 *  获取年份
 */
- (NSInteger)getYear;

/**
 *  获取月份
 */
- (NSInteger)getMonth;

/**
 *  获取天
 */
- (NSInteger)getDay;

/**
 *  获取周几
 */
- (NSInteger)getWeek;
- (NSString *)getWeekString;

/**
 两天之间相差几天

 @param day1 日期1 格式2019-06-01
 @param day2 日期2 格式2019-06-01
 @return 相差天数
 */
+ (NSInteger)getDifferenceDaysBetweenDay1:(NSString *)day1 andDay2:(NSString *)day2;

@end
