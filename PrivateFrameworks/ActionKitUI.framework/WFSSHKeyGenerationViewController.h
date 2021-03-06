/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
 */

@interface WFSSHKeyGenerationViewController : UITableViewController {
    WFTextFieldTableItem * _commentItem;
    WFTableSection * _commentSection;
    Class  _currentFormat;
    NSNumber * _currentKeySize;
    WFTableDataSource * _dataSource;
    <WFSSHKeyGenerationViewControllerDelegate> * _delegate;
    WFSegmentedControlTableItem * _keySizeItem;
    WFTableSection * _keySizeSection;
    WFSegmentedControlTableItem * _keyTypeItem;
    WFTableSection * _keyTypeSection;
}

@property (nonatomic, readonly) WFTextFieldTableItem *commentItem;
@property (nonatomic, readonly) WFTableSection *commentSection;
@property (nonatomic) Class currentFormat;
@property (nonatomic, retain) NSNumber *currentKeySize;
@property (nonatomic, readonly) WFTableDataSource *dataSource;
@property (nonatomic) <WFSSHKeyGenerationViewControllerDelegate> *delegate;
@property (nonatomic, readonly) WFSegmentedControlTableItem *keySizeItem;
@property (nonatomic, readonly) WFTableSection *keySizeSection;
@property (nonatomic, readonly) WFSegmentedControlTableItem *keyTypeItem;
@property (nonatomic, readonly) WFTableSection *keyTypeSection;

- (void).cxx_destruct;
- (void)authenticationTypeDidChange:(id)arg1;
- (void)cancelPressed:(id)arg1;
- (id)commentItem;
- (id)commentSection;
- (Class)currentFormat;
- (id)currentKeySize;
- (id)dataSource;
- (id)delegate;
- (void)donePressed:(id)arg1;
- (void)generateKeyPairAndFinish;
- (id)init;
- (void)keySizeDidChange:(id)arg1;
- (id)keySizeItem;
- (id)keySizeSection;
- (id)keyTypeItem;
- (id)keyTypeSection;
- (void)setCurrentFormat:(Class)arg1;
- (void)setCurrentKeySize:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)updateVisibleItems;
- (void)viewDidLoad;

@end
