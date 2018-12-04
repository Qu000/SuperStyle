//
//  SSTabBarController.m
//  SuperStyle
//
//  Created by qujiahong on 2018/12/4.
//  Copyright © 2018年 极软科技. All rights reserved.
//

#import "SSTabBarController.h"
#import "SSNavigationController.h"

#import "SSHomeVC.h"
#import "SSMoneyVC.h"
#import "SSMakeMoneyVC.h"
#import "SSProfileVC.h"

#import "UIImage+JHImage.h"

@interface SSTabBarController ()

@end

@implementation SSTabBarController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    [self setupUI];
}

- (void)setupUI{
    
    
    [self setupChildVC];
    

    //设计中tabBart顶部有阴影，需要一张背景图片，此时我用的颜色先代替
    [self setTabBarBackImageWithImageStr:@""];

}

- (void)setupChildVC{
    
    SSHomeVC *home = [[SSHomeVC alloc]init];
    [self addChildVc:home title:@"首·页" image:@"tabbar_home" selectedIamge:@"tabbar_home_selected"];
    
    SSMoneyVC *money = [[SSMoneyVC alloc]init];
    [self addChildVc:money title:@"生·钱" image:@"tabbar_message_center" selectedIamge:@"tabbar_message_center_selected"];
    
    SSMakeMoneyVC *makeMoney = [[SSMakeMoneyVC alloc]init];
    [self addChildVc:makeMoney title:@"赚·钱" image:@"tabbar_discover" selectedIamge:@"tabbar_discover_selected"];
    
    SSProfileVC *profile = [[SSProfileVC alloc]init];
    [self addChildVc:profile title:@"我·的" image:@"tabbar_profile" selectedIamge:@"tabbar_profile_selected"];
    
}


- (void)setTabBarBackImageWithImageStr:(NSString *)imageStr{
    
    UITabBar * tabBarAppearance = [UITabBar appearance];
    [tabBarAppearance setShadowImage:[UIImage new]];
    [tabBarAppearance setBackgroundImage:[UIImage imageWithColor:[UIColor whiteColor]]];//[UIImage imageNamed:imageStr]
    
}


-(void)addChildVc:(UIViewController *)childVc title:(NSString *)title image:(NSString *)image selectedIamge:(NSString *)selectedIamge{
    //设置子控制器的文字和图片
    childVc.title = title;
    childVc.navigationItem.title = title;
//    childVc.title = title;//同时设置两个title
    childVc.tabBarItem.image = [UIImage imageNamed:image];
    
    //声明：这张图片按照原来的样子显示出来，不要自动渲染成其他颜色（比如蓝色）
    childVc.tabBarItem.selectedImage = [[UIImage imageNamed:selectedIamge]imageWithRenderingMode:UIImageRenderingModeAlwaysOriginal];
    
    //设置文字样式
    NSMutableDictionary *textAtts = [NSMutableDictionary dictionary];
    textAtts[NSForegroundColorAttributeName] = JHRGB(123, 123, 123);
    
    NSMutableDictionary *selectTextAtts = [NSMutableDictionary dictionary];
    selectTextAtts[NSForegroundColorAttributeName] = [UIColor orangeColor];
    
    [childVc.tabBarItem setTitleTextAttributes:textAtts forState:UIControlStateNormal];
    [childVc.tabBarItem setTitleTextAttributes:selectTextAtts forState:UIControlStateSelected];
    
    childVc.view.backgroundColor = [UIColor whiteColor];
    //先给外面传进来的小控制器，包装一个导航控制器
    SSNavigationController *nav = [[SSNavigationController alloc]initWithRootViewController:childVc];
    //添加子控制器
    [self addChildViewController:nav];
}






@end
