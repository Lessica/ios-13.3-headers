/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SIMSetupSupport.framework/SIMSetupSupport
 */

@interface TSSetupAssistantSIMSetupFlow : TSSIMSetupFlow <TSCellularPlanManagerCacheDelegate, TSSIMSetupFlowDelegate> {
    UIBarButtonItem * _cancelButton;
    NSMutableArray * _currentItemsForIMessage;
    NSMutableArray * _danglingPlanItems;
    NSString * _iccid;
    bool  _showAddPlan;
}

@property (retain) NSMutableArray *currentItemsForIMessage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)needsToRun:(id /* block */)arg1;

- (void).cxx_destruct;
- (id)currentItemsForIMessage;
- (id)firstViewController;
- (id)initWithIccid:(id)arg1 showAddPlan:(bool)arg2 allowDismiss:(bool)arg3;
- (id)nextViewControllerFrom:(id)arg1;
- (void)setCurrentItemsForIMessage:(id)arg1;
- (void)setDefaultNavigationItems:(id)arg1;
- (void)viewControllerDidComplete:(id)arg1;

@end
