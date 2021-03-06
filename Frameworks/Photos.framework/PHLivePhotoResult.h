/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Photos.framework/Photos
 */

@interface PHLivePhotoResult : PHCompositeMediaResult {
    PHCompositeMediaResult * _imageResult;
    PHCompositeMediaResult * _videoResult;
}

- (void).cxx_destruct;
- (void)_mergeInfoDictionaryFromResult:(id)arg1;
- (void)addImageResult:(id)arg1;
- (void)addVideoResult:(id)arg1;
- (unsigned int)cgOrientation;
- (bool)containsValidData;
- (id)exifOrientation;
- (id)imageData;
- (struct CGImage { }*)imageRef;
- (id)imageURL;
- (id)imageUTI;
- (long long)uiOrientation;
- (id)videoAdjustmentData;
- (id)videoURL;

@end
