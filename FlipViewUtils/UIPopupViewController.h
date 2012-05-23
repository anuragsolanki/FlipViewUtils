//
//  UIPopupViewController.h
//  
//
//  Created by Anurag Solanki
//  Copyright 2012 Vinsol. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FlipViewUtils.h"

@interface UIPopupViewController : UIViewController {
    FlipViewUtils *parentViewController;
}

@property (nonatomic, strong) FlipViewUtils *parentViewController;

- (IBAction)close:(id)sender;

@end
