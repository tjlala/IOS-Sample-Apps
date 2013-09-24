// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"


@class Price;

/**
 (public class)
 
 @ingroup AWSECommerceServicePortType
*/
@interface OfferSummary : NSObject <PicoBindable> {

@private
    Price *_lowestNewPrice;
    Price *_lowestUsedPrice;
    Price *_lowestCollectiblePrice;
    Price *_lowestRefurbishedPrice;
    NSString *_totalNew;
    NSString *_totalUsed;
    NSString *_totalCollectible;
    NSString *_totalRefurbished;

}


/**
 (public property)
 
 type : class Price
*/
@property (nonatomic, retain) Price *lowestNewPrice;

/**
 (public property)
 
 type : class Price
*/
@property (nonatomic, retain) Price *lowestUsedPrice;

/**
 (public property)
 
 type : class Price
*/
@property (nonatomic, retain) Price *lowestCollectiblePrice;

/**
 (public property)
 
 type : class Price
*/
@property (nonatomic, retain) Price *lowestRefurbishedPrice;

/**
 (public property)
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *totalNew;

/**
 (public property)
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *totalUsed;

/**
 (public property)
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *totalCollectible;

/**
 (public property)
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *totalRefurbished;


@end
