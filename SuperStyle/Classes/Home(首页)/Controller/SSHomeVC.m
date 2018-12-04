//
//  SSHomeVC.m
//  SuperStyle
//
//  Created by qujiahong on 2018/12/4.
//  Copyright © 2018年 极软科技. All rights reserved.
//

#import "SSHomeVC.h"

@interface SSHomeVC ()

///tableView
@property (nonatomic, strong) UITableView *tableView;
///dataList
@property (nonatomic, strong) NSMutableArray * dataList;
@end

@implementation SSHomeVC

#pragma mark - 懒加载
- (NSMutableArray *)dataList {
    if (_dataList == nil) {
        _dataList = [NSMutableArray array];
    }
    return _dataList;
}


#pragma mark - System Method
- (void)viewDidLoad {
    [super viewDidLoad];
    
    [self setupUI];
}

- (void)setupUI{
    self.view.backgroundColor = JHRGB(255, 255, 255);
    
    
    
}

#pragma mark - 获取数据


#pragma mark - Other

















@end
