/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "NSObject.h"

@class NSMutableArray;

@interface SBBluetoothController : NSObject
{
    NSMutableArray *_devices;
    _Bool _tetheringConnected;
}

+ (id)sharedInstance;
- (void)addDeviceNotification:(id)arg1;
- (void)batteryChanged:(id)arg1;
- (int)batteryLevel;
- (void)bluetoothDeviceEndedVoiceControl:(id)arg1;
- (void)bluetoothDeviceInitiatedVoiceControl:(id)arg1;
- (_Bool)canReportBatteryLevel;
- (void)connectionChanged:(id)arg1;
- (void)dealloc;
- (id)deviceForAudioRoute:(id)arg1;
- (id)firstBTDeviceToReportBatteryLevel;
- (void)iapDeviceChanged:(id)arg1;
- (void)noteDevicesChanged;
- (void)removeDeviceNotification:(id)arg1;
- (void)startWatchingForDevices;
- (void)stopWatchingForDevices;
- (_Bool)tetheringConnected;
- (void)updateBattery;
- (void)updateTetheringConnected;

@end

