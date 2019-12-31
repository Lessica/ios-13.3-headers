/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

@interface CPSSecondaryManeuverView : CPSManeuverView {
    CPSAbridgableLabel * _instructionLabel;
    CPManeuver * _maneuver;
    UIImageView * _symbolView;
}

@property (nonatomic, retain) CPSAbridgableLabel *instructionLabel;
@property (nonatomic, retain) CPManeuver *maneuver;
@property (nonatomic, retain) UIImageView *symbolView;

- (void).cxx_destruct;
- (void)backgroundColorDidChange;
- (id)initWithManeuver:(id)arg1 style:(long long)arg2;
- (id)instructionLabel;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (id)maneuver;
- (void)setInstructionLabel:(id)arg1;
- (void)setManeuver:(id)arg1;
- (void)setSymbolView:(id)arg1;
- (id)symbolView;

@end