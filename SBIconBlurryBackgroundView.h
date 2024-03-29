/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "UIView.h"

#import "_SBIconWallpaperColorClient-Protocol.h"

@class NSString;

@interface SBIconBlurryBackgroundView : UIView <_SBIconWallpaperColorClient>
{
    struct CGRect _wallpaperRelativeBounds;
    _Bool _isBlurring;
    _Bool _suppressesExternalUpdates;
    id <SBIconBlurryBackgroundViewObserver> _observer;
    id _wantsBlurEvaluator;
    struct CGPoint _wallpaperRelativeCenter;
}

- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)dealloc;
- (void)didAddSubview:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) _Bool isBlurring; // @synthesize isBlurring=_isBlurring;
@property(nonatomic, getter=isSuppressingExternalUpdates) _Bool suppressesExternalUpdates; // @synthesize suppressesExternalUpdates=_suppressesExternalUpdates;
@property(nonatomic) id <SBIconBlurryBackgroundViewObserver> observer; // @synthesize observer=_observer;
- (void)setBlurring:(_Bool)arg1;
- (void)setWallpaperColor:(struct CGColor *)arg1 phase:(struct CGSize)arg2;
@property(nonatomic) struct CGPoint wallpaperRelativeCenter; // @synthesize wallpaperRelativeCenter=_wallpaperRelativeCenter;
@property(copy, nonatomic) id wantsBlurEvaluator; // @synthesize wantsBlurEvaluator=_wantsBlurEvaluator;
- (struct CGRect)wallpaperRelativeBounds;
- (_Bool)wantsBlur:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

