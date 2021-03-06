/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCHardwareSettingsMac : VCHardwareSettings <VCHardwareSettingsMacProtocol> {
    int  _cpuFamily;
    NSString * _cpuType;
    int  _hardwareScore;
    bool  _hiDefEncoding;
    int  _isG5;
    bool  _isGVAEncoderAvailable;
    bool  _isGVAEncoderAvailableInitialized;
    NSString * _machineName;
    int  _machineType;
    int  _mhrtz;
    int  _numProcessors;
}

@property (nonatomic, readonly) bool canDoHEVC;
@property (nonatomic, readonly) bool canDoHiDefDecoding;
@property (nonatomic, readonly) bool canDoHiDefEncoding;
@property (nonatomic, readonly) int hardwareScore;
@property (nonatomic, readonly) unsigned int hwEncoderEnterBitrate;
@property (nonatomic, readonly) unsigned int hwEncoderExitBitrate;
@property (nonatomic, readonly) bool isDeviceLargeScreen;
@property (nonatomic, readonly) bool isIMac;
@property (nonatomic, readonly) bool isMacBookWVGA;
@property (nonatomic, readonly) bool isMacPro;
@property (nonatomic, readonly) NSString *machineName;
@property (nonatomic, readonly) unsigned int maxActiveVideoDecoders;
@property (nonatomic, readonly) unsigned int maxActiveVideoEncoders;
@property (nonatomic, readonly) bool supportHEVC;
@property (nonatomic, readonly) bool supportsHEIFEncoding;
@property (nonatomic, readonly) bool useSoftFramerateSwitching;
@property (nonatomic, readonly) bool vcpSupportsHEVCEncoder;

+ (long long)deviceClass;
+ (id)sharedInstance;

- (int)_getCPUFamilyType;
- (id)_getCPUTypeStringForMachineType:(int)arg1;
- (bool)_isMachineNewerThanSandybridge:(int)arg1;
- (bool)_isModel:(id)arg1;
- (bool)canDoHEVC;
- (bool)canDoHiDefDecoding;
- (bool)canDoHiDefEncoding;
- (void)dealloc;
- (int)hardwareScore;
- (unsigned int)hwEncoderEnterBitrate;
- (unsigned int)hwEncoderExitBitrate;
- (id)init;
- (bool)isDeviceLargeScreen;
- (bool)isGVAEncoderAvailable;
- (bool)isIMac;
- (bool)isMacBookWVGA;
- (bool)isMacPro;
- (id)machineName;
- (unsigned int)maxActiveVideoDecoders;
- (unsigned int)maxActiveVideoEncoders;
- (bool)supportsHEIFEncoding;
- (bool)useSoftFramerateSwitching;

@end
