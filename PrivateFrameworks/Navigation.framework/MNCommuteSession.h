/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNCommuteSession : NSObject <MNCommuteDestinationObserver, MNCommuteDestinationUpdaterDelegate, MNLocationManagerObserver, MNSuggestionsManagerObserver> {
    unsigned long long  _commuteSessionState;
    MNCommuteDestinationUpdater * _comparisonDestinationStartTime;
    unsigned long long  _currentSuggestionID;
    NSTimer * _etaUpdateTimer;
    MNLocation * _lastLocation;
    MNLocationHistory * _locationHistory;
    MNObserverHashTable<MNCommuteSessionObserver> * _observers;
    NSArray * _rankedDestinations;
    id  _rankedDestinationsSync;
    unsigned long long  _requestedCommuteSessionState;
    NSMutableDictionary * _suggestions;
    MNSuggestionsManager * _suggestionsManager;
    MNNavigationTraceManager * _traceManager;
}

@property (nonatomic) unsigned long long commuteSessionState;
@property (nonatomic) MNCommuteDestinationUpdater *comparisonDestinationStartTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *rankedDestinations;
@property (nonatomic) unsigned long long requestedCommuteSessionState;
@property (readonly) NSString *suggestionsDescription;
@property (readonly) Class superclass;
@property (nonatomic, readonly) MNNavigationTraceManager *traceManager;

- (void).cxx_destruct;
- (void)_resetRankedDestinations;
- (void)_updateSuggestionsManagerState;
- (void)_updatedDestinations;
- (void)addObserver:(id)arg1;
- (void)addSuggestion:(id)arg1;
- (void)commuteDestination:(id)arg1 didChangeInvalid:(bool)arg2;
- (unsigned long long)commuteSessionState;
- (id)comparisonDestinationStartTime;
- (void)dealloc;
- (void)destinationUpdater:(id)arg1 didUpdateDestination:(id)arg2;
- (void)destinationUpdaterDidArrive:(id)arg1;
- (id)init;
- (id)initWithTraceName:(id)arg1 isTraceRecording:(bool)arg2;
- (void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;
- (void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;
- (void)locationManagerDidReset:(id)arg1;
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;
- (void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2;
- (bool)locationManagerShouldPauseLocationUpdates:(id)arg1;
- (void)locationManagerUpdatedLocation:(id)arg1;
- (id)rankedDestinations;
- (void)removeObserver:(id)arg1;
- (unsigned long long)requestedCommuteSessionState;
- (void)setCommuteSessionState:(unsigned long long)arg1;
- (void)setComparisonDestinationStartTime:(id)arg1;
- (void)setRequestedCommuteSessionState:(unsigned long long)arg1;
- (void)start;
- (void)startETAUpdatesWithInterval:(double)arg1;
- (void)stop;
- (void)stopETAUpdates;
- (id)suggestionsDescription;
- (void)suggestionsManager:(id)arg1 didAddSuggestion:(id)arg2;
- (id)traceManager;
- (void)updateComparisonStartDate;
- (void)updateLocation:(id)arg1;

@end
