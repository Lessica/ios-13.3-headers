/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

@interface VUIProductBannerCastInfoView : UIView {
    NSArray * _labels;
    VUICastInfoLayout * _layout;
    IKViewElement * _viewElement;
}

@property (nonatomic, retain) NSArray *labels;
@property (nonatomic, retain) VUICastInfoLayout *layout;
@property (nonatomic, retain) IKViewElement *viewElement;

+ (id)configureViewWithItems:(id)arg1 existingView:(id)arg2;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })_layoutSubviewsWithSize:(struct CGSize { double x1; double x2; })arg1 computationOnly:(bool)arg2;
- (void)_updateTextColor;
- (id)labels;
- (id)layout;
- (void)layoutSubviews;
- (void)setLabels:(id)arg1;
- (void)setLayout:(id)arg1;
- (void)setViewElement:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)viewElement;

@end