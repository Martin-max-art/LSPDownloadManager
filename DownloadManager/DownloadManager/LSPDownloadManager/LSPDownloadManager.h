//
//  LSPDownloadManager.h
//  DownloadManager
//
//  Created by zhudou on 2018/12/4.
//  Copyright © 2018年 lsp. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LSPDownloadModel.h"
NS_ASSUME_NONNULL_BEGIN

#define KDownloadManager [LSPDownloadManager sharedInstance]

@class LSPDownloadManager;

@protocol LSPDownloadManagerDelegate <NSObject>

@optional
// 下载状态改变
- (void)LSPDownloadManager:(LSPDownloadManager *)downloadManager
            downloadModel:(LSPDownloadModel *)downloadModel
             stateChanged:(LSPDownloadManagerState)state;
// 删除下载
- (void)LSPDownloadManager:(LSPDownloadManager *)downloadManager
       removedDownloadArr:(NSArray *)downloadArr;

// 下载进度
- (void)LSPDownloadManager:(LSPDownloadManager *)downloadManager
            downloadModel:(LSPDownloadModel *)downloadModel
                totalSize:(NSInteger)totalSize
             downloadSize:(NSInteger)downloadSize
                 progress:(float)progress;

@end

@interface LSPDownloadManager : NSObject

@property (nonatomic, weak) id<LSPDownloadManagerDelegate> delegate;

+ (instancetype)sharedInstance;

/** 设置是否支持断点续传，默认NO */
- (void)setCanBreakpoint:(BOOL)isCan;

// 添加下载
- (void)addDownloadArr:(NSArray <LSPDownloadModel *> *)downloadArr;
// 删除下载
- (void)removeDownloadArr:(NSArray <LSPDownloadModel *> *)downloadArr;
// 暂停下载
- (void)pausedDownloadArr:(NSArray <LSPDownloadModel *> *)downloadArr;
// 继续下载
- (void)resumeDownloadArr:(NSArray <LSPDownloadModel *> *)downloadArr;

// 遍历文件（全部）
- (NSMutableArray <LSPDownloadModel *> *)downloadFileList;

// 清除下载（包括下载中和等待下载的）
- (void)clearDownload;

- (NSString *)downloadDataFilePath;
- (NSString *)downloadDataDir;

- (NSString *)convertFromByteNum:(unsigned long long)b;

@end

NS_ASSUME_NONNULL_END
