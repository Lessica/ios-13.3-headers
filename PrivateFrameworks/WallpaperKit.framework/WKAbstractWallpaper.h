/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WallpaperKit.framework/WallpaperKit
 */

@interface WKAbstractWallpaper : NSObject <WKWallpaper> {
    unsigned long long  _identifier;
    NSString * _name;
    unsigned long long  _type;
}

@property (nonatomic, readonly) unsigned long long identifier;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic) unsigned long long type;

+ (id)new;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)identifier;
- (id)init;
- (id)initWithIdentifier:(unsigned long long)arg1 name:(id)arg2;
- (id)name;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)type;

@end
