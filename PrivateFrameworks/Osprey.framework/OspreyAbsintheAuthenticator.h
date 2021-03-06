/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Osprey.framework/Osprey
 */

@interface OspreyAbsintheAuthenticator : NSObject {
    NSData * _certificateData;
    OspreyGRPCChannel * _channel;
    OspreyKeychain * _keychainStorage;
    struct NACContextOpaque_ { } * _nacContext;
    NSObject<OS_dispatch_queue> * _queue;
    NSURL * _server;
    NSDate * _sessionExpireOn;
    NSData * _sessionInfo;
    long long  _state;
    NSString * _uuid;
}

@property (nonatomic) OspreyKeychain *keychainStorage;
@property (nonatomic, retain) NSURL *server;
@property (nonatomic, retain) NSDate *sessionExpireOn;
@property (nonatomic, retain) NSData *sessionInfo;
@property (nonatomic) long long state;

+ (void)initialize;

- (void).cxx_destruct;
- (void)_ensureAuthenticatedWithCompletion:(id /* block */)arg1 failure:(id /* block */)arg2;
- (void)_initializeAbsintheClientWithCertificateData:(id)arg1 success:(id /* block */)arg2 fail:(id /* block */)arg3;
- (bool)_isSessionInfoExpired;
- (id)_prefixIdentifierWithOsprey:(id)arg1;
- (bool)_readyToSignClientData;
- (id)_signData:(id)arg1;
- (void)createClientSessionWithData:(id)arg1 success:(id /* block */)arg2 failure:(id /* block */)arg3;
- (void)dealloc;
- (void)deleteCachedCertificateDataWithEndpoint:(id)arg1;
- (void)didMoveToState:(long long)arg1;
- (void)fetchAbsintheServerCertificate:(id /* block */)arg1 failure:(id /* block */)arg2;
- (void)getCachedCertificateDataWithEndpoint:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)initWithURL:(id)arg1 channel:(id)arg2;
- (id)initWithURL:(id)arg1 channel:(id)arg2 keychainStorage:(id)arg3;
- (bool)isSessionInfoExpired;
- (id)keychainStorage;
- (id)server;
- (id)sessionExpireOn;
- (id)sessionInfo;
- (void)setCachedCertificateData:(id)arg1 endpoint:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)setKeychainStorage:(id)arg1;
- (void)setServer:(id)arg1;
- (void)setSessionExpireOn:(id)arg1;
- (void)setSessionInfo:(id)arg1;
- (void)setState:(long long)arg1;
- (void)signData:(id)arg1 success:(id /* block */)arg2 failure:(id /* block */)arg3;
- (long long)state;
- (void)willMoveToState:(long long)arg1;

@end
