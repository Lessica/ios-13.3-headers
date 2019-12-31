/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

@interface SignedMapHead : GPBMessage <TransparencyVerifiable>

@property (nonatomic) bool hasSignature;
@property (nonatomic, copy) NSData *mapHead;
@property (readonly) MapHead *parsedMapHead;
@property (nonatomic, retain) Signature *signature;
@property (retain) TransparencySignatureVerifier *verifier;

+ (id)descriptor;

- (id)parsedMapHead;
- (void)setVerifier:(id)arg1;
- (id)verifier;
- (bool)verifyWithError:(id*)arg1;

@end