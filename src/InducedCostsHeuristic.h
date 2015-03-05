//
//  InducedCostsHeuristic.h
//  lemon-first-steps
//
//  Created by Emanuel Laude on 26.10.12.
//  Copyright (c) 2012 Emanuel Laude. All rights reserved.
//

#ifndef INDUCEDCOSTSHEURISTIC_H
#define INDUCEDCOSTSHEURISTIC_H

#include <iostream>

#include <lemon/full_graph.h>
#include <lemon/lgf_writer.h>

#include "WorkingCopyInstance.h"
#include "ParameterizedInstance.h"
#include "ClusterEditingInstance.h"
#include "ClusterEditingSolutions.h"

namespace ysk {

class InducedCostsHeuristic {
public:
  InducedCostsHeuristic(ParameterizedInstance& inst)
    : _upperBound(0)
    , _instance()
    , _parameterizedInstance(NULL)
  {
    init(inst);
  }
  
  virtual ~InducedCostsHeuristic();
  double getUpperBound();
  void getSolution(ClusterEditingSolutions& solution);
  void start();
  
private:
  void init(ParameterizedInstance& inst);
  
  double _upperBound;
  ClusterEditingInstance _instance;
  ParameterizedInstance* _parameterizedInstance;
};

} // namespace ysk

#endif /* INDUCEDCOSTSHEURISTIC_H */
