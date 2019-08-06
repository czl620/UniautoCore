//
//  UniautoSecurity.h
//  UniautoCore
//
//  Created by Chen Zhangli on 2018/8/17.
//  Copyright © 2018年 车微联技术中心 (汽车后市场技术部). All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 加解密
 */
@interface UniautoSecurity : NSObject


/**
 MD5加密

 @param string 要加密的字符串
 @return 加密后的字符串
 */
+ (NSString *)MD5:(NSString *)string;


/**
 3DES加密

 @param string 要加密的字符串
 @param key 密钥
 @param iv 初始化向量
 @return 加密后的字符串
 */
+ (NSString *)DES3Encrypt:(NSString *)string byKey:(NSString *)key andIv:(NSString *)iv;


/**
 3DES解密

 @param string 要加密的字符串
 @param key 密钥
 @param iv 初始化向量
 @return 解密后的字符串
 */
+ (NSString *)DES3Decrypt:(NSString *)string byKey:(NSString *)key andIv:(NSString *)iv;


/**
 AES加密128

 @param string 要加密的字符串
 @param key 密钥
 @return 加密后的字符串
 */
+ (NSString *)AESEncryptString:(NSString *)string byKey:(NSString *)key;
+ (NSData *)AESEncryptData:(NSData *)data byKey:(NSString *)key;


/**
 AES解密128

 @param string 要加密的字符串
 @param key 密钥
 @return 解密后的字符串
 */
+ (NSString *)AESDecryptString:(NSString *)string byKey:(NSString *)key;
+ (NSData *)AESDecryptData:(NSData *)data byKey:(NSString *)key;


// AES+Base64
+ (NSString *)AESEncrypt:(NSString *)string byKey:(NSString *)key;
+ (NSString *)AESDecrypt:(NSString *)string byKey:(NSString *)key;

@end
