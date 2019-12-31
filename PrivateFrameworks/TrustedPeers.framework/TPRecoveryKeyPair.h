/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TrustedPeers.framework/TrustedPeers
 */

@interface TPRecoveryKeyPair : NSObject {
    NSData * _encryptionSPKI;
    NSData * _signingSPKI;
}

@property (readonly, retain) NSData *encryptionSPKI;
@property (readonly, retain) NSData *signingSPKI;

- (void).cxx_destruct;
- (id)encryptionSPKI;
- (id)initWithSigningSPKI:(id)arg1 encryptionSPKI:(id)arg2;
- (id)signingSPKI;

@end