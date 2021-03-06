/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDSimpleGraphObject : NSObject {
    HDSimpleGraphDatabase * _database;
    long long  _rowID;
}

@property (nonatomic) HDSimpleGraphDatabase *database;
@property (nonatomic) long long rowID;

- (void).cxx_destruct;
- (id)database;
- (unsigned long long)hash;
- (id)init;
- (id)initWithDatabase:(id)arg1 rowID:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (long long)rowID;
- (void)setDatabase:(id)arg1;
- (void)setRowID:(long long)arg1;

@end
