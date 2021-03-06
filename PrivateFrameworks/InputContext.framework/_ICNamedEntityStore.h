/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/InputContext.framework/InputContext
 */

@interface _ICNamedEntityStore : NSObject {
    id /* block */  _filteringBlock;
    NSArray * _lexicons;
    _ICTransientLexicon * _phraseLexicon;
    NSMutableOrderedSet * _recentNamedEntityQueue;
    id /* block */  _wordFilteringBlock;
    _ICTransientLexicon * _wordLexicon;
}

@property (nonatomic, copy) id /* block */ filteringBlock;
@property (nonatomic, retain) NSArray *lexicons;

+ (id)lexiconViews;
+ (id)tokenize:(id)arg1;

- (void).cxx_destruct;
- (void)addEntity:(id)arg1 isDurable:(bool)arg2;
- (void)addEntry:(id)arg1 tokenizedNewEntity:(id)arg2 source:(unsigned char)arg3 type:(unsigned char)arg4;
- (bool)areStringCharactersWhitelisted:(id)arg1;
- (struct USet { }*)exemplarSetForSupportedLocales;
- (id)filterWord:(id)arg1;
- (id /* block */)filteringBlock;
- (id)init;
- (bool)isFirstCandidateBetter:(id)arg1 than:(id)arg2;
- (bool)isValidNamedEntity:(id)arg1 explanation:(id*)arg2;
- (id)lexicons;
- (void)reloadRecents;
- (void)removeAllEntries;
- (void)removeEntriesBySource:(unsigned char)arg1;
- (void)removeEntry:(id)arg1;
- (void)removeEntry:(id)arg1 source:(unsigned char)arg2;
- (void)setFilteringBlock:(id /* block */)arg1;
- (void)setLexicons:(id)arg1;
- (void)updateQueue:(id)arg1 newEntity:(id)arg2;
- (void)updateQueueFromString:(id)arg1 newEntity:(id)arg2;

@end
