/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "NSObject.h"

@class SBPolygon;

@interface SBTouchTemplate : NSObject
{
    SBPolygon *m_template;
    SBPolygon *m_candidate;
    unsigned long long m_transformType;
    float m_acceptFactor;
}

@property(nonatomic) float acceptFactor; // @synthesize acceptFactor=m_acceptFactor;
- (_Bool)acceptPoints:(struct CGPoint *)arg1 count:(unsigned long long)arg2;
- (_Bool)acceptPolygon:(id)arg1;
- (void)dealloc;
- (id)initWithPoints:(struct CGPoint *)arg1 count:(unsigned long long)arg2;
@property(readonly, nonatomic) unsigned long long pointCount;
@property(nonatomic) unsigned long long transformType; // @synthesize transformType=m_transformType;

@end

