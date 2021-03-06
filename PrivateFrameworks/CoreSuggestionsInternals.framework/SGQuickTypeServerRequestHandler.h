/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGQuickTypeServerRequestHandler : NSObject <PREQuickTypeProtocol> {
    _PASBundleIdResolver * _bundleIdResolver;
    NSString * _clientProcessName;
    <PREQuickTypeProtocol> * _clientProxy;
    SGContactSharingML * _ml;
}

@property (nonatomic, retain) _PASBundleIdResolver *bundleIdResolver;
@property (nonatomic, copy) NSString *clientProcessName;

- (void).cxx_destruct;
- (id)bundleIdResolver;
- (id)clientProcessName;
- (id)init;
- (void)proactiveTriggersForContext:(id)arg1 maximumTriggers:(unsigned long long)arg2 withCompletion:(id /* block */)arg3;
- (void)setBundleIdResolver:(id)arg1;
- (void)setClientProcessName:(id)arg1;
- (void)setRemoteObjectProxy:(id)arg1;

@end
