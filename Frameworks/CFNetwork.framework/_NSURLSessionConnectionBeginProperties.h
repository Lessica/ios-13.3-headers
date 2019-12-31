/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface _NSURLSessionConnectionBeginProperties : NSObject <NSSecureCoding> {
    __CFN_ConnectionMetrics * __metrics;
}

@property (getter=isTLSConfigured, nonatomic, readonly) bool TLSConfigured;
@property (nonatomic, readonly) __CFN_ConnectionMetrics *_metrics;
@property (nonatomic, readonly) NSObject<OS_nw_endpoint> *endpoint;
@property (getter=isProxyConfigured, nonatomic, readonly) bool proxyConfigured;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_metrics;
- (void)encodeWithCoder:(id)arg1;
- (id)endpoint;
- (id)initWithCoder:(id)arg1;
- (id)initWithMetrics:(id)arg1;
- (bool)isProxyConfigured;
- (bool)isTLSConfigured;

@end