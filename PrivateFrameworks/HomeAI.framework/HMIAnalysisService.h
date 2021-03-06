/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
 */

@interface HMIAnalysisService : HMFObject <HMFLogging> {
    VCPHomeKitAnalysisService * _analysisService;
    HMFUnfairLock * _lock;
    int  _nextRequestID;
    NSMapTable * _requests;
    bool  _runRemotely;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, retain) VCPHomeKitAnalysisService *analysisService;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMFUnfairLock *lock;
@property int nextRequestID;
@property (readonly) NSMapTable *requests;
@property bool runRemotely;
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;
+ (int)requestAnalysisForService:(id)arg1 assetData:(id)arg2 properties:(id)arg3 completionHandler:(id /* block */)arg4;

- (void).cxx_destruct;
- (id)analysisService;
- (bool)cancelRequest:(int)arg1;
- (id)expectedClasses;
- (int)getNextRequestID;
- (id)init;
- (id)lock;
- (int)nextRequestID;
- (int)requestAnalysisForAssetData:(id)arg1 withProperties:(id)arg2 andCompletionHandler:(id /* block */)arg3;
- (int)requestAnalysisForPixelBuffer:(struct __CVBuffer { }*)arg1 withProperties:(id)arg2 andCompletionHandler:(id /* block */)arg3;
- (id)requests;
- (bool)runRemotely;
- (void)setAnalysisService:(id)arg1;
- (void)setNextRequestID:(int)arg1;
- (void)setRunRemotely:(bool)arg1;
- (id)workQueue;

@end
