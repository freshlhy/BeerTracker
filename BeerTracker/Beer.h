//
//  Beer.h
//  BeerTracker
//
//  Created by freshlhy on 3/4/14.
//  Copyright (c) 2014 Andy Pereira. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class BeerDetails;


@interface Beer : NSManagedObject

@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) BeerDetails *beerDetails;

@end
