/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPMediaAnalysisService : NSObject <VCPMediaAnalysisClientProtocol> {
    NSXPCConnection * _connection;
    NSObject<OS_dispatch_queue> * _handlerQueue;
    NSObject<OS_dispatch_queue> * _managementQueue;
    int  _nextRequestID;
    NSMutableDictionary * _progressBlocks;
}

+ (id)errorWithDescription:(id)arg1;
+ (int)queryProgress:(float*)arg1 forPhotoLibrary:(id)arg2 andTaskID:(unsigned long long)arg3;
+ (id)sharedAnalysisService;

- (void).cxx_destruct;
- (void)cancelAllRequests;
- (void)cancelRequest:(int)arg1;
- (id)connection;
- (id)init;
- (void)invalidate;
- (void)notifyLibraryAvailableAtURL:(id)arg1;
- (void)reportProgress:(double)arg1 forRequest:(int)arg2;
- (int)requestBackgroundAnalysisForAssets:(id)arg1 realTime:(bool)arg2 progessHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (int)requestBackgroundProcessingWithTaskID:(unsigned long long)arg1 forPhotoLibrary:(id)arg2 progessHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (int)requestFullProcessingForPhotoLibrary:(id)arg1 withOptions:(id)arg2 progressHandler:(id /* block */)arg3 andCompletionHandler:(id /* block */)arg4;
- (int)requestLivePhotoEffectsForAssets:(id)arg1 withOptions:(id)arg2 progressHandler:(id /* block */)arg3 andCompletionHandler:(id /* block */)arg4;
- (int)requestProcessingWithTaskID:(unsigned long long)arg1 forAssets:(id)arg2 withOptions:(id)arg3 progressHandler:(id /* block */)arg4 andCompletionHandler:(id /* block */)arg5;
- (int)requestProcessingWithTaskID:(unsigned long long)arg1 forPhotoLibrary:(id)arg2 withOptions:(id)arg3 progessHandler:(id /* block */)arg4 andCompletionHandler:(id /* block */)arg5;
- (int)requestSceneProcessingForAssets:(id)arg1 withOptions:(id)arg2 progressHandler:(id /* block */)arg3 andCompletionHandler:(id /* block */)arg4;
- (int)requestSceneProcessingForPhotoLibrary:(id)arg1 withOptions:(id)arg2 progressHandler:(id /* block */)arg3 andCompletionHandler:(id /* block */)arg4;

@end