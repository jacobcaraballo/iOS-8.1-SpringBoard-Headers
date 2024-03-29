/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "_UISettings.h"

@interface SBFAnimationFactorySettings : _UISettings
{
    _Bool _isArchiveValue;
    _Bool _slowAnimations;
    double _slowDownFactor;
    double _springMassFactor;
    double _springStiffnessFactor;
    double _springDampingFactor;
}

+ (id)settingsControllerModule;
- (void)applyArchiveValue:(id)arg1 forKey:(id)arg2;
- (void)setDefaultValues;
@property(nonatomic) _Bool slowAnimations; // @synthesize slowAnimations=_slowAnimations;
@property(nonatomic) double slowDownFactor; // @synthesize slowDownFactor=_slowDownFactor;
@property(nonatomic) double springDampingFactor; // @synthesize springDampingFactor=_springDampingFactor;
@property(nonatomic) double springMassFactor; // @synthesize springMassFactor=_springMassFactor;
@property(nonatomic) double springStiffnessFactor; // @synthesize springStiffnessFactor=_springStiffnessFactor;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)valueForKey:(id)arg1;

@end

