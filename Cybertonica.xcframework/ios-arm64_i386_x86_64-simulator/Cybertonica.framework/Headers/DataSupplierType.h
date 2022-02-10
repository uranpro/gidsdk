//
//  DataSupplierType.m
//  Cybertonica
//
//  Created by Emanuel Tesar on 10/18/17.
//  Copyright © 2017 Cybertonica. All rights reserved.
//

#import <Foundation/Foundation.h>

// https://stackoverflow.com/questions/1094984/convert-objective-c-typedef-to-its-string-equivalent
// also add to DataSupplierType.m
typedef NS_ENUM(NSUInteger, DataSupplierType) {
    TOUCH_EVENT,
    CYBERTONICA_INNER,
    DEVICE,
    CYBERTONICA_INFO,
    DISPLAY,
    LOCATION,
    OS,
    NETWORK,
    BATTERY,
    MOTION,
    CPU,
    DATA_SUPPLIER_COUNT, // this must be last
};
