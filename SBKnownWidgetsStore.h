/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "NSObject.h"

@class NSMutableSet;

@interface SBKnownWidgetsStore : NSObject
{
    NSMutableSet *_knownWidgets;
}

+ (id)sharedStore;
- (id)_defaultWidgets;
- (id)_knownWidgetsFilePath;
- (void)clearKnownWidgets;
- (void)dealloc;
- (id)init;
- (_Bool)isWidgetKnown:(id)arg1;
- (void)saveWidgetsState;
- (void)setWidgetAsKnown:(id)arg1;

@end

