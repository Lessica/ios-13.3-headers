/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHAssetExportRequestOptions : NSObject {
    bool  _disableMetadataCorrections;
    bool  _dontAllowRAW;
    bool  _ensureSRGBCompatibleColorSpace;
    bool  _flattenSlomoVideos;
    bool  _forceDateTimeMetadataBaking;
    bool  _forceLocationMetadataBaking;
    bool  _includeAllAssetResources;
    long long  _locationComparisonStrategy;
    bool  _shouldStripLocation;
    bool  _treatLivePhotoAsStill;
    long long  _variant;
    NSString * _videoExportFileType;
    NSString * _videoExportPreset;
}

@property (nonatomic) bool disableMetadataCorrections;
@property (nonatomic) bool dontAllowRAW;
@property (nonatomic) bool ensureSRGBCompatibleColorSpace;
@property (nonatomic) bool flattenSlomoVideos;
@property (nonatomic) bool forceDateTimeMetadataBaking;
@property (nonatomic) bool forceLocationMetadataBaking;
@property (nonatomic) bool includeAllAssetResources;
@property (nonatomic) long long locationComparisonStrategy;
@property (nonatomic) bool shouldStripLocation;
@property (nonatomic) bool treatLivePhotoAsStill;
@property (nonatomic) long long variant;
@property (nonatomic, copy) NSString *videoExportFileType;
@property (nonatomic, copy) NSString *videoExportPreset;

- (void).cxx_destruct;
- (id)description;
- (bool)disableMetadataCorrections;
- (bool)dontAllowRAW;
- (bool)ensureSRGBCompatibleColorSpace;
- (bool)flattenSlomoVideos;
- (bool)forceDateTimeMetadataBaking;
- (bool)forceLocationMetadataBaking;
- (bool)includeAllAssetResources;
- (long long)locationComparisonStrategy;
- (void)setDisableMetadataCorrections:(bool)arg1;
- (void)setDontAllowRAW:(bool)arg1;
- (void)setEnsureSRGBCompatibleColorSpace:(bool)arg1;
- (void)setFlattenSlomoVideos:(bool)arg1;
- (void)setForceDateTimeMetadataBaking:(bool)arg1;
- (void)setForceLocationMetadataBaking:(bool)arg1;
- (void)setIncludeAllAssetResources:(bool)arg1;
- (void)setLocationComparisonStrategy:(long long)arg1;
- (void)setShouldStripLocation:(bool)arg1;
- (void)setTreatLivePhotoAsStill:(bool)arg1;
- (void)setVariant:(long long)arg1;
- (void)setVideoExportFileType:(id)arg1;
- (void)setVideoExportPreset:(id)arg1;
- (bool)shouldStripLocation;
- (bool)treatLivePhotoAsStill;
- (long long)variant;
- (id)videoExportFileType;
- (id)videoExportPreset;

@end