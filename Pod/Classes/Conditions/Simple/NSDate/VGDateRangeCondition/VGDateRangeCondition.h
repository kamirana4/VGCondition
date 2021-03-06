//
//  VGDateRangeCondition.h
//  VGCondition
//
//  Created by vlad gorbenko on 7/8/15.
//  Copyright (c) 2015 vladgorbenko. All rights reserved.
//

#import "VGDateCondition.h"

#import "VGRangeConditionProtocol.h"

@interface VGDateRangeCondition : VGDateCondition <VGRangeConditionProtocol>

@property (nonatomic, strong) NSDateFormatter *formatter;

@end
