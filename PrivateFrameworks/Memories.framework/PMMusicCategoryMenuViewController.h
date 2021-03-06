/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface PMMusicCategoryMenuViewController : UITableViewController {
    <PMEditProviderDelegate> * _delegate;
    UIBarButtonItem * _filterTypeButton;
    <PMEditorToolbarOwner> * _toolbarOwner;
    PMMusicProvider * musicProvider;
}

@property (nonatomic) <PMEditProviderDelegate> *delegate;
@property (nonatomic, retain) UIBarButtonItem *filterTypeButton;
@property (nonatomic, retain) PMMusicProvider *musicProvider;
@property (nonatomic) <PMEditorToolbarOwner> *toolbarOwner;

- (void).cxx_destruct;
- (void)_addObserverForTextSizeDidChange;
- (void)addFilterButtonToTopBar;
- (void)changeFilterStyle:(id)arg1;
- (id)delegate;
- (id)filterTypeButton;
- (id)musicProvider;
- (void)popFromNavigationController;
- (void)setDelegate:(id)arg1;
- (void)setFilterTypeButton:(id)arg1;
- (void)setMusicProvider:(id)arg1;
- (void)setToolbarOwner:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)toolbarOwner;
- (void)userTextSizeDidChange;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
