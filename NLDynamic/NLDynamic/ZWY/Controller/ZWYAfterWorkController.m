//
//  ZWYAfterWorkController.m
//  NLDynamic
//
//  Created by Yesoul on 2018/12/10.
//  Copyright © 2018 赵五一. All rights reserved.
//

#import "ZWYAfterWorkController.h"
#import "../../NumberTF/BRNumberField.h"
#import "../Managers/ZWYPluginConfig.h"

@interface ZWYAfterWorkController ()

@property (unsafe_unretained) IBOutlet BRNumberField *afterWorkTime;
@property (unsafe_unretained) IBOutlet BRNumberField *deviceDistance;
@end

@implementation ZWYAfterWorkController

- (void)windowDidLoad {
    [super windowDidLoad];
    
    // Implement this method to handle any initialization after your window controller's window has been loaded from its nib file.
}

- (IBAction)save:(NSButton *)sender {
    [ZWYPluginConfig sharedConfig].hour = self.afterWorkTime.integerValue;
    [ZWYPluginConfig sharedConfig].distance = self.deviceDistance.floatValue;
}

- (IBAction)closeAfterWork:(id)sender {
    [self close];
}
- (IBAction)cancel:(NSButton *)sender {
    
}

@end
