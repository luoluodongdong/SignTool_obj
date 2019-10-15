//
//  AppDelegate.h
//  SecurityTool
//
//  Created by Weidong Cao on 2019/9/24.
//  Copyright © 2019 Weidong Cao. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "CocoaSecurity.h"

@interface AppDelegate : NSObject <NSApplicationDelegate>
{
    IBOutlet NSTextField *folderTF;
    IBOutlet NSButton *signBtn;
    IBOutlet NSButton *verifyBtn;
}

-(IBAction)signBtnAction:(id)sender;
-(IBAction)verifyBtnAction:(id)sender;
@end

