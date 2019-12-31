/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEFlowMetaData : NSObject <NSCopying, NSSecureCoding> {
    bool  _fastOpenRequested;
    bool  _multipathRequested;
    NSData * _sourceAppAuditToken;
    NSString * _sourceAppSigningIdentifier;
    NSData * _sourceAppUniqueIdentifier;
}

@property (readonly) bool fastOpenRequested;
@property (readonly) bool multipathRequested;
@property (readonly) NSData *sourceAppAuditToken;
@property (readonly) NSString *sourceAppSigningIdentifier;
@property (readonly) NSData *sourceAppUniqueIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)fastOpenRequested;
- (id)initFromFlow:(struct _NEFlow { }*)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProcessUUID:(id)arg1 signingIdentifier:(id)arg2;
- (id)initWithUniqueIdentifier:(id)arg1 signingIdentifier:(id)arg2 fastOpenRequested:(bool)arg3 multipathRequested:(bool)arg4 audit_token:(id)arg5;
- (bool)multipathRequested;
- (id)sourceAppAuditToken;
- (id)sourceAppSigningIdentifier;
- (id)sourceAppUniqueIdentifier;

@end