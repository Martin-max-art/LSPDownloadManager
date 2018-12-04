//
//  LSPDownloadModel.h
//  DownloadManager
//
//  Created by zhudou on 2018/12/4.
//  Copyright © 2018年 lsp. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
typedef NS_ENUM(NSUInteger, LSPDownloadManagerState) {
    LSPDownloadManagerStateNone          = 0,    // 未开始
    LSPDownloadManagerStateWaiting       = 1,    // 等待下载
    LSPDownloadManagerStateDownloading   = 2,    // 下载中
    LSPDownloadManagerStatePaused        = 3,    // 下载暂停
    LSPDownloadManagerStateFailed        = 4,    // 下载失败
    LSPDownloadManagerStateFinished      = 5     // 下载完成
};

@interface LSPDownloadModel : NSObject

@property (nonatomic, copy) NSString *fileID;
@property (nonatomic, copy) NSString *fileUrl;
@property (nonatomic, copy) NSString *fileLocalPath;
@property (nonatomic, assign) LSPDownloadManagerState state;
@property (nonatomic, copy) NSString *file_size; //（B）

/** 文件的总长度 */
@property (nonatomic, assign) NSInteger fileLength;
/** 当前的下载长度 */
@property (nonatomic, assign) NSInteger currentLength;

@end

NS_ASSUME_NONNULL_END
