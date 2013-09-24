// Generated by wsdl compiler for ios/objective-c
// DO NOT CHANGE!


#import <Foundation/Foundation.h>
#import "PicoXMLClient.h"
#import "Shopping_GetCategoryInfoResponseType.h"
#import "Shopping_GetSingleItemResponseType.h"
#import "Shopping_GetMultipleItemsResponseType.h"
#import "Shopping_FindProductsRequestType.h"
#import "Shopping_GetMultipleItemsRequestType.h"
#import "Shopping_FindReviewsAndGuidesResponseType.h"
#import "Shopping_FindHalfProductsRequestType.h"
#import "Shopping_FindPopularSearchesResponseType.h"
#import "Shopping_FindProductsResponseType.h"
#import "Shopping_GetCategoryInfoRequestType.h"
#import "Shopping_GetUserProfileRequestType.h"
#import "Shopping_GeteBayTimeResponseType.h"
#import "Shopping_GetShippingCostsRequestType.h"
#import "Shopping_GetItemStatusResponseType.h"
#import "Shopping_GetUserProfileResponseType.h"
#import "Shopping_FindHalfProductsResponseType.h"
#import "Shopping_GetItemStatusRequestType.h"
#import "Shopping_FindPopularSearchesRequestType.h"
#import "Shopping_GetShippingCostsResponseType.h"
#import "Shopping_FindReviewsAndGuidesRequestType.h"
#import "Shopping_FindPopularItemsResponseType.h"
#import "Shopping_GetSingleItemRequestType.h"
#import "Shopping_GeteBayTimeRequestType.h"
#import "Shopping_FindPopularItemsRequestType.h"


/**
 This class is the XML client to the ShoppingInterface Web Service.
*/ 
@interface ShoppingInterface_XMLClient : PicoXMLClient {

}

/**
 public method
*/
-(void)findHalfProducts:(Shopping_FindHalfProductsRequestType *) requestObject 
      success:(void (^)(Shopping_FindHalfProductsResponseType *responseObject))success
      failure:(void (^)(NSError *error))failure;

/**
 public method
*/
-(void)findPopularItems:(Shopping_FindPopularItemsRequestType *) requestObject 
      success:(void (^)(Shopping_FindPopularItemsResponseType *responseObject))success
      failure:(void (^)(NSError *error))failure;

/**
 public method
*/
-(void)findPopularSearches:(Shopping_FindPopularSearchesRequestType *) requestObject 
      success:(void (^)(Shopping_FindPopularSearchesResponseType *responseObject))success
      failure:(void (^)(NSError *error))failure;

/**
 public method
*/
-(void)findProducts:(Shopping_FindProductsRequestType *) requestObject 
      success:(void (^)(Shopping_FindProductsResponseType *responseObject))success
      failure:(void (^)(NSError *error))failure;

/**
 public method
*/
-(void)findReviewsAndGuides:(Shopping_FindReviewsAndGuidesRequestType *) requestObject 
      success:(void (^)(Shopping_FindReviewsAndGuidesResponseType *responseObject))success
      failure:(void (^)(NSError *error))failure;

/**
 public method
*/
-(void)getCategoryInfo:(Shopping_GetCategoryInfoRequestType *) requestObject 
      success:(void (^)(Shopping_GetCategoryInfoResponseType *responseObject))success
      failure:(void (^)(NSError *error))failure;

/**
 public method
*/
-(void)getItemStatus:(Shopping_GetItemStatusRequestType *) requestObject 
      success:(void (^)(Shopping_GetItemStatusResponseType *responseObject))success
      failure:(void (^)(NSError *error))failure;

/**
 public method
*/
-(void)getMultipleItems:(Shopping_GetMultipleItemsRequestType *) requestObject 
      success:(void (^)(Shopping_GetMultipleItemsResponseType *responseObject))success
      failure:(void (^)(NSError *error))failure;

/**
 public method
*/
-(void)getShippingCosts:(Shopping_GetShippingCostsRequestType *) requestObject 
      success:(void (^)(Shopping_GetShippingCostsResponseType *responseObject))success
      failure:(void (^)(NSError *error))failure;

/**
 public method
*/
-(void)getSingleItem:(Shopping_GetSingleItemRequestType *) requestObject 
      success:(void (^)(Shopping_GetSingleItemResponseType *responseObject))success
      failure:(void (^)(NSError *error))failure;

/**
 public method
*/
-(void)getUserProfile:(Shopping_GetUserProfileRequestType *) requestObject 
      success:(void (^)(Shopping_GetUserProfileResponseType *responseObject))success
      failure:(void (^)(NSError *error))failure;

/**
 public method
*/
-(void)geteBayTime:(Shopping_GeteBayTimeRequestType *) requestObject 
      success:(void (^)(Shopping_GeteBayTimeResponseType *responseObject))success
      failure:(void (^)(NSError *error))failure;


@end