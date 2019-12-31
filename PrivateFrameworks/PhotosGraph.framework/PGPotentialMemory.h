/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@interface PGPotentialMemory : NSObject {
    PHAssetCollection * _assetCollection;
    unsigned long long  _category;
    double  _contentScore;
    NSString * _eventName;
    NSSet * _features;
    NSDate * _localDate;
    NSDate * _localEndDate;
    NSDate * _localStartDate;
    CLLocation * _location;
    NSSet * _momentIDs;
    PGGraphMomentNode * _momentNode;
    NSSet * _momentNodes;
    NSDictionary * _numberOfAssetsByMomentIDs;
    NSSet * _peopleUUIDs;
    double  _score;
    long long  _sourceType;
    unsigned long long  _subcategory;
    NSDate * _universalEndDate;
    NSDate * _universalStartDate;
    PGMemoryGenerator * _upgradedMemoryGenerator;
    PGPotentialMemory * _upgradedPotentialMemory;
}

@property (retain) PHAssetCollection *assetCollection;
@property unsigned long long category;
@property double contentScore;
@property (retain) NSString *eventName;
@property (retain) NSSet *features;
@property (retain) NSDate *localDate;
@property (readonly) NSDate *localEndDate;
@property (readonly) NSDate *localStartDate;
@property (retain) CLLocation *location;
@property (readonly) NSSet *momentIDs;
@property (retain) PGGraphMomentNode *momentNode;
@property (retain) NSSet *momentNodes;
@property (readonly) NSDictionary *numberOfAssetsByMomentIDs;
@property (retain) NSSet *peopleUUIDs;
@property double score;
@property long long sourceType;
@property unsigned long long subcategory;
@property (readonly) NSDate *universalEndDate;
@property (readonly) NSDate *universalStartDate;
@property (nonatomic, retain) PGMemoryGenerator *upgradedMemoryGenerator;
@property (nonatomic, retain) PGPotentialMemory *upgradedPotentialMemory;

- (void).cxx_destruct;
- (void)_prepareForOverlapCheck;
- (void)_resetOverlapCheck;
- (id)assetCollection;
- (id)buildAssetCollectionUsingMemoryController:(id)arg1 withMinimumNumberOfAssets:(unsigned long long)arg2;
- (unsigned long long)category;
- (double)computeContentScoreUsingMemoryController:(id)arg1;
- (double)contentScore;
- (id)eventName;
- (id)features;
- (id)initWithCategory:(unsigned long long)arg1 subcategory:(unsigned long long)arg2;
- (id)initWithCategory:(unsigned long long)arg1 subcategory:(unsigned long long)arg2 momentNode:(id)arg3;
- (id)initWithCategory:(unsigned long long)arg1 subcategory:(unsigned long long)arg2 momentNodes:(id)arg3 sourceType:(long long)arg4;
- (id)localDate;
- (id)localEndDate;
- (id)localStartDate;
- (id)location;
- (id)momentIDs;
- (id)momentNode;
- (id)momentNodes;
- (id)numberOfAssetsByMomentIDs;
- (id)peopleUUIDs;
- (double)score;
- (void)setAssetCollection:(id)arg1;
- (void)setCategory:(unsigned long long)arg1;
- (void)setContentScore:(double)arg1;
- (void)setEventName:(id)arg1;
- (void)setFeatures:(id)arg1;
- (void)setLocalDate:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setMomentNode:(id)arg1;
- (void)setMomentNodes:(id)arg1;
- (void)setPeopleUUIDs:(id)arg1;
- (void)setScore:(double)arg1;
- (void)setSourceType:(long long)arg1;
- (void)setSubcategory:(unsigned long long)arg1;
- (void)setUpgradedMemoryGenerator:(id)arg1;
- (void)setUpgradedPotentialMemory:(id)arg1;
- (long long)sourceType;
- (unsigned long long)subcategory;
- (id)universalEndDate;
- (id)universalStartDate;
- (id)upgradedMemoryGenerator;
- (id)upgradedPotentialMemory;

@end