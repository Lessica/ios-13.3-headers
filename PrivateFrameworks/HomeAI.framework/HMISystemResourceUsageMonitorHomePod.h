/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
 */

@interface HMISystemResourceUsageMonitorHomePod : HMFObject <HMFLogging, HMISystemResourceUsageMonitorProtocol> {
    HMISystemResourceUsage * _currentSystemResourceUsage;
    <HMISystemResourceUsageMonitorDelegate> * _delegate;
    HMINotifydObserver * _notifydObserver;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly) HMISystemResourceUsage *currentSystemResourceUsage;
@property (readonly, copy) NSString *debugDescription;
@property <HMISystemResourceUsageMonitorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) HMINotifydObserver *notifydObserver;
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)currentSystemResourceUsage;
- (id)delegate;
- (id)getCurrentSystemResourceUsage;
- (void)handleSystemLoadChanged:(unsigned long long)arg1;
- (id)initWithWorkQueue:(id)arg1;
- (id)notifydObserver;
- (void)setDelegate:(id)arg1;
- (void)start;
- (id)workQueue;

@end
