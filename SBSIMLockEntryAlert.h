/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "SBAlert.h"

@interface SBSIMLockEntryAlert : SBAlert
{
    long long _status;
}

- (_Bool)_forcesPortraitOrientation;
- (void)activate;
- (id)alertDisplayViewWithSize:(struct CGSize)arg1;
- (void)deactivate;
- (_Bool)hasTranslucentBackground;
- (long long)interfaceOrientationForActivation;
- (id)lockEntryView;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (long long)status;
- (unsigned long long)supportedInterfaceOrientations;

@end
