/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWSensorConfiguration : NSObject {
    NSDictionary * _cameraInfo;
    NSString * _portType;
    NSDictionary * _sensorIDDictionary;
    NSString * _sensorIDString;
}

@property (nonatomic, readonly) NSDictionary *cameraInfo;
@property (nonatomic, readonly) NSString *portType;
@property (nonatomic, readonly) NSDictionary *sensorIDDictionary;
@property (nonatomic, readonly) NSString *sensorIDString;

- (id)cameraInfo;
- (void)dealloc;
- (id)description;
- (id)initWithPortType:(id)arg1 sensorIDString:(id)arg2 sensorIDDictionary:(id)arg3 cameraInfo:(id)arg4;
- (id)portType;
- (id)sensorIDDictionary;
- (id)sensorIDString;

@end
