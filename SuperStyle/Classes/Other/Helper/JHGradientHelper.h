//
//  JHGradientHelper.h
//  JHAllEffectDemo
//
//  Created by qujiahong on 2018/11/27.
//  Copyright © 2018年 瞿嘉洪. All rights reserved.
//

#import <Foundation/Foundation.h>

/*
 * 其实，只有跑马灯效果需要用到单独的方法
 * label、button的跑马灯效果是不同的，所以需要单独设置
 
 * 除此之外，渐变，只需要使用
     + (void)addGradientForView:(UIView *)view
     withPresentView:(UIView *)parentView
     start:(UIColor *)startColor
     and:(UIColor *)endColor
     directionType:(JHGradientDirection)directionType
     option:(CGSize)size;
 就足够了，没必要单独区分是什么控件
 
 */
#define kDefaultWidth 200
#define kDefaultHeight 200

typedef NS_ENUM(NSInteger, JHGradientDirection) {
    ///从左到右
    JHLinearGradientDirectionLevel,                 //AC - BD
    ///从上到下
    JHLinearGradientDirectionVertical,              //AB - CD
    ///从左上到右下
    JHLinearGradientDirectionUpwardDiagonalLine,    //A - D
    ///从左下到右上
    JHLinearGradientDirectionDownDiagonalLine,      //C - B
};
//      A         B
//       _________
//      |         |
//      |         |
//       ---------
//      C         D


@interface JHGradientHelper : NSObject


//   Linear Gradient
/*   默认 CGSizeMake(kDefaultWidth, kDefaultHeight) */


/**
 返回渐变图-矩形

 @param startColor 起始颜色
 @param endColor 结束颜色
 @param directionType 渐变方向
 @return image
 */
+ (UIImage *)getLinearGradientImage:(UIColor *)startColor and:(UIColor *)endColor directionType:(JHGradientDirection)directionType;


/**
 返回渐变图-矩形

 @param startColor 起始颜色
 @param endColor 结束颜色
 @param directionType 渐变方向
 @param size size参数，默认为(200,200)
 @return image
 */
+ (UIImage *)getLinearGradientImage:(UIColor *)startColor and:(UIColor *)endColor directionType:(JHGradientDirection)directionType option:(CGSize)size;


//    Radial Gradient
/* raduis = kDefaultWidth / 2 */

/**
 返回渐变图-椭圆形-圆形(当宽高相等时)

 @param centerColor 圆心颜色
 @param outColor 外部颜色
 @return image
 */
+ (UIImage *)getRadialGradientImage:(UIColor *)centerColor and:(UIColor *)outColor;
+ (UIImage *)getRadialGradientImage:(UIColor *)centerColor and:(UIColor *)outColor option:(CGSize)size;





//   LableText LinearGradient and ChromatoAnimation

/**
 给label添加文字渐变(从左往右)

 @param parentView label的父view
 @param lable label参数
 @param startColor 起始颜色
 @param endColor 结束颜色
 */
+ (void)addLinearGradientForLableText:(UIView *)parentView lable:(UILabel *)lable start:(UIColor *)startColor and:(UIColor *)endColor;  /* don't need call 'addSubview:' for lable */


/**
 给label添加文字跑马灯效果(从左往右)

 @param parentView label的父view
 @param lable label参数
 @param colors HSB color数组
 */
+ (void)addGradientChromatoAnimationForLableText:(UIView *)parentView lable:(UILabel *)lable withHSBArr:(NSArray *)colors;
/* don't need call 'addSubview:' for lable */



//   ChromatoAnimation

/**
 给view添加动态渐变，即跑马灯效果
 
 @param view view参数
 @param colors HSB color数组
 */
+ (void)addGradientChromatoAnimation:(UIView *)view  withHSBArr:(NSArray *)colors;


/**
 给View类 添加渐变

 @param view view类控件
 @param parentView view类控件所在父View
 @param startColor 起始颜色
 @param endColor 结束颜色
 @param directionType 渐变方向
 @param size size参数
 */
+ (void)addGradientForView:(UIView *)view withPresentView:(UIView *)parentView start:(UIColor *)startColor and:(UIColor *)endColor directionType:(JHGradientDirection)directionType option:(CGSize)size;


@end
