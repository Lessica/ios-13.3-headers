/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

@interface ARPresentationTarget : NSObject {
    <MTLTexture> * _colorTexture;
    <MTLTexture> * _depthTexture;
    long long  _eyeLocation;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _eyeTransform;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _projectionMatrix;
    MTLRenderPassDescriptor * _renderPassDescriptor;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _viewMatrix;
    struct { 
        double originX; 
        double originY; 
        double width; 
        double height; 
        double znear; 
        double zfar; 
    }  _viewport;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _warpCameraMatrix;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _warpCameraMatrixEnd;
    double  _warpCameraMatrixEndTimestamp;
    double  _warpCameraMatrixTimestamp;
}

@property (nonatomic, retain) <MTLTexture> *colorTexture;
@property (nonatomic, retain) <MTLTexture> *depthTexture;
@property (nonatomic, readonly) long long eyeLocation;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } eyeTransform;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } projectionMatrix;
@property (nonatomic, retain) MTLRenderPassDescriptor *renderPassDescriptor;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } viewMatrix;
@property (nonatomic) struct { double x1; double x2; double x3; double x4; double x5; double x6; } viewport;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } warpCameraMatrix;
@property (nonatomic) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } warpCameraMatrixEnd;
@property (nonatomic) double warpCameraMatrixEndTimestamp;
@property (nonatomic) double warpCameraMatrixTimestamp;

- (void).cxx_destruct;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })_forwardNewMatrix:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })_inverseOldMatrix:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })_warpMatrixFromOldToNew:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 oldEyeTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2;
- (id)colorTexture;
- (id)depthTexture;
- (id)description;
- (long long)eyeLocation;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })eyeTransform;
- (id)initWithEyeLocation:(long long)arg1 colorTexture:(id)arg2 depthTexture:(id)arg3;
- (void)positionalWarpTransforms:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 warpStart:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }*)arg2 warpEnd:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }*)arg3;
- (void)positionalWarpTransforms:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 warpStart:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }*)arg2 warpEnd:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }*)arg3 warpStartForward:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }*)arg4 warpStartInverse:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }*)arg5;
- (void)positionalWarpTransforms:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 warpStartInverse:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }*)arg2 warpEndInverse:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }*)arg3;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })projectionMatrix;
- (id)renderPassDescriptor;
- (void)rotationalWarpTransforms:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 warpStart:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }*)arg2 warpEnd:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }*)arg3;
- (void)setColorTexture:(id)arg1;
- (void)setDepthTexture:(id)arg1;
- (void)setEyeTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setProjectionMatrix:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setRenderPassDescriptor:(id)arg1;
- (void)setViewMatrix:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setViewport:(struct { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)setWarpCameraMatrix:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setWarpCameraMatrixEnd:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setWarpCameraMatrixEndTimestamp:(double)arg1;
- (void)setWarpCameraMatrixTimestamp:(double)arg1;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })viewMatrix;
- (struct { double x1; double x2; double x3; double x4; double x5; double x6; })viewport;
- (id)viewportDescription:(struct { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 debugName:(id)arg2;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })warpCameraMatrix;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })warpCameraMatrixEnd;
- (double)warpCameraMatrixEndTimestamp;
- (double)warpCameraMatrixTimestamp;

@end