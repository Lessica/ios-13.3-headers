/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKWebViewFactory : NSObject {
    WKProcessPool * _processPool;
    NSCache * _webViewCache;
}

+ (id)sharedWebViewFactory;

- (void).cxx_destruct;
- (id)dequeueItemWithBridgeConfiguration:(id)arg1;
- (id)init;
- (void)requeueItem:(id)arg1;

@end