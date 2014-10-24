/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "SBNotificationsModeViewController.h"

#import "UIGestureRecognizerDelegatePrivate-Protocol.h"

@class NSString, SBNotificationCenterHeaderView, SBNotificationCenterTouchEater;

@interface SBNotificationsAllModeViewController : SBNotificationsModeViewController <UIGestureRecognizerDelegatePrivate>
{
    SBNotificationCenterTouchEater *_clearButtonTouchEater;
    SBNotificationCenterHeaderView *_headerViewCurrentlyInClearState;
}

- (void)_handleEatenTouch:(id)arg1;
- (id)_headerViewCurrentlyInClearState;
- (void)_installClearButtonTouchEater;
- (void)_setHeaderViewCurrentlyInClearState:(id)arg1;
- (struct UIEdgeInsets)bulletinViewControllerContentInsetsForMode:(long long)arg1;
- (void)commitReloadOfSections:(id)arg1;
- (id)contentUnavailableText;
- (void)dealloc;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)infoForBulletin:(id)arg1 inSection:(id)arg2 forFeed:(unsigned long long)arg3;
- (id)infoForBulletinSection:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

