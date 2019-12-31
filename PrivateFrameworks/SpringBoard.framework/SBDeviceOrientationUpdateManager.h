/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

@interface SBDeviceOrientationUpdateManager : NSObject {
    NSMutableSet * _deferralAssertions;
    bool  _deviceOrientationIsDirty;
    long long  _lastUpdatedDeviceOrientation;
    <BSInvalidatable> * _stateCaptureHandle;
}

@property (getter=isCurrentlyDeferringOrientationUpdates, nonatomic, readonly) bool currentlyDeferringOrientationUpdates;
@property (nonatomic) long long lastUpdatedDeviceOrientation;

- (void).cxx_destruct;
- (bool)_deviceOrientationUpdateNeededForOrientation:(long long)arg1;
- (void)_endDeferringOrientationUpdatesForAssertion:(id)arg1;
- (void)_enqueueOrientationUpdateToDeviceOrientation:(long long)arg1;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)deviceOrientationUpdateDeferralAssertionWithReason:(id)arg1;
- (id)init;
- (bool)isCurrentlyDeferringOrientationUpdates;
- (long long)lastUpdatedDeviceOrientation;
- (void)setLastUpdatedDeviceOrientation:(long long)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end