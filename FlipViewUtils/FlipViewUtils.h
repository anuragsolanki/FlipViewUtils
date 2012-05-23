//
//  FlipViewUtils.h
//  FlipViewUtils
//
//  Created by Anurag Solanki on 21/05/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

@interface FlipViewUtils : UIViewController
{
    UIView *_parentView;
    UIView *_sourceView;
    
    UIViewController *visibleViewController;
    UIView *visibleView;
    UIView *translucentOverlay;
    
    CGFloat scaleX;
    CGFloat scaleY;
    CGFloat translateX;
    CGFloat translateY;
    
    __strong CALayer *backLayer;
    __strong CALayer *frontLayer;
    
    BOOL isFlipped;
    
    NSMutableArray *viewControllers;
    UIViewController *_poppedViewController;
    
    BOOL _poppingToRoot;
}

- (id)initWithRootViewController:(UIViewController *)rootViewController;
- (void)pushViewController:(UIViewController *)aviewController animated:(BOOL)animated;
- (void)showFromParentView:(UIView *)parentView andSource:(UIView *)sourceView;
- (void)popViewController;
- (void)popToRootViewControllerAndClose;


@end
