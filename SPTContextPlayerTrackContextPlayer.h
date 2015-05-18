//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTTrackContextPlayer.h"

@class NSString;

@interface SPTContextPlayerTrackContextPlayer : NSObject <SPTTrackContextPlayer>
{
    struct shared_ptr<spotify::player::VolatileContextPlayer> _player;
    struct PlayOrigin _origin;
    // Error parsing type: {function<boost::shared_ptr<spotify::player::VolatileContext> (const base::RefPtr<sp::TrackListContext> &)>="vtable"^{vtable_base}"functor"(function_buffer="obj_ptr"^v"type"{type_t="type"^{type_info}"const_qualified"B"volatile_qualified"B}"func_ptr"^?"bound_memfunc_ptr"{bound_memfunc_ptr_t="memfunc_ptr""obj_ptr"^v}"obj_ref"{obj_ref_t="obj_ptr"^v"is_const_qualified"B"is_volatile_qualified"B}"data"c)}, name: _makeContext
    function_9e590c62 _wallTime;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)preparePlaybackOfContext:(id)arg1 options:(id)arg2;
- (BOOL)playContext:(id)arg1 options:(id)arg2 error:(id *)arg3;
-     // Error parsing type: @48@0:4{function<boost::shared_ptr<spotify::player::VolatileContext> (const base::RefPtr<sp::TrackListContext> &)>=^{vtable_base}(function_buffer=^v{type_t=^{type_info}BB}^?{bound_memfunc_ptr_t=^v}{obj_ref_t=^vBB}c)}8{function<boost::chrono::time_point<boost::chrono::system_clock, boost::chrono::duration<long long, boost::ratio<1, 1000000000> > > ()>=^{vtable_base}(function_buffer=^v{type_t=^{type_info}BB}^?{bound_memfunc_ptr_t=^v}{obj_ref_t=^vBB}c)}24r^{shared_ptr<spotify::player::VolatileContextPlayer>=^{VolatileContextPlayer}{shared_count=^{sp_counted_base}}}40@44, name: initWithMakeContext:wallTime:player:origin:

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

