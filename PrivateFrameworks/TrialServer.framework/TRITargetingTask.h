/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
 */

@interface TRITargetingTask : TRIExperimentBaseTask {
    int  _experimentType;
    NSMutableArray * _targetingMetrics;
    struct NSString { Class x1; } * _treatmentId;
}

@property int experimentType;
@property (retain) NSString *treatmentId;

+ (id)taskWithExperimentId:(struct NSString { Class x1; }*)arg1;

- (void).cxx_destruct;
- (id)dependencies;
- (int)experimentType;
- (bool)getTreatment:(struct NSString {}**)arg1 forExperiment:(id)arg2 error:(id*)arg3;
- (id)metrics;
- (id)nextTasksForRunStatus:(int)arg1;
- (int)runTask;
- (void)setExperimentType:(int)arg1;
- (void)setTreatmentId:(struct NSString { Class x1; }*)arg1;
- (id)systemCovariates;
- (void)targetingError:(id*)arg1 experimentId:(struct NSString { Class x1; }*)arg2 errorType:(id)arg3;
- (void)targetingError:(id*)arg1 experimentId:(struct NSString { Class x1; }*)arg2 errorType:(id)arg3 details:(id)arg4;
- (struct NSString { Class x1; }*)treatmentId;

@end
