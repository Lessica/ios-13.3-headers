/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@interface CTDisplayPlan : NSObject <NSSecureCoding> {
    unsigned long long  _attributes;
    NSString * _carrierName;
    NSString * _phoneNumber;
    CTPlan * _plan;
    long long  _status;
}

@property (nonatomic, readonly) unsigned long long attributes;
@property (nonatomic, readonly) NSString *carrierName;
@property (nonatomic, readonly) NSString *phoneNumber;
@property (nonatomic, readonly) CTPlan *plan;
@property (nonatomic, readonly) long long status;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)attributes;
- (id)carrierName;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPlan:(id)arg1 status:(long long)arg2 attributes:(unsigned long long)arg3 carrierName:(id)arg4 phoneNumber:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)phoneNumber;
- (id)plan;
- (long long)status;

@end