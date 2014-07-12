//
//  VWWUserDefaults.h
//  Throwback
//
//  Created by Zakk Hoyt on 7/11/14.
//  Copyright (c) 2014 Zakk Hoyt. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface VWWUserDefaults : NSObject

+(NSArray*)recentLocations;
+(void)setRecentLocations:(NSArray*)recentLocations;


+(NSString*)allowedTypes;
+(void)setAllowedTypes:(NSString*)allowedTypes;

+(NSString*)initialPath;
+(void)setInitialPath:(NSString*)initialPath;


@end
