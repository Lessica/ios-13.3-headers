/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteManagement.framework/RemoteManagement
 */

@interface RMUnresolvedFileAsset : NSObject <RMUnresolvedAsset> {
    RMAsset * _asset;
    NSURL * _downloadToFileURL;
}

@property (nonatomic, retain) RMAsset *asset;
@property (nonatomic, retain) NSURL *downloadToFileURL;
@property (nonatomic, readonly, copy) NSString *identifier;

- (void).cxx_destruct;
- (id)asset;
- (id)downloadToFileURL;
- (id)identifier;
- (id)initWithAsset:(id)arg1 downloadToFileURL:(id)arg2;
- (void)resolveWithAssetResolver:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setAsset:(id)arg1;
- (void)setDownloadToFileURL:(id)arg1;

@end
