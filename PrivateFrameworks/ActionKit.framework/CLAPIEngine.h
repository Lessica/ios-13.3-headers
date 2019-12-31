/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

@interface CLAPIEngine : NSObject {
    NSURL * _baseURL;
    bool  _clearsCookies;
    <CLAPIEngineDelegate> * _delegate;
    NSString * _email;
    NSString * _password;
    NSMutableSet * _transactions;
}

@property (nonatomic, retain) NSURL *baseURL;
@property (nonatomic) bool clearsCookies;
@property (nonatomic) <CLAPIEngineDelegate> *delegate;
@property (nonatomic, copy) NSString *email;
@property (nonatomic, copy) NSString *password;
@property (nonatomic, retain) NSMutableSet *transactions;

+ (id)defaultBaseURL;
+ (id)engine;
+ (id)engineWithDelegate:(id)arg1;
+ (void)initialize;

- (id)_URLWithPath:(id)arg1;
- (id)_createAndStartConnectionForTransaction:(id)arg1;
- (id)_transactionForConnection:(id)arg1;
- (id)_transactionForConnectionIdentifier:(id)arg1;
- (id)baseURL;
- (id)bookmarkLinkWithURL:(id)arg1 name:(id)arg2 options:(id)arg3 userInfo:(id)arg4;
- (id)bookmarkLinkWithURL:(id)arg1 name:(id)arg2 userInfo:(id)arg3;
- (void)cancelAllConnections;
- (void)cancelConnection:(id)arg1;
- (id)changeNameOfItem:(id)arg1 toName:(id)arg2 userInfo:(id)arg3;
- (id)changeNameOfItemAtHref:(id)arg1 toName:(id)arg2 userInfo:(id)arg3;
- (id)changePrivacyOfItem:(id)arg1 toPrivate:(bool)arg2 userInfo:(id)arg3;
- (id)changePrivacyOfItemAtHref:(id)arg1 toPrivate:(bool)arg2 userInfo:(id)arg3;
- (bool)clearsCookies;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (void)connectionDidFinishLoading:(id)arg1;
- (id)createAccountWithEmail:(id)arg1 password:(id)arg2 acceptTerms:(bool)arg3 userInfo:(id)arg4;
- (void)dealloc;
- (id)delegate;
- (id)deleteItem:(id)arg1 userInfo:(id)arg2;
- (id)deleteItemAtHref:(id)arg1 userInfo:(id)arg2;
- (id)email;
- (id)getAccountInformationWithUserInfo:(id)arg1;
- (id)getItemInformation:(id)arg1 userInfo:(id)arg2;
- (id)getItemInformationAtURL:(id)arg1 userInfo:(id)arg2;
- (id)getItemListStartingAtPage:(long long)arg1 itemsPerPage:(long long)arg2 userInfo:(id)arg3;
- (id)getItemListStartingAtPage:(long long)arg1 ofType:(long long)arg2 itemsPerPage:(long long)arg3 showOnlyItemsInTrash:(bool)arg4 userInfo:(id)arg5;
- (id)getItemListStartingAtPage:(long long)arg1 ofType:(long long)arg2 itemsPerPage:(long long)arg3 userInfo:(id)arg4;
- (id)getStoreProductsWithUserInfo:(id)arg1;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (bool)isReady;
- (id)password;
- (id)redeemStoreReceipt:(id)arg1 userInfo:(id)arg2;
- (long long)requestTypeForConnectionIdentifier:(id)arg1;
- (id)restoreItem:(id)arg1 userInfo:(id)arg2;
- (id)restoreItemAtHref:(id)arg1 userInfo:(id)arg2;
- (void)setBaseURL:(id)arg1;
- (void)setClearsCookies:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEmail:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setTransactions:(id)arg1;
- (id)transactions;
- (id)uploadFileWithName:(id)arg1 fileData:(id)arg2 fileURL:(id)arg3 options:(id)arg4 userInfo:(id)arg5;
- (id)uploadFileWithName:(id)arg1 fileData:(id)arg2 options:(id)arg3 userInfo:(id)arg4;
- (id)uploadFileWithName:(id)arg1 fileData:(id)arg2 userInfo:(id)arg3;
- (id)uploadFileWithName:(id)arg1 fileURL:(id)arg2 options:(id)arg3 userInfo:(id)arg4;
- (id)userInfoForConnectionIdentifier:(id)arg1;

@end