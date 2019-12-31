/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLFileSystemImportAsset : NSObject {
    int  _assetKind;
    PLAssetJournalEntryPayload * _assetPayload;
    struct NSObject { Class x1; } * _destinationAlbum;
    NSString * _path;
    bool  _pathContainsDCIM;
    NSMutableSet * _urls;
}

@property (nonatomic) int assetKind;
@property (nonatomic, readonly) PLAssetJournalEntryPayload *assetPayload;
@property (nonatomic, retain) NSObject<PLAlbumProtocol> *destinationAlbum;
@property (nonatomic, readonly) NSSet *urls;

- (void).cxx_destruct;
- (void)addURL:(id)arg1;
- (void)addURLs:(id)arg1;
- (int)assetKind;
- (id)assetPayload;
- (long long)compare:(id)arg1;
- (id)description;
- (struct NSObject { Class x1; }*)destinationAlbum;
- (id)initWithAssetPayload:(id)arg1;
- (id)initWithDestinationAlbum:(struct NSObject { Class x1; }*)arg1 assetKind:(int)arg2;
- (bool)isCameraKit;
- (void)setAssetKind:(int)arg1;
- (void)setDestinationAlbum:(struct NSObject { Class x1; }*)arg1;
- (id)urls;

@end