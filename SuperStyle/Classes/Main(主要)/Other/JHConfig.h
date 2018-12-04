//
//  JHConfig.h
//  SuperStyle
//
//  Created by qujiahong on 2018/12/4.
//  Copyright © 2018年 极软科技. All rights reserved.
//

#ifndef JHConfig_h
#define JHConfig_h


/** screen bounds*/
#define SCREEN_WIDTH [UIScreen mainScreen].bounds.size.width
#define SCREEN_HEIGHT [UIScreen mainScreen].bounds.size.height

/** 适配相关*/

// 判断是否是ipad
#define JH_isPad ([[UIDevice currentDevice] userInterfaceIdiom] == UIUserInterfaceIdiomPad)
// 判断iPhone4系列
#define JH_isiPhone4 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 960), [[UIScreen mainScreen] currentMode].size) && !JH_isPad : NO)
// 判断iPhone5系列
#define JH_isiPhone5 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 1136), [[UIScreen mainScreen] currentMode].size) && !JH_isPad : NO)
// 判断iPhone6系列
#define JS_isiPhone6 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(750, 1334), [[UIScreen mainScreen] currentMode].size) && !JH_isPad : NO)
//判断iphone6+系列
#define JH_isiPhone6Plus ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1242, 2208), [[UIScreen mainScreen] currentMode].size) && !JH_isPad : NO)
// 判断iPhoneX
#define JH_isIPhone_X ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1125, 2436), [[UIScreen mainScreen] currentMode].size) && !JH_isPad : NO)
// 判断iPHoneXr
#define JH_isIPhone_Xr ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(828, 1792), [[UIScreen mainScreen] currentMode].size) && !JH_isPad : NO)
// 判断iPhoneXs
#define JH_isIPhone_Xs ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1125, 2436), [[UIScreen mainScreen] currentMode].size) && !JH_isPad : NO)
// 判断iPhoneXs Max
#define JH_isIPhone_Xs_Max ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1242, 2688), [[UIScreen mainScreen] currentMode].size) && !JH_isPad : NO)

#define Height_StatusBar ((JH_isIPhone_X == YES || JH_isIPhone_Xr == YES || JH_isIPhone_Xs == YES || JH_isIPhone_Xs_Max == YES) ? 44.0 : 20.0)
#define Height_NavBar ((JH_isIPhone_X == YES || JH_isIPhone_Xr == YES || JH_isIPhone_Xs == YES || JH_isIPhone_Xs_Max == YES) ? 88.0 : 64.0)
#define Height_TabBar ((JH_isIPhone_X == YES || JH_isIPhone_Xr == YES || JH_isIPhone_Xs == YES || JH_isIPhone_Xs_Max == YES) ? 83.0 : 49.0)




/** 设置图片*/
#define imageNamed(str) [UIImage imageNamed:[NSString stringWithFormat:@"%@",str]]

/** 防止循环引用*/
#define WEAK_SELF   __weak typeof(self)  __weakSelf = self;

/** RGB-随机色*/
#define JHRGB(r,g,b) [UIColor colorWithRed:(r/255.0) green:(g/255.0) blue:(b/255.0) alpha:1.0]

#define JHRGBA(r,g,b,a) [UIColor colorWithRed:(r/255.0) green:(g/255.0) blue:(b/255.0) alpha:a]

#define JHRandomColor JHRGB(arc4random_uniform(255), arc4random_uniform(255), arc4random_uniform(255))

#define JHColorHSB(h,s,b) [UIColor colorWithHue:h saturation:s brightness:b alpha:1.0f]

#endif /* JHConfig_h */
