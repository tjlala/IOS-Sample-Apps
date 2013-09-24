// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "SavedForLaterItems.h"
#import "CartItem.h"
#import "Price.h"

@implementation SavedForLaterItems

@synthesize subTotal = _subTotal;
@synthesize savedForLaterItem = _savedForLaterItem;

// class meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(PicoClassSchema *)getClassMetaData {
    PicoClassSchema *cs = [[PicoClassSchema alloc] initWithXmlName:@"SavedForLaterItems" nsUri:@"http://webservices.amazon.com/AWSECommerceService/2011-08-01"];
    [cs autorelease];
    return cs;
}

// property meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(NSMutableDictionary *)getPropertyMetaData {
    NSMutableDictionary *map = [NSMutableDictionary dictionary];
    
    PicoPropertySchema *ps = nil;
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"SubTotal" propertyName:@"subTotal" type:PICO_TYPE_OBJECT clazz:[Price class]];
    [map setObject:ps forKey:@"subTotal"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT_ARRAY xmlName:@"SavedForLaterItem" propertyName:@"savedForLaterItem" type:PICO_TYPE_OBJECT clazz:[CartItem class]];
    [map setObject:ps forKey:@"savedForLaterItem"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.subTotal = nil;
    self.savedForLaterItem = nil;
    [super dealloc];
}

@end
