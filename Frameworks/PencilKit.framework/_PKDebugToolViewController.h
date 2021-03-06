/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

@interface _PKDebugToolViewController : UIViewController <PKInkAttributesPickerDelegate, UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, UIPopoverPresentationControllerDelegate> {
    UIButton * _dismissButton;
    UILabel * _doNotFileBugsLabel;
    PKTiledView * _tiledView;
    UICollectionView * _toolCollectionView;
    NSArray * _tools;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) UIButton *dismissButton;
@property (nonatomic, readonly) UILabel *doNotFileBugsLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) PKTiledView *tiledView;
@property (nonatomic, readonly) UICollectionView *toolCollectionView;
@property (nonatomic, readonly) NSArray *tools;

- (void).cxx_destruct;
- (void)_dismissPane;
- (id)_images;
- (void)_populateTools;
- (void)_showInkAttributesPickerFromView:(id)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 ink:(id)arg3 shouldHideArrow:(bool)arg4 completion:(id /* block */)arg5;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize { double x1; double x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (id)dismissButton;
- (id)doNotFileBugsLabel;
- (void)inkAttributesPickerDidChangeSelectedInk:(id)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)setTiledView:(id)arg1;
- (id)tiledView;
- (id)toolCollectionView;
- (id)tools;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
