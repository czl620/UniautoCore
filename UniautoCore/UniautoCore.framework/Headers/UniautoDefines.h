//
//  UniautoDefines.h
//  UniautoUtil
//
//  Created by Chen Zhangli on 2018/4/19.
//  Copyright © 2018年 车微联技术中心 (汽车后市场技术部). All rights reserved.
//

#import "UniautoTypedefs.h"

/**
 宏定义
 */

#ifdef __cplusplus
#define UNIAUTO_EXTERN          extern "C" __attribute__((visibility ("default")))
#else
#define UNIAUTO_EXTERN          extern __attribute__((visibility ("default")))
#endif


#ifdef DEBUG
#define UniautoLog(...)        NSLog(@"\n%s 第%d行 \n %@\n\n",__func__,__LINE__,[NSString stringWithFormat:__VA_ARGS__])
#else
#define UniautoLog(...)
#endif
