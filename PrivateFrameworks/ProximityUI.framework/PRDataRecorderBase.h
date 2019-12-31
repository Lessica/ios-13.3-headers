/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ProximityUI.framework/ProximityUI
 */

@interface PRDataRecorderBase : NSObject {
    NSMutableDictionary * _customData;
    NSMutableArray * _estimatorInput;
    NSMutableArray * _estimatorOutput;
    NSMutableArray * _measurements;
    NSMutableArray * _rangeEstimatorOutput;
}

@property (nonatomic, retain) NSMutableDictionary *customData;
@property (nonatomic, retain) NSMutableArray *estimatorInput;
@property (nonatomic, retain) NSMutableArray *estimatorOutput;
@property (nonatomic, retain) NSMutableArray *measurements;
@property (nonatomic, retain) NSMutableArray *rangeEstimatorOutput;

+ (id)generateFilename;

- (void).cxx_destruct;
- (id)customData;
- (void)discardSensorData;
- (id)estimatorInput;
- (id)estimatorOutput;
- (id)init;
- (id)measurements;
- (id)rangeEstimatorOutput;
- (void)recordCustomData:(id)arg1 forKey:(id)arg2;
- (void)recordEstimatorInput:(id)arg1;
- (void)recordPoseMeasurement:(id)arg1;
- (void)recordProximityMeasurement:(id)arg1;
- (void)recordRangeEstimate:(id)arg1;
- (void)recordTargetEstimates:(id)arg1;
- (void)setCustomData:(id)arg1;
- (void)setEstimatorInput:(id)arg1;
- (void)setEstimatorOutput:(id)arg1;
- (void)setMeasurements:(id)arg1;
- (void)setRangeEstimatorOutput:(id)arg1;
- (void)writeSensorDataToURL:(id)arg1;

@end