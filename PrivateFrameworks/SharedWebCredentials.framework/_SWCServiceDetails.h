/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SharedWebCredentials.framework/SharedWebCredentials
 */

@interface _SWCServiceDetails : NSObject <NSSecureCoding> {
    struct SWCFields { 
        unsigned int userApproval : 2; 
        unsigned int siteOrFrameworkApproval : 2; 
        unsigned int updating : 1; 
        unsigned int systemApplication : 1; 
        unsigned int readFromDisk : 1; 
        unsigned int alwaysEnabled : 1; 
        unsigned int enterpriseManaged : 1; 
        unsigned int commandLineAddition : 1; 
    }  _fields;
    _SWCServiceSpecifier * _serviceSpecifier;
}

@property (getter=isAlwaysEnabled, readonly) bool alwaysEnabled;
@property (getter=isApproved, readonly) bool approved;
@property (getter=isEnterpriseManaged, readonly) bool enterpriseManaged;
@property (readonly) unsigned char frameworkApprovalState;
@property (getter=wasReadFromDisk, readonly) bool readFromDisk;
@property (readonly) _SWCServiceSpecifier *serviceSpecifier;
@property (readonly) unsigned char siteApprovalState;
@property (getter=isSystemApplication, readonly) bool systemApplication;
@property (getter=isUpdating, readonly) bool updating;
@property (nonatomic) unsigned char userApprovalState;
@property (getter=isWatchKitExtension, readonly) bool watchKitExtension;

+ (id)_serviceDetailsWithServiceSpecifier:(id)arg1 URLComponents:(id)arg2 limit:(unsigned long long)arg3 error:(id*)arg4;
+ (id)new;
+ (id)serviceDetailsWithServiceSpecifier:(id)arg1 URLComponents:(id)arg2 limit:(unsigned long long)arg3 error:(id*)arg4;
+ (id)serviceDetailsWithServiceSpecifier:(id)arg1 error:(id*)arg2;
+ (id)serviceDetailsWithServiceSpecifier:(id)arg1 limit:(unsigned long long)arg2 error:(id*)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithServiceSpecifier:(id)arg1 fields:(const struct SWCFields { unsigned int x1 : 2; unsigned int x2 : 2; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 1; unsigned int x7 : 1; unsigned int x8 : 1; }*)arg2;
- (void)encodeWithCoder:(id)arg1;
- (unsigned char)frameworkApprovalState;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isAlwaysEnabled;
- (bool)isApproved;
- (bool)isEnterpriseManaged;
- (bool)isEqual:(id)arg1;
- (bool)isSystemApplication;
- (bool)isUpdating;
- (bool)isWatchKitExtension;
- (id)serviceSpecifier;
- (void)setUserApprovalState:(unsigned char)arg1;
- (bool)setUserApprovalState:(unsigned char)arg1 error:(id*)arg2;
- (unsigned char)siteApprovalState;
- (unsigned char)userApprovalState;
- (void)waitForSiteApprovalWithCompletionHandler:(id /* block */)arg1;
- (bool)wasReadFromDisk;

@end
