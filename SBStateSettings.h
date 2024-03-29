/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "NSObject.h"

#import "BSSettingDescriptionProvider-Protocol.h"
#import "NSCopying-Protocol.h"
#import "SBStateSettings-Protocol.h"

@class BSMutableSettings, NSString;

@interface SBStateSettings : NSObject <BSSettingDescriptionProvider, SBStateSettings, NSCopying>
{
    BSMutableSettings *_settings;
}

- (void)applyStateSettings:(id)arg1;
- (id)basicDescriptionWithPrefix:(id)arg1;
- (_Bool)boolForStateSetting:(unsigned int)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (long long)flagForStateSetting:(unsigned int)arg1;
- (id)init;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)objectForStateSetting:(unsigned int)arg1;
- (id)processSettings;
- (void)setFlag:(long long)arg1 forStateSetting:(unsigned int)arg2;
- (void)setObject:(id)arg1 forStateSetting:(unsigned int)arg2;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

