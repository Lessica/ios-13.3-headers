/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@interface PGSuggestionOptions : NSObject {
    bool  _allowNotification;
    bool  _computesReasons;
    bool  _discardGeneratedSuggestions;
    bool  _generatesInvalidSuggestions;
    bool  _ignoreCollisionsWithExistingSuggestions;
    bool  _ignoreCollisionsWithSameBatchSuggestions;
    NSDate * _localToday;
    unsigned long long  _maximumNumberOfSuggestions;
    bool  _shouldProcessExistingSuggestions;
    NSIndexSet * _suggestionSubtypeBlacklist;
    NSIndexSet * _suggestionSubtypeWhitelist;
    NSIndexSet * _suggestionTypeBlacklist;
    NSIndexSet * _suggestionTypeWhitelist;
    NSDate * _universalEndDate;
    NSDate * _universalEndDateForWholeLibrarySuggestions;
    NSDate * _universalStartDate;
}

@property (nonatomic) bool allowNotification;
@property (nonatomic) bool computeReasons;
@property (nonatomic) bool discardGeneratedSuggestions;
@property (nonatomic) bool generateInvalidSuggestions;
@property (nonatomic) bool ignoreCollisionsWithExistingSuggestions;
@property (nonatomic) bool ignoreCollisionsWithSameBatchSuggestions;
@property (nonatomic, retain) NSDate *localToday;
@property (nonatomic) unsigned long long maximumNumberOfSuggestions;
@property (nonatomic) bool shouldProcessExistingSuggestions;
@property (nonatomic, retain) NSIndexSet *suggestionSubtypeBlacklist;
@property (nonatomic, retain) NSIndexSet *suggestionSubtypeWhitelist;
@property (nonatomic, retain) NSIndexSet *suggestionTypeBlacklist;
@property (nonatomic, retain) NSIndexSet *suggestionTypeWhitelist;
@property (nonatomic, retain) NSDate *universalEndDate;
@property (nonatomic, retain) NSDate *universalEndDateForWholeLibrarySuggestions;
@property (nonatomic, retain) NSDate *universalStartDate;

// Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph

- (void).cxx_destruct;
- (bool)allowNotification;
- (bool)computeReasons;
- (bool)discardGeneratedSuggestions;
- (bool)generateInvalidSuggestions;
- (bool)ignoreCollisionsWithExistingSuggestions;
- (bool)ignoreCollisionsWithSameBatchSuggestions;
- (id)init;
- (id)localToday;
- (unsigned long long)maximumNumberOfSuggestions;
- (void)setAllowNotification:(bool)arg1;
- (void)setComputeReasons:(bool)arg1;
- (void)setDiscardGeneratedSuggestions:(bool)arg1;
- (void)setGenerateInvalidSuggestions:(bool)arg1;
- (void)setIgnoreCollisionsWithExistingSuggestions:(bool)arg1;
- (void)setIgnoreCollisionsWithSameBatchSuggestions:(bool)arg1;
- (void)setLocalToday:(id)arg1;
- (void)setMaximumNumberOfSuggestions:(unsigned long long)arg1;
- (void)setShouldProcessExistingSuggestions:(bool)arg1;
- (void)setSuggestionSubtypeBlacklist:(id)arg1;
- (void)setSuggestionSubtypeWhitelist:(id)arg1;
- (void)setSuggestionTypeBlacklist:(id)arg1;
- (void)setSuggestionTypeWhitelist:(id)arg1;
- (void)setUniversalEndDate:(id)arg1;
- (void)setUniversalEndDateForWholeLibrarySuggestions:(id)arg1;
- (void)setUniversalStartDate:(id)arg1;
- (bool)shouldProcessExistingSuggestions;
- (id)suggestionSubtypeBlacklist;
- (id)suggestionSubtypeWhitelist;
- (id)suggestionTypeBlacklist;
- (id)suggestionTypeWhitelist;
- (id)universalEndDate;
- (id)universalEndDateForWholeLibrarySuggestions;
- (id)universalStartDate;

// Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis

- (void)setDefaultStartAndEndDatesIfNeeded;

@end