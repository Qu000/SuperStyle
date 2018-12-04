//
//  UIView+JHEXtension.h
//  JHAllEffectDemo
//
//  Created by qujiahong on 2018/11/26.
//  Copyright © 2018年 瞿嘉洪. All rights reserved.
//

#import <UIKit/UIKit.h>

//IB_DESIGNABLE
//这个东西很有用
/*
 我们经常会在用一些自定义 UIView 来完成一些特殊的UI效果，但是怎么让我自定义的 UIView 在 Storyboard 中预览和修改一些自定义参数呢。这就需要用到着两个东西了。
 
 IB_DESIGNABLE 让你的自定 UIView 可以在 IB 中预览。即可以当成控件拖拽到storyBoard上。
 IBInspectable 让你的自定义 UIView 的属性出现在 IB 中 Attributes inspector 。即可在右侧直接调节它的属性。
 
 如自定义一个CircleView，画一个圆。使用了这两个东西，就能当作控件拖拽到storyBoard中，进行调节。
 
 */
@interface UIView (JHEXtension)

@property (nonatomic, assign)CGFloat x;
@property (nonatomic, assign)CGFloat y;
@property (nonatomic, assign)CGFloat width;
@property (nonatomic, assign)CGFloat height;
@property (nonatomic, assign)CGFloat centerX;
@property (nonatomic, assign)CGFloat centerY;
@property (nonatomic, assign)CGSize size;
@property(nonatomic, assign) IBInspectable CGFloat borderWidth;
@property(nonatomic, assign) IBInspectable UIColor *borderColor;
@property(nonatomic, assign) IBInspectable CGFloat cornerRadius;


/**
 *  水平居中
 */
- (void)alignHorizontal;
/**
 *  垂直居中
 */
- (void)alignVertical;
/**
 *  判断是否显示在主窗口上面
 *
 *  @return 是否
 */
- (BOOL)isShowOnWindow;

- (UIViewController *)parentController;



@end










