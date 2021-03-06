/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKPreferences : NSObject {
    NSDictionary * _overrideValues;
    bool  _shouldSynchronizeOnNextRead;
    bool  _webKitInspectElementEnabled;
}

@property (nonatomic, readonly) bool HTTPShouldUsePipelining;
@property (nonatomic) bool _shouldSynchronizeOnNextRead;
@property (getter=isAccountModificationRestricted, nonatomic, readonly) bool accountModificationRestricted;
@property (getter=isAddingFriendsRestricted, nonatomic, readonly) bool addingFriendsRestricted;
@property (nonatomic) bool allowUnsignedBag;
@property (getter=isAppInstallationRestricted, nonatomic, readonly) bool appInstallationRestricted;
@property (nonatomic) double cacheTTLOverride;
@property (getter=isClipGestureEnabled, nonatomic) bool clipGestureEnabled;
@property (getter=isComprehensiveLoggingEnabled, nonatomic) bool comprehensiveLoggingEnabled;
@property (nonatomic) double debugRequestTimeout;
@property (nonatomic) long long environment;
@property (nonatomic, readonly) unsigned long long exchangeDataDefaultMaximumSize;
@property (nonatomic) unsigned long long exchangeDataMaximumSize;
@property (nonatomic, readonly) unsigned long long exchangeDefaultMaxInitiatedExchangesPerPlayer;
@property (nonatomic) unsigned long long exchangeMaxInitiatedExchangesPerPlayer;
@property (nonatomic) bool forceDefaultNickname;
@property (nonatomic) bool forceRelay;
@property (getter=isGameCenterRestricted, nonatomic, readonly) bool gameCenterRestricted;
@property (nonatomic) double garbageCollectionInterval;
@property (nonatomic) unsigned int logFilter;
@property (nonatomic) unsigned long long loginDisableThreshold;
@property (nonatomic, readonly) unsigned long long maxDefaultGameStateSizeTurnBased;
@property (nonatomic, readonly) unsigned long long maxDefaultPlayersHosted;
@property (nonatomic, readonly) unsigned long long maxDefaultPlayersP2P;
@property (nonatomic, readonly) unsigned long long maxDefaultPlayersTurnBased;
@property (nonatomic) unsigned long long maxGameStateSizeTurnBased;
@property (nonatomic) unsigned long long maxPlayersHosted;
@property (nonatomic) unsigned long long maxPlayersP2P;
@property (nonatomic) unsigned long long maxPlayersTurnBased;
@property (nonatomic) unsigned long long maxRecentPlayersCount;
@property (nonatomic) double maxRecentPlayersTime;
@property (nonatomic) unsigned long long mescalSetupRetries;
@property (nonatomic) double minimumCacheTTL;
@property (getter=isMultiplayerGamingRestricted, nonatomic, readonly) bool multiplayerGamingRestricted;
@property (nonatomic) bool notificationAlertsEnabled;
@property (nonatomic) bool notificationBadgesEnabled;
@property (getter=isNotificationCenterEnabled, nonatomic) bool notificationCenterEnabled;
@property (nonatomic) bool notificationSoundsEnabled;
@property (nonatomic) unsigned long long operationRetryCount;
@property (nonatomic) double operationRetryDelay;
@property (nonatomic) double operationTimeout;
@property (copy) NSDictionary *overrideValues;
@property (nonatomic) long long pipeliningSetting;
@property (nonatomic) bool preemptiveRelay;
@property (nonatomic) <GKPreferencesDelegate> *preferencesDelegate;
@property (nonatomic) long long pushEnvironment;
@property (nonatomic) unsigned long long recentNumberOfPlayers;
@property (nonatomic) bool restrictToAutomatch;
@property (nonatomic) bool restrictToTournamentPlayers;
@property (nonatomic) bool shouldAddPlayerInfoToAddressBook;
@property (nonatomic) bool shouldAllowNearbyMultiplayer;
@property (nonatomic) bool shouldAnnotateImageUsage;
@property (nonatomic, readonly) bool shouldDisallowInvitesFromStrangers;
@property (nonatomic) bool shouldLinkPlayerToFacebook;
@property (nonatomic) bool shouldLinkPlayerToICloud;
@property (nonatomic) bool shouldLinkPlayerToTwitter;
@property (nonatomic) bool shouldTrackAtlasImageUsage;
@property (nonatomic) bool shouldUseTestIcons;
@property (nonatomic, retain) NSString *storeBagURL;
@property (getter=isStoreDemoModeEnabled, nonatomic, readonly) bool storeDemoModeEnabled;
@property (nonatomic) double terminationInterval;
@property (nonatomic, copy) NSString *testRunID;
@property (nonatomic) long long tournamentAutoDuration;
@property (nonatomic) long long tournamentCreationMethod;
@property (nonatomic) long long tournamentCustomDuration;
@property (nonatomic) long long tournamentCustomMaxPlayers;
@property (nonatomic) long long tournamentCustomMaxReplays;
@property (nonatomic) long long tournamentCustomMinPlayers;
@property (nonatomic) bool tournamentDemoModeEnabled;
@property (nonatomic) long long tournamentDuration;
@property (nonatomic, retain) NSDate *tournamentEndDate;
@property (nonatomic) long long tournamentMaxPlayers;
@property (nonatomic) long long tournamentMaxReplays;
@property (nonatomic) long long tournamentMaxSimulatedFriends;
@property (nonatomic) long long tournamentMaxSimulatedPlayers;
@property (nonatomic) long long tournamentMinPlayers;
@property (nonatomic) long long tournamentParticipantState;
@property (nonatomic) long long tournamentPlayers;
@property (nonatomic) long long tournamentReplays;
@property (nonatomic) long long tournamentServer;
@property (nonatomic, retain) NSDate *tournamentStartDate;
@property (nonatomic) long long tournamentState;
@property (nonatomic) long long tournamentUIAppearanceStyle;
@property (nonatomic) bool tournamentsDebuggingEnabled;
@property (nonatomic) bool useInternalHeader;
@property (nonatomic) bool useTestProtocols;
@property (nonatomic) bool verboseLogging;
@property (getter=isWebKitInspectElementEnabled, nonatomic) bool webKitInspectElementEnabled;

+ (id)displayNameForEnvironment:(long long)arg1;
+ (id)hostNameForEnvironment:(long long)arg1;
+ (id)shared;

- (bool)HTTPShouldUsePipelining;
- (void)_didWriteKey:(struct __CFString { }*)arg1;
- (bool)_shouldSynchronizeOnNextRead;
- (bool)allowUnsignedBag;
- (void)applicationWillEnterBackground:(id)arg1;
- (bool)booleanValueForKey:(struct __CFString { }*)arg1;
- (bool)booleanValueForKey:(struct __CFString { }*)arg1 defaultValue:(bool)arg2;
- (double)cacheTTLOverride;
- (void)dealloc;
- (double)debugRequestTimeout;
- (long long)environment;
- (unsigned long long)exchangeDataDefaultMaximumSize;
- (unsigned long long)exchangeDataMaximumSize;
- (unsigned long long)exchangeDefaultMaxInitiatedExchangesPerPlayer;
- (unsigned long long)exchangeMaxInitiatedExchangesPerPlayer;
- (bool)forceDefaultNickname;
- (bool)forceRelay;
- (double)garbageCollectionInterval;
- (id)init;
- (id)initWithUIKitNotifications;
- (id)initWithoutUIKitNotifications;
- (long long)integerValueForKey:(struct __CFString { }*)arg1 defaultValue:(long long)arg2;
- (void)invalidate;
- (bool)isAccountModificationRestricted;
- (bool)isAddingFriendsRestricted;
- (bool)isAppInstallationRestricted;
- (bool)isClipGestureEnabled;
- (bool)isComprehensiveLoggingEnabled;
- (bool)isGameCenterRestricted;
- (bool)isInternalBuild;
- (bool)isMultiplayerGamingRestricted;
- (bool)isNotificationCenterEnabled;
- (bool)isStoreDemoModeEnabled;
- (bool)isWebKitInspectElementEnabled;
- (unsigned int)logFilter;
- (unsigned long long)loginDisableThreshold;
- (unsigned long long)maxDefaultGameStateSizeTurnBased;
- (unsigned long long)maxDefaultPlayersHosted;
- (unsigned long long)maxDefaultPlayersP2P;
- (unsigned long long)maxDefaultPlayersTurnBased;
- (unsigned long long)maxGameStateSizeTurnBased;
- (unsigned long long)maxPlayersHosted;
- (unsigned long long)maxPlayersP2P;
- (unsigned long long)maxPlayersTurnBased;
- (unsigned long long)maxRecentPlayersCount;
- (double)maxRecentPlayersTime;
- (unsigned long long)mescalSetupRetries;
- (double)minimumCacheTTL;
- (bool)notificationAlertsEnabled;
- (bool)notificationBadgesEnabled;
- (bool)notificationSoundsEnabled;
- (unsigned long long)operationRetryCount;
- (double)operationRetryDelay;
- (double)operationTimeout;
- (id)overrideValues;
- (long long)pipeliningSetting;
- (bool)preemptiveRelay;
- (id)preferencesDelegate;
- (id)preferencesValueForKey:(id)arg1;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (long long)pushEnvironment;
- (unsigned long long)recentNumberOfPlayers;
- (void)removeOverrideForKey:(id)arg1;
- (bool)restrictToAutomatch;
- (bool)restrictToTournamentPlayers;
- (bool)restrictionEnabledForKey:(id)arg1;
- (void)setAllowUnsignedBag:(bool)arg1;
- (void)setBooleanValue:(bool)arg1 forKey:(struct __CFString { }*)arg2;
- (void)setCacheTTLOverride:(double)arg1;
- (void)setClipGestureEnabled:(bool)arg1;
- (void)setComprehensiveLoggingEnabled:(bool)arg1;
- (void)setDebugRequestTimeout:(double)arg1;
- (void)setEnvironment:(long long)arg1;
- (void)setExchangeDataMaximumSize:(unsigned long long)arg1;
- (void)setExchangeMaxInitiatedExchangesPerPlayer:(unsigned long long)arg1;
- (void)setForceDefaultNickname:(bool)arg1;
- (void)setForceRelay:(bool)arg1;
- (void)setGarbageCollectionInterval:(double)arg1;
- (void)setIntegerValue:(long long)arg1 forKey:(struct __CFString { }*)arg2;
- (void)setLogFilter:(unsigned int)arg1;
- (void)setLoginDisableThreshold:(unsigned long long)arg1;
- (void)setMaxGameStateSizeTurnBased:(unsigned long long)arg1;
- (void)setMaxPlayersHosted:(unsigned long long)arg1;
- (void)setMaxPlayersP2P:(unsigned long long)arg1;
- (void)setMaxPlayersTurnBased:(unsigned long long)arg1;
- (void)setMaxRecentPlayersCount:(unsigned long long)arg1;
- (void)setMaxRecentPlayersTime:(double)arg1;
- (void)setMescalSetupRetries:(unsigned long long)arg1;
- (void)setMinimumCacheTTL:(double)arg1;
- (void)setNotificationAlertsEnabled:(bool)arg1;
- (void)setNotificationBadgesEnabled:(bool)arg1;
- (void)setNotificationCenterEnabled:(bool)arg1;
- (void)setNotificationSoundsEnabled:(bool)arg1;
- (void)setOperationRetryCount:(unsigned long long)arg1;
- (void)setOperationRetryDelay:(double)arg1;
- (void)setOperationTimeout:(double)arg1;
- (void)setOverrideValues:(id)arg1;
- (void)setPipeliningSetting:(long long)arg1;
- (void)setPreemptiveRelay:(bool)arg1;
- (void)setPreferencesDelegate:(id)arg1;
- (void)setPushEnvironment:(long long)arg1;
- (void)setRecentNumberOfPlayers:(unsigned long long)arg1;
- (void)setRestrictToAutomatch:(bool)arg1;
- (void)setRestrictToTournamentPlayers:(bool)arg1;
- (void)setShouldAddPlayerInfoToAddressBook:(bool)arg1;
- (void)setShouldAllowNearbyMultiplayer:(bool)arg1;
- (void)setShouldAnnotateImageUsage:(bool)arg1;
- (void)setShouldLinkPlayerToFacebook:(bool)arg1;
- (void)setShouldLinkPlayerToICloud:(bool)arg1;
- (void)setShouldLinkPlayerToTwitter:(bool)arg1;
- (void)setShouldTrackAtlasImageUsage:(bool)arg1;
- (void)setShouldUseTestIcons:(bool)arg1;
- (void)setStoreBagURL:(id)arg1;
- (void)setStringValue:(id)arg1 forKey:(struct __CFString { }*)arg2;
- (void)setTerminationInterval:(double)arg1;
- (void)setTestRunID:(id)arg1;
- (void)setTimeInterval:(double)arg1 forKey:(struct __CFString { }*)arg2;
- (void)setTournamentAutoDuration:(long long)arg1;
- (void)setTournamentCreationMethod:(long long)arg1;
- (void)setTournamentCustomDuration:(long long)arg1;
- (void)setTournamentCustomMaxPlayers:(long long)arg1;
- (void)setTournamentCustomMaxReplays:(long long)arg1;
- (void)setTournamentCustomMinPlayers:(long long)arg1;
- (void)setTournamentDemoModeEnabled:(bool)arg1;
- (void)setTournamentDuration:(long long)arg1;
- (void)setTournamentEndDate:(id)arg1;
- (void)setTournamentMaxPlayers:(long long)arg1;
- (void)setTournamentMaxReplays:(long long)arg1;
- (void)setTournamentMaxSimulatedFriends:(long long)arg1;
- (void)setTournamentMaxSimulatedPlayers:(long long)arg1;
- (void)setTournamentMinPlayers:(long long)arg1;
- (void)setTournamentParticipantState:(long long)arg1;
- (void)setTournamentPlayers:(long long)arg1;
- (void)setTournamentReplays:(long long)arg1;
- (void)setTournamentServer:(long long)arg1;
- (void)setTournamentStartDate:(id)arg1;
- (void)setTournamentState:(long long)arg1;
- (void)setTournamentUIAppearanceStyle:(long long)arg1;
- (void)setTournamentsDebuggingEnabled:(bool)arg1;
- (void)setUnsignedIntegerValue:(long long)arg1 forKey:(struct __CFString { }*)arg2;
- (void)setUseInternalHeader:(bool)arg1;
- (void)setUseTestProtocols:(bool)arg1;
- (void)setVerboseLogging:(bool)arg1;
- (void)setWebKitInspectElementEnabled:(bool)arg1;
- (void)set_shouldSynchronizeOnNextRead:(bool)arg1;
- (bool)shouldAddPlayerInfoToAddressBook;
- (bool)shouldAllowNearbyMultiplayer;
- (bool)shouldAnnotateImageUsage;
- (bool)shouldDisallowInvitesFromStrangers;
- (bool)shouldLinkPlayerToFacebook;
- (bool)shouldLinkPlayerToICloud;
- (bool)shouldLinkPlayerToTwitter;
- (bool)shouldTrackAtlasImageUsage;
- (bool)shouldUseTestIcons;
- (id)storeBagURL;
- (id)stringValueForKey:(struct __CFString { }*)arg1 defaultValue:(id)arg2;
- (void)synchronize;
- (double)terminationInterval;
- (id)testRunID;
- (double)timeIntervalForKey:(struct __CFString { }*)arg1 defaultValue:(double)arg2;
- (long long)tournamentAutoDuration;
- (long long)tournamentCreationMethod;
- (long long)tournamentCustomDuration;
- (long long)tournamentCustomMaxPlayers;
- (long long)tournamentCustomMaxReplays;
- (long long)tournamentCustomMinPlayers;
- (bool)tournamentDemoModeEnabled;
- (long long)tournamentDuration;
- (id)tournamentEndDate;
- (long long)tournamentMaxPlayers;
- (long long)tournamentMaxReplays;
- (long long)tournamentMaxSimulatedFriends;
- (long long)tournamentMaxSimulatedPlayers;
- (long long)tournamentMinPlayers;
- (long long)tournamentParticipantState;
- (long long)tournamentPlayers;
- (long long)tournamentReplays;
- (long long)tournamentServer;
- (id)tournamentStartDate;
- (long long)tournamentState;
- (long long)tournamentUIAppearanceStyle;
- (bool)tournamentsDebuggingEnabled;
- (long long)unsignedIntegerValueForKey:(struct __CFString { }*)arg1 defaultValue:(long long)arg2;
- (bool)useInternalHeader;
- (bool)useTestProtocols;
- (bool)verboseLogging;

@end
