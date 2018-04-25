#ifndef INDUCEDCOSTHEURISTICLIGHT_H
#define INDUCEDCOSTHEURISTICLIGHT_H

#include "LightCompleteGraph.h"
#include "EdgeHeap.h"
#include "ClusterEditingSolutionLight.h"

namespace ysk {

class InducedCostHeuristicLight {
  

public:
  InducedCostHeuristicLight(LightCompleteGraph& param_graph);
  ClusterEditingSolutionLight solve();

private:    
  void init();
  void setForbidden(const LightCompleteGraph::Edge e);
  void setPermanent(const LightCompleteGraph::Edge e);
  
  /**
   * Updates icf and icp for the edge uw under the assumption that edge uv will be set to forbidden.
   */
  void updateTripleForbiddenUW(const LightCompleteGraph::Edge uv, const LightCompleteGraph::Edge uw, const LightCompleteGraph::Edge vw);
  /**
   * Updates icf and icp for the edge uw under the assumption that edge uv will be set to permanent.
   */
  void updateTriplePermanentUW(const LightCompleteGraph::Edge uv, const LightCompleteGraph::Edge uw, const LightCompleteGraph::Edge vw);
  
  LightCompleteGraph graph;
  EdgeHeap edgeHeap;
  LightCompleteGraph::EdgeWeight totalCost;
};

} // namespace ysk

#endif // INDUCEDCOSTHEURISTICLIGHT_H