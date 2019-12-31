/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUTrimToolController : UIViewController <PLSlalomRegionEditorDelegate, PULivePhotoKeyFrameSelectionViewControllerDelegate, PXLivePhotoTrimScrubberDelegate, PXTrimToolPlayerObserver, UIPopoverPresentationControllerDelegate> {
    PLPhotoEditRenderer * __renderer;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _cachedFrameDuration;
    PICompositionController * _compositionController;
    AVPlayerItem * _currentVideoPlayerItem;
    UIView * _debugEndOffsetView;
    UIView * _debugEndRectView;
    UILabel * _debugOriginalTimeLabel;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _debugPlayerTime;
    UILabel * _debugPlayerTimeLabel;
    UIView * _debugStartOffsetView;
    UIView * _debugStartRectView;
    UILabel * _debugTimeCodeLabel;
    UILabel * _debugTrimToolPlayheadStyleLabel;
    UILabel * _debugTrimToolStateLabel;
    <PUTrimToolControllerDelegate> * _delegate;
    bool  _disabled;
    PLEditSource * _editSource;
    unsigned long long  _internalState;
    PULivePhotoKeyFrameSelectionViewController * _livePhotoKeyFramePicker;
    bool  _needsUpdateRenderForVisualChanges;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _originalEndTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _originalStartTime;
    PLEditSource * _overcaptureEditSource;
    bool  _playButtonEnabled;
    UIButton * _playPauseButton;
    <PXTrimToolPlayerWrapper> * _playerWrapper;
    unsigned long long  _playheadStyle;
    bool  _slomoDraggingStartHandle;
    bool  _slomoEnabled;
    NSNumber * _slomoTimeForPlayheadUpdate;
    PLSlalomRegionEditor * _slomoView;
    PXLivePhotoTrimScrubberSnapStripController * _snapStripController;
    PXLivePhotoTrimScrubberSpec * _spec;
    unsigned long long  _state;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _suggestedKeyFrameTime;
    NSLayoutConstraint * _timeCodeHorizontalConstraint;
    PUTimeCodeOverlayView * _timeCodeOverlayView;
    PXLivePhotoTrimScrubber * _trimScrubber;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _unadjustedAssetDuration;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _unadjustedStillImageTime;
}

@property (setter=_setRenderer:, nonatomic, retain) PLPhotoEditRenderer *_renderer;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } adjustedStillFrameTime;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } cachedFrameDuration;
@property (nonatomic, retain) PICompositionController *compositionController;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } currentStillFrameTime;
@property (nonatomic, retain) AVPlayerItem *currentVideoPlayerItem;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) UIView *debugEndOffsetView;
@property (nonatomic, retain) UIView *debugEndRectView;
@property (nonatomic, retain) UILabel *debugOriginalTimeLabel;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } debugPlayerTime;
@property (nonatomic, retain) UILabel *debugPlayerTimeLabel;
@property (nonatomic, retain) UIView *debugStartOffsetView;
@property (nonatomic, retain) UIView *debugStartRectView;
@property (nonatomic, retain) UILabel *debugTimeCodeLabel;
@property (nonatomic, retain) UILabel *debugTrimToolPlayheadStyleLabel;
@property (nonatomic, retain) UILabel *debugTrimToolStateLabel;
@property (nonatomic) <PUTrimToolControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disabled;
@property (nonatomic, retain) PLEditSource *editSource;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long internalState;
@property (nonatomic) PULivePhotoKeyFrameSelectionViewController *livePhotoKeyFramePicker;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } originalEndTime;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } originalStartTime;
@property (nonatomic, retain) PLEditSource *overcaptureEditSource;
@property (nonatomic, retain) UIImage *placeholderImage;
@property (nonatomic, readonly) bool playButtonEnabled;
@property (nonatomic, readonly) UIButton *playPauseButton;
@property (nonatomic, readonly) <PXTrimToolPlayerWrapper> *playerWrapper;
@property (nonatomic) unsigned long long playheadStyle;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } playheadTime;
@property (nonatomic, readonly) double scrubberHeight;
@property (nonatomic) bool slomoDraggingStartHandle;
@property (getter=isSlomoEnabled, nonatomic, readonly) bool slomoEnabled;
@property (nonatomic, retain) NSNumber *slomoTimeForPlayheadUpdate;
@property (nonatomic, retain) PXLivePhotoTrimScrubberSnapStripController *snapStripController;
@property (nonatomic, readonly) unsigned long long state;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } suggestedKeyFrameTime;
@property (readonly) Class superclass;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } unadjustedAssetDuration;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } unadjustedStillImageTime;

- (void).cxx_destruct;
- (bool)_allowsKeyFrameCreation;
- (void)_createRendererIfNeeded;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_currentPlayerScaledTimeFromOriginalTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)_currentVideoAsset;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_frameDuration;
- (void)_handlePlayPauseButton:(id)arg1;
- (void)_livePhotoKeyFramePickerDidDismiss:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })_originalTimeFromCurrentPlayerScaledTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)_playPauseButtonIfLoaded;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_presentationRectFromLoupeRect;
- (id)_renderer;
- (void)_resetScrubberToStillPhotoFrame;
- (void)_seekToTimeForElement:(long long)arg1 exact:(bool)arg2;
- (void)_setRenderer:(id)arg1;
- (void)_setState:(unsigned long long)arg1;
- (void)_showKeyFrameSelection;
- (id)_slomoMapperForCurrentConfiguration;
- (void)_updateCompositionController;
- (void)_updateDebugPlayerTimeLabel;
- (void)_updateDebugPlayheadStyleLabel;
- (void)_updateDebugTimeCodeLabel;
- (void)_updateDebugTrimToolStateLabel;
- (void)_updatePlayPauseButton;
- (void)_updatePlayerItem;
- (void)_updatePlayerWrapperTimeObserver;
- (void)_updatePlayerWrapperTrim;
- (void)_updatePlayheadStyle;
- (void)_updatePublicState;
- (void)_updateScrubberContents;
- (void)_updateScrubberPresentedPlayhead:(bool)arg1;
- (void)_updateScrubberTimes;
- (void)_updateSnappingDots;
- (void)_updateTimeCodeOverlay;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })adjustedStillFrameTime;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })cachedFrameDuration;
- (id)compositionController;
- (void)compositonDidUpdateForPlayerWrapper:(id)arg1;
- (id)currentEditSource;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })currentStillFrameTime;
- (id)currentVideoPlayerItem;
- (id)debugEndOffsetView;
- (id)debugEndRectView;
- (id)debugOriginalTimeLabel;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })debugPlayerTime;
- (id)debugPlayerTimeLabel;
- (id)debugStartOffsetView;
- (id)debugStartRectView;
- (id)debugTimeCodeLabel;
- (id)debugTrimToolPlayheadStyleLabel;
- (id)debugTrimToolStateLabel;
- (id)delegate;
- (bool)disabled;
- (id)editSource;
- (id)initWithPlayerWrapper:(id)arg1;
- (id)initWithPlayerWrapper:(id)arg1 playButtonEnabled:(bool)arg2 slomoEnabled:(bool)arg3;
- (unsigned long long)internalState;
- (bool)isSlomoEnabled;
- (id)livePhotoKeyFramePicker;
- (void)livePhotoRenderDidChange:(bool)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })originalEndTime;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })originalStartTime;
- (id)overcaptureEditSource;
- (void)pause;
- (id)placeholderImage;
- (void)play;
- (bool)playButtonEnabled;
- (id)playPauseButton;
- (void)playerStatusChangedForPlayerWrapper:(id)arg1;
- (id)playerWrapper;
- (void)playerWrapper:(id)arg1 timeChanged:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (unsigned long long)playheadStyle;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })playheadTime;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (bool)popoverPresentationControllerShouldDismissPopover:(id)arg1;
- (void)releaseAVObjects;
- (double)scrubberHeight;
- (void)setAdjustedStillFrameTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setCachedFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setCompositionController:(id)arg1;
- (void)setCurrentVideoPlayerItem:(id)arg1;
- (void)setDebugEndOffsetView:(id)arg1;
- (void)setDebugEndRectView:(id)arg1;
- (void)setDebugOriginalTimeLabel:(id)arg1;
- (void)setDebugPlayerTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setDebugPlayerTimeLabel:(id)arg1;
- (void)setDebugStartOffsetView:(id)arg1;
- (void)setDebugStartRectView:(id)arg1;
- (void)setDebugTimeCodeLabel:(id)arg1;
- (void)setDebugTrimToolPlayheadStyleLabel:(id)arg1;
- (void)setDebugTrimToolStateLabel:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDisabled:(bool)arg1;
- (void)setEditSource:(id)arg1;
- (void)setEditSource:(id)arg1 overcaptureEditSource:(id)arg2;
- (void)setInternalState:(unsigned long long)arg1;
- (void)setLivePhotoKeyFramePicker:(id)arg1;
- (void)setOriginalEndTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setOriginalStartTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setOvercaptureEditSource:(id)arg1;
- (void)setPlaceholderImage:(id)arg1;
- (void)setPlayheadStyle:(unsigned long long)arg1;
- (void)setPlayheadTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setSlomoDraggingStartHandle:(bool)arg1;
- (void)setSlomoTimeForPlayheadUpdate:(id)arg1;
- (void)setSnapStripController:(id)arg1;
- (void)setSuggestedKeyFrameTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setUnadjustedAssetDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setUnadjustedStillImageTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)slalomRegionEditorDidBeginEditing:(id)arg1 withStartHandle:(bool)arg2;
- (void)slalomRegionEditorDidEndEditing:(id)arg1;
- (void)slalomRegionEditorEndValueChanged:(id)arg1;
- (void)slalomRegionEditorRequestForceUnzoom:(id)arg1;
- (bool)slalomRegionEditorRequestForceZoom:(id)arg1;
- (void)slalomRegionEditorStartValueChanged:(id)arg1;
- (bool)slomoDraggingStartHandle;
- (id)slomoTimeForPlayheadUpdate;
- (id)snapStripController;
- (unsigned long long)state;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })suggestedKeyFrameTime;
- (void)traitCollectionDidChange:(id)arg1;
- (bool)trimScrubber:(id)arg1 canBeginInteractivelyEditingElement:(long long)arg2;
- (void)trimScrubber:(id)arg1 debugEndOffset:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)trimScrubber:(id)arg1 debugEndRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)trimScrubber:(id)arg1 debugStartOffset:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)trimScrubber:(id)arg1 debugStartRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)trimScrubber:(id)arg1 didBeginInteractivelyEditingElement:(long long)arg2;
- (void)trimScrubber:(id)arg1 didChangeLoupeRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)trimScrubber:(id)arg1 didChangeTimeForElement:(long long)arg2;
- (void)trimScrubber:(id)arg1 didEndInteractivelyEditingElement:(long long)arg2 successful:(bool)arg3;
- (void)trimScrubber:(id)arg1 didTapElement:(long long)arg2;
- (void)trimScrubber:(id)arg1 didZoomToMinimumValue:(double)arg2 maximumValue:(double)arg3;
- (void)trimScrubberAssetDurationDidChange:(id)arg1;
- (void)trimScrubberDidLayoutSubviews:(id)arg1;
- (void)trimScrubberDidUnzoom:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })unadjustedAssetDuration;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })unadjustedStillImageTime;
- (void)userDidRequestToMakeKeyPhoto:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end