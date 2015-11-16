//
//  GHBPropertyType.h
//  GHBExtension
//
//  Created by youziyue on 15/9/21.
//  Copyright © 2015年 Lance. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface GHBPropertyType : NSObject

/** 类型标识符 */
@property (nonatomic, copy) NSString *code;

/** 是否为id类型 */
@property (nonatomic, readonly, getter=isIdType) BOOL idType;

/** 是否为基本数字类型：int、float等 */
@property (nonatomic, readonly, getter=isNumberType) BOOL numberType;

/** 是否为BOOL类型 */
@property (nonatomic, readonly, getter=isBoolType) BOOL boolType;

/** 对象类型（如果是基本数据类型，此值为nil） */
@property (nonatomic, readonly) Class typeClass;

/** 类型是否来自于Foundation框架，比如NSString、NSArray */
@property (nonatomic, readonly, getter = isFromFoundation) BOOL fromFoundation;


+ (instancetype)propertyTypeWithAttributeString:(NSString *)string;

@end
