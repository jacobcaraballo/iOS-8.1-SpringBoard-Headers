/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "NSObject.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface SBWorkStore : NSObject
{
    NSMutableDictionary *_workItemsPerKey;
    NSMutableArray *_keysWithWork;
    NSMutableArray *_observers;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    unsigned long long _maxWorkPerKey;
    NSMutableDictionary *_workExpirationPeriods;
    double _defaultWorkExpirationPeriod;
}

- (void)_notifyObserversWorkDidChange;
- (void)_queue_expireWorkForKey:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)addWorkItem:(id)arg1 forKey:(id)arg2;
- (void)dealloc;
@property(nonatomic) double defaultWorkExpirationPeriod; // @synthesize defaultWorkExpirationPeriod=_defaultWorkExpirationPeriod;
- (id)dequeueWorkForKey:(id)arg1;
- (id)description;
- (id)initWithMaximumNumberOfWorkItemsPerKey:(unsigned long long)arg1;
@property(readonly, nonatomic) NSArray *keysWithWork; // @synthesize keysWithWork=_keysWithWork;
@property(readonly, nonatomic) unsigned long long maxWorkPerKey; // @synthesize maxWorkPerKey=_maxWorkPerKey;
@property(readonly, nonatomic) NSMutableArray *observers; // @synthesize observers=_observers;
- (void)purgeWorkForKey:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)setWorkExpirationPeriod:(double)arg1 forKey:(id)arg2;
@property(readonly, nonatomic) NSMutableDictionary *workItemsPerKey; // @synthesize workItemsPerKey=_workItemsPerKey;

@end

