//
//  MPActionsController.h
//  MPGUI
//
//  Created by Juan Germán Castañeda Echevarría on 6/19/09.
//  Copyright 2009 UNAM. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "MPActionLauncher.h"
#import "PortsTableController.h"
#import "ActivityController.h"

#import "GrowlNotifications.h"

@interface MPActionsController : NSObject {
    IBOutlet NSArrayController *ports;
    IBOutlet PortsTableController *tableController;
    IBOutlet ActivityController *activityController;
    
    IBOutlet NSToolbarItem *cancel;
	IBOutlet NSButton *startQueueButton;
	IBOutlet NSMutableArray *queueArray;
    IBOutlet NSArrayController *queue;
	NSUInteger queueCounter;
}

- (IBAction)openPreferences:(id)sender;
- (IBAction)install:(id)sender;
- (IBAction)installWithVariants:(id)sender;
- (IBAction)uninstall:(id)sender;
- (IBAction)upgrade:(id)sender;
- (IBAction)sync:(id)sender;
- (IBAction)selfupdate:(id)sender;
- (IBAction)cancel:(id)sender;

- (void) queueOperation: (NSString*) operation portName: (NSString*) name portObject: (id) port;

-(IBAction) startQueue:(id) sender;
-(void) advanceQueue;
@end
