/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKRingView : NTKColoringView {
    double  _fillFraction;
    <CLKMonochromeFilterProvider> * _filterProvider;
    double  _radius;
    double  _ringWidth;
}

@property (nonatomic) double fillFraction;
@property (nonatomic) <CLKMonochromeFilterProvider> *filterProvider;
@property (nonatomic, readonly) double radius;
@property (nonatomic, readonly) double ringWidth;

- (void).cxx_destruct;
- (void)_drawBackgroundRings;
- (void)_drawRingWithRadius:(double)arg1 fillFraction:(double)arg2 alpha:(double)arg3;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)fillFraction;
- (id)filterProvider;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 radius:(double)arg2 ringWidth:(double)arg3;
- (double)radius;
- (double)ringWidth;
- (void)setFillFraction:(double)arg1;
- (void)setFilterProvider:(id)arg1;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)updateMonochromeColor;

@end