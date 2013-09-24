// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import "Shopping_MinimumAdvertisedPriceExposureCodeType.h"

/**
 @file
 
 Defines how the buyer is to view the discounted price for MAP items. If a seller offers an item
 for less than the item's agreed upon Minimum Advertised Price (MAP), the discounted price of the
 item cannot be displayed on the page containing the item.
 
*/

/**
 
 PreCheckout specifies that the buyer must click a link (or a button) to navigate to a separate
 page (or window) that displays the discount price.
 
*/
NSString *const Shopping_MinimumAdvertisedPriceExposureCodeType_PRE_CHECKOUT = @"PreCheckout";

/**
 
 DuringCheckout specifies that the discounted price must be shown on the eBay checkout
 flow page.
 
*/
NSString *const Shopping_MinimumAdvertisedPriceExposureCodeType_DURING_CHECKOUT = @"DuringCheckout";

/**
 
 None means the discount price is not shown via either PreCheckout nor DuringCheckout.
 
*/
NSString *const Shopping_MinimumAdvertisedPriceExposureCodeType_NONE = @"None";

/**
 
 Reserved for future use.
 
*/
NSString *const Shopping_MinimumAdvertisedPriceExposureCodeType_CUSTOM_CODE = @"CustomCode";
