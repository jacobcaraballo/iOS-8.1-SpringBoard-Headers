/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

/*
 * SDK Root: /Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS8.sdk
 */

#import "NSObject.h"

@class NSObject<OS_dispatch_source>, NSRecursiveLock, NSString;

@interface SBWiFiManager : NSObject
{
    NSRecursiveLock *_lock;
    struct __WiFiManagerClient *_manager;
    struct __WiFiDeviceClient *_device;
    NSString *_deviceInterfaceName;
    _Bool _devicePresent;
    struct __WiFiNetwork *_currentNetwork;
    struct __WiFiNetwork *_previousNetwork;
    _Bool _currentNetworkHasBeenSet;
    _Bool _currentNetworkIsIOSHotspot;
    _Bool _currentNetworkIsIOSHotspotHasBeenSet;
    _Bool _powered;
    _Bool _poweredHasBeenSet;
    int _rssiThreshold;
    int _signalStrengthBars;
    int _signalStrengthRSSI;
    _Bool _signalStrengthHasBeenSet;
    struct __SCDynamicStore *_SCDynamicStoreNetworkState;
    NSObject<OS_dispatch_source> *_SCUpdateTimeoutSource;
    struct __WiFiNetwork *_primaryInterface;
    _Bool _primaryInterfaceHasBeenSet;
    _Bool _isPrimaryInterface;
    _Bool _isPrimaryInterfaceChanging;
    int linkToken;
    int powerToken;
}

+ (id)sharedInstance;
- (_Bool)_cachedIsAssociated;
- (void)_linkDidChange;
- (struct __WiFiManagerClient *)_manager;
- (void)_powerStateDidChange;
- (void)_primaryInterfaceChanged:(_Bool)arg1;
- (void)_setPrimaryInterfaceHasBeenSet;
- (void)_setWiFiDevice:(struct __WiFiDeviceClient *)arg1;
- (void)_updateCurrentNetwork;
- (void)_updateWiFiDevice:(id)arg1;
- (void)_updateWiFiState;
- (id)_wifiInterface;
- (id)currentNetworkName;
- (_Bool)devicePresent;
- (id)init;
- (_Bool)isAssociated;
- (_Bool)isAssociatedToIOSHotspot;
- (_Bool)isPowered;
- (_Bool)isPrimaryInterface;
- (id)knownNetworks;
- (void)resetSettings;
- (void)setPowered:(_Bool)arg1;
- (void)setWiFiEnabled:(_Bool)arg1;
- (int)signalStrengthBars;
- (int)signalStrengthRSSI;
- (void)updateDevicePresence;
- (void)updateSignalStrength;
- (void)updateSignalStrengthFromRawRSSI:(int)arg1 andScaledRSSI:(float)arg2;
- (_Bool)wiFiEnabled;
- (_Bool)wifiSupported;

@end

