/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSPlatform : NSObject

@property (getter=isCarrierInstall, nonatomic, readonly) bool carrierInstall;
@property (getter=isDeveloperInstall, nonatomic, readonly) bool developerInstall;
@property (nonatomic, readonly) int deviceClass;
@property (nonatomic, readonly) bool hasGasGauge;
@property (nonatomic, readonly) bool hasOrbCapability;
@property (nonatomic, readonly) long long homeButtonType;
@property (getter=isInternalInstall, nonatomic, readonly) bool internalInstall;
@property (nonatomic, readonly, copy) NSString *localizedProductName;
@property (getter=isMultiCore, nonatomic, readonly) bool multiCore;
@property (nonatomic, readonly, copy) NSString *operatingSystemName;
@property (nonatomic, readonly, copy) NSString *productBuildVersion;
@property (nonatomic, readonly, copy) NSString *productClass;
@property (nonatomic, readonly, copy) NSString *productHardwareModel;
@property (nonatomic, readonly, copy) NSString *productHardwareModelName;
@property (nonatomic, readonly, copy) NSString *productType;
@property (nonatomic, readonly, copy) NSString *productVersion;
@property (nonatomic, readonly, copy) NSString *uniqueDeviceIdentifier;

+ (id)sharedInstance;

- (bool)_isD22Emulator;
- (int)deviceClass;
- (bool)hasGasGauge;
- (bool)hasOrbCapability;
- (long long)homeButtonType;
- (bool)isCarrierInstall;
- (bool)isDeveloperInstall;
- (bool)isInternalInstall;
- (bool)isMultiCore;
- (id)localizedProductName;
- (id)operatingSystemName;
- (id)productBuildVersion;
- (id)productClass;
- (id)productHardwareModel;
- (id)productHardwareModelName;
- (id)productType;
- (id)productVersion;
- (id)uniqueDeviceIdentifier;

@end