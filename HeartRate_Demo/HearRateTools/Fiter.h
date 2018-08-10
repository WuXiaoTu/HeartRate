//
//  Fiter.h
//  HeartRate_Demo
//
//  Created by Transuner on 16/4/15.
//  Copyright © 2016年 吴冰. All rights reserved.
//

#import <Foundation/Foundation.h>

#define NZEROS 10
#define NPOLES 10

@interface Fiter : NSObject {
    float xv[NZEROS+1], yv[NPOLES+1];
}

-(float) processValue:(float) value;


@end
