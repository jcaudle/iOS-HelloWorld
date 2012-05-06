//
//  HelloWorldViewController.h
//  HelloWorld
//
//  Created by Joseph Caudle on 5/3/12.
//  Copyright (c) 2012 The Atonement Academy. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HelloWorldViewController : UIViewController <UITextFieldDelegate>
@property (weak, nonatomic) IBOutlet UITextField *textField;
@property (weak, nonatomic) IBOutlet UILabel *label;
- (IBAction)changeGreeting:(id)sender;

@property (copy, nonatomic) NSString *userName;
@end
