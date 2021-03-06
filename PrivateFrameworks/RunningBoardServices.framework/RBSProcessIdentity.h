/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
 */

@interface RBSProcessIdentity : NSObject <BSDescriptionProviding, BSXPCSecureCoding, NSCopying, NSSecureCoding, RBSProcessMatching> {
    NSString * _daemonJobLabel;
    NSString * _description;
    NSString * _embeddedApplicationIdentifier;
    unsigned int  _euid;
    NSString * _executablePath;
    unsigned long long  _hash;
    int  _instanceID;
    NSString * _picoDesc;
    RBSXPCServiceIdentity * _serviceIdentity;
    unsigned char  _type;
}

@property (getter=isXPCService, nonatomic, readonly) bool XPCService;
@property (getter=isDaemon, nonatomic, readonly) bool daemon;
@property (nonatomic, readonly, copy) NSString *daemonJobLabel;
@property (readonly, copy) NSString *debugDescription;
@property (getter=isDefaultManaged, nonatomic, readonly) bool defaultManaged;
@property (readonly, copy) NSString *description;
@property (getter=isEmbeddedApplication, nonatomic, readonly) bool embeddedApplication;
@property (nonatomic, readonly, copy) NSString *embeddedApplicationIdentifier;
@property (nonatomic, readonly) unsigned int euid;
@property (nonatomic, readonly, copy) NSString *executablePath;
@property (getter=isExtension, nonatomic, readonly) bool extension;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) RBSProcessIdentifier *hostIdentifier;
@property (nonatomic, readonly, copy) RBSProcessIdentity *hostIdentity;
@property (nonatomic, readonly) bool inheritsCoalitionBand;
@property (nonatomic, readonly) NSString *picoDesc;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *xpcServiceIdentifier;

+ (id)_identityForXPCServicePath:(id)arg1 properties:(id)arg2 pid:(int)arg3 euid:(unsigned int)arg4 host:(id)arg5;
+ (id)identityForDaemonJobLabel:(id)arg1;
+ (id)identityForDaemonPlistPath:(id)arg1;
+ (id)identityForEmbeddedApplicationIdentifier:(id)arg1;
+ (id)identityForEmbeddedApplicationIdentifier:(id)arg1 euid:(unsigned int)arg2;
+ (id)identityForExecutablePath:(id)arg1 pid:(int)arg2 euid:(unsigned int)arg3;
+ (id)identityForLaunchProperties:(id)arg1 pid:(int)arg2 euid:(unsigned int)arg3;
+ (id)identityForXPCServiceIdentifier:(id)arg1;
+ (id)identityForXPCServicePath:(id)arg1 host:(id)arg2;
+ (id)identityForXPCServiceProperties:(id)arg1 pid:(int)arg2 euid:(unsigned int)arg3 host:(id)arg4;
+ (id)identityOfCurrentProcess;
+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_initPicoDesc;
- (id)_initWithEmbeddedApplicationID:(id)arg1 xpcServiceID:(id)arg2 daemonJobLabel:(id)arg3 executablePath:(id)arg4 instanceID:(int)arg5 euid:(unsigned int)arg6;
- (bool)_matchesIdentity:(id)arg1;
- (id)copyWithEuid:(unsigned int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)daemonJobLabel;
- (id)debugDescription;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)embeddedApplicationIdentifier;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)euid;
- (id)executablePath;
- (unsigned long long)hash;
- (id)hostIdentifier;
- (id)hostIdentity;
- (bool)inheritsCoalitionBand;
- (id)init;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isAnonymousExecutable;
- (bool)isDaemon;
- (bool)isDefaultManaged;
- (bool)isEmbeddedApplication;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToIdentity:(id)arg1;
- (bool)isExtension;
- (bool)isXPCService;
- (bool)matchesProcess:(id)arg1;
- (id)picoDesc;
- (id)processPredicate;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)xpcServiceIdentifier;

@end
