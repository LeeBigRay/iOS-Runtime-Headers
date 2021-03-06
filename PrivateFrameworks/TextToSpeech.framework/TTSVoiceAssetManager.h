/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TextToSpeech.framework/TextToSpeech
 */

@interface TTSVoiceAssetManager : NSObject {
    NSMutableDictionary *_resourceCache;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_autoDownloadedAssets;
- (void)_automaticallyDownloadVoiceAssetsIfNeeded;
- (id)_voiceAssetForASAsset:(id)arg1;
- (id)_voiceAssetQueryForVoiceName:(id)arg1 language:(id)arg2 gender:(int)arg3 footprint:(int)arg4 version:(id)arg5 localOnly:(BOOL)arg6;
- (void)automaticallyDownloadVoiceAssetsIfNeeded;
- (void)getAutoDownloadedVoiceAssets:(id /* block */)arg1;
- (void)getCustomVoiceAssetsLocalOnly:(BOOL)arg1 language:(id)arg2 reply:(id /* block */)arg3;
- (id)resourcePathForLanguage:(id)arg1 gender:(int)arg2 footprint:(int)arg3 voiceName:(id)arg4 outAsset:(id*)arg5;
- (void)setAutoDownloadedVoiceAssets:(id)arg1;
- (void)startDownloadingVoiceAsset:(id)arg1 progress:(id /* block */)arg2 completion:(id /* block */)arg3;

@end
