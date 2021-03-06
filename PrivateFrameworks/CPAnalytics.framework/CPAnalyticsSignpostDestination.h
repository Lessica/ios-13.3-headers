/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CPAnalytics.framework/CPAnalytics
 */

@interface CPAnalyticsSignpostDestination : NSObject <CPAnalyticsDestination> {
    CPAnalytics * _cpAnalyticsInstance;
    NSMutableDictionary * _startTimesBySignpostID;
}

@property (nonatomic) CPAnalytics *cpAnalyticsInstance;
@property (nonatomic, retain) NSMutableDictionary *startTimesBySignpostID;

- (void).cxx_destruct;
- (void)_checkSignpostsEndForEvent:(id)arg1;
- (void)_sendCPAnalyticsEvent:(id)arg1 withPayload:(id)arg2 withDuration:(double)arg3;
- (void)_trackSignpostsStartForEvent:(id)arg1;
- (id)cpAnalyticsInstance;
- (id)initWithConfig:(id)arg1 cpAnalyticsInstance:(id)arg2;
- (void)processEvent:(id)arg1;
- (void)setCpAnalyticsInstance:(id)arg1;
- (void)setStartTimesBySignpostID:(id)arg1;
- (id)startTimesBySignpostID;

@end
