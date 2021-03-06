/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface FIUIWorkoutSummaryRowBuilder : NSObject {
    unsigned long long  _lastMetricRowType;
    NSArray * _rowTypesForTableRowIndex;
}

@property (nonatomic, readonly) long long numberOfRows;

- (void).cxx_destruct;
- (id)_generateRowsWithWorkout:(id)arg1 supportedMetrics:(id)arg2 buttonBehavior:(unsigned long long)arg3;
- (unsigned long long)indexForRowOfType:(unsigned long long)arg1;
- (id)initWithWorkout:(id)arg1 supportedMetrics:(id)arg2 buttonBehavior:(unsigned long long)arg3;
- (long long)numberOfRows;
- (unsigned long long)rowTypeForTableRowIndex:(long long)arg1;

@end
