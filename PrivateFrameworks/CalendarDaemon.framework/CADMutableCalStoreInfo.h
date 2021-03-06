/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

@interface CADMutableCalStoreInfo : NSObject <CADCalStoreInfo> {
    NSString * _accountIdentifier;
    NSString * _delegatedAccountOwnerAccountIdentifier;
    bool  _isEnabled;
    bool  _isLocalStore;
    int  _rowID;
    NSString * _storeName;
}

@property (nonatomic, copy) NSString *accountIdentifier;
@property (nonatomic, copy) NSString *delegatedAccountOwnerAccountIdentifier;
@property (nonatomic) bool isEnabled;
@property (nonatomic) bool isLocalStore;
@property (nonatomic) int rowID;
@property (nonatomic, copy) NSString *storeName;

- (void).cxx_destruct;
- (id)accountIdentifier;
- (id)delegatedAccountOwnerAccountIdentifier;
- (bool)isEnabled;
- (bool)isLocalStore;
- (int)rowID;
- (void)setAccountIdentifier:(id)arg1;
- (void)setDelegatedAccountOwnerAccountIdentifier:(id)arg1;
- (void)setIsEnabled:(bool)arg1;
- (void)setIsLocalStore:(bool)arg1;
- (void)setRowID:(int)arg1;
- (void)setStoreName:(id)arg1;
- (id)storeName;

@end
