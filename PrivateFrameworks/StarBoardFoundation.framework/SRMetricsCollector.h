/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StarBoardFoundation.framework/StarBoardFoundation
 */

@interface SRMetricsCollector : NSObject {
    NSObject<OS_dispatch_queue> * _loggingQueue;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *loggingQueue;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)logEvent:(id)arg1 eventPayload:(id)arg2;
- (id)loggingQueue;
- (void)setLoggingQueue:(id)arg1;

@end
