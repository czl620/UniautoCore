//
//  UniautoConstant.h
//  UniautoUtil
//
//  Created by Chen Zhangli on 2018/4/19.
//  Copyright © 2018年 车微联技术中心 (汽车后市场技术部). All rights reserved.
//

#import "UniautoDefines.h"

/**
 常量
 */

#pragma mark - 通知
UNIAUTO_EXTERN UniautoNotificationName const UniautoLaunchDidClickNotification;
UNIAUTO_EXTERN UniautoNotificationName const UniautoUserDidLoginNotification;
UNIAUTO_EXTERN UniautoNotificationName const UniautoUserDidLogoutNotification;
UNIAUTO_EXTERN UniautoNotificationName const UniautoUserDidChangedNotification;
UNIAUTO_EXTERN UniautoNotificationName const UniautoLocationDidChangedNotification;


#pragma mark - 用户
UNIAUTO_EXTERN UniautoUserKey const UniautoUserTokenKey;
UNIAUTO_EXTERN UniautoUserKey const UniautoUserInfoKey;
UNIAUTO_EXTERN UniautoUserKey const UniautoUserIDKey;
UNIAUTO_EXTERN UniautoUserKey const UniautoUserCityKey;


#pragma mark - 设备
UNIAUTO_EXTERN NSString *const UniautoDeviceUUIDKey;


#pragma mark - 应用
UNIAUTO_EXTERN NSString *const UniautoFirstLaunchedKey;
