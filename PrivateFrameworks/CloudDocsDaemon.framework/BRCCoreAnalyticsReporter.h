/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCCoreAnalyticsReporter : NSObject

+ (id)dictionaryForErrorsByZone:(id)arg1 wantPrivateZone:(bool)arg2;
+ (void)sendTelemetryReport:(id)arg1;
+ (id)telemetryDictionaryToUploadForError:(id)arg1 count:(id)arg2 syncType:(id)arg3 totalItemsCount:(id)arg4 zoneType:(id)arg5 zoneCountsOnly:(bool)arg6 isFolderSharingEnabled:(bool)arg7;
+ (bool)uploadErrorsAsIndividualEvents:(id)arg1 syncType:(id)arg2 totalItemsCount:(unsigned long long)arg3 zoneType:(id)arg4 zoneCountsOnly:(bool)arg5 isFolderSharingEnabled:(bool)arg6;
+ (void)uploadMetricsReport:(id)arg1;

@end