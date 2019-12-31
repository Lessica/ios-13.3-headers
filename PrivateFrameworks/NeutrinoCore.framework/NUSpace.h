/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUSpace : NSObject {
    struct NSArray { Class x1; } * _transformStack;
}

@property (retain) NSArray *transformStack;

- (void).cxx_destruct;
- (void)appendTransform:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithTransformStack:(struct NSArray { Class x1; }*)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSpace:(id)arg1;
- (void)setTransformStack:(struct NSArray { Class x1; }*)arg1;
- (struct CGPoint { double x1; double x2; })transformPoint:(struct CGPoint { double x1; double x2; })arg1 toSpace:(id)arg2;
- (struct CGPoint { double x1; double x2; })transformPointBackward:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })transformPointForward:(struct CGPoint { double x1; double x2; })arg1;
- (struct NSArray { Class x1; }*)transformStack;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })transformTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })transformTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 toSpace:(id)arg2;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })transformTimeBackward:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;

@end