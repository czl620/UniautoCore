//
//  UniautoFile.h
//  UniautoCore
//
//  Created by Chen Zhangli on 2018/8/28.
//  Copyright © 2018年 车微联技术中心 (汽车后市场技术部). All rights reserved.
//

#import <Foundation/Foundation.h>

@interface UniautoFile : NSObject

// 获取应用程序路径
+ (NSString *)getHomePath;

// 获取Temp路径
+ (NSString *)getTempPath;

// 获取Document路径
+ (NSString *)getDocumentPath;

// 获取Library路径
+ (NSString *)getLibraryPath;

//获取Cache路径
+ (NSString *)getCachePath;


// 判断文件是否存在于某个路径中
+ (BOOL)fileIsExistOfPath:(NSString *)filePath;

// 从某个路径中移除文件
+ (BOOL)removeFileOfPath:(NSString *)filePath;

// 从URL路径中移除文件
- (BOOL)removeFileOfURL:(NSURL *)fileURL;

// 创建文件路径
+(BOOL)creatDirectoryAtPath:(NSString *)dirPath;

// 创建文件
+ (BOOL)creatFileAtPath:(NSString *)filePath;

// 保存文件
+ (BOOL)saveData:(NSData *)data atPath:(NSString *)filePath;

// 追加写文件
+ (BOOL)appendData:(NSData *)data atPath:(NSString *)filePath;

// 获取文件
+ (NSData *)getFileFromPath:(NSString *)filePath;

// 读取文件
+ (NSData *)getFile:(NSString *)filePath atStartIndex:(long long)startIndex length:(NSInteger)length;

// 移动文件
+ (BOOL)moveFileFromPath:(NSString *)fromPath toPath:(NSString *)toPath;

// 拷贝文件
+ (BOOL)copyFileFromPath:(NSString *)fromPath toPath:(NSString *)toPath;

// 获取文件夹下文件列表
+ (NSArray *)getFileListInFolderOfPath:(NSString *)path;

// 获取文件大小
+ (long long)getFileSizeOfPath:(NSString *)path;

//获取文件创建时间
+ (NSString *)getFileCreatDateOfPath:(NSString *)path;

// 获取文件所有者
+ (NSString *)getFileOwnerOfPath:(NSString *)path;

// 获取文件更改日期
+ (NSString *)getFileChangeDateOfPath:(NSString *)path;

@end
