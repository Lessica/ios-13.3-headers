/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCAssetHandle : NSObject <TSAssetDataProviderType, TSAssetHandleType> {
    NSString * _assetKey;
    NTPBAsset * _assetMetadata;
    unsigned long long  _countOfPenalizedDownloadAttempts;
    <FCAssetDataProvider> * _dataProvider;
    NSDate * _dateOfLastDownloadAttempt;
    <FCAssetHandleDelegate> * _delegate;
    NSError * _downloadError;
    NSHashTable * _downloadRequests;
    NSObject<OS_dispatch_group> * _fetchGroup;
    FCOperation * _fetchOperation;
    FCInterestToken * _holdToken;
    long long  _lifetimeHint;
    NSString * _rawFilePath;
    NSURL * _remoteURL;
    NFUnfairLock * _stateLock;
}

@property (nonatomic, readonly) <TSAssetDataProviderType> *assetDataProvider;
@property (nonatomic, copy) NSString *assetKey;
@property (retain) NTPBAsset *assetMetadata;
@property unsigned long long countOfPenalizedDownloadAttempts;
@property (nonatomic, readonly) NSData *data;
@property (retain) <FCAssetDataProvider> *dataProvider;
@property (retain) NSDate *dateOfLastDownloadAttempt;
@property (nonatomic) <FCAssetHandleDelegate> *delegate;
@property (retain) NSError *downloadError;
@property (nonatomic, retain) NSHashTable *downloadRequests;
@property (nonatomic, readonly) UIImage *fallbackImage;
@property (nonatomic, retain) NSObject<OS_dispatch_group> *fetchGroup;
@property (nonatomic, retain) FCOperation *fetchOperation;
@property (readonly, copy) NSString *filePath;
@property (nonatomic, retain) FCInterestToken *holdToken;
@property (nonatomic, readonly) bool isRawFileConsumable;
@property (nonatomic) long long lifetimeHint;
@property (copy) NSString *rawFilePath;
@property (nonatomic, retain) NSURL *remoteURL;
@property (nonatomic, retain) NFUnfairLock *stateLock;
@property (nonatomic, readonly, copy) NSString *uniqueKey;

// Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore

- (void).cxx_destruct;
- (bool)_canRetryDownload;
- (void)_completeFetchWithDataProvider:(id)arg1 error:(id)arg2;
- (id)_downloadIfNeededWithPriority:(long long)arg1 completionQueue:(id)arg2 completion:(id /* block */)arg3;
- (void)_removeDownloadRequest:(id)arg1;
- (void)_revisitDownloadRequestPriorities;
- (id)assetKey;
- (id)assetMetadata;
- (unsigned long long)countOfPenalizedDownloadAttempts;
- (id)dataProvider;
- (id)dateOfLastDownloadAttempt;
- (void)dealloc;
- (id)delegate;
- (id)downloadError;
- (id)downloadIfNeededWithCompletion:(id /* block */)arg1;
- (id)downloadIfNeededWithCompletionQueue:(id)arg1 completion:(id /* block */)arg2;
- (id)downloadIfNeededWithGroup:(id)arg1;
- (id)downloadIfNeededWithPriority:(long long)arg1 completion:(id /* block */)arg2;
- (id)downloadRequests;
- (id)fetchDataProviderWithCompletion:(id /* block */)arg1;
- (id)fetchDataProviderWithPriority:(long long)arg1 completion:(id /* block */)arg2;
- (id)fetchGroup;
- (id)fetchOperation;
- (id)filePath;
- (id)holdToken;
- (id)initWithDataProvider:(id)arg1;
- (long long)lifetimeHint;
- (id)rawFilePath;
- (id)remoteURL;
- (void)setAssetKey:(id)arg1;
- (void)setAssetMetadata:(id)arg1;
- (void)setCountOfPenalizedDownloadAttempts:(unsigned long long)arg1;
- (void)setDataProvider:(id)arg1;
- (void)setDateOfLastDownloadAttempt:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDownloadError:(id)arg1;
- (void)setDownloadRequests:(id)arg1;
- (void)setFetchGroup:(id)arg1;
- (void)setFetchOperation:(id)arg1;
- (void)setHoldToken:(id)arg1;
- (void)setLifetimeHint:(long long)arg1;
- (void)setRawFilePath:(id)arg1;
- (void)setRemoteURL:(id)arg1;
- (void)setStateLock:(id)arg1;
- (id)stateLock;
- (id)uniqueKey;

// Image: /System/Library/PrivateFrameworks/NewsFeed.framework/NewsFeed

- (id)assetDataProvider;
- (id)data;
- (void)downloadWithGroup:(id)arg1;
- (id)fallbackImage;
- (bool)isRawFileConsumable;

// Image: /System/Library/PrivateFrameworks/NewsSubscription.framework/NewsSubscription

- (id)assetDataProvider;
- (id)data;
- (void)downloadWithGroup:(id)arg1;
- (id)fallbackImage;
- (bool)isRawFileConsumable;

@end