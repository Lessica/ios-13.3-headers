/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORoadComplexity : PBCodable <NSCopying> {
    NSMutableArray * _attributes;
    struct { 
        unsigned int has_offset : 1; 
    }  _flags;
    unsigned int  _offset;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *attributes;
@property (nonatomic) bool hasOffset;
@property (nonatomic) unsigned int offset;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)attributeType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (void)addAttribute:(id)arg1;
- (id)attributeAtIndex:(unsigned long long)arg1;
- (id)attributes;
- (unsigned long long)attributesCount;
- (void)clearAttributes;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasOffset;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)offset;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAttributes:(id)arg1;
- (void)setHasOffset:(bool)arg1;
- (void)setOffset:(unsigned int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
