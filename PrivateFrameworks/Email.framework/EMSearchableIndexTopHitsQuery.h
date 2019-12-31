/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Email.framework/Email
 */

@interface EMSearchableIndexTopHitsQuery : NSObject <EFCancelable, EFLoggable, NSProgressReporting> {
    NSArray * _filterQueries;
    NSMutableArray * _foundItems;
    NSProgress * _internalProgress;
    NSString * _keyboardLanguage;
    unsigned long long  _limit;
    NSLock * _lock;
    NSString * _logPrefix;
    NSProgress * _progress;
    NSString * _searchString;
    EFPromise * _spotlightTopHitsQueryResultPromise;
    CSTopHitSearchQuery * _topHitSearchQuery;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSArray *filterQueries;
@property (nonatomic, retain) NSMutableArray *foundItems;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSProgress *internalProgress;
@property (nonatomic, readonly, copy) NSString *keyboardLanguage;
@property (nonatomic, readonly) unsigned long long limit;
@property (nonatomic, retain) NSLock *lock;
@property (nonatomic, retain) NSString *logPrefix;
@property (nonatomic, retain) NSProgress *progress;
@property (nonatomic, readonly, copy) NSString *searchString;
@property (nonatomic, retain) EFPromise *spotlightTopHitsQueryResultPromise;
@property (readonly) Class superclass;
@property (retain) CSTopHitSearchQuery *topHitSearchQuery;

+ (id)log;

- (void).cxx_destruct;
- (void)_cancel;
- (void)_configureTopHitsSearchQuery:(id)arg1;
- (void)_searchDidCompleteWithError:(id)arg1;
- (void)_searchFoundItems:(id)arg1;
- (void)cancel;
- (id)filterQueries;
- (id)foundItems;
- (id)initWithSearchString:(id)arg1 filterQueries:(id)arg2 keyboardLanguage:(id)arg3 limit:(unsigned long long)arg4;
- (id)internalProgress;
- (id)keyboardLanguage;
- (unsigned long long)limit;
- (id)lock;
- (id)logPrefix;
- (id)progress;
- (id)searchString;
- (void)setFoundItems:(id)arg1;
- (void)setInternalProgress:(id)arg1;
- (void)setLock:(id)arg1;
- (void)setLogPrefix:(id)arg1;
- (void)setProgress:(id)arg1;
- (void)setSpotlightTopHitsQueryResultPromise:(id)arg1;
- (void)setTopHitSearchQuery:(id)arg1;
- (id)spotlightTopHitsQueryResultPromise;
- (void)start;
- (id)topHitSearchQuery;
- (id)topHitsQueryResult;

@end