/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MetricKit.framework/MetricKit
 */

@interface MXMetaData : NSObject <NSSecureCoding> {
    NSString * _applicationBuildVersion;
    NSString * _deviceType;
    NSString * _osVersion;
    NSString * _regionFormat;
}

@property (readonly) NSString *applicationBuildVersion;
@property (readonly) NSString *deviceType;
@property (readonly) NSString *osVersion;
@property (readonly) NSString *regionFormat;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)DictionaryRepresentation;
- (id)JSONRepresentation;
- (id)applicationBuildVersion;
- (id)deviceType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRegionFormat:(id)arg1 osVersion:(id)arg2 deviceType:(id)arg3 appBuildVersion:(id)arg4;
- (id)osVersion;
- (id)regionFormat;
- (id)toDictionary;

@end