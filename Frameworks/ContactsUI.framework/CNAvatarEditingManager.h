/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNAvatarEditingManager : NSObject <CNAvatarCaptureViewControllerDelegate, CNPhotoPickerVariantListControllerDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate> {
    <AVTAvatarRecord> * _avatarRecord;
    <CNAvatarEditingManagerDelegate> * _delegate;
    UIImage * _imageWithAlpha;
    CNPhotoPickerProviderItem * _originalItem;
    CNPhotoPickerVariantsManager * _variantsManager;
    UIViewController * _viewController;
}

@property (nonatomic, readonly) <AVTAvatarRecord> *avatarRecord;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNAvatarEditingManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *imageWithAlpha;
@property (nonatomic, retain) CNPhotoPickerProviderItem *originalItem;
@property (readonly) Class superclass;
@property (nonatomic, readonly) CNPhotoPickerVariantsManager *variantsManager;
@property (nonatomic, retain) UIViewController *viewController;

+ (id)croppedAndCenteredAvatarImageFor:(id)arg1;

- (void).cxx_destruct;
- (void)avatarCaptureController:(id)arg1 didCaptureImage:(id)arg2;
- (id)avatarRecord;
- (id)captureFlashViewWithSize:(struct CGSize { double x1; double x2; })arg1 alpha:(double)arg2;
- (id)compositeImageDataForImage:(id)arg1 backgroundColor:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })computeFullscreenImageRectForScreenWithSize:(struct CGSize { double x1; double x2; })arg1;
- (id)createImagePickerForEditingImageData:(id)arg1 withCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 customBackgroundColor:(id)arg3;
- (id)delegate;
- (id)fullScreenImageFromImage:(id)arg1 inSize:(struct CGSize { double x1; double x2; })arg2;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (id)imagePickerForItem:(id)arg1;
- (id)imageWithAlpha;
- (id)initForEditingWithAvatarRecord:(id)arg1 variantsManager:(id)arg2 fromViewController:(id)arg3;
- (id)initWithAvatarRecord:(id)arg1 variantsManager:(id)arg2;
- (id)originalItem;
- (void)photoPickerVariantListController:(id)arg1 didSelectProviderItem:(id)arg2;
- (void)photoPickerVariantListControllerDidCancel:(id)arg1;
- (void)presentImagePickerForImage:(id)arg1 fadeIn:(bool)arg2 completion:(id /* block */)arg3;
- (id)renderImage:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)setDelegate:(id)arg1;
- (void)setImageWithAlpha:(id)arg1;
- (void)setOriginalItem:(id)arg1;
- (void)setViewController:(id)arg1;
- (id)variantsManager;
- (id)viewController;

@end