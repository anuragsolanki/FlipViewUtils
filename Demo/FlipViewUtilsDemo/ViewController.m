//
//  ViewController.m
//  FlipViewUtilsDemo
//
//  Created by Anurag Solanki on 21/05/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import "ViewController.h"
#import "SecondViewController.h"
#import "FlipViewUtils.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
}

- (IBAction)loadNewView:(id)sender
{
    SecondViewController *_detail = [[SecondViewController alloc] init];
    FlipViewUtils *_nextController = [[FlipViewUtils alloc] initWithRootViewController:_detail];
    [_nextController showFromParentView:self.view andSource:image];
}

- (void)viewDidUnload
{
    [super viewDidUnload];
    // Release any retained subviews of the main view.
}

- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation
{
    return (UIInterfaceOrientationLandscapeLeft | UIInterfaceOrientationLandscapeRight);
}

@end
