/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ProximityUI.framework/ProximityUI
 */

@interface PRTargetEstimate : NSObject {
    bool  _isVerticalResolved;
    double  _timestamp;
    float  _uncertainty;
    void _vector;
    float  _weight;
}

@property (nonatomic, readonly) bool isVerticalResolved;
@property (nonatomic, readonly) double timestamp;
@property (nonatomic, readonly) float uncertainty;
@property (nonatomic, readonly) void vector;
@property (nonatomic, readonly) float weight;

+ (id)targetEstimateWithTime:(void *)arg1 vector:(void *)arg2 uncertainty:(void *)arg3 weight:(void *)arg4 isResolved:(void *)arg5; // needs 5 arg types, found 4: double, float, float, bool

- (id)initWithTime:(void *)arg1 vector:(void *)arg2 uncertainty:(void *)arg3 weight:(void *)arg4 isResolved:(void *)arg5; // needs 5 arg types, found 4: double, float, float, bool
- (bool)isVerticalResolved;
- (double)timestamp;
- (float)uncertainty;
- (void)vector;
- (float)weight;

@end