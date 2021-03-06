/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

@interface NBPhoneNumberUtil : NSObject {
    NSRegularExpression * _CAPTURING_DIGIT_PATTERN;
    NSRegularExpression * _PLUS_CHARS_PATTERN;
    NSRegularExpression * _VALID_ALPHA_PHONE_PATTERN;
    NSLock * _entireStringCacheLock;
    NSMutableDictionary * _entireStringRegexCache;
    NSMutableDictionary * _i18nNumberFormat;
    NSMutableDictionary * _i18nPhoneMetadata;
    NSMutableDictionary * _i18nPhoneNumberDesc;
    NSBundle * _libPhoneBundle;
    NSLock * _lockPatternCache;
    NSMutableDictionary * _regexPatternCache;
    CTTelephonyNetworkInfo * _telephonyNetworkInfo;
}

@property (nonatomic, retain) NSRegularExpression *CAPTURING_DIGIT_PATTERN;
@property (nonatomic, readonly) NSDictionary *DIGIT_MAPPINGS;
@property (nonatomic, retain) NSRegularExpression *PLUS_CHARS_PATTERN;
@property (nonatomic, retain) NSRegularExpression *VALID_ALPHA_PHONE_PATTERN;
@property (nonatomic, retain) NSLock *entireStringCacheLock;
@property (nonatomic, retain) NSMutableDictionary *entireStringRegexCache;
@property (nonatomic, retain) NSMutableDictionary *i18nNumberFormat;
@property (nonatomic, retain) NSMutableDictionary *i18nPhoneMetadata;
@property (nonatomic, retain) NSMutableDictionary *i18nPhoneNumberDesc;
@property (nonatomic, readonly) NSBundle *libPhoneBundle;
@property (nonatomic, retain) NSLock *lockPatternCache;
@property (nonatomic, retain) NSMutableDictionary *regexPatternCache;
@property (nonatomic, retain) CTTelephonyNetworkInfo *telephonyNetworkInfo;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)CAPTURING_DIGIT_PATTERN;
- (id)DIGIT_MAPPINGS;
- (id)PLUS_CHARS_PATTERN;
- (id)VALID_ALPHA_PHONE_PATTERN;
- (void)buildNationalNumberForParsing:(id)arg1 nationalNumber:(id*)arg2;
- (bool)canBeInternationallyDialled:(id)arg1;
- (bool)canBeInternationallyDialled:(id)arg1 error:(id*)arg2;
- (bool)checkRegionForParsing:(id)arg1 defaultRegion:(id)arg2;
- (id)chooseFormattingPatternForNumber:(id)arg1 nationalNumber:(id)arg2;
- (id)componentsSeparatedByRegex:(id)arg1 regex:(id)arg2;
- (id)convertAlphaCharactersInNumber:(id)arg1;
- (id)countryCodeByCarrier;
- (id)entireRegularExpressionWithPattern:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (id)entireStringCacheLock;
- (id)entireStringRegexCache;
- (id)errorWithObject:(id)arg1 withDomain:(id)arg2;
- (id)extractCountryCode:(id)arg1 nationalNumber:(id*)arg2;
- (id)extractPossibleNumber:(id)arg1;
- (id)format:(id)arg1 numberFormat:(int)arg2;
- (id)format:(id)arg1 numberFormat:(int)arg2 error:(id*)arg3;
- (id)formatByPattern:(id)arg1 numberFormat:(int)arg2 userDefinedFormats:(id)arg3;
- (id)formatByPattern:(id)arg1 numberFormat:(int)arg2 userDefinedFormats:(id)arg3 error:(id*)arg4;
- (id)formatInOriginalFormat:(id)arg1 regionCallingFrom:(id)arg2;
- (id)formatInOriginalFormat:(id)arg1 regionCallingFrom:(id)arg2 error:(id*)arg3;
- (id)formatNationalNumberWithCarrierCode:(id)arg1 carrierCode:(id)arg2;
- (id)formatNationalNumberWithCarrierCode:(id)arg1 carrierCode:(id)arg2 error:(id*)arg3;
- (id)formatNationalNumberWithPreferredCarrierCode:(id)arg1 fallbackCarrierCode:(id)arg2;
- (id)formatNationalNumberWithPreferredCarrierCode:(id)arg1 fallbackCarrierCode:(id)arg2 error:(id*)arg3;
- (id)formatNsn:(id)arg1 metadata:(id)arg2 phoneNumberFormat:(int)arg3 carrierCode:(id)arg4;
- (id)formatNsnUsingPattern:(id)arg1 formattingPattern:(id)arg2 numberFormat:(int)arg3 carrierCode:(id)arg4;
- (id)formatNumberForMobileDialing:(id)arg1 regionCallingFrom:(id)arg2 withFormatting:(bool)arg3;
- (id)formatNumberForMobileDialing:(id)arg1 regionCallingFrom:(id)arg2 withFormatting:(bool)arg3 error:(id*)arg4;
- (id)formatOutOfCountryCallingNumber:(id)arg1 regionCallingFrom:(id)arg2;
- (id)formatOutOfCountryCallingNumber:(id)arg1 regionCallingFrom:(id)arg2 error:(id*)arg3;
- (id)formatOutOfCountryKeepingAlphaChars:(id)arg1 regionCallingFrom:(id)arg2;
- (id)formatOutOfCountryKeepingAlphaChars:(id)arg1 regionCallingFrom:(id)arg2 error:(id*)arg3;
- (bool)formattingRuleHasFirstGroupOnly:(id)arg1;
- (id)getCountryCodeForRegion:(id)arg1;
- (id)getCountryCodeForValidRegion:(id)arg1 error:(id*)arg2;
- (id)getExampleNumber:(id)arg1 error:(id*)arg2;
- (id)getExampleNumberForNonGeoEntity:(id)arg1 error:(id*)arg2;
- (id)getExampleNumberForType:(id)arg1 type:(int)arg2 error:(id*)arg3;
- (int)getLengthOfGeographicalAreaCode:(id)arg1;
- (int)getLengthOfGeographicalAreaCode:(id)arg1 error:(id*)arg2;
- (int)getLengthOfNationalDestinationCode:(id)arg1;
- (int)getLengthOfNationalDestinationCode:(id)arg1 error:(id*)arg2;
- (id)getMetadataForRegionOrCallingCode:(id)arg1 regionCode:(id)arg2;
- (id)getNationalSignificantNumber:(id)arg1;
- (id)getNddPrefixForRegion:(id)arg1 stripNonDigits:(bool)arg2;
- (id)getNumberDescByType:(id)arg1 type:(int)arg2;
- (int)getNumberType:(id)arg1;
- (int)getNumberTypeHelper:(id)arg1 metadata:(id)arg2;
- (id)getRegionCodeForCountryCode:(id)arg1;
- (id)getRegionCodeForNumber:(id)arg1;
- (id)getRegionCodeForNumberFromRegionList:(id)arg1 regionCodes:(id)arg2;
- (id)getRegionCodesForCountryCode:(id)arg1;
- (id)getSupportedRegions;
- (bool)hasFormattingPatternForNumber:(id)arg1;
- (bool)hasUnexpectedItalianLeadingZero:(id)arg1;
- (bool)hasValidCountryCallingCode:(id)arg1;
- (id)i18nNumberFormat;
- (id)i18nPhoneMetadata;
- (id)i18nPhoneNumberDesc;
- (int)indexOfStringByString:(id)arg1 target:(id)arg2;
- (id)init;
- (void)initNormalizationMappings;
- (void)initRegularExpressionSet;
- (bool)isAllDigits:(id)arg1;
- (bool)isAlphaNumber:(id)arg1;
- (bool)isLeadingZeroPossible:(id)arg1;
- (bool)isNANPACountry:(id)arg1;
- (bool)isNaN:(id)arg1;
- (bool)isNationalNumberSuffixOfTheOther:(id)arg1 second:(id)arg2;
- (bool)isNumberGeographical:(id)arg1;
- (int)isNumberMatch:(id)arg1 second:(id)arg2;
- (int)isNumberMatch:(id)arg1 second:(id)arg2 error:(id*)arg3;
- (bool)isNumberMatchingDesc:(id)arg1 numberDesc:(id)arg2;
- (bool)isNumeric:(id)arg1;
- (bool)isPossibleNumber:(id)arg1;
- (bool)isPossibleNumber:(id)arg1 error:(id*)arg2;
- (bool)isPossibleNumberString:(id)arg1 regionDialingFrom:(id)arg2 error:(id*)arg3;
- (int)isPossibleNumberWithReason:(id)arg1;
- (int)isPossibleNumberWithReason:(id)arg1 error:(id*)arg2;
- (bool)isStartingStringByRegex:(id)arg1 regex:(id)arg2;
- (bool)isValidNumber:(id)arg1;
- (bool)isValidNumberForRegion:(id)arg1 regionCode:(id)arg2;
- (bool)isValidRegionCode:(id)arg1;
- (bool)isViablePhoneNumber:(id)arg1;
- (id)libPhoneBundle;
- (id)lockPatternCache;
- (id)matcheFirstByRegex:(id)arg1 regex:(id)arg2;
- (id)matchedStringByRegex:(id)arg1 regex:(id)arg2;
- (id)matchesByRegex:(id)arg1 regex:(id)arg2;
- (bool)matchesEntirely:(id)arg1 string:(id)arg2;
- (id)maybeExtractCountryCode:(id)arg1 metadata:(id)arg2 nationalNumber:(id*)arg3 keepRawInput:(bool)arg4 phoneNumber:(id*)arg5 error:(id*)arg6;
- (id)maybeGetFormattedExtension:(id)arg1 metadata:(id)arg2 numberFormat:(int)arg3;
- (id)maybeStripExtension:(id*)arg1;
- (int)maybeStripInternationalPrefixAndNormalize:(id*)arg1 possibleIddPrefix:(id)arg2;
- (bool)maybeStripNationalPrefixAndCarrierCode:(id*)arg1 metadata:(id)arg2 carrierCode:(id*)arg3;
- (id)normalizeDigitsOnly:(id)arg1;
- (id)normalizeHelper:(id)arg1 normalizationReplacements:(id)arg2 removeNonMatches:(bool)arg3;
- (id)normalizePhoneNumber:(id)arg1;
- (void)normalizeSB:(id*)arg1;
- (id)parse:(id)arg1 defaultRegion:(id)arg2 error:(id*)arg3;
- (id)parseAndKeepRawInput:(id)arg1 defaultRegion:(id)arg2 error:(id*)arg3;
- (id)parseHelper:(id)arg1 defaultRegion:(id)arg2 keepRawInput:(bool)arg3 checkRegion:(bool)arg4 error:(id*)arg5;
- (bool)parsePrefixAsIdd:(id)arg1 sourceString:(id*)arg2;
- (id)parseWithPhoneCarrierRegion:(id)arg1 error:(id*)arg2;
- (id)prefixNumberWithCountryCallingCode:(id)arg1 phoneNumberFormat:(int)arg2 formattedNationalNumber:(id)arg3 formattedExtension:(id)arg4;
- (bool)rawInputContainsNationalPrefix:(id)arg1 nationalPrefix:(id)arg2 regionCode:(id)arg3;
- (id)regexPatternCache;
- (id)regularExpressionWithPattern:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (id)replaceFirstStringByRegex:(id)arg1 regex:(id)arg2 withTemplate:(id)arg3;
- (id)replaceStringByRegex:(id)arg1 regex:(id)arg2 withTemplate:(id)arg3;
- (void)setCAPTURING_DIGIT_PATTERN:(id)arg1;
- (void)setEntireStringCacheLock:(id)arg1;
- (void)setEntireStringRegexCache:(id)arg1;
- (void)setI18nNumberFormat:(id)arg1;
- (void)setI18nPhoneMetadata:(id)arg1;
- (void)setI18nPhoneNumberDesc:(id)arg1;
- (void)setLockPatternCache:(id)arg1;
- (void)setPLUS_CHARS_PATTERN:(id)arg1;
- (void)setRegexPatternCache:(id)arg1;
- (void)setTelephonyNetworkInfo:(id)arg1;
- (void)setVALID_ALPHA_PHONE_PATTERN:(id)arg1;
- (id)stringByReplacingOccurrencesString:(id)arg1 withMap:(id)arg2 removeNonMatches:(bool)arg3;
- (int)stringPositionByRegex:(id)arg1 regex:(id)arg2;
- (id)telephonyNetworkInfo;
- (int)testNumberLengthAgainstPattern:(id)arg1 number:(id)arg2;
- (bool)truncateTooLongNumber:(id)arg1;

@end
