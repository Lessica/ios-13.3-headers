/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHTokenizedTextResultToken : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    double  _combinedScore;
    unsigned long long  _properties;
    double  _recognitionScore;
    NSString * _string;
    NSIndexSet * _strokeIndexes;
    long long  _substrokeCount;
    unsigned int  _wordID;
}

@property (nonatomic, readonly) double combinedScore;
@property (nonatomic, readonly) unsigned long long properties;
@property (nonatomic, readonly) double recognitionScore;
@property (nonatomic, readonly, copy) NSString *string;
@property (nonatomic, readonly, copy) NSIndexSet *strokeIndexes;
@property (nonatomic, readonly) long long substrokeCount;
@property (nonatomic, readonly) unsigned int wordID;

+ (bool)supportsSecureCoding;
+ (id)tokenWithString:(id)arg1 strokeIndexes:(id)arg2 wordID:(unsigned int)arg3 recognitionScore:(double)arg4 combinedScore:(double)arg5 properties:(unsigned long long)arg6 substrokeCount:(long long)arg7;

- (double)combinedScore;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithString:(id)arg1 strokeIndexes:(id)arg2 wordID:(unsigned int)arg3 recognitionScore:(double)arg4 combinedScore:(double)arg5 properties:(unsigned long long)arg6 substrokeCount:(long long)arg7;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToTokenizedTextResultToken:(id)arg1;
- (bool)isEquivalentToToken:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)properties;
- (double)recognitionScore;
- (id)string;
- (id)strokeIndexes;
- (long long)substrokeCount;
- (unsigned int)wordID;

@end