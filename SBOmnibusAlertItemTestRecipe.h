/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "NSObject.h"

#import "SBTestRecipe-Protocol.h"
#import "SBThermalWarningAlertItemDelegate-Protocol.h"

@class NSString, SBAlertItem;

@interface SBOmnibusAlertItemTestRecipe : NSObject <SBThermalWarningAlertItemDelegate, SBTestRecipe>
{
    SBAlertItem *_item;
}

+ (id)title;
- (id)_anyIcon;
- (id)_anySUDescriptor;
- (void)_dismissCurrentItem;
- (id)_mapsApp;
- (id)_nextAlertItemToTest;
- (void)handleVolumeDecrease;
- (void)handleVolumeIncrease;
- (void)thermalWarningAlert:(id)arg1 didTriggerAction:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
