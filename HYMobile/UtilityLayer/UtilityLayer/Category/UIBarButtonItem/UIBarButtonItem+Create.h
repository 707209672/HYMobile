//
//  UIBarButtonItem+Create.h
//  UtilityLayer
//
//  Created by 丁嘉睿 on 16/5/30.
//  Copyright © 2016年 Mr.D. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIBarButtonItem (Create)

/**
 *  @author djr
 *  
 *  图片创建UIBarButtonItem
 *  @param img img
 *  @param target target
 *  @param action action
 *  @return UIBarButtonItem
 */
+ (instancetype)newImageBarBtn:(UIImage *)img target:(id)target action:(SEL)action;

@end
