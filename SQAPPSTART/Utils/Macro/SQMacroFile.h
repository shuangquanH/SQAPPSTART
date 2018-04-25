//
//  SQMacroFile.h
//  SQAPPSTART
//
//  Created by apple on 2018/4/25.
//  Copyright © 2018年 apple. All rights reserved.
//

#ifndef SQMacroFile_h
#define SQMacroFile_h
#endif /* SQMacroFile_h */

/** 打印方法（只会在Debug环境下会打印） */
#ifndef __OPTIMIZE__
#define SQLog(...) NSLog(__VA_ARGS__)
#else
# define NSLog(...) {}
#endif


/** 屏幕宽度 */
#define KAPP_WIDTH          ([SQIphonePx shareInstance].phoneWidth)
/** 屏幕高度 */
#define KAPP_HEIGHT         ([SQIphonePx shareInstance].phoneHeight)
/** 导航栏高度 */
#define KNAV_HEIGHT         ([SQIphonePx shareInstance].navHeight)
/** Tabbar高度 */
#define KTAB_HEIGHT         ([SQIphonePx shareInstance].tabHeight)
/** 状态栏高度 */
#define KSTATU_HEIGHT       ([SQIphonePx shareInstance].statuHeight)
/** 是否是iPhoneX */
#define KISX                ([SQIphonePx shareInstance].isiPhoneX)
/** ui缩放比例 */
#define KSCAL(a)            ([SQIphonePx shareInstance].uiScaling*a)
/** 字体大小 */
#define KFONT(a)            [UIFont systemFontOfSize:KSCAL(a)]


/** app主色调 */
#define KMAIN_COLOR         [UIColor hexStringToColor:@"43c5ff"]
/** 白色 */
#define KWHIT_COLOR         [UIColor hexStringToColor:@"ffffff"]
/** 颜色(传string格式) */
#define KCOLOR(a)           [UIColor hexStringToColor:a]
/** 颜色和透明度(颜色为string格式，透明度为float格式) */
#define KCOLOR_ALPHA(a,b)   [UIColor hexStringToColor:a andAlpha:b]


/** 系统版本 */
#define KiOS9_1Later        ([UIDevice currentDevice].systemVersion.floatValue >= 9.1f)
#define KiOS11Later         ([UIDevice currentDevice].systemVersion.floatValue >= 11.0f)



