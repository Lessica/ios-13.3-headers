/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

@interface TLKRichTextField : TLKStackView <NUIContainerViewDelegate, TLKObservable, TLKObserver> {
    TLKIconsView * _iconView;
    TLKRichText * _richText;
    TLKRoundedCornerLabels * _roundedCornerLabels;
    TLKStarsView * _starRatingView;
    TLKLabel * _textLabel;
    bool  inBatchUpdate;
    <TLKObserver> * observer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIFont *font;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) TLKIconsView *iconView;
@property bool inBatchUpdate;
@property <TLKObserver> *observer;
@property (nonatomic) unsigned long long prominence;
@property (nonatomic, retain) TLKRichText *richText;
@property (nonatomic, retain) TLKRoundedCornerLabels *roundedCornerLabels;
@property (nonatomic, retain) TLKStarsView *starRatingView;
@property (readonly) Class superclass;
@property (nonatomic, retain) TLKLabel *textLabel;

- (void).cxx_destruct;
- (id)attributedString;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })containerView:(id)arg1 layoutFrameForArrangedSubview:(id)arg2 withProposedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)description;
- (id)font;
- (id)iconView;
- (bool)inBatchUpdate;
- (id)init;
- (id)observer;
- (unsigned long long)prominence;
- (void)propertiesDidChange;
- (id)richText;
- (id)roundedCornerLabels;
- (void)setFont:(id)arg1;
- (void)setIconView:(id)arg1;
- (void)setInBatchUpdate:(bool)arg1;
- (void)setObserver:(id)arg1;
- (void)setProminence:(unsigned long long)arg1;
- (void)setRichText:(id)arg1;
- (void)setRoundedCornerLabels:(id)arg1;
- (void)setStarRatingView:(id)arg1;
- (void)setTextLabel:(id)arg1;
- (id)starRatingView;
- (id)textLabel;
- (void)updateIcons:(id)arg1;
- (void)updateRoundedCornerLabels:(id)arg1;
- (void)updateStarRating:(id)arg1;
- (void)updateWithRichText:(id)arg1;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;

@end