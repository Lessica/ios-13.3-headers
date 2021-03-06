/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ARDisplayDevice.framework/ARDisplayDevice
 */

@interface ARDisplayPointOfView : NSObject <NSCopying, NSSecureCoding> {
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _eyeToCyclops;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _eyeToVIO;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _eyeTransform;
    struct { 
        double left; 
        double right; 
        double top; 
        double bottom; 
    }  _fieldOfView;
    NSData * _indexBufferData;
    long long  _indexCount;
    long long  _indexFormat;
    unsigned long long  _indexType;
    NSData * _vertexBufferData;
    long long  _vertexType;
    struct { 
        double x; 
        double y; 
        double width; 
        double height; 
    }  _view;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _viewArea;
    long long  _viewOrigin;
    struct { 
        double originX; 
        double originY; 
        double width; 
        double height; 
        double znear; 
        double zfar; 
    }  _viewport;
}

@property struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } eyeToCyclops;
@property struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } eyeToVIO;
@property struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } eyeTransform;
@property struct { double x1; double x2; double x3; double x4; } fieldOfView;
@property (readonly) double fovBottom;
@property (readonly) double fovLeft;
@property (readonly) double fovRight;
@property (readonly) double fovTop;
@property (nonatomic, retain) NSData *indexBufferData;
@property long long indexCount;
@property long long indexFormat;
@property unsigned long long indexType;
@property (nonatomic, retain) NSData *vertexBufferData;
@property long long vertexType;
@property (nonatomic) struct { double x1; double x2; double x3; double x4; } view;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } viewArea;
@property long long viewOrigin;
@property struct { double x1; double x2; double x3; double x4; double x5; double x6; } viewport;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)cropViewport:(double)arg1 screenWidth:(double)arg2 screenHeight:(double)arg3 cropXLeft:(double)arg4 cropRight:(double)arg5 cropTop:(double)arg6 cropBottom:(double)arg7;
- (id)description;
- (id)descriptionInternal;
- (void)doInit;
- (void)encodeWithCoder:(id)arg1;
- (void)expandViewports:(double)arg1 fullScreenWidth:(double)arg2 fullScreenHeight:(double)arg3 width:(double)arg4 height:(double)arg5 screenWidth:(double)arg6 screenHeight:(double)arg7;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })eyeToCyclops;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })eyeToVIO;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })eyeTransform;
- (struct { double x1; double x2; double x3; double x4; })fieldOfView;
- (double)fovBottom;
- (double)fovLeft;
- (double)fovRight;
- (double)fovTop;
- (id)indexBufferData;
- (long long)indexCount;
- (long long)indexFormat;
- (unsigned long long)indexType;
- (id)indexTypeString;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)mapToDeviceCoordinates:(double)arg1 fullScreenWidth:(double)arg2 fullScreenHeight:(double)arg3 screenWidth:(double)arg4 screenHeight:(double)arg5 cropX:(double)arg6 cropY:(double)arg7;
- (void)optimizeMeshComplexity;
- (void)optimizeMeshViewports;
- (void)optimizeStencil;
- (void)optimizeVertexSize;
- (void)setEyeToCyclops:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setEyeToVIO:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setEyeTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)setFieldOfView:(struct { double x1; double x2; double x3; double x4; })arg1;
- (void)setIndexBufferData:(id)arg1;
- (void)setIndexCount:(long long)arg1;
- (void)setIndexFormat:(long long)arg1;
- (void)setIndexType:(unsigned long long)arg1;
- (void)setVertexBufferData:(id)arg1;
- (void)setVertexType:(long long)arg1;
- (void)setView:(struct { double x1; double x2; double x3; double x4; })arg1;
- (void)setViewArea:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setViewOrigin:(long long)arg1;
- (void)setViewport:(struct { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (void)shrinkViewport;
- (id)vertexBufferData;
- (long long)vertexType;
- (id)vertexTypeToString:(long long)arg1;
- (struct { double x1; double x2; double x3; double x4; })view;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })viewArea;
- (long long)viewOrigin;
- (id)viewOriginString;
- (struct { double x1; double x2; double x3; double x4; double x5; double x6; })viewport;

@end
