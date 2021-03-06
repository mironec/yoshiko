#ifndef DELTA_H
#define DELTA_H

#include <iostream>

#include "WorkingCopyInstance.h"

namespace ysk {

class Delta {
public:
  Delta():
	  _deltaU (0.0),
	  _deltaV (0.0)
{}
  
  void setDeltaU(WorkingCopyGraph::Node u, double deltaU);
  void setDeltaV(WorkingCopyGraph::Node v, double deltaV);
  
  double getValue(const WorkingCopyGraph::Node& node);
  
private:
  WorkingCopyGraph::Node _u;
  WorkingCopyGraph::Node _v;
  double _deltaU;
  double _deltaV;
};
  
} // namespace ysk

#endif /* DELTA_H */
