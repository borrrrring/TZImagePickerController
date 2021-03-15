//
//  TZPhotoPickerController.h
//  TZImagePickerController
//
//  Created by 谭真 on 15/12/24.
//  Copyright © 2015年 谭真. All rights reserved.
//

#import <UIKit/UIKit.h>

@class TZAlbumModel, TZCollectionView;
@interface TZPhotoPickerController : UIViewController

@property (nonatomic, assign) BOOL isFirstAppear;
@property (nonatomic, assign) NSInteger columnNumber;
@property (nonatomic, strong) TZAlbumModel *model;
@property (nonatomic, strong) NSOperationQueue *operationQueue;
@property (nonatomic, strong) TZCollectionView *collectionView;
@property (nonatomic, strong) UIView *bannerView;

@property (nonatomic, assign) BOOL isSavingMedia;
@property (nonatomic, assign) BOOL isFetchingMedia;
@end


@interface TZCollectionView : UICollectionView

@end
