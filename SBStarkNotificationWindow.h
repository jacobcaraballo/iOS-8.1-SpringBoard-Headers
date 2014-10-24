/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "SBWindow.h"

#import "SBStarkNotificationViewControllerDelegate-Protocol.h"

@class NSString, SBStarkNotificationViewController, SBStarkScreenFocusController;

@interface SBStarkNotificationWindow : SBWindow <SBStarkNotificationViewControllerDelegate>
{
    SBStarkScreenFocusController *_focusController;
    _Bool _assertingFocus;
    id _borrowScreenToken;
}

- (void)dealloc;
@property(retain, nonatomic) SBStarkScreenFocusController *focusController; // @synthesize focusController=_focusController;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithScreen:(id)arg1 layoutStrategy:(id)arg2 debugName:(id)arg3 scene:(id)arg4;
- (void)notificationViewController:(id)arg1 stateDidChangeFrom:(int)arg2;
- (void)notificationViewController:(id)arg1 willDisplayBannerView:(id)arg2;
@property(retain, nonatomic) SBStarkNotificationViewController *rootViewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
