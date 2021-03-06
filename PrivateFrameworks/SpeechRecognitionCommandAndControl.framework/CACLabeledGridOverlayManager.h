/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
 */

@interface CACLabeledGridOverlayManager : CACSimpleContentViewManager {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _currentGridPortraitUpFrame;
    long long  _currentLevel;
    long long  _currentNumberOfColumns;
    long long  _currentNumberOfRows;
    <CACLabeledGridOverlayManagerDelegate> * _delegate;
    NSMutableArray * _labeledElements;
    bool  _needsToBeRedrawn;
}

@property long long currentLevel;
@property long long currentNumberOfColumns;
@property long long currentNumberOfRows;
@property (nonatomic) <CACLabeledGridOverlayManagerDelegate> *delegate;
@property (retain) NSArray *labeledElements;
@property (nonatomic) bool needsToBeRedrawn;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } portraitUpCenterPoint;

+ (unsigned long long)maxNumberOfColumnsForDevice;
+ (unsigned long long)maxNumberOfRowsForDevice;

- (void).cxx_destruct;
- (void)_generateLabeledElementsForPortraitUpRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)_isNextLevelAvailable;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bestDrilledGridRectForPortraitUpRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })bestGridResolutionForPortraitUpRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)currentLevel;
- (long long)currentNumberOfColumns;
- (long long)currentNumberOfRows;
- (id)delegate;
- (void)hideAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (bool)isOverlay;
- (id)labeledElements;
- (bool)needsToBeRedrawn;
- (struct CGPoint { double x1; double x2; })portraitUpCenterPoint;
- (void)resetAndDrawAtTopLevel;
- (void)resetIdleTimer;
- (void)setCurrentLevel:(long long)arg1;
- (void)setCurrentNumberOfColumns:(long long)arg1;
- (void)setCurrentNumberOfRows:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLabeledElements:(id)arg1;
- (void)setNeedsToBeRedrawn:(bool)arg1;
- (bool)shouldZoom;
- (void)showOverlay;
- (void)startDelayedDimmingOfNumbers;
- (void)stopDelayedDimmingOfNumbers;
- (bool)updateOverlayWithPortraitUpRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
