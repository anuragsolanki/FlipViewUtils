Purpose
-------

iOS provides a lot of in-built transition styles from one view to another view such as instant change (using addSubView), default navigation controller transition from right to left, modal view transitions from top/bottom or flip transitions. Although the one feature which I need in my earlier project was flip transition where we can specify only a single component which starts the flip animation and transitions to the next ViewController seamlessly. 

[Click here][video link] to know what this utility is meant for. FlipViewUtils is a static library which provides you a default method for enabling you this flip transition.

* * *
ARC Compatibility & Supported SDK Versions
------------------------------------------

FlipViewUtils uses ARC (Automatic Reference Counting) and is compatible with iOS 5.0+

* * *
Installation & Usage
--------------------

  - To use the FlipViewUtils library in an app, just drag the FlipViewUtils class files (link) (demo files and assets are not needed) into your project and add the *QuartzCore framework*.
Make sure to *check* "Copy items into destination's group folder (if needed)" if Xcode asks the same.

  - Next you need to add *-all_load* to the **Other Linker Flags** build setting of your app. ([click here][reason1] to know the reason)
  - Add these lines to the IBAction which gets called when you need to initiate the flip transition.

        _nextController = [[NextViewController alloc] init];
        FlipViewUtils *_nextController = [[FlipViewUtils alloc] initWithRootViewController:_detail];
        [_nextController showFromParentView:self.view andSource:image];

  The first line above initializes the new ViewController (_nextController) that will be the final destination of flip transition.
  Second line embeds the new ViewController with the FlipViewUtils library.
  Third line initiates the flip transition. This method needs two arguments: first is *self.view* which is the parent view and will be constant in almost all situations. Second argument is *image*. Here *image* is any component in your view which is a subclass of *UIView* and only this component will be flipped while animation (unlike default flip animation which flips the complete view)

  - Edit header (.h) file of your _nextController.

  At the top, add this line

        #import "UIPopupViewController.h"

  And this viewController should be a subclass of **UIPopupViewController** like the code below:

        @interface NextViewController : UIPopupViewController

  - Add the IBAction below in .m file of _nextController and call this method whenever you need to flip back to initial ViewController using the reverse flip animation.

        - (IBAction)close:(id)sender
        {
          [self.parentViewController popToRootViewControllerAndClose];
        }



  [reason1]: http://developer.apple.com/library/mac/#qa/qa1490/_index.html
  [video link]: http://google.com/

