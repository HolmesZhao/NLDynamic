//
//  ZWYAfterWorkViewController.m
//  NLDynamic
//
//  Created by Yesoul on 2018/12/10.
//  Copyright © 2018 赵五一. All rights reserved.
//

#import "ZWYAfterWorkViewController.h"
#import "../../NumberTF/BRNumberField.h"
#import "../Managers/ZWYPluginConfig.h"

@interface ZWYAfterWorkViewController ()

@property (unsafe_unretained) IBOutlet BRNumberField *afterWorkTime;
@property (unsafe_unretained) IBOutlet BRNumberField *deviceDistance;
@end

@implementation ZWYAfterWorkViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do view setup here.
}
- (IBAction)save:(NSButton *)sender {
    [ZWYPluginConfig sharedConfig].hour = self.afterWorkTime.integerValue;
    [ZWYPluginConfig sharedConfig].distance = self.deviceDistance.floatValue;
}

- (IBAction)closeAfterWork:(id)sender {
    
}
- (IBAction)cancel:(NSButton *)sender {
    
}
@end
