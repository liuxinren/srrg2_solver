#pragma once
#include "srrg_solver/solver_core/error_factor.h"
#include "variable_point3.h"
#include "variable_se3.h"

namespace srrg2_solver {
  using namespace srrg2_core;

  class SE3PosePointOffsetErrorFactor : public ErrorFactor_<3,
                                                            VariableSE3QuaternionRight,
                                                            VariablePoint3,
                                                            VariableSE3QuaternionRight>,
                                        public MeasurementOwnerEigen_<Vector3f> {
  public:
    EIGEN_MAKE_ALIGNED_OPERATOR_NEW
    void errorAndJacobian(bool error_only_ = false) final;
    void draw(ViewerCanvasPtr canvas_) const override;
  };
} // namespace srrg2_solver