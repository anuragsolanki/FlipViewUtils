//
//  UIPopupViewController.m
//  FlipViewUtilsDemo
//
//  Created by Anurag Solanki on 21/05/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FlipViewUtils.h"

@interface UIPopupViewController : UIViewController {
    FlipViewUtils *parentViewController;
}

@property (nonatomic, strong) FlipViewUtils *parentViewController;

- (IBAction)close:(id)sender;

@end
