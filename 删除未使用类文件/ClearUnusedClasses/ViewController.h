//
//  ViewController.h
//  ClearUnusedClasses
//
//  Created by ljh on 15/3/27.
//  Copyright (c) 2015年 SY. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface ViewController : NSViewController
@property (weak) IBOutlet NSTextField *textField;

@property (unsafe_unretained) IBOutlet NSTextView *resultTextView;

@end

