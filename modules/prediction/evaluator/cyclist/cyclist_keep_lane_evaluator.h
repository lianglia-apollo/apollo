/******************************************************************************
 * Copyright 2018 The Apollo Authors. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *****************************************************************************/

/**
 * @file
 * @brief Define the cyclist keep lane predictor class
 */

#pragma once

#include <string>

#include "modules/prediction/container/obstacles/obstacle.h"
#include "modules/prediction/evaluator/evaluator.h"
#include "modules/prediction/proto/feature.pb.h"
#include "modules/prediction/proto/lane_graph.pb.h"

/**
 * @namespace apollo::prediction
 * @brief apollo::prediction
 */
namespace apollo {
namespace prediction {

class CyclistKeepLaneEvaluator : public Evaluator {
 public:
  /**
   * @brief Constructor
   */
  CyclistKeepLaneEvaluator() = default;

  /**
   * @brief Destructor
   */
  virtual ~CyclistKeepLaneEvaluator() = default;

  /**
   * @brief Override Evaluate
   * @param Obstacle pointer
   */
  void Evaluate(Obstacle* obstacle_ptr) override;

 private:
  double ComputeProbability(const std::string& curr_lane_id,
                            const LaneSequence& lane_sequence);
};

}  // namespace prediction
}  // namespace apollo
