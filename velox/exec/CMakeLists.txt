# Copyright (c) Facebook, Inc. and its affiliates.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
add_library(
  velox_exec
  AddressableNonNullValueList.cpp
  Aggregate.cpp
  AggregateCompanionAdapter.cpp
  AggregateCompanionSignatures.cpp
  AggregateFunctionRegistry.cpp
  AggregationMasks.cpp
  AggregateWindow.cpp
  ArrowStream.cpp
  ContainerRowSerde.cpp
  DistinctAggregations.cpp
  Driver.cpp
  EnforceSingleRow.cpp
  Exchange.cpp
  ExchangeClient.cpp
  ExchangeQueue.cpp
  ExchangeSource.cpp
  FilterProject.cpp
  GroupId.cpp
  GroupingSet.cpp
  HashAggregation.cpp
  HashBuild.cpp
  HashJoinBridge.cpp
  HashPartitionFunction.cpp
  HashProbe.cpp
  HashTable.cpp
  JoinBridge.cpp
  Limit.cpp
  LocalPartition.cpp
  LocalPlanner.cpp
  MarkDistinct.cpp
  MemoryReclaimer.cpp
  Merge.cpp
  MergeJoin.cpp
  MergeSource.cpp
  NestedLoopJoinBuild.cpp
  NestedLoopJoinProbe.cpp
  Operator.cpp
  OperatorUtils.cpp
  OrderBy.cpp
  PartitionedOutput.cpp
  OutputBuffer.cpp
  OutputBufferManager.cpp
  PlanNodeStats.cpp
  ProbeOperatorState.cpp
  RowContainer.cpp
  RowNumber.cpp
  SharedArbitrator.cpp
  SortBuffer.cpp
  SortedAggregations.cpp
  SortWindowBuild.cpp
  Spill.cpp
  SpillOperatorGroup.cpp
  Spiller.cpp
  StreamingAggregation.cpp
  StreamingWindowBuild.cpp
  Strings.cpp
  TableScan.cpp
  TableWriteMerge.cpp
  TableWriter.cpp
  Task.cpp
  TopN.cpp
  TopNRowNumber.cpp
  Unnest.cpp
  Values.cpp
  VectorHasher.cpp
  Window.cpp
  WindowBuild.cpp
  WindowFunction.cpp
  WindowPartition.cpp
  AssignUniqueId.cpp
  PartitionFunction.cpp)

target_link_libraries(
  velox_exec
  velox_file
  velox_core
  velox_vector
  velox_connector
  velox_time
  velox_codegen
  velox_common_base
  velox_test_util
  velox_arrow_bridge
  velox_common_compression)

if(${VELOX_BUILD_TESTING})
  add_subdirectory(tests)
elseif(${VELOX_BUILD_TEST_UTILS})
  add_subdirectory(tests/utils)
endif()

if(${VELOX_ENABLE_BENCHMARKS})
  add_subdirectory(benchmarks)
endif()
