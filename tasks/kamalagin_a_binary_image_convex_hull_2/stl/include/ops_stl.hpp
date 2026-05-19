#pragma once

#include "kamalagin_a_binary_image_convex_hull_2/common/include/common.hpp"
#include "task/include/task.hpp"

namespace kamalagin_a_binary_image_convex_hull_2 {

class KamalaginABinaryImageConvexHull2STL : public BaseTask {
 public:
  static constexpr ppc::task::TypeOfTask GetStaticTypeOfTask() {
    return ppc::task::TypeOfTask::kSTL;
  }
  explicit KamalaginABinaryImageConvexHull2STL(const InType &in);

 private:
  bool ValidationImpl() override;
  bool PreProcessingImpl() override;
  bool RunImpl() override;
  bool PostProcessingImpl() override;
};

}  // namespace kamalagin_a_binary_image_convex_hull_2
