// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"



/**
 
 eBay uses specified details to build a View Item URL and Product URL string
 in the response. These URLs include correctly formatted affiliate tracking
 information. When a user clicks through one of these URLs to eBay, the
 respective affiliate might get a commission, based on the tasks performed by
 the user.
 
 
 @ingroup FindingServicePortType
*/
@interface Finding_Affiliate : NSObject <PicoBindable> {

@private
    NSString *_trackingId;
    NSString *_networkId;
    NSString *_customId;
    NSNumber *_geoTargeting;
    NSString *_delimiter;
    NSMutableArray *_any;

}


/**
 
 Specify the affiliate value obtained from your tracking partner. For the
 eBay Partner Network, the tracking ID is the provided Campaign ID
 ("campid"). A Campaign ID is a unique 10-digit number used for
 associating traffic and is valid across all programs to which you have
 been accepted. Another example of this value is the Affiliate ID given to
 you by TradeDoubler.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *trackingId;

/**
 
 Specifies your tracking partner for affiliate commissions. Affiliates
 earn money from eBay for driving traffic to eBay. This field is required
 if you specify a tracking ID. Depending on your tracking partner, specify
 one of the following values. Not all partners are valid for all sites.
 For PlaceOffer, only the eBay Partner Network and Mediaplex are valid:
 <br>
 <br>2 = Be Free
 <br>3 = Affilinet
 <br>4 = TradeDoubler
 <br>5 = Mediaplex
 <br>6 = DoubleClick
 <br>7 = Allyes
 <br>8 = BJMT
 <br>9 = eBay Partner Network
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *networkId;

/**
 
 You can define an affiliate customId if you want an ID to monitor your
 marketing efforts. Chose an ID up to up to 256 characters in length. If
 you are using the eBay Partner Network, and you provide a customId, the
 tracking URL returned by the eBay Partner Network will contain your
 customId value.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *customId;

/**
 
 The geoTargeting parameter will be used for geographical targeting your
 affiliate programs. The geo-targeting feature works for English speaking
 countries (US, UK, CA, AU, and IE) only.
 
 
 type : NSNumber, wrapper for primitive bool
*/
@property (nonatomic, retain) NSNumber *geoTargeting;

/**
 (public property)
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *delimiter;

/**
 (public property)
 
 entry type : PicoAnyElement, wrapper for primitive anyelement
*/

@property (nonatomic, retain) NSMutableArray *any;


@end
