/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
 */

@interface WFMeasure : NSObject {
    id /* block */  _completionHandler;
    bool  _isInProgress;
    NSURLSession * _session;
    NSDate * _startDate;
    NSURLSessionDownloadTask * _task;
    NSTimer * _timer;
    NSMutableURLRequest * _url;
    unsigned int  _wakeAssertionId;
}

- (void).cxx_destruct;
- (void)abort;
- (id)initWithType:(int)arg1;
- (bool)isInProgress;
- (void)onTimeout:(id)arg1;
- (bool)start:(id /* block */)arg1;

@end
