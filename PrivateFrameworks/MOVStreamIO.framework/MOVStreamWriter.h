/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MOVStreamIO.framework/MOVStreamIO
 */

@interface MOVStreamWriter : NSObject <MOVStreamWriterStateContext, VideoEncoderInterfaceDelegate> {
    <MOVStreamWriterDelegate> * _delegate;
    unsigned long long  _fifoBufferCapacity;
    <MOVStreamWriterState> * _state;
    NSError * criticalError;
    AVAssetWriter * m_assetWriter;
    struct map<std::__1::basic_string<char>, std::__1::map<std::__1::basic_string<char>, (anonymous namespace)::MetadataRecordingData, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, (anonymous namespace)::MetadataRecordingData> > >, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::map<std::__1::basic_string<char>, (anonymous namespace)::MetadataRecordingData, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, (anonymous namespace)::MetadataRecordingData> > > > > >="__tree_"{__tree<std::__1::__value_type<std::__1::basic_string<char>, std::__1::map<std::__1::basic_string<char>, (anonymous namespace)::MetadataRecordingData, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, (anonymous namespace)::MetadataRecordingData> > > >, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, std::__1::map<std::__1::basic_string<char>, (anonymous namespace)::MetadataRecordingData, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, (anonymous namespace)::MetadataRecordingData> > > >, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, std::__1::map<std::__1::basic_string<char>, (anonymous namespace)::MetadataRecordingData, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, (anonymous namespace)::MetadataRecordingData> > > > > >="__begin_node_"^{__tree_end_node<std::__1::__tree_node_base<void *> *> {}  m_associatedMetadataDataMap;
    NSObject<OS_dispatch_queue> * m_delegateCallbackQueue;
    double  m_expectedFrameRate;
    NSObject<OS_dispatch_queue> * m_finishingQueue;
    bool  m_haveStartedSession;
    struct map<std::__1::basic_string<char>, CMTime, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, CMTime> > > { 
        struct __tree<std::__1::__value_type<std::__1::basic_string<char>, CMTime>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, CMTime>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, CMTime> > > { 
            struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, CMTime>, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __value_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, CMTime>, std::__1::less<std::__1::basic_string<char> >, true> > { 
                unsigned long long __value_; 
            } __pair3_; 
        } __tree_; 
    }  m_lastPtsForStream;
    struct map<std::__1::basic_string<char>, (anonymous namespace)::MetadataRecordingData, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, (anonymous namespace)::MetadataRecordingData> > >="__tree_"{__tree<std::__1::__value_type<std::__1::basic_string<char>, (anonymous namespace)::MetadataRecordingData>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, (anonymous namespace)::MetadataRecordingData>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, (anonymous namespace)::MetadataRecordingData> > >="__begin_node_"^{__tree_end_node<std::__1::__tree_node_base<void *> *> {}  m_metadataDataMap;
    bool  m_observingIsReady;
    struct vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > > { 
        struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *__begin_; 
        struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *__end_; 
        struct __compressed_pair<std::__1::basic_string<char> *, std::__1::allocator<std::__1::basic_string<char> > > { 
            struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *__value_; 
        } __end_cap_; 
    }  m_orderedMetadataStreamNames;
    struct vector<std::__1::basic_string<char>, std::__1::allocator<std::__1::basic_string<char> > > { 
        struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *__begin_; 
        struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *__end_; 
        struct __compressed_pair<std::__1::basic_string<char> *, std::__1::allocator<std::__1::basic_string<char> > > { 
            struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > {} *__value_; 
        } __end_cap_; 
    }  m_orderedStreamNames;
    NSObject<OS_dispatch_queue> * m_processingQueue;
    bool  m_realtime;
    struct map<std::__1::basic_string<char>, (anonymous namespace)::StreamRecordingData, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, (anonymous namespace)::StreamRecordingData> > >="__tree_"{__tree<std::__1::__value_type<std::__1::basic_string<char>, (anonymous namespace)::StreamRecordingData>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, (anonymous namespace)::StreamRecordingData>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, (anonymous namespace)::StreamRecordingData> > >="__begin_node_"^{__tree_end_node<std::__1::__tree_node_base<void *> *> {}  m_streamDataMap;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  m_videoTransform;
    NSURL * m_writeURL;
    NSObject<OS_dispatch_queue> * m_writingQueue;
    NSArray * movMetadataItems;
}

@property (retain) NSError *criticalError;
@property (readonly, copy) NSString *debugDescription;
@property <MOVStreamWriterDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property unsigned long long fifoBufferCapacity;
@property (readonly) unsigned long long hash;
@property (retain) NSArray *movMetadataItems;
@property (retain) <MOVStreamWriterState> *state;
@property (readonly) long long status;
@property (readonly) Class superclass;

+ (int)currentBayerRearrangeStrategy;
+ (id)getMOVStreamIOMetadataItem;
+ (unsigned int)getPixelFormatFromStreamData:(struct StreamRecordingData { struct opaqueCMFormatDescription {} *x1; bool x2; id x3; id x4; id x5; id x6; id x7; id x8; id /* block */ x9; id x10; id x11; id x12; struct __CVPixelBufferPool {} *x13; id x14; id x15; }*)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)activateNewState:(id)arg1;
- (void)addIsReadyObservers;
- (void)addMetadataTrack:(id)arg1;
- (void)addMetadataTrackAssociatedWith:(id)arg1 withIdentifier:(id)arg2 withFormatDescription:(struct opaqueCMFormatDescription { }*)arg3;
- (void)addTrackForStreamWithIdentifier:(id)arg1 formatDescription:(struct opaqueCMFormatDescription { }*)arg2 encoderConfig:(id)arg3;
- (void)addTrackForStreamWithIdentifier:(id)arg1 formatDescription:(const struct opaqueCMFormatDescription { }*)arg2 recordingConfiguration:(id)arg3;
- (void)appendAudioBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forStream:(id)arg2;
- (void)appendMetadata:(id)arg1 associatedWith:(id)arg2 toStream:(id)arg3;
- (void)appendMetadata:(id)arg1 withTimeStamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 toStream:(id)arg3;
- (void)appendPixelBuffer:(struct __CVBuffer { }*)arg1 presentationTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 toStreamId:(id)arg3;
- (unsigned long long)applyBitrateModifiersTo:(unsigned long long)arg1;
- (void)asyncWriteAssociatedMetadata:(id)arg1 metadataKey:(struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_4_1; unsigned long long x_1_4_2; unsigned long long x_1_4_3; } x_1_3_1; struct __short { BOOL x_2_4_1[23]; struct { unsigned char x_2_5_1; } x_2_4_2; } x_1_3_2; struct __raw { unsigned long long x_3_4_1[3]; } x_1_3_3; } x_1_2_1; } x_1_1_1; } x1; })arg2 associatedStreamKey:(struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_4_1; unsigned long long x_1_4_2; unsigned long long x_1_4_3; } x_1_3_1; struct __short { BOOL x_2_4_1[23]; struct { unsigned char x_2_5_1; } x_2_4_2; } x_1_3_2; struct __raw { unsigned long long x_3_4_1[3]; } x_1_3_3; } x_1_2_1; } x_1_1_1; } x1; })arg3;
- (void)asyncWriteMetadata:(id)arg1 streamKey:(struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_4_1; unsigned long long x_1_4_2; unsigned long long x_1_4_3; } x_1_3_1; struct __short { BOOL x_2_4_1[23]; struct { unsigned char x_2_5_1; } x_2_4_2; } x_1_3_2; struct __raw { unsigned long long x_3_4_1[3]; } x_1_3_3; } x_1_2_1; } x_1_1_1; } x1; })arg2;
- (void)asyncWriteSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 stream:(id)arg2 metadata:(id)arg3;
- (int)attachmentSerializationModeForStream:(struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_4_1; unsigned long long x_1_4_2; unsigned long long x_1_4_3; } x_1_3_1; struct __short { BOOL x_2_4_1[23]; struct { unsigned char x_2_5_1; } x_2_4_2; } x_1_3_2; struct __raw { unsigned long long x_3_4_1[3]; } x_1_3_3; } x_1_2_1; } x_1_1_1; } x1; })arg1 withDefaultMode:(int)arg2;
- (int)attachmentSerializationModeForStream:(struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_4_1; unsigned long long x_1_4_2; unsigned long long x_1_4_3; } x_1_3_1; struct __short { BOOL x_2_4_1[23]; struct { unsigned char x_2_5_1; } x_2_4_2; } x_1_3_2; struct __raw { unsigned long long x_3_4_1[3]; } x_1_3_3; } x_1_2_1; } x_1_1_1; } x1; })arg1 withDefaultMode:(int)arg2 fromMap:(struct map<std::__1::basic_string<char>, (anonymous namespace)::StreamRecordingData, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, (anonymous namespace)::StreamRecordingData> > >={__tree<std::__1::__value_type<std::__1::basic_string<char>, (anonymous namespace)::StreamRecordingData>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, (anonymous namespace)::StreamRecordingData>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, (anonymous namespace)::StreamRecordingData> > >=^{__tree_end_node<std::__1::__tree_node_base<void *> *> {}*)arg3;
- (void)cancelRecording;
- (bool)checkIfFifoAreEmpty;
- (void)clearAllFifoQueues;
- (const struct opaqueCMFormatDescription { }*)createMetadataFormatDescription:(id)arg1;
- (id)createRelatedToStreamMetadata:(id)arg1;
- (id)createRelationSpecifierMetadata:(id)arg1;
- (id)criticalError;
- (id)customTrackMetadataForStream:(id)arg1 fromMap:(struct map<std::__1::basic_string<char>, (anonymous namespace)::StreamRecordingData, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, (anonymous namespace)::StreamRecordingData> > >={__tree<std::__1::__value_type<std::__1::basic_string<char>, (anonymous namespace)::StreamRecordingData>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, (anonymous namespace)::StreamRecordingData>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, (anonymous namespace)::StreamRecordingData> > >=^{__tree_end_node<std::__1::__tree_node_base<void *> *> {}*)arg2;
- (void)dealloc;
- (id)delegate;
- (void)deleteFileOnCancel;
- (void)deleteMOVFile;
- (void)encoder:(id)arg1 encodedSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 metadata:(id)arg3 presentationTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4 streamId:(id)arg5;
- (void)encoder:(id)arg1 encodingFailedForStream:(id)arg2;
- (int)encoderTypeForStream:(id)arg1;
- (void)executePrepareToRecordWithMovieMetadata:(id)arg1;
- (unsigned long long)fifoBufferCapacity;
- (unsigned long long)fifoBufferSizeForStream:(id)arg1;
- (void)finishAVWriter;
- (void)finishAndDrainFifoFirst;
- (void)finishRecording;
- (id)finishingQueue;
- (void)forceFinishRecording;
- (id)getAudioMetadataForBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (unsigned long long)getBitsPerSecondForColorStream:(id)arg1 dimensions:(struct { int x1; int x2; })arg2;
- (double)getExpectedFrameRateForStream:(id)arg1;
- (id)getMetadataGroupForBuffer:(struct __CVBuffer { }*)arg1 stream:(id)arg2 presentationTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 serializationMode:(int)arg4;
- (unsigned int)getPixelFormatForStream:(id)arg1 fromMap:(struct map<std::__1::basic_string<char>, (anonymous namespace)::StreamRecordingData, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, (anonymous namespace)::StreamRecordingData> > >={__tree<std::__1::__value_type<std::__1::basic_string<char>, (anonymous namespace)::StreamRecordingData>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, (anonymous namespace)::StreamRecordingData>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, (anonymous namespace)::StreamRecordingData> > >=^{__tree_end_node<std::__1::__tree_node_base<void *> *> {}*)arg2;
- (id)getTrackEncodedPixelFormatMetadataForStream:(id)arg1 fromMap:(struct map<std::__1::basic_string<char>, (anonymous namespace)::StreamRecordingData, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, (anonymous namespace)::StreamRecordingData> > >={__tree<std::__1::__value_type<std::__1::basic_string<char>, (anonymous namespace)::StreamRecordingData>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, (anonymous namespace)::StreamRecordingData>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, (anonymous namespace)::StreamRecordingData> > >=^{__tree_end_node<std::__1::__tree_node_base<void *> *> {}*)arg2;
- (id)getTrackEncodingMetadataForStream:(id)arg1 fromMap:(struct map<std::__1::basic_string<char>, (anonymous namespace)::StreamRecordingData, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, (anonymous namespace)::StreamRecordingData> > >={__tree<std::__1::__value_type<std::__1::basic_string<char>, (anonymous namespace)::StreamRecordingData>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, (anonymous namespace)::StreamRecordingData>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, (anonymous namespace)::StreamRecordingData> > >=^{__tree_end_node<std::__1::__tree_node_base<void *> *> {}*)arg2;
- (id)getTrackInputPixelFormatMetadataForStream:(id)arg1 fromMap:(struct map<std::__1::basic_string<char>, (anonymous namespace)::StreamRecordingData, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, (anonymous namespace)::StreamRecordingData> > >={__tree<std::__1::__value_type<std::__1::basic_string<char>, (anonymous namespace)::StreamRecordingData>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, (anonymous namespace)::StreamRecordingData>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, (anonymous namespace)::StreamRecordingData> > >=^{__tree_end_node<std::__1::__tree_node_base<void *> *> {}*)arg2;
- (id)getTrackMetadataForAttachmentsSerializationMode:(id)arg1 fromMap:(struct map<std::__1::basic_string<char>, (anonymous namespace)::StreamRecordingData, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, (anonymous namespace)::StreamRecordingData> > >={__tree<std::__1::__value_type<std::__1::basic_string<char>, (anonymous namespace)::StreamRecordingData>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, (anonymous namespace)::StreamRecordingData>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, (anonymous namespace)::StreamRecordingData> > >=^{__tree_end_node<std::__1::__tree_node_base<void *> *> {}*)arg2;
- (id)getTrackMetadataForStream:(id)arg1;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })getVideoTransformForStream:(id)arg1;
- (id)getWriterSettingsForStream:(id)arg1 description:(struct opaqueCMFormatDescription { }*)arg2;
- (void)informDelegateAboutError:(id)arg1;
- (id)initWithURL:(id)arg1 andExpectedFrameRate:(double)arg2;
- (bool)isReadyForMoreDataForStreamId:(id)arg1 fromMap:(struct map<std::__1::basic_string<char>, (anonymous namespace)::StreamRecordingData, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, (anonymous namespace)::StreamRecordingData> > >={__tree<std::__1::__value_type<std::__1::basic_string<char>, (anonymous namespace)::StreamRecordingData>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, (anonymous namespace)::StreamRecordingData>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, (anonymous namespace)::StreamRecordingData> > >=^{__tree_end_node<std::__1::__tree_node_base<void *> *> {}*)arg2;
- (bool)marksOutputTracksAsEnabledForStream:(struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_4_1; unsigned long long x_1_4_2; unsigned long long x_1_4_3; } x_1_3_1; struct __short { BOOL x_2_4_1[23]; struct { unsigned char x_2_5_1; } x_2_4_2; } x_1_3_2; struct __raw { unsigned long long x_3_4_1[3]; } x_1_3_3; } x_1_2_1; } x_1_1_1; } x1; })arg1;
- (bool)marksOutputTracksAsEnabledForStream:(struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x_1_4_1; unsigned long long x_1_4_2; unsigned long long x_1_4_3; } x_1_3_1; struct __short { BOOL x_2_4_1[23]; struct { unsigned char x_2_5_1; } x_2_4_2; } x_1_3_2; struct __raw { unsigned long long x_3_4_1[3]; } x_1_3_3; } x_1_2_1; } x_1_1_1; } x1; })arg1 fromMap:(struct map<std::__1::basic_string<char>, (anonymous namespace)::StreamRecordingData, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, (anonymous namespace)::StreamRecordingData> > >={__tree<std::__1::__value_type<std::__1::basic_string<char>, (anonymous namespace)::StreamRecordingData>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, (anonymous namespace)::StreamRecordingData>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, (anonymous namespace)::StreamRecordingData> > >=^{__tree_end_node<std::__1::__tree_node_base<void *> *> {}*)arg2;
- (id)movMetadataItems;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)prepareToRecord;
- (void)prepareToRecordWithMovieMetadata:(id)arg1;
- (void)processCancelRecording;
- (void)processFinishRecording;
- (void)processForceFinishRecording;
- (bool)relateStream:(id)arg1 toStream:(id)arg2 relationSpecifier:(id)arg3;
- (void)removeIsReadyObservers;
- (void)setCriticalError:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegate:(id)arg1 callbackQueue:(id)arg2;
- (bool)setExpectedFrameRate:(double)arg1;
- (void)setFifoBufferCapacity:(unsigned long long)arg1;
- (void)setMovMetadataItems:(id)arg1;
- (bool)setRealTimeCapture:(bool)arg1;
- (void)setState:(id)arg1;
- (bool)setTrackMetadata:(id)arg1 forStream:(id)arg2;
- (bool)setVideoTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1;
- (bool)setVideoTransformFromOrientation:(int)arg1;
- (void)setupAssetWriterStreamInputsWithError:(id*)arg1;
- (void)setupAssociatedMetadataInputsWithError:(id*)arg1;
- (void)setupMetadataInputsWithError:(id*)arg1;
- (id)state;
- (long long)status;
- (void)writeMetadata:(id)arg1 forStreamId:(id)arg2;
- (void)writeSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 andMetadata:(id)arg2 forStreamId:(id)arg3;
- (void)writerStatusChanged:(long long)arg1 writerDelegate:(id)arg2 delegateCallbackQueue:(id)arg3;

@end