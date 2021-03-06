/* Generated by RuntimeBrowser.
 */

@protocol SBScaleIconZoomAnimationContaining <SBIconZoomAnimationContaining>

@required

- (UIView *)borrowScalingView;
- (void)returnScalingView;

@optional

- (UIView *)matchMoveSourceViewForIconView:(SBIconView *)arg1;
- (void)prepareForAnimation:(SBScaleIconZoomAnimator *)arg1 withTargetIcon:(SBIcon *)arg2;
- (SBSearchGesture *)searchGesture;
- (void)setContentAlpha:(double)arg1;
- (UIView *)targetIconContainerView;

@end
