/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "NSObject.h"

#import "SBThermalWarningAlertItemDelegate-Protocol.h"
#import "SBThermalWarningSuppressionAssertionDelegate-Protocol.h"

@class NSDictionary, NSMutableSet, NSString;

@interface SBThermalController : NSObject <SBThermalWarningSuppressionAssertionDelegate, SBThermalWarningAlertItemDelegate>
{
    _Bool _sampling;
    double _samplingStartTime;
    NSDictionary *_samplingStartCPUTimesByApp;
    int _sunlightStateToken;
    int _coldTempToken;
    int _warningAssertionToken;
    int _warningResponseToken;
    NSMutableSet *_warningSuppressionAssertions;
    _Bool _warningSuppressionPreference;
    int _level;
    _Bool _inSunlight;
}

+ (void)logThermalEvent:(id)arg1;
+ (id)sharedInstance;
- (void)_beginThermalJetsamCPUSampling;
- (void)_calculateAppsCPUTimesWithCompletion:(id)arg1;
- (void)_didReceiveWarningAction:(int)arg1;
- (void)_killThermallyActiveApplication;
- (void)_killThermallyActiveApplicationGivenCPUTimes:(id)arg1;
- (_Bool)captureWarningSuppressionAssertionWithPort:(unsigned int)arg1 reason:(id)arg2;
- (void)dealloc;
- (id)init;
@property(readonly, nonatomic, getter=isInSunlight) _Bool inSunlight; // @synthesize inSunlight=_inSunlight;
@property(readonly, nonatomic) int level; // @synthesize level=_level;
- (void)respondToCurrentThermalCondition;
- (void)showThermalAlertIfNecessary;
- (void)startListeningForThermalEvents;
- (void)thermalWarningAlert:(id)arg1 didTriggerAction:(int)arg2;
- (void)thermalWarningAssertionExpired:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

