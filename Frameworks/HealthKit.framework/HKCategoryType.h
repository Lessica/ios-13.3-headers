/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKCategoryType : HKSampleType

+ (id)_categoryTypeWithCode:(long long)arg1;

- (bool)_acceptsValue:(long long)arg1;
- (long long)_categoryValueForValue:(long long)arg1;
- (long long)_defaultValue;
- (id)_predicateForSDKVersion:(unsigned int)arg1;
- (bool)_validateMetadata:(id)arg1 sample:(id)arg2 error:(id*)arg3;

@end