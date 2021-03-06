// Graph Engine
// Copyright (c) Microsoft. All rights reserved.
// Licensed under the MIT license. See LICENSE.md file in the project root for full license information.
//
#include "TrinityCommon.h"
#include "BackgroundThread/BackgroundThread.h"


namespace BackgroundThread
{
    std::mutex TaskScheduler::_mutex;
    std::thread* TaskScheduler::_thread = nullptr;
    std::vector<ReferencePointer<BackgroundTask>> TaskScheduler::_taskList;
    uint64_t TaskScheduler::_current_time;

    TaskScheduler::_TaskSchedulerConfig TaskScheduler::_config;
}