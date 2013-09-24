// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "PicoClassSchema.h"
#import "PicoPropertySchema.h"
#import "PicoConstants.h"
#import "PicoBindable.h"
#import "Finding_BaseServiceRequest.h"

// abstract class

@class Finding_Affiliate;
@class Finding_PaginationInput;

/**
 
 This is the base request container for all Finding Service operations.
 
 
 @ingroup FindingServicePortType
*/
@interface Finding_BestMatchFindingServiceRequest : Finding_BaseServiceRequest {

@private
    Finding_PaginationInput *_paginationInput;
    NSString *_buyerPostalCode;
    Finding_Affiliate *_affiliate;

}


/**
 
 Controls the pagination of the result set. Child elements specify the
 maximum number of item listings to return per call and the page of
 data to return. Controls the number of listings returned in the
 response, but does not specify the details to return for each
 listing.
 <br><br>
 <span class="tablenote"><strong>Note:</strong>
 No more than 10,000 items can be retrieved for a given search,
 regardless of how many matches are found. This limit is enforced
 by the maximum page number allowed (100) and the maximum entries per
 page allowed (100). </span>
 
 
 type : class Finding_PaginationInput
*/
@property (nonatomic, retain) Finding_PaginationInput *paginationInput;

/**
 
 The postal code of the buyer. This is used as the basis for proximity
 searches as well as local searches.
 <br><br>
 A proximity search requires <b
 class="con">buyerPostalCode</b> and a <b
 class="con">MaxDistance</b> item filter.
 A local search requires <b
 class="con">buyerPostalCode</b> and item filters for <b
 class="con">MaxDistance</b> and <b
 class="con">LocalSearch</b>.
 
 
 type : NSString, wrapper for primitive string
*/
@property (nonatomic, retain) NSString *buyerPostalCode;

/**
 
 Container for affiliate details. eBay uses the specified affiliate
 information to build a View Item URL and Product URL string with
 correctly formatted affiliate tracking information, which it returns
 in the response. You can publish these URLs, and if a user clicks
 them to access eBay, the respective affiliate might get a commission,
 depending on the user's actions.
 
 
 type : class Finding_Affiliate
*/
@property (nonatomic, retain) Finding_Affiliate *affiliate;


@end
