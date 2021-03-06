/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARSessionMetrics : NSObject {
    unsigned long long  _badFrameCount;
    Class  _configClass;
    id  _currentConfiguration;
    bool  _didRunPlaneDetection;
    bool  _didSwitchToWornMode;
    unsigned long long  _frameCount;
    NSDate * _frameStartDate;
    bool  _hasInitialWorldMap;
    long long  _highestThermalState;
    bool  _initializingVIO;
    ARFrame * _lastUpdatedFrame;
    void _maxPos;
    void _minPos;
    bool  _positionInitialized;
    NSObject<OS_dispatch_queue> * _queue;
    unsigned long long  _raycastCount;
    bool  _relocalizingToInitialWorldMap;
    <ARSessionMetricsReporting> * _reporter;
    double  _sessionTimeForLastBadFrameRecording;
    NSDate * _startDate;
}

- (void).cxx_destruct;
- (id)_baseKey;
- (int)_checkRenderEngine:(id)arg1 withConfiguration:(id)arg2;
- (void)_recordBadFramePercentageFinal:(bool)arg1;
- (void)_recordBadFramePercentageWithBucket:(id)arg1;
- (void)_recordSessionEnd;
- (id)arkitBasedKey:(id)arg1;
- (id)configBasedKey:(id)arg1;
- (id)init;
- (id)initWithReporter:(id)arg1;
- (id)queue;
- (void)recordRaycast:(id)arg1 tracked:(bool)arg2;
- (void)saveMapWithFrame:(id)arg1;
- (void)sessionDidUpdateFrame:(id)arg1;
- (void)sessionStarted:(id)arg1 withConfiguration:(id)arg2;
- (void)sessionStopped;
- (void)sessionSwitchedPresentationMode:(long long)arg1;
- (void)sessionUpdateThermalState:(long long)arg1;

@end
