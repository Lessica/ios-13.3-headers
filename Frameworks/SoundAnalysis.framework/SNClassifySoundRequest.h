/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
 */

@interface SNClassifySoundRequest : NSObject <SNAnalyzerProviding, SNRequest> {
    SNSoundClassifier * _classifier;
}

@property (nonatomic, readonly) <SNAnalyzing> *analyzer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property double overlapFactor;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)analyzer;
- (id)initWithMLModel:(id)arg1 error:(id*)arg2;
- (double)overlapFactor;
- (void)setOverlapFactor:(double)arg1;

@end