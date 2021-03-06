//
//  FirstViewController.h
//  IphoneExam
//
//  Created by Ma Bingyao on Apr 11, 2014.
//  Copyright hprose.com 2014. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "IphoneExamAppDelegate.h"

@interface SecondViewController : UIViewController {
    IBOutlet id button1;
    IBOutlet id button2;    
    IBOutlet id int_a;
    IBOutlet id int_b;
    IBOutlet id int_sum;
    IBOutlet id double_a;
    IBOutlet id double_b;
    IBOutlet id double_c;
    IBOutlet id double_sum;
    IBOutlet IphoneExamAppDelegate *delegate;
}

-(IBAction) sumIntClick:(id)sender;
-(IBAction) sumDoubleClick:(id)sender;

-(void) sumIntCallback:(int)result;
-(void) sumDoubleCallback:(double)result;

@end
