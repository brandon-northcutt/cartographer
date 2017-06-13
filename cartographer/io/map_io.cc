/*
 * Copyright 2016 The Cartographer Authors
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "cartographer/io/map_io.h"

namespace cartographer {
namespace io {
  //constructor takes a pointer to the map_builder
  MapIO::MapIO(cartographer::mapping::MapBuilder & map_builder);
  //TODO(brandon-northcutt) finish all trajectories (close or suspend sensor
  //input streams)
  //TODO(brandon-northcutt) wait for final optimization (all worker threads
  //joined and flags set for trajectories finalized)
  //TODO(brandon-northcutt) get a file handle and use filestreamwirtter to send
  //protobufs to it.
  //TODO(send mapbuilderoptions protobuf)
  //use this container to traverse Cartographer's memory structures and serialize them appropriately.
} // namespace io
} // namespace cartographer
