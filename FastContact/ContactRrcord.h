//
//  ContactRrcord.h
//  FastContact
//
//  Created by Eri Tange on 2014/04/26.
//  Copyright (c) 2014年 Eri Tange. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ContactRrcord : NSObject<NSCoding>

//アプリケーション内で共通のインスタンスを返す
+(instancetype)sharedManager;
-(BOOL)save;



-(id)initWithPerson:(ABRecordRef)person property:(ABPropertyID)property identifer:(ABMultiValueIdentifier)identifer;

@property(readonly,nonatomic)NSMutableArray *records;
@property(readonly,nonatomic)ABAddressBookRef addressBook;

@property(readonly,nonatomic)ABRecordRef person;
@property(readonly,nonatomic)ABPropertyID propertyID;
@property(readonly,nonatomic)ABMultiValueIdentifier multiValueIdentifer;

@end
