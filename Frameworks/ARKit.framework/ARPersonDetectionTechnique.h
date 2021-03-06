/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARPersonDetectionTechnique : ARMLImageProcessingTechnique <ARTechniqueBusyState> {
    struct __CVPixelBufferPool { } * _depthPixelBufferPool;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageNetworkSize;
    double  _lastTimestamp;
    ARPersonDetectionData * _latestResult;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isBusy;
@property (retain) ARPersonDetectionData *latestResult;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_endLoadingMLModelSignpost;
- (void)_endMLCreateResultSignpostWithTimestamp:(double)arg1;
- (void)_endMLProcessingSignpostWithTimestamp:(double)arg1;
- (void)_endMLRunNetworkSignpostWithTimestamp:(double)arg1;
- (void)_startLoadingMLModelSignpost;
- (void)_startMLCreateResultSignpostWithTimestamp:(double)arg1 orientation:(long long)arg2 outputSize:(struct CGSize { double x1; double x2; })arg3;
- (void)_startMLProcessingSignpostWithTimestamp:(double)arg1;
- (void)_startMLRunNetworkSignpostWithTimestamp:(double)arg1;
- (void)changeEspressoConfig:(id)arg1;
- (id)createResultDataFromTensors:(struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; }*)arg1 numberOfOutputTensors:(unsigned long long)arg2 imageDataForNeuralNetwork:(id)arg3 inputImageData:(id)arg4 rotationNeeded:(long long)arg5 regionOfInterest:(struct CGSize { double x1; double x2; })arg6;
- (void)dealloc;
- (id)init;
- (bool)isLoadedModelVersionCorrect:(id)arg1;
- (id)latestResult;
- (double)requiredTimeInterval;
- (id)resultDataClasses;
- (void)setLatestResult:(id)arg1;
- (float)sigmoid:(float)arg1;

@end
