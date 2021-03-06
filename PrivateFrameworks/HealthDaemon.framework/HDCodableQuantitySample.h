/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCodableQuantitySample : PBCodable <NSCopying> {
    struct { 
        unsigned int valueInCanonicalUnit : 1; 
        unsigned int valueInOriginalUnit : 1; 
    } _has;
    NSString *_originalUnitString;
    HDCodableSample *_sample;
    double _valueInCanonicalUnit;
    double _valueInOriginalUnit;
}

@property (nonatomic, readonly) BOOL hasOriginalUnitString;
@property (nonatomic, readonly) BOOL hasSample;
@property (nonatomic) BOOL hasValueInCanonicalUnit;
@property (nonatomic) BOOL hasValueInOriginalUnit;
@property (nonatomic, retain) NSString *originalUnitString;
@property (nonatomic, retain) HDCodableSample *sample;
@property (nonatomic) double valueInCanonicalUnit;
@property (nonatomic) double valueInOriginalUnit;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasOriginalUnitString;
- (BOOL)hasSample;
- (BOOL)hasValueInCanonicalUnit;
- (BOOL)hasValueInOriginalUnit;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)originalUnitString;
- (BOOL)readFrom:(id)arg1;
- (id)sample;
- (void)setHasValueInCanonicalUnit:(BOOL)arg1;
- (void)setHasValueInOriginalUnit:(BOOL)arg1;
- (void)setOriginalUnitString:(id)arg1;
- (void)setSample:(id)arg1;
- (void)setValueInCanonicalUnit:(double)arg1;
- (void)setValueInOriginalUnit:(double)arg1;
- (double)valueInCanonicalUnit;
- (double)valueInOriginalUnit;
- (void)writeTo:(id)arg1;

@end
