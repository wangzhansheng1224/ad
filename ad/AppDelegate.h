//
//  AppDelegate.h
//  ad
//
//  Created by policx on 16/4/7.
//  Copyright © 2016年 policx. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) UIImageView *adImageView;
@property(nonatomic,strong) UIWebView *adWebView;
@property (strong, nonatomic) UINavigationController *rootNavi;
@property(nonatomic,strong) UIButton *timeButton;
@property(nonatomic,strong) UILabel *timeLabel;
@end
