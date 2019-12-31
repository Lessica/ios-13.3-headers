/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVInteractiveTransitionGestureTracker : NSObject <AVTransitionDriver, UIGestureRecognizerDelegate> {
    double  __rotation;
    struct CGPoint { 
        double x; 
        double y; 
    }  _anchorLocationInWindow;
    UIPanGestureRecognizer * _contentTransitioningViewGestureRecognizer;
    bool  _enabled;
    struct CGPoint { 
        double x; 
        double y; 
    }  _gestureLocationAfterBoundsChange;
    bool  _hasContinued;
    bool  _hasRotated;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _initialCoordinateSpaceBounds;
    long long  _initialInterfaceOrientation;
    bool  _lastNonZeroVelocityWasDownward;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastReportedLocationInWindow;
    UIPanGestureRecognizer * _panGestureRecognizer;
    bool  _panToDismissEnabled;
    UIPinchGestureRecognizer * _pinchGestureRecognizer;
    bool  _pinchToDismissEnabled;
    bool  _pinchToPresentEnabled;
    double  _previousPinchScale;
    NSArray * _recognizers;
    UIRotationGestureRecognizer * _rotationGestureRecognizer;
    double  _timestampOfTouchWithLocationChangeAfterBoundsChange;
    <AVTransitionDriverDelegate> * _transitionDriverDelegate;
    long long  _transitionInteraction;
    UIView * _view;
    bool  _waitingForBoundsChange;
    bool  _waitingForLocationChangeAfterBoundsChange;
    bool  _waitingForTransition;
}

@property (setter=_setRotation:, nonatomic) double _rotation;
@property (nonatomic) struct CGPoint { double x1; double x2; } anchorLocationInWindow;
@property (nonatomic) UIPanGestureRecognizer *contentTransitioningViewGestureRecognizer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic) struct CGPoint { double x1; double x2; } gestureLocationAfterBoundsChange;
@property (nonatomic) bool hasContinued;
@property (nonatomic) bool hasRotated;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } initialCoordinateSpaceBounds;
@property (nonatomic) long long initialInterfaceOrientation;
@property (nonatomic) bool lastNonZeroVelocityWasDownward;
@property (nonatomic) struct CGPoint { double x1; double x2; } lastReportedLocationInWindow;
@property (nonatomic, readonly) UIPanGestureRecognizer *panGestureRecognizer;
@property (getter=isPanToDismissEnabled, nonatomic) bool panToDismissEnabled;
@property (nonatomic, readonly) UIPinchGestureRecognizer *pinchGestureRecognizer;
@property (nonatomic, readonly) double pinchScale;
@property (getter=isPinchToDismissEnabled, nonatomic) bool pinchToDismissEnabled;
@property (getter=isPinchToPresentEnabled, nonatomic) bool pinchToPresentEnabled;
@property (nonatomic, readonly) double pinchVelocity;
@property (nonatomic) double previousPinchScale;
@property (nonatomic, readonly) NSArray *recognizers;
@property (nonatomic, readonly) double rotation;
@property (nonatomic, readonly) UIRotationGestureRecognizer *rotationGestureRecognizer;
@property (nonatomic, readonly) double rotationVelocity;
@property (readonly) Class superclass;
@property (nonatomic) double timestampOfTouchWithLocationChangeAfterBoundsChange;
@property (nonatomic) <AVTransitionDriverDelegate> *transitionDriverDelegate;
@property (nonatomic) long long transitionInteraction;
@property (nonatomic) UIView *view;
@property (getter=isWaitingForBoundsChange, nonatomic) bool waitingForBoundsChange;
@property (getter=isWaitingForLocationChangeAfterBoundsChange, nonatomic) bool waitingForLocationChangeAfterBoundsChange;
@property (getter=isWaitingForTransition, nonatomic) bool waitingForTransition;

- (void).cxx_destruct;
- (void)_beginTracking:(long long)arg1;
- (void)_cancel;
- (struct CGPoint { double x1; double x2; })_filteredUntranslatedLocationInWindow;
- (void)_finish;
- (void)_handlePanGesture:(id)arg1;
- (void)_handlePinchGesture:(id)arg1;
- (void)_handleRotationGesture:(id)arg1;
- (bool)_isWaitingToContinue;
- (id)_locationRecognizer;
- (void)_reset;
- (void)_resetGesturesIfPossible;
- (double)_rotation;
- (void)_setHasContinuedIfNeeded;
- (void)_setRotation:(double)arg1;
- (struct CGPoint { double x1; double x2; })_untranslatedUnfilteredLocationInFixedCoordinateSpace;
- (void)_updateLastNonZeroVelocityDirection;
- (void)addRecognizersToView:(id)arg1;
- (struct CGPoint { double x1; double x2; })anchorLocationInWindow;
- (double)angleOfVelocityInWindow;
- (id)contentTransitioningViewGestureRecognizer;
- (void)dealloc;
- (void)didMoveToView:(id)arg1;
- (struct CGPoint { double x1; double x2; })gestureLocationAfterBoundsChange;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (bool)hasContinued;
- (bool)hasRotated;
- (id)init;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })initialCoordinateSpaceBounds;
- (long long)initialInterfaceOrientation;
- (bool)isEnabled;
- (bool)isPanToDismissEnabled;
- (bool)isPinchToDismissEnabled;
- (bool)isPinchToPresentEnabled;
- (bool)isTracking;
- (bool)isWaitingForBoundsChange;
- (bool)isWaitingForLocationChangeAfterBoundsChange;
- (bool)isWaitingForTransition;
- (bool)lastNonZeroVelocityWasDownward;
- (struct CGPoint { double x1; double x2; })lastReportedLocationInWindow;
- (struct CGPoint { double x1; double x2; })locationInWindow;
- (id)panGestureRecognizer;
- (id)pinchGestureRecognizer;
- (double)pinchScale;
- (double)pinchVelocity;
- (double)previousPinchScale;
- (id)recognizers;
- (double)rotation;
- (id)rotationGestureRecognizer;
- (double)rotationVelocity;
- (void)setAnchorLocationInWindow:(struct CGPoint { double x1; double x2; })arg1;
- (void)setContentTransitioningViewGestureRecognizer:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setGestureLocationAfterBoundsChange:(struct CGPoint { double x1; double x2; })arg1;
- (void)setHasContinued:(bool)arg1;
- (void)setHasRotated:(bool)arg1;
- (void)setInitialCoordinateSpaceBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setInitialInterfaceOrientation:(long long)arg1;
- (void)setLastNonZeroVelocityWasDownward:(bool)arg1;
- (void)setLastReportedLocationInWindow:(struct CGPoint { double x1; double x2; })arg1;
- (void)setPanToDismissEnabled:(bool)arg1;
- (void)setPinchToDismissEnabled:(bool)arg1;
- (void)setPinchToPresentEnabled:(bool)arg1;
- (void)setPreviousPinchScale:(double)arg1;
- (void)setTimestampOfTouchWithLocationChangeAfterBoundsChange:(double)arg1;
- (void)setTransitionDriverDelegate:(id)arg1;
- (void)setTransitionInteraction:(long long)arg1;
- (void)setView:(id)arg1;
- (void)setWaitingForBoundsChange:(bool)arg1;
- (void)setWaitingForLocationChangeAfterBoundsChange:(bool)arg1;
- (void)setWaitingForTransition:(bool)arg1;
- (double)timestampOfTouchWithLocationChangeAfterBoundsChange;
- (bool)transitionDriver:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (id)transitionDriverDelegate;
- (long long)transitionInteraction;
- (struct CGPoint { double x1; double x2; })translationInWindow;
- (struct CGPoint { double x1; double x2; })velocityInWindow;
- (id)view;
- (void)willMoveToView:(id)arg1;

@end