/* Generated by RuntimeBrowser.
 */

@protocol FCPurchaseManagerType

@required

- (bool)anyOngoingPurchases;
- (void)authenticateAppleIDWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (<FCPurchaseManagerDelegate> *)delegate;
- (NFPromise *)fetchPurchaseMetadataForPurchaseID:(NSString *)arg1 restorePurcase:(bool)arg2;
- (bool)isPurchaseOngoingForTagID:(NSString *)arg1;
- (<FCPurchaseFlowOverrideProviderType> *)purchaseFlowOverrideProvider;
- (void)setDelegate:(id <FCPurchaseManagerDelegate>)arg1;
- (void)setPurchaseFlowOverrideProvider:(id <FCPurchaseFlowOverrideProviderType>)arg1;
- (void)simulateFailurePurchaseWithProductID:(NSString *)arg1 transactionState:(long long)arg2 error:(NSError *)arg3;
- (void)simulateSuccessfulPurchaseWithProductID:(NSString *)arg1 tagID:(NSString *)arg2 purchaseID:(NSString *)arg3;
- (void)startBundlePurchaseWithPurchase:(FCPurchase *)arg1 error:(id*)arg2;
- (void)startPurchaseWithTagID:(NSString *)arg1 purchase:(FCPurchase *)arg2 webAccessOptIn:(bool)arg3 error:(id*)arg4;

@end