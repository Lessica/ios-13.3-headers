/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SensorKit.framework/SensorKit
 */

@interface SRDevice : NSObject {
    NSString * _buildVersion;
    NSString * _deviceIdentifier;
    NSString * _model;
    NSString * _name;
    NSString * _systemName;
    NSString * _systemVersion;
}

@property (copy) NSString *buildVersion;
@property (copy) NSString *deviceIdentifier;
@property (readonly, copy) NSString *model;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *systemName;
@property (readonly, copy) NSString *systemVersion;

+ (id)currentDevice;

- (id)buildVersion;
- (void)dealloc;
- (id)deviceIdentifier;
- (id)initWithDeviceDetails:(id)arg1;
- (id)model;
- (id)name;
- (void)setBuildVersion:(id)arg1;
- (void)setDeviceIdentifier:(id)arg1;
- (id)sr_dictionaryRepresentation;
- (id)systemName;
- (id)systemVersion;

@end
