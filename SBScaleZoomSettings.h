/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "SBIconZoomSettings.h"

@class SBFAnimationSettings;

@interface SBScaleZoomSettings : SBIconZoomSettings
{
    _Bool _crossfadeWithZoom;
    SBFAnimationSettings *_outerFolderFadeSettings;
    SBFAnimationSettings *_crossfadeSettings;
}

+ (id)settingsControllerModule;
@property(retain) SBFAnimationSettings *crossfadeSettings; // @synthesize crossfadeSettings=_crossfadeSettings;
@property _Bool crossfadeWithZoom; // @synthesize crossfadeWithZoom=_crossfadeWithZoom;
- (id)effectiveCrossfadeAnimationSettings;
@property(retain) SBFAnimationSettings *outerFolderFadeSettings; // @synthesize outerFolderFadeSettings=_outerFolderFadeSettings;
- (void)setDefaultValues;

@end

