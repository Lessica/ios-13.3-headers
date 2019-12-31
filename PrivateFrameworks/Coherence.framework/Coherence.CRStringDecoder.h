/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Coherence.framework/Coherence
 */

@interface Coherence.CRStringDecoder : NSObject <CRStringDecoderProtocol> {
    void decodeContext;
    void encoded;
    void subsequence;
}

- (void).cxx_destruct;
- (id)addedByVersionWithError:(id*)arg1;
- (id)context;
- (void)decodeSubstring:(long long)arg1;
- (id)init;
- (id)storageWithError:(id*)arg1;
- (long long)substringAddedByCount;
- (unsigned int)substringAddedByCounter:(long long)arg1;
- (unsigned int)substringAddedByReplica:(long long)arg1;
- (unsigned int)substringCharClock;
- (unsigned int)substringCharReplica;
- (unsigned int)substringChild:(long long)arg1;
- (long long)substringChildCount;
- (long long)substringCount;
- (unsigned int)substringLength;
- (id)versionWithError:(id*)arg1;

@end