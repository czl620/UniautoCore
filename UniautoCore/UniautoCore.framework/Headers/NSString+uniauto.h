//
//  NSString+uniauto.h
//  UniautoUtil
//
//  Created by Chen Zhangli on 2018/1/18.
//  Copyright © 2018年 车微联技术中心 (汽车后市场技术部). All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, UniautoGender) {
    UniautoGenderMale = 0, // 男
    UniautoGenderFemale,   // 女
    UniautoGenderUnknown   // 未知
};

@interface NSString (uniauto)

// 判断字符串是否为空
+ (BOOL)isEmpty:(NSString *)string;

// 判断网址是否有效
+ (BOOL)isUrl:(NSString *)string;

// 判断手机号是否有效
+ (BOOL)isMobile:(NSString *)string;
+ (BOOL)isLikeMobile:(NSString *)string;

// 判断字符串是否为数字集
+ (BOOL)isNumbers:(NSString *)string;

// 判断字符串是否为身份证号
+ (BOOL)isCardID:(NSString *)string;
+ (BOOL)isLikeCardID:(NSString *)string;
// 根据身份证号获取性别
+ (UniautoGender)genderOfCardID:(NSString *)cardID;

// 去掉前后空格和回车符
+ (NSString *)trim:(NSString *)string;

// 汉字转拼音,对“长”、“沈”、“厦”、“地”、“重”多音字做了处理:“chang”、“shen”、“xia”、“di”、“chong”
+ (NSString *)transformToPinin:(NSString *)string;

// 首字母，大写
+ (NSString *)firstLetter:(NSString *)string;

// 过滤HTML标签
+ (NSString *)filterHTML:(NSString *)html;
+ (NSString *)filterHTMLImage:(NSString *)html;
+ (NSString *)filterHTMLTag:(NSString *)html;
+ (NSString *)filterBlankAndBlankLines:(NSString *)string;
// BlankAndBlankLines、HTML、HTMLTag
+ (NSString *)filter:(NSString *)string;

- (NSString *)secretAtRange:(NSRange)range byString:(NSString *)string;



@end



