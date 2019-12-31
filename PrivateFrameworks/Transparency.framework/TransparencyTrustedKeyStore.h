/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

@interface TransparencyTrustedKeyStore : NSObject {
    TransparencySignatureVerifier * _signatureVerifier;
    NSDictionary * _trustedKeys;
}

@property (retain) TransparencySignatureVerifier *signatureVerifier;
@property (retain) NSDictionary *trustedKeys;

- (void).cxx_destruct;
- (id)initWithTrustedKeys:(id)arg1;
- (void)setSignatureVerifier:(id)arg1;
- (void)setTrustedKeys:(id)arg1;
- (id)signatureVerifier;
- (id)trustedKeys;

@end