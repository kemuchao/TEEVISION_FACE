//
//  ZDScrollView.h
//  ScrollToCenter
//
//  Created by zhudong on 2017/5/23.
//  Copyright © 2017年 zhudong. All rights reserved.
//

#import <UIKit/UIKit.h>
#define ScreenSize [UIScreen mainScreen].bounds.size

typedef void(^CallBackBlcok) (NSInteger *teger);//1

@interface ZDScrollView : UIScrollView

@property (nonatomic,copy)CallBackBlcok callBackBlock;//2
@property (nonatomic,strong) NSArray *titles;
@property (nonatomic,assign) CGFloat margin;
@property (nonatomic,strong) UIColor *titleColor_normal;
@property (nonatomic,strong) UIColor *titleColor_selected;
@property (nonatomic,assign) CGFloat lineHeight;

@end
