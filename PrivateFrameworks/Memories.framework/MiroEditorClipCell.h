/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroEditorClipCell : UICollectionViewCell {
    UIView * _audioButtonContainerView;
    UILabel * _audioButtonLabel;
    NSLayoutConstraint * _bottomBarBottomSpaceConstraint;
    UIView * _circularPlayButton;
    PMClipProvider * _clipProvider;
    MiroEditorClipDebugView * _debugInfoView;
    UILabel * _debugLabel;
    <MiroEditorClipCellDelegate> * _delegate;
    PXUIAssetBadgeView * _photoIrisBadgeView;
    AVPlayer * _player;
    AVPlayerItem * _playerItem;
    AVPlayerLayer * _playerLayer;
    UIImage * _thumbnail;
    NSLayoutConstraint * _thumbnailAspectConstraint;
    UIImageView * _thumbnailView;
    UIView * _treatmentButtonContainerView;
    NSLayoutConstraint * _treatmentButtonTopConstraint;
}

@property (nonatomic) UIView *audioButtonContainerView;
@property (nonatomic) UILabel *audioButtonLabel;
@property (nonatomic, retain) NSLayoutConstraint *bottomBarBottomSpaceConstraint;
@property (nonatomic, retain) UIView *circularPlayButton;
@property (nonatomic, retain) PMClipProvider *clipProvider;
@property (nonatomic) MiroEditorClipDebugView *debugInfoView;
@property (nonatomic) UILabel *debugLabel;
@property (nonatomic) <MiroEditorClipCellDelegate> *delegate;
@property (nonatomic, readonly) bool isPlaying;
@property (nonatomic, retain) PXUIAssetBadgeView *photoIrisBadgeView;
@property (nonatomic, retain) AVPlayer *player;
@property (nonatomic, retain) AVPlayerItem *playerItem;
@property (nonatomic, retain) AVPlayerLayer *playerLayer;
@property (nonatomic, retain) UIImage *thumbnail;
@property (nonatomic, retain) NSLayoutConstraint *thumbnailAspectConstraint;
@property (nonatomic) UIImageView *thumbnailView;
@property (nonatomic) UIView *treatmentButtonContainerView;
@property (nonatomic, retain) NSLayoutConstraint *treatmentButtonTopConstraint;

- (void).cxx_destruct;
- (void)_addHighlightRectsToThumbnail;
- (void)_addPOIInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_applicationWillResignActive:(id)arg1;
- (void)_didPlayToEnd:(id)arg1;
- (void)_disableAudioTracks;
- (id)_faceRectsInViewSpace;
- (void)_hidePlayer;
- (void)_highlightFacesForRects:(id)arg1;
- (void)_highlightPOI;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_poiRectInViewSpace;
- (bool)_removePOIsInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)_setupCircularPlayButton;
- (void)_updateAudioButton;
- (void)_updateAudioVolume;
- (void)_updateDebugInfoView;
- (void)_updatePlayButton;
- (void)_updateThumbnailAspectIfNecessary;
- (void)_updateTreatmentButton;
- (void)assetBadgeView:(id)arg1 userDidSelectBadges:(unsigned long long)arg2;
- (id)audioButtonContainerView;
- (id)audioButtonLabel;
- (void)audioButtonTouchUpInside:(id)arg1;
- (void)awakeFromNib;
- (id)bottomBarBottomSpaceConstraint;
- (id)circularPlayButton;
- (bool)circularPlayButtonIsHidden;
- (id)clipProvider;
- (void)dealloc;
- (id)debugInfoView;
- (id)debugLabel;
- (id)delegate;
- (id)description;
- (void)handleTapAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isPlaying;
- (void)layoutSubviews;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)pause:(id)arg1;
- (id)photoIrisBadgeView;
- (void)play:(id)arg1;
- (void)playButtonTouchUpInside:(id)arg1;
- (void)playPause:(id)arg1;
- (id)player;
- (id)playerItem;
- (id)playerLayer;
- (void)prepareForReuse;
- (void)setAudioButtonContainerView:(id)arg1;
- (void)setAudioButtonLabel:(id)arg1;
- (void)setBottomBarBottomSpaceConstraint:(id)arg1;
- (void)setCircularPlayButton:(id)arg1;
- (void)setClipProvider:(id)arg1;
- (void)setDebugInfoView:(id)arg1;
- (void)setDebugLabel:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPhotoIrisBadgeView:(id)arg1;
- (void)setPlayer:(id)arg1;
- (void)setPlayerItem:(id)arg1;
- (void)setPlayerLayer:(id)arg1;
- (void)setThumbnail:(id)arg1;
- (void)setThumbnailAspectConstraint:(id)arg1;
- (void)setThumbnailView:(id)arg1;
- (void)setTreatmentButtonContainerView:(id)arg1;
- (void)setTreatmentButtonTopConstraint:(id)arg1;
- (void)showPlayerWithCompletionHandler:(id /* block */)arg1;
- (void)stopPlayback:(id)arg1;
- (id)thumbnail;
- (id)thumbnailAspectConstraint;
- (id)thumbnailView;
- (id)treatmentButtonContainerView;
- (id)treatmentButtonTopConstraint;
- (void)treatmentButtonTouchUpInside:(id)arg1;
- (void)updateControlVisibility;

@end
