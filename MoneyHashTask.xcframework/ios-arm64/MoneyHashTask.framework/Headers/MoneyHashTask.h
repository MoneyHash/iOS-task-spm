#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class MHTBrandSettings, MHTKotlinEnumCompanion, MHTKotlinEnum<E>, MHTButtonStyle, MHTKotlinArray<T>, MHTField, MHTContent, MHTExpectedAction, MHTFieldButton, MHTValidation, MHTFieldEmail, MHTTextSize, MHTViewGravity, MHTFieldLabel, MHTFieldMethod, MHTFieldNumber, MHTFieldSpacer, MHTFieldTextInput, MHTRegexType, MHTErrorMessages, MHTNextAction, MHTValidationResult, MHTValidator, MHTScenariosData, MHTKotlinx_datetimeLocalDateTime, MHTKotlinThrowable, MHTKotlinx_datetimeMonth, MHTKotlinx_datetimeLocalDateTimeCompanion, MHTKotlinx_datetimeLocalDate, MHTKotlinx_datetimeDayOfWeek, MHTKotlinx_datetimeLocalDateCompanion, MHTKotlinx_serialization_coreSerializersModule, MHTKotlinx_serialization_coreSerialKind, MHTKotlinNothing;

@protocol MHTKotlinComparable, MHTKotlinIterator, MHTKotlinx_serialization_coreKSerializer, MHTKotlinx_serialization_coreEncoder, MHTKotlinx_serialization_coreSerialDescriptor, MHTKotlinx_serialization_coreSerializationStrategy, MHTKotlinx_serialization_coreDecoder, MHTKotlinx_serialization_coreDeserializationStrategy, MHTKotlinx_serialization_coreCompositeEncoder, MHTKotlinAnnotation, MHTKotlinx_serialization_coreCompositeDecoder, MHTKotlinx_serialization_coreSerializersModuleCollector, MHTKotlinKClass, MHTKotlinKDeclarationContainer, MHTKotlinKAnnotatedElement, MHTKotlinKClassifier;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface MHTBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface MHTBase (MHTBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface MHTMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface MHTMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorMHTKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface MHTNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinByte")))
@interface MHTByte : MHTNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface MHTUByte : MHTNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface MHTShort : MHTNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface MHTUShort : MHTNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface MHTInt : MHTNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface MHTUInt : MHTNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface MHTLong : MHTNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface MHTULong : MHTNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface MHTFloat : MHTNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface MHTDouble : MHTNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface MHTBoolean : MHTNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("BrandSettings")))
@interface MHTBrandSettings : MHTBase
- (instancetype)initWithBrandPrimaryColor:(NSString * _Nullable)brandPrimaryColor brandAccentColor:(NSString * _Nullable)brandAccentColor __attribute__((swift_name("init(brandPrimaryColor:brandAccentColor:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (MHTBrandSettings *)doCopyBrandPrimaryColor:(NSString * _Nullable)brandPrimaryColor brandAccentColor:(NSString * _Nullable)brandAccentColor __attribute__((swift_name("doCopy(brandPrimaryColor:brandAccentColor:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable brandAccentColor __attribute__((swift_name("brandAccentColor")));
@property (readonly) NSString * _Nullable brandPrimaryColor __attribute__((swift_name("brandPrimaryColor")));
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol MHTKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface MHTKotlinEnum<E> : MHTBase <MHTKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MHTKotlinEnumCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(E)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) int32_t ordinal __attribute__((swift_name("ordinal")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ButtonStyle")))
@interface MHTButtonStyle : MHTKotlinEnum<MHTButtonStyle *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MHTButtonStyle *primary __attribute__((swift_name("primary")));
@property (class, readonly) MHTButtonStyle *secondary __attribute__((swift_name("secondary")));
+ (MHTKotlinArray<MHTButtonStyle *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Content")))
@interface MHTContent : MHTBase
- (instancetype)initWithFields:(NSArray<MHTField *> *)fields brandSettings:(MHTBrandSettings * _Nullable)brandSettings __attribute__((swift_name("init(fields:brandSettings:)"))) __attribute__((objc_designated_initializer));
- (NSArray<MHTField *> *)component1 __attribute__((swift_name("component1()")));
- (MHTBrandSettings * _Nullable)component2 __attribute__((swift_name("component2()")));
- (MHTContent *)doCopyFields:(NSArray<MHTField *> *)fields brandSettings:(MHTBrandSettings * _Nullable)brandSettings __attribute__((swift_name("doCopy(fields:brandSettings:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MHTBrandSettings * _Nullable brandSettings __attribute__((swift_name("brandSettings")));
@property (readonly) NSArray<MHTField *> *fields __attribute__((swift_name("fields")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ErrorMessages")))
@interface MHTErrorMessages : MHTBase
- (instancetype)initWithRequiredState:(NSString *)requiredState nullState:(NSString *)nullState invalidState:(NSString *)invalidState blankState:(NSString *)blankState minValueState:(NSString *)minValueState maxValueState:(NSString *)maxValueState maxLengthState:(NSString *)maxLengthState minLengthState:(NSString *)minLengthState __attribute__((swift_name("init(requiredState:nullState:invalidState:blankState:minValueState:maxValueState:maxLengthState:minLengthState:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *blankState __attribute__((swift_name("blankState")));
@property (readonly) NSString *invalidState __attribute__((swift_name("invalidState")));
@property (readonly) NSString *maxLengthState __attribute__((swift_name("maxLengthState")));
@property (readonly) NSString *maxValueState __attribute__((swift_name("maxValueState")));
@property (readonly) NSString *minLengthState __attribute__((swift_name("minLengthState")));
@property (readonly) NSString *minValueState __attribute__((swift_name("minValueState")));
@property (readonly) NSString *nullState __attribute__((swift_name("nullState")));
@property (readonly) NSString *requiredState __attribute__((swift_name("requiredState")));
@end;

__attribute__((swift_name("Field")))
@interface MHTField : MHTBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Field.Button")))
@interface MHTFieldButton : MHTField
- (instancetype)initWithLabel:(NSString *)label style:(MHTButtonStyle *)style action:(MHTExpectedAction *)action __attribute__((swift_name("init(label:style:action:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (MHTButtonStyle *)component2 __attribute__((swift_name("component2()")));
- (MHTExpectedAction *)component3 __attribute__((swift_name("component3()")));
- (MHTFieldButton *)doCopyLabel:(NSString *)label style:(MHTButtonStyle *)style action:(MHTExpectedAction *)action __attribute__((swift_name("doCopy(label:style:action:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MHTExpectedAction *action __attribute__((swift_name("action")));
@property (readonly) NSString *label __attribute__((swift_name("label")));
@property (readonly) MHTButtonStyle *style __attribute__((swift_name("style")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Field.Email")))
@interface MHTFieldEmail : MHTField
- (instancetype)initWithLabel:(NSString *)label name:(NSString *)name helpText:(NSString * _Nullable)helpText value:(NSString * _Nullable)value isReadOnly:(BOOL)isReadOnly validation:(MHTValidation *)validation __attribute__((swift_name("init(label:name:helpText:value:isReadOnly:validation:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (BOOL)component5 __attribute__((swift_name("component5()")));
- (MHTValidation *)component6 __attribute__((swift_name("component6()")));
- (MHTFieldEmail *)doCopyLabel:(NSString *)label name:(NSString *)name helpText:(NSString * _Nullable)helpText value:(NSString * _Nullable)value isReadOnly:(BOOL)isReadOnly validation:(MHTValidation *)validation __attribute__((swift_name("doCopy(label:name:helpText:value:isReadOnly:validation:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable helpText __attribute__((swift_name("helpText")));
@property (readonly) BOOL isReadOnly __attribute__((swift_name("isReadOnly")));
@property (readonly) NSString *label __attribute__((swift_name("label")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) MHTValidation *validation __attribute__((swift_name("validation")));
@property (readonly) NSString * _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Field.Label")))
@interface MHTFieldLabel : MHTField
- (instancetype)initWithTitle:(NSString *)title textSize:(MHTTextSize *)textSize gravity:(MHTViewGravity *)gravity __attribute__((swift_name("init(title:textSize:gravity:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (MHTTextSize *)component2 __attribute__((swift_name("component2()")));
- (MHTViewGravity *)component3 __attribute__((swift_name("component3()")));
- (MHTFieldLabel *)doCopyTitle:(NSString *)title textSize:(MHTTextSize *)textSize gravity:(MHTViewGravity *)gravity __attribute__((swift_name("doCopy(title:textSize:gravity:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MHTViewGravity *gravity __attribute__((swift_name("gravity")));
@property (readonly) MHTTextSize *textSize __attribute__((swift_name("textSize")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Field.Method")))
@interface MHTFieldMethod : MHTField
- (instancetype)initWithLabel:(NSString *)label name:(NSString *)name icons:(NSArray<NSString *> *)icons isSelected:(BOOL)isSelected __attribute__((swift_name("init(label:name:icons:isSelected:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSArray<NSString *> *)component3 __attribute__((swift_name("component3()")));
- (BOOL)component4 __attribute__((swift_name("component4()")));
- (MHTFieldMethod *)doCopyLabel:(NSString *)label name:(NSString *)name icons:(NSArray<NSString *> *)icons isSelected:(BOOL)isSelected __attribute__((swift_name("doCopy(label:name:icons:isSelected:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<NSString *> *icons __attribute__((swift_name("icons")));
@property (readonly) BOOL isSelected __attribute__((swift_name("isSelected")));
@property (readonly) NSString *label __attribute__((swift_name("label")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Field.Number")))
@interface MHTFieldNumber : MHTField
- (instancetype)initWithLabel:(NSString *)label name:(NSString *)name helpText:(NSString * _Nullable)helpText value:(MHTInt * _Nullable)value isReadOnly:(BOOL)isReadOnly minValue:(MHTDouble * _Nullable)minValue maxValue:(MHTDouble * _Nullable)maxValue validation:(MHTValidation *)validation __attribute__((swift_name("init(label:name:helpText:value:isReadOnly:minValue:maxValue:validation:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (MHTInt * _Nullable)component4 __attribute__((swift_name("component4()")));
- (BOOL)component5 __attribute__((swift_name("component5()")));
- (MHTDouble * _Nullable)component6 __attribute__((swift_name("component6()")));
- (MHTDouble * _Nullable)component7 __attribute__((swift_name("component7()")));
- (MHTValidation *)component8 __attribute__((swift_name("component8()")));
- (MHTFieldNumber *)doCopyLabel:(NSString *)label name:(NSString *)name helpText:(NSString * _Nullable)helpText value:(MHTInt * _Nullable)value isReadOnly:(BOOL)isReadOnly minValue:(MHTDouble * _Nullable)minValue maxValue:(MHTDouble * _Nullable)maxValue validation:(MHTValidation *)validation __attribute__((swift_name("doCopy(label:name:helpText:value:isReadOnly:minValue:maxValue:validation:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable helpText __attribute__((swift_name("helpText")));
@property (readonly) BOOL isReadOnly __attribute__((swift_name("isReadOnly")));
@property (readonly) NSString *label __attribute__((swift_name("label")));
@property (readonly) MHTDouble * _Nullable maxValue __attribute__((swift_name("maxValue")));
@property (readonly) MHTDouble * _Nullable minValue __attribute__((swift_name("minValue")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) MHTValidation *validation __attribute__((swift_name("validation")));
@property (readonly) MHTInt * _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Field.Spacer")))
@interface MHTFieldSpacer : MHTField
- (instancetype)initWithHeight:(int32_t)height top:(int32_t)top bottom:(int32_t)bottom start:(int32_t)start end:(int32_t)end __attribute__((swift_name("init(height:top:bottom:start:end:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (int32_t)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (int32_t)component4 __attribute__((swift_name("component4()")));
- (int32_t)component5 __attribute__((swift_name("component5()")));
- (MHTFieldSpacer *)doCopyHeight:(int32_t)height top:(int32_t)top bottom:(int32_t)bottom start:(int32_t)start end:(int32_t)end __attribute__((swift_name("doCopy(height:top:bottom:start:end:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t bottom __attribute__((swift_name("bottom")));
@property (readonly) int32_t end __attribute__((swift_name("end")));
@property (readonly) int32_t height __attribute__((swift_name("height")));
@property (readonly) int32_t start __attribute__((swift_name("start")));
@property (readonly) int32_t top __attribute__((swift_name("top")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Field.TextInput")))
@interface MHTFieldTextInput : MHTField
- (instancetype)initWithLabel:(NSString *)label name:(NSString *)name helpText:(NSString * _Nullable)helpText value:(NSString * _Nullable)value isReadOnly:(BOOL)isReadOnly validation:(MHTValidation *)validation __attribute__((swift_name("init(label:name:helpText:value:isReadOnly:validation:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (NSString * _Nullable)component4 __attribute__((swift_name("component4()")));
- (BOOL)component5 __attribute__((swift_name("component5()")));
- (MHTValidation *)component6 __attribute__((swift_name("component6()")));
- (MHTFieldTextInput *)doCopyLabel:(NSString *)label name:(NSString *)name helpText:(NSString * _Nullable)helpText value:(NSString * _Nullable)value isReadOnly:(BOOL)isReadOnly validation:(MHTValidation *)validation __attribute__((swift_name("doCopy(label:name:helpText:value:isReadOnly:validation:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable helpText __attribute__((swift_name("helpText")));
@property (readonly) BOOL isReadOnly __attribute__((swift_name("isReadOnly")));
@property (readonly) NSString *label __attribute__((swift_name("label")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) MHTValidation *validation __attribute__((swift_name("validation")));
@property (readonly) NSString * _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("RegexType")))
@interface MHTRegexType : MHTKotlinEnum<MHTRegexType *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MHTRegexType *email __attribute__((swift_name("email")));
@property (class, readonly) MHTRegexType *phonenumber __attribute__((swift_name("phonenumber")));
@property (class, readonly) MHTRegexType *text __attribute__((swift_name("text")));
@property (class, readonly) MHTRegexType *number __attribute__((swift_name("number")));
@property (class, readonly) MHTRegexType *integer __attribute__((swift_name("integer")));
@property (class, readonly) MHTRegexType *choice __attribute__((swift_name("choice")));
@property (class, readonly) MHTRegexType *boolean __attribute__((swift_name("boolean")));
+ (MHTKotlinArray<MHTRegexType *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("TextSize")))
@interface MHTTextSize : MHTKotlinEnum<MHTTextSize *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MHTTextSize *small __attribute__((swift_name("small")));
@property (class, readonly) MHTTextSize *medium __attribute__((swift_name("medium")));
@property (class, readonly) MHTTextSize *large __attribute__((swift_name("large")));
+ (MHTKotlinArray<MHTTextSize *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Validation")))
@interface MHTValidation : MHTBase
- (instancetype)initWithMinLength:(MHTInt * _Nullable)minLength maxLength:(MHTInt * _Nullable)maxLength minValue:(MHTDouble * _Nullable)minValue maxValue:(MHTDouble * _Nullable)maxValue isRequired:(BOOL)isRequired regex:(MHTRegexType *)regex errorMessages:(MHTErrorMessages * _Nullable)errorMessages __attribute__((swift_name("init(minLength:maxLength:minValue:maxValue:isRequired:regex:errorMessages:)"))) __attribute__((objc_designated_initializer));
@property (readonly) MHTErrorMessages * _Nullable errorMessages __attribute__((swift_name("errorMessages")));
@property (readonly) BOOL isRequired __attribute__((swift_name("isRequired")));
@property (readonly) MHTInt * _Nullable maxLength __attribute__((swift_name("maxLength")));
@property (readonly) MHTDouble * _Nullable maxValue __attribute__((swift_name("maxValue")));
@property (readonly) MHTInt * _Nullable minLength __attribute__((swift_name("minLength")));
@property (readonly) MHTDouble * _Nullable minValue __attribute__((swift_name("minValue")));
@property (readonly) MHTRegexType *regex __attribute__((swift_name("regex")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ViewGravity")))
@interface MHTViewGravity : MHTKotlinEnum<MHTViewGravity *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MHTViewGravity *start __attribute__((swift_name("start")));
@property (class, readonly) MHTViewGravity *center __attribute__((swift_name("center")));
@property (class, readonly) MHTViewGravity *end __attribute__((swift_name("end")));
+ (MHTKotlinArray<MHTViewGravity *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ExpectedAction")))
@interface MHTExpectedAction : MHTKotlinEnum<MHTExpectedAction *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MHTExpectedAction *submit __attribute__((swift_name("submit")));
+ (MHTKotlinArray<MHTExpectedAction *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((swift_name("NextAction")))
@interface MHTNextAction : MHTBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NextAction.Initial")))
@interface MHTNextActionInitial : MHTNextAction
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NextAction.SubmitPaymentForm")))
@interface MHTNextActionSubmitPaymentForm : MHTNextAction
- (instancetype)initWithForm:(NSDictionary<NSString *, id> *)form selectedMethod:(NSString *)selectedMethod __attribute__((swift_name("init(form:selectedMethod:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (readonly) NSDictionary<NSString *, id> *form __attribute__((swift_name("form")));
@property (readonly) NSString *selectedMethod __attribute__((swift_name("selectedMethod")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NextAction.UpdateMethod")))
@interface MHTNextActionUpdateMethod : MHTNextAction
- (instancetype)initWithMethodName:(NSString *)methodName __attribute__((swift_name("init(methodName:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
@property (readonly) NSString *methodName __attribute__((swift_name("methodName")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ValidationResult")))
@interface MHTValidationResult : MHTBase
- (instancetype)initWithIsValid:(BOOL)isValid errorMessage:(NSString * _Nullable)errorMessage __attribute__((swift_name("init(isValid:errorMessage:)"))) __attribute__((objc_designated_initializer));
- (BOOL)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (MHTValidationResult *)doCopyIsValid:(BOOL)isValid errorMessage:(NSString * _Nullable)errorMessage __attribute__((swift_name("doCopy(isValid:errorMessage:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString * _Nullable errorMessage __attribute__((swift_name("errorMessage")));
@property (readonly) BOOL isValid __attribute__((swift_name("isValid")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Validator")))
@interface MHTValidator : MHTBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)validator __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MHTValidator *shared __attribute__((swift_name("shared")));
- (MHTValidationResult *)validateValidation:(MHTValidation *)validation content:(NSString *)content __attribute__((swift_name("validate(validation:content:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PaymentActionsManger")))
@interface MHTPaymentActionsManger : MHTBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));

/**
 @note This method converts all Kotlin exceptions to errors.
*/
- (void)handleActionNextAction:(MHTNextAction *)nextAction completionHandler:(void (^)(MHTContent * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("handleAction(nextAction:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ScenariosData")))
@interface MHTScenariosData : MHTBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)scenariosData __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MHTScenariosData *shared __attribute__((swift_name("shared")));
- (MHTBrandSettings *)getBrandSettings __attribute__((swift_name("getBrandSettings()")));
- (NSArray<MHTField *> *)getFinalFormData __attribute__((swift_name("getFinalFormData()")));
- (NSArray<MHTField *> *)getInitialFlowData __attribute__((swift_name("getInitialFlowData()")));
- (NSMutableArray<MHTField *> *)getMethodDataSelectedMethod:(NSString *)selectedMethod __attribute__((swift_name("getMethodData(selectedMethod:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommonExtensionsKt")))
@interface MHTCommonExtensionsKt : MHTBase
+ (BOOL)isNumeric:(NSString *)receiver __attribute__((swift_name("isNumeric(_:)")));
+ (BOOL)isValidEmail:(NSString *)receiver __attribute__((swift_name("isValidEmail(_:)")));
+ (BOOL)isValidPhoneFormat:(NSString *)receiver __attribute__((swift_name("isValidPhoneFormat(_:)")));
+ (double)orMaxValue:(MHTDouble * _Nullable)receiver __attribute__((swift_name("orMaxValue(_:)")));
+ (int32_t)orMaxValue_:(MHTInt * _Nullable)receiver __attribute__((swift_name("orMaxValue(__:)")));
+ (int64_t)orMaxValue__:(MHTLong * _Nullable)receiver __attribute__((swift_name("orMaxValue(___:)")));
+ (double)orZero:(MHTDouble * _Nullable)receiver __attribute__((swift_name("orZero(_:)")));
+ (int32_t)orZero_:(MHTInt * _Nullable)receiver __attribute__((swift_name("orZero(__:)")));
+ (int64_t)orZero__:(MHTLong * _Nullable)receiver __attribute__((swift_name("orZero(___:)")));
+ (MHTKotlinx_datetimeLocalDateTime *)toLocalDateTime:(NSString *)receiver __attribute__((swift_name("toLocalDateTime(_:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinEnumCompanion")))
@interface MHTKotlinEnumCompanion : MHTBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MHTKotlinEnumCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface MHTKotlinArray<T> : MHTBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(MHTInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<MHTKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface MHTKotlinThrowable : MHTBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(MHTKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(MHTKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (MHTKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MHTKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeLocalDateTime")))
@interface MHTKotlinx_datetimeLocalDateTime : MHTBase <MHTKotlinComparable>
- (instancetype)initWithYear:(int32_t)year monthNumber:(int32_t)monthNumber dayOfMonth:(int32_t)dayOfMonth hour:(int32_t)hour minute:(int32_t)minute second:(int32_t)second nanosecond:(int32_t)nanosecond __attribute__((swift_name("init(year:monthNumber:dayOfMonth:hour:minute:second:nanosecond:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithYear:(int32_t)year month:(MHTKotlinx_datetimeMonth *)month dayOfMonth:(int32_t)dayOfMonth hour:(int32_t)hour minute:(int32_t)minute second:(int32_t)second nanosecond:(int32_t)nanosecond __attribute__((swift_name("init(year:month:dayOfMonth:hour:minute:second:nanosecond:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MHTKotlinx_datetimeLocalDateTimeCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(MHTKotlinx_datetimeLocalDateTime *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) MHTKotlinx_datetimeLocalDate *date __attribute__((swift_name("date")));
@property (readonly) int32_t dayOfMonth __attribute__((swift_name("dayOfMonth")));
@property (readonly) MHTKotlinx_datetimeDayOfWeek *dayOfWeek __attribute__((swift_name("dayOfWeek")));
@property (readonly) int32_t dayOfYear __attribute__((swift_name("dayOfYear")));
@property (readonly) int32_t hour __attribute__((swift_name("hour")));
@property (readonly) int32_t minute __attribute__((swift_name("minute")));
@property (readonly) MHTKotlinx_datetimeMonth *month __attribute__((swift_name("month")));
@property (readonly) int32_t monthNumber __attribute__((swift_name("monthNumber")));
@property (readonly) int32_t nanosecond __attribute__((swift_name("nanosecond")));
@property (readonly) int32_t second __attribute__((swift_name("second")));
@property (readonly) int32_t year __attribute__((swift_name("year")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol MHTKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeMonth")))
@interface MHTKotlinx_datetimeMonth : MHTKotlinEnum<MHTKotlinx_datetimeMonth *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MHTKotlinx_datetimeMonth *january __attribute__((swift_name("january")));
@property (class, readonly) MHTKotlinx_datetimeMonth *february __attribute__((swift_name("february")));
@property (class, readonly) MHTKotlinx_datetimeMonth *march __attribute__((swift_name("march")));
@property (class, readonly) MHTKotlinx_datetimeMonth *april __attribute__((swift_name("april")));
@property (class, readonly) MHTKotlinx_datetimeMonth *may __attribute__((swift_name("may")));
@property (class, readonly) MHTKotlinx_datetimeMonth *june __attribute__((swift_name("june")));
@property (class, readonly) MHTKotlinx_datetimeMonth *july __attribute__((swift_name("july")));
@property (class, readonly) MHTKotlinx_datetimeMonth *august __attribute__((swift_name("august")));
@property (class, readonly) MHTKotlinx_datetimeMonth *september __attribute__((swift_name("september")));
@property (class, readonly) MHTKotlinx_datetimeMonth *october __attribute__((swift_name("october")));
@property (class, readonly) MHTKotlinx_datetimeMonth *november __attribute__((swift_name("november")));
@property (class, readonly) MHTKotlinx_datetimeMonth *december __attribute__((swift_name("december")));
+ (MHTKotlinArray<MHTKotlinx_datetimeMonth *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeLocalDateTime.Companion")))
@interface MHTKotlinx_datetimeLocalDateTimeCompanion : MHTBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MHTKotlinx_datetimeLocalDateTimeCompanion *shared __attribute__((swift_name("shared")));
- (MHTKotlinx_datetimeLocalDateTime *)parseIsoString:(NSString *)isoString __attribute__((swift_name("parse(isoString:)")));
- (id<MHTKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeLocalDate")))
@interface MHTKotlinx_datetimeLocalDate : MHTBase <MHTKotlinComparable>
- (instancetype)initWithYear:(int32_t)year month:(MHTKotlinx_datetimeMonth *)month dayOfMonth:(int32_t)dayOfMonth __attribute__((swift_name("init(year:month:dayOfMonth:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithYear:(int32_t)year monthNumber:(int32_t)monthNumber dayOfMonth:(int32_t)dayOfMonth __attribute__((swift_name("init(year:monthNumber:dayOfMonth:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) MHTKotlinx_datetimeLocalDateCompanion *companion __attribute__((swift_name("companion")));
- (int32_t)compareToOther:(MHTKotlinx_datetimeLocalDate *)other __attribute__((swift_name("compareTo(other:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) int32_t dayOfMonth __attribute__((swift_name("dayOfMonth")));
@property (readonly) MHTKotlinx_datetimeDayOfWeek *dayOfWeek __attribute__((swift_name("dayOfWeek")));
@property (readonly) int32_t dayOfYear __attribute__((swift_name("dayOfYear")));
@property (readonly) MHTKotlinx_datetimeMonth *month __attribute__((swift_name("month")));
@property (readonly) int32_t monthNumber __attribute__((swift_name("monthNumber")));
@property (readonly) int32_t year __attribute__((swift_name("year")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeDayOfWeek")))
@interface MHTKotlinx_datetimeDayOfWeek : MHTKotlinEnum<MHTKotlinx_datetimeDayOfWeek *>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (class, readonly) MHTKotlinx_datetimeDayOfWeek *monday __attribute__((swift_name("monday")));
@property (class, readonly) MHTKotlinx_datetimeDayOfWeek *tuesday __attribute__((swift_name("tuesday")));
@property (class, readonly) MHTKotlinx_datetimeDayOfWeek *wednesday __attribute__((swift_name("wednesday")));
@property (class, readonly) MHTKotlinx_datetimeDayOfWeek *thursday __attribute__((swift_name("thursday")));
@property (class, readonly) MHTKotlinx_datetimeDayOfWeek *friday __attribute__((swift_name("friday")));
@property (class, readonly) MHTKotlinx_datetimeDayOfWeek *saturday __attribute__((swift_name("saturday")));
@property (class, readonly) MHTKotlinx_datetimeDayOfWeek *sunday __attribute__((swift_name("sunday")));
+ (MHTKotlinArray<MHTKotlinx_datetimeDayOfWeek *> *)values __attribute__((swift_name("values()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol MHTKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<MHTKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<MHTKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol MHTKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<MHTKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<MHTKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol MHTKotlinx_serialization_coreKSerializer <MHTKotlinx_serialization_coreSerializationStrategy, MHTKotlinx_serialization_coreDeserializationStrategy>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_datetimeLocalDate.Companion")))
@interface MHTKotlinx_datetimeLocalDateCompanion : MHTBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) MHTKotlinx_datetimeLocalDateCompanion *shared __attribute__((swift_name("shared")));
- (MHTKotlinx_datetimeLocalDate *)parseIsoString:(NSString *)isoString __attribute__((swift_name("parse(isoString:)")));
- (id<MHTKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol MHTKotlinx_serialization_coreEncoder
@required
- (id<MHTKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<MHTKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<MHTKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<MHTKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<MHTKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<MHTKotlinx_serialization_coreEncoder>)encodeInlineInlineDescriptor:(id<MHTKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("encodeInline(inlineDescriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableValueSerializer:(id<MHTKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<MHTKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) MHTKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol MHTKotlinx_serialization_coreSerialDescriptor
@required
- (NSArray<id<MHTKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<MHTKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) NSArray<id<MHTKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) MHTKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol MHTKotlinx_serialization_coreDecoder
@required
- (id<MHTKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<MHTKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<MHTKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<MHTKotlinx_serialization_coreDecoder>)decodeInlineInlineDescriptor:(id<MHTKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("decodeInline(inlineDescriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (MHTKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<MHTKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<MHTKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) MHTKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol MHTKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<MHTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<MHTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<MHTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<MHTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<MHTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<MHTKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<MHTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<MHTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<MHTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));
- (void)encodeNullableSerializableElementDescriptor:(id<MHTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<MHTKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<MHTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<MHTKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<MHTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<MHTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<MHTKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<MHTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) MHTKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface MHTKotlinx_serialization_coreSerializersModule : MHTBase
- (void)dumpToCollector:(id<MHTKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));
- (id<MHTKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<MHTKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<MHTKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));
- (id<MHTKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<MHTKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));
- (id<MHTKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<MHTKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end;

__attribute__((swift_name("KotlinAnnotation")))
@protocol MHTKotlinAnnotation
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface MHTKotlinx_serialization_coreSerialKind : MHTBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol MHTKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<MHTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<MHTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<MHTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<MHTKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<MHTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<MHTKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<MHTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<MHTKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<MHTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<MHTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<MHTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<MHTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<MHTKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<MHTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<MHTKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<MHTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<MHTKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<MHTKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) MHTKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface MHTKotlinNothing : MHTBase
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol MHTKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<MHTKotlinKClass>)kClass provider:(id<MHTKotlinx_serialization_coreKSerializer> (^)(NSArray<id<MHTKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<MHTKotlinKClass>)kClass serializer:(id<MHTKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<MHTKotlinKClass>)baseClass actualClass:(id<MHTKotlinKClass>)actualClass actualSerializer:(id<MHTKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<MHTKotlinKClass>)baseClass defaultSerializerProvider:(id<MHTKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultSerializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultSerializerProvider:)")));
@end;

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol MHTKotlinKDeclarationContainer
@required
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol MHTKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol MHTKotlinKClassifier
@required
@end;

__attribute__((swift_name("KotlinKClass")))
@protocol MHTKotlinKClass <MHTKotlinKDeclarationContainer, MHTKotlinKAnnotatedElement, MHTKotlinKClassifier>
@required
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end;

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
