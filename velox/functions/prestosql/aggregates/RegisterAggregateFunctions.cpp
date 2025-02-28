/*
 * Copyright (c) Facebook, Inc. and its affiliates.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#include "velox/functions/prestosql/aggregates/RegisterAggregateFunctions.h"
#include "velox/exec/Aggregate.h"

namespace facebook::velox::aggregate::prestosql {

extern exec::AggregateRegistrationResult registerApproxMostFrequentAggregate(
    const std::string& prefix);
extern exec::AggregateRegistrationResult registerApproxPercentileAggregate(
    const std::string& prefix);
extern exec::AggregateRegistrationResult registerArbitraryAggregate(
    const std::string& prefix);
extern exec::AggregateRegistrationResult registerArrayAggAggregate(
    const std::string& prefix);
extern exec::AggregateRegistrationResult registerAverageAggregate(
    const std::string& prefix);
extern exec::AggregateRegistrationResult registerBitwiseXorAggregate(
    const std::string& prefix);
extern exec::AggregateRegistrationResult registerChecksumAggregate(
    const std::string& prefix);
extern exec::AggregateRegistrationResult registerCountAggregate(
    const std::string& prefix);
extern exec::AggregateRegistrationResult registerCountIfAggregate(
    const std::string& prefix);
extern exec::AggregateRegistrationResult registerEntropyAggregate(
    const std::string& prefix);
extern exec::AggregateRegistrationResult registerGeometricMeanAggregate(
    const std::string& prefix);
extern exec::AggregateRegistrationResult registerHistogramAggregate(
    const std::string& prefix);
extern exec::AggregateRegistrationResult registerMapAggAggregate(
    const std::string& prefix);
extern exec::AggregateRegistrationResult registerMapUnionAggregate(
    const std::string& prefix);
extern exec::AggregateRegistrationResult registerMapUnionSumAggregate(
    const std::string& prefix);
extern exec::AggregateRegistrationResult registerMaxDataSizeForStatsAggregate(
    const std::string& prefix);
extern exec::AggregateRegistrationResult registerMultiMapAggAggregate(
    const std::string& prefix);
extern exec::AggregateRegistrationResult registerSumDataSizeForStatsAggregate(
    const std::string& prefix);
extern exec::AggregateRegistrationResult registerReduceAgg(
    const std::string& prefix);
extern exec::AggregateRegistrationResult registerSetAggAggregate(
    const std::string& prefix);
extern exec::AggregateRegistrationResult registerSetUnionAggregate(
    const std::string& prefix);

extern void registerApproxDistinctAggregates(const std::string& prefix);
extern void registerBitwiseAggregates(const std::string& prefix);
extern void registerBoolAggregates(const std::string& prefix);
extern void registerCentralMomentsAggregates(const std::string& prefix);
extern void registerCovarianceAggregates(const std::string& prefix);
extern void registerMinMaxAggregates(const std::string& prefix);
extern void registerMinMaxByAggregates(const std::string& prefix);
extern void registerSumAggregate(const std::string& prefix);
extern void registerVarianceAggregates(const std::string& prefix);

void registerAllAggregateFunctions(const std::string& prefix) {
  registerApproxDistinctAggregates(prefix);
  registerApproxMostFrequentAggregate(prefix);
  registerApproxPercentileAggregate(prefix);
  registerArbitraryAggregate(prefix);
  registerArrayAggAggregate(prefix);
  registerAverageAggregate(prefix);
  registerBitwiseAggregates(prefix);
  registerBitwiseXorAggregate(prefix);
  registerBoolAggregates(prefix);
  registerCentralMomentsAggregates(prefix);
  registerChecksumAggregate(prefix);
  registerCountAggregate(prefix);
  registerCountIfAggregate(prefix);
  registerCovarianceAggregates(prefix);
  registerEntropyAggregate(prefix);
  registerGeometricMeanAggregate(prefix);
  registerHistogramAggregate(prefix);
  registerMapAggAggregate(prefix);
  registerMapUnionAggregate(prefix);
  registerMapUnionSumAggregate(prefix);
  registerMaxDataSizeForStatsAggregate(prefix);
  registerMultiMapAggAggregate(prefix);
  registerSumDataSizeForStatsAggregate(prefix);
  registerMinMaxAggregates(prefix);
  registerMinMaxByAggregates(prefix);
  registerReduceAgg(prefix);
  registerSetAggAggregate(prefix);
  registerSetUnionAggregate(prefix);
  registerSumAggregate(prefix);
  registerVarianceAggregates(prefix);
}

} // namespace facebook::velox::aggregate::prestosql
