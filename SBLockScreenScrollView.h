/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "UIScrollView.h"

@class SBLockScreenView;

@interface SBLockScreenScrollView : UIScrollView
{
    id <SBUIPasscodeLockView> _passcodeView;
    SBLockScreenView *_lockScreenView;
}

- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
@property(nonatomic) SBLockScreenView *lockScreenView; // @synthesize lockScreenView=_lockScreenView;
@property(nonatomic) id <SBUIPasscodeLockView> passcodeView; // @synthesize passcodeView=_passcodeView;
- (void)setUserInteractionEnabled:(_Bool)arg1;
- (_Bool)touchesShouldCancelInContentView:(id)arg1;

@end
