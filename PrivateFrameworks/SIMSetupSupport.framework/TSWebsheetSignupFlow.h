/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SIMSetupSupport.framework/SIMSetupSupport
 */

@interface TSWebsheetSignupFlow : TSSIMSetupFlow <TSEntitlementJSHandlerDelegate, TSSIMSetupFlowDelegate, UINavigationControllerDelegate> {
    UIViewController<TSSetupFlowItem> * _currentViewController;
    NSDictionary * _postdata;
    unsigned long long  _requestType;
    NSString * _websheetURL;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_createURLRequest:(id /* block */)arg1;
- (void)_showFailureAlert:(id)arg1 completion:(id /* block */)arg2;
- (void)accountCancelled;
- (void)accountPendingRelease;
- (void)didPurchasePlanSuccessfullyWithEid:(id)arg1 imei:(id)arg2 meid:(id)arg3 iccid:(id)arg4 alternateSDMP:(id)arg5;
- (void)didTransferPlanSuccessfullyWithEid:(id)arg1 imei:(id)arg2 meid:(id)arg3 iccid:(id)arg4 alternateSDMP:(id)arg5 state:(id)arg6;
- (id)firstViewController;
- (void)firstViewController:(id /* block */)arg1;
- (id)initWithRequestType:(unsigned long long)arg1 websheetURL:(id)arg2 postdata:(id)arg3;
- (id)nextViewControllerFrom:(id)arg1;
- (void)setDefaultNavigationItems:(id)arg1;
- (void)viewControllerDidComplete:(id)arg1;

@end