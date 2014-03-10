//
//  BounceTrigger.h
//  iTerm
//
//  Created by George Nachman on 9/23/11.
//

#import <Cocoa/Cocoa.h>
#import "Trigger.h"

@interface BounceTrigger : Trigger {

}

- (NSString *)title;
- (BOOL)takesParameter;
- (BOOL)paramIsPopupButton;
- (void)performActionWithValues:(NSArray *)values inSession:(PTYSession *)aSession;

@end
