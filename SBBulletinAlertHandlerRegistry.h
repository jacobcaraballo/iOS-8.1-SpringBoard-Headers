/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "NSObject.h"

#import "SBBulletinAlertHandlerRegistry-Protocol.h"
#import "_UISettingsKeyObserver-Protocol.h"

@class NSMutableDictionary, NSString, SBAlertItemsSettings;

@interface SBBulletinAlertHandlerRegistry : NSObject <_UISettingsKeyObserver, SBBulletinAlertHandlerRegistry>
{
    NSMutableDictionary *_handlersBySectionID;
    SBAlertItemsSettings *_settings;
    _Bool _disabled;
}

- (void)addAlertHandler:(id)arg1 forSection:(id)arg2;
- (id)alertHandlersForSection:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

