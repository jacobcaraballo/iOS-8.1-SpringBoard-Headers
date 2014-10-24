/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "SBLockOverlayViewController.h"

#import "SBLockOverlayViewDelegate-Protocol.h"

@class NSString, SBLockScreenInfoOverlayView;

@interface SBLockScreenInfoOverlayViewController : SBLockOverlayViewController <SBLockOverlayViewDelegate>
{
    SBLockScreenInfoOverlayView *_overlayView;
    NSString *_title;
}

- (void)dealloc;
- (void)handleTapGestureFromView:(id)arg1;
- (id)initWithTitle:(id)arg1;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) id <SBLockScreenInfoOverlayDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

