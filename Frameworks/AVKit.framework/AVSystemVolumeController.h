/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVSystemVolumeController : NSObject <AVVolumeController> {
    float  _EUVolumeLimit;
    bool  _EUVolumeLimitEnabled;
    bool  _EUVolumeLimitOverridden;
    bool  _canOverrideEUVolumeLimit;
    bool  _changingVolume;
    bool  _currentRouteHasVolumeControl;
    bool  _fullyInitialized;
    NSNumber * _maximumTargetVolumeSinceChangingVolumeBegan;
    AVSystemController * _sharedSystemController;
    NSNumber * _targetVolumeInternal;
    float  _volume;
    NSString * _volumeCategory;
    bool  _volumeChangesThrottled;
}

@property (nonatomic) float EUVolumeLimit;
@property (getter=isEUVolumeLimitEnabled, nonatomic) bool EUVolumeLimitEnabled;
@property (getter=isEUVolumeLimitOverridden, nonatomic) bool EUVolumeLimitOverridden;
@property (nonatomic) bool canOverrideEUVolumeLimit;
@property (getter=isChangingVolume, nonatomic) bool changingVolume;
@property (nonatomic) bool currentRouteHasVolumeControl;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) float effectiveVolumeLimit;
@property (getter=isFullyInitialized, nonatomic) bool fullyInitialized;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSNumber *maximumTargetVolumeSinceChangingVolumeBegan;
@property (nonatomic, retain) AVSystemController *sharedSystemController;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSNumber *targetVolumeInternal;
@property (nonatomic) float volume;
@property (nonatomic, readonly) NSString *volumeCategory;
@property (nonatomic) bool volumeChangesThrottled;

+ (id)volumeController;
+ (id)windowSceneVolumeHUDAssertions;

- (void).cxx_destruct;
- (float)EUVolumeLimit;
- (void)_applyProposedVolumeIfNeeded;
- (void)_applyProposedVolumeImmediately;
- (void)_handleCurrentRouteHasVolumeControlDidChangeNotification:(id)arg1;
- (void)_handleEUVolumeLimitDidChangeNotification:(id)arg1;
- (void)_handleSystemControllerServerDiedNotification;
- (void)_handleSystemVolumeDidChangeNotification:(id)arg1;
- (void)_observeSystemController;
- (void)_performOnMainThread:(id /* block */)arg1;
- (void)_postNotificationForNameIfFullyInitialized:(id)arg1 userInfo:(id)arg2;
- (void)_removeVolumeHUDAssertionsForClientID:(id)arg1;
- (void)_unobserveSystemController;
- (id)_windowSceneIdentifiersWithVolumeHUDAssertions;
- (void)beginChangingVolumeForWindowSceneSessionID:(id)arg1;
- (bool)canOverrideEUVolumeLimit;
- (bool)currentRouteHasVolumeControl;
- (void)dealloc;
- (float)effectiveVolumeLimit;
- (void)endChangingVolume;
- (id)init;
- (bool)isChangingVolume;
- (bool)isEUVolumeLimitEnabled;
- (bool)isEUVolumeLimitOverridden;
- (bool)isFullyInitialized;
- (id)maximumTargetVolumeSinceChangingVolumeBegan;
- (void)setCanOverrideEUVolumeLimit:(bool)arg1;
- (void)setChangingVolume:(bool)arg1;
- (void)setClientWithIdentifier:(id)arg1 prefersSystemVolumeHUDHidden:(bool)arg2 forWindowSceneSessionWithIdentifier:(id)arg3;
- (void)setCurrentRouteHasVolumeControl:(bool)arg1;
- (void)setEUVolumeLimit:(float)arg1;
- (void)setEUVolumeLimitEnabled:(bool)arg1;
- (void)setEUVolumeLimitOverridden:(bool)arg1;
- (void)setFullyInitialized:(bool)arg1;
- (void)setMaximumTargetVolumeSinceChangingVolumeBegan:(id)arg1;
- (void)setSharedSystemController:(id)arg1;
- (void)setSystemVolumeHUDEnabled:(bool)arg1 forWindowSceneSessionIdentifier:(id)arg2;
- (void)setTargetVolume:(float)arg1;
- (void)setTargetVolumeInternal:(id)arg1;
- (void)setVolume:(float)arg1;
- (void)setVolumeChangesThrottled:(bool)arg1;
- (id)sharedSystemController;
- (id)targetVolumeInternal;
- (float)volume;
- (id)volumeCategory;
- (bool)volumeChangesThrottled;

@end
