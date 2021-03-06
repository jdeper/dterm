//  DSAppleScriptUtilities.h
//  Copyright (c) 2008-2010 Decimus Software, Inc. All rights reserved.

#import <Cocoa/Cocoa.h>


@interface DSAppleScriptUtilities : NSObject

+ (NSString*)stringFromAppleScript:(NSString*)script error:(NSDictionary**)error;
+ (BOOL)bringApplicationToFront:(NSString*)appName error:(NSDictionary**)error;

@end
