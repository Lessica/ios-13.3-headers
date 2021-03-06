/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKSpendingSummaryChartBarView : UIView {
    UIImageView * _bar;
    double  _barHeight;
    bool  _blurDisabled;
    _Atomic unsigned long long  _generationCounter;
    UIImage * _image;
    id /* block */  _imageCompletion;
    double  _maximumHeight;
    double  _minimumHeight;
    UIImageView * _placeholder;
    UIImage * _placeholderImage;
    bool  _showPlaceholder;
    PKSpendingSummary * _summary;
}

@property (getter=isBlurDisabled, nonatomic) bool blurDisabled;
@property (nonatomic, readonly) double minimumHeight;
@property (nonatomic) bool showPlaceholder;

- (void).cxx_destruct;
- (void)_callCompletion;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)_generateImageForSummary:(id)arg1 barHeight:(double)arg2 maximumHeight:(double)arg3 synchronous:(bool)arg4;
- (void)_updateImageWithImage:(id)arg1;
- (void)_updatePlaceholder;
- (void)_updatePlaceholderImage;
- (void)configureWithSummary:(id)arg1 maximumHeight:(double)arg2 barHeight:(double)arg3 synchronous:(bool)arg4 completion:(id /* block */)arg5;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isBlurDisabled;
- (void)layoutSubviews;
- (double)minimumHeight;
- (void)setBlurDisabled:(bool)arg1;
- (void)setShowPlaceholder:(bool)arg1;
- (bool)showPlaceholder;

@end
