/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUCameraPresenceRecordingSettingsModule : HUExpandableItemModule <HUCameraSettingsModule, ICQUpgradeFlowManagerDelegate> {
    NSSet * _cameraProfiles;
    bool  _didCompleteCloudUpgradeOffer;
    HMHome * _home;
    HFStaticItemProvider * _itemProvider;
    NSSet * _itemProviders;
    NSString * _longestCameraUsageOptionItemTitle;
    unsigned long long  _numCamerasSupportRecordingService;
    unsigned long long  _offerState;
    NSArray * _optionItems;
    unsigned long long  _presenceEventType;
    UIViewController * _presentingViewController;
    HUCameraUsageOptionItemProvider * _recordingSettingItemProvider;
    HFItem * _showOptionsItem;
    unsigned long long  _upgradeState;
    UIViewController * _viewController;
}

@property (nonatomic, readonly) unsigned long long accessModeSetting;
@property (nonatomic, readonly) NSSet *cameraProfiles;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didCompleteCloudUpgradeOffer;
@property (nonatomic, readonly) unsigned long long displayStyle;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HMHome *home;
@property (nonatomic, retain) HFStaticItemProvider *itemProvider;
@property (nonatomic, readonly) NSString *longestCameraUsageOptionItemTitle;
@property (nonatomic) unsigned long long numCamerasSupportRecordingService;
@property (nonatomic) unsigned long long offerState;
@property (nonatomic, retain) NSArray *optionItems;
@property (nonatomic, readonly) unsigned long long presenceEventType;
@property (nonatomic, retain) UIViewController *presentingViewController;
@property (nonatomic, retain) HUCameraUsageOptionItemProvider *recordingSettingItemProvider;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long upgradeState;
@property (nonatomic) UIViewController *viewController;

- (void).cxx_destruct;
- (void)_buildItemProvider;
- (void)_clearItemsUpdating;
- (void)_dispatchUpdateForCameraProfile:(id)arg1;
- (id)_titleString;
- (unsigned long long)accessModeSetting;
- (id)buildSectionsWithDisplayedItems:(id)arg1;
- (id)cameraProfiles;
- (unsigned long long)countCameraProfilesWithRecordingService;
- (bool)didCompleteCloudUpgradeOffer;
- (id)didSelectItem:(id)arg1;
- (id)home;
- (id)initWithItemUpdater:(id)arg1;
- (id)initWithItemUpdater:(id)arg1 cameraProfiles:(id)arg2 presenceEventType:(unsigned long long)arg3;
- (bool)isItemHeader:(id)arg1;
- (id)itemProvider;
- (id)itemProviders;
- (id)longestCameraUsageOptionItemTitle;
- (unsigned long long)numCamerasSupportRecordingService;
- (unsigned long long)offerState;
- (id)optionItems;
- (unsigned long long)presenceEventType;
- (void)presentCloudUpgradeFlowWithCameraCount:(unsigned long long)arg1;
- (void)presentGenericError;
- (void)presentInsufficientPrivilegesAlert;
- (void)presentMissingSupportedHubAlert;
- (id)presentingViewController;
- (id)recordingSettingItemProvider;
- (void)sendCAMetricInfo;
- (void)setDidCompleteCloudUpgradeOffer:(bool)arg1;
- (void)setHome:(id)arg1;
- (void)setItemProvider:(id)arg1;
- (void)setNumCamerasSupportRecordingService:(unsigned long long)arg1;
- (void)setOfferState:(unsigned long long)arg1;
- (void)setOptionItems:(id)arg1;
- (void)setPresentingViewController:(id)arg1;
- (void)setRecordingSettingItemProvider:(id)arg1;
- (void)setUpgradeState:(unsigned long long)arg1;
- (void)setViewController:(id)arg1;
- (id)showOptionsItem;
- (id)updateStreamingSetting:(unsigned long long)arg1 isRetry:(bool)arg2;
- (void)upgradeFlowManagerDidCancel:(id)arg1;
- (void)upgradeFlowManagerDidComplete:(id)arg1;
- (unsigned long long)upgradeState;
- (id)viewController;

@end