/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "UIView.h"

@class SBApplication, SBProxyRemoteView;

@interface SBSheetView : UIView
{
    SBProxyRemoteView *_remoteProxyView;
    SBApplication *_app;
    _Bool _wasPresentedAnimated;
}

- (id)application;
- (void)dealloc;
- (id)initWithRemoteViewIdentifier:(id)arg1 application:(id)arg2 wasPresentedAnimated:(_Bool)arg3;
- (void)noteSheetDidEnd;
- (id)remoteViewIdentifier;
- (_Bool)wasPresentedAnimated;

@end

