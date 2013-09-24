// Generated by xsd compiler for ios/objective-c
// DO NOT CHANGE!

#import <Foundation/Foundation.h>
#import "Shopping_FindPopularItemsRequestType.h"

@implementation Shopping_FindPopularItemsRequestType

@synthesize categoryID = _categoryID;
@synthesize queryKeywords = _queryKeywords;
@synthesize categoryIDExclude = _categoryIDExclude;
@synthesize maxEntries = _maxEntries;

// class meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(PicoClassSchema *)getClassMetaData {
    PicoClassSchema *cs = [[PicoClassSchema alloc] initWithXmlName:@"FindPopularItemsRequest" nsUri:@"urn:ebay:apis:eBLBaseComponents"];
    [cs autorelease];
    return cs;
}

// property meta-data method
// note: this method is only for internal use, DO NOT CHANGE!
+(NSMutableDictionary *)getPropertyMetaData {
    NSMutableDictionary *map = [NSMutableDictionary dictionary];
    
    PicoPropertySchema *ps = nil;
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT_ARRAY xmlName:@"CategoryID" propertyName:@"categoryID" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"categoryID"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"QueryKeywords" propertyName:@"queryKeywords" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"queryKeywords"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT_ARRAY xmlName:@"CategoryIDExclude" propertyName:@"categoryIDExclude" type:PICO_TYPE_STRING clazz:nil];
    [map setObject:ps forKey:@"categoryIDExclude"];
    [ps release];
    ps = [[PicoPropertySchema alloc] initWithKind:PICO_KIND_ELEMENT xmlName:@"MaxEntries" propertyName:@"maxEntries" type:PICO_TYPE_INT clazz:nil];
    [map setObject:ps forKey:@"maxEntries"];
    [ps release];
    
    return map;
}



-(void)dealloc {
    self.categoryID = nil;
    self.queryKeywords = nil;
    self.categoryIDExclude = nil;
    self.maxEntries = nil;
    [super dealloc];
}

@end
