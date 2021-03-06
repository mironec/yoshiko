#ifndef WORKINGCOPYINSTANCE_H
#define	WORKINGCOPYINSTANCE_H

#include <lemon/full_graph.h>
#include <lemon/adaptors.h>
#include <lemon/connectivity.h>

#include <cstddef>
#include <string>
#include <vector>
#include <cmath>
#include <iostream>
#include <algorithm>
#include <limits>

#include "ClusterEditingInstance.h"
#include "Globals.h"

namespace ysk {

typedef lemon::SubGraph<const lemon::FullGraph> WorkingCopyGraph;

class ClusterEditingInstance;

class WorkingCopyInstance {

public:

	/**
	 * The default constructor for WCI
	 * @param inst
	 */
  WorkingCopyInstance(ClusterEditingInstance* inst)
    : _instance(inst)
    , _dirty(false)
	, _vectorCleanList(std::vector<std::vector<int>*>())
	//References
	, _graph(nullptr)
	, _edges(nullptr)
	, _forbidden(nullptr)
	, _permanent(nullptr)
	, _nodes(nullptr)
	, _weight(nullptr)
	, _clusters(nullptr)
	, _nodeNames(nullptr)
  {
  }

  virtual ~WorkingCopyInstance();

  void init();

  void initNode(lemon::FullGraph::Node node, std::string name);

  void initEdge(lemon::FullGraph::Edge edge, double weight, EdgeType edgeType);

  const WorkingCopyGraph& getGraph() const;

  const lemon::FullGraph& getOrig() const;

  WorkingCopyGraph::Edge edge(const WorkingCopyGraph::Node& u, const WorkingCopyGraph::Node& v) const;

  double getWeight(const WorkingCopyGraph::Edge& e) const;

  std::string getNodeName(const WorkingCopyGraph::Node& u) const;

  std::string getEdgeName(const WorkingCopyGraph::Edge& uv) const;

  const WorkingCopyGraph::EdgeMap<double>& getWeight() const;

  const WorkingCopyGraph::NodeMap<std::string>& getNodeNames() const;

  const WorkingCopyGraph::NodeMap<std::vector<int>*>& getClusters() const;

  void setForbidden(const WorkingCopyGraph::Edge& uv);

  //first node in vector nodes serves as proxy
  WorkingCopyGraph::Node merge(const std::vector<WorkingCopyGraph::Node>& nodes);

  WorkingCopyGraph::Node setPermanent(const WorkingCopyGraph::Edge& uv);

  void setPermanent(const WorkingCopyGraph::Edge& uv, const WorkingCopyGraph::Node& proxy);

  bool isPermanent(const WorkingCopyGraph::Edge& e) const;

  bool isForbidden(const WorkingCopyGraph::Edge& e) const;

  EdgeType getEdgeType (const WorkingCopyGraph::Edge& e) const;

  const WorkingCopyGraph::EdgeMap<bool>& getPermanent() const;

  const WorkingCopyGraph::EdgeMap<bool>& getForbidden() const;

  bool isDirty() const;

  friend std::ostream& operator <<(std::ostream &os, WorkingCopyInstance &inst);


private:
  ClusterEditingInstance* _instance;

  bool _dirty;
  std::vector<std::vector<int>*> _vectorCleanList;

  WorkingCopyGraph* _graph;

  lemon::FullGraph::EdgeMap<bool>* _edges;

  WorkingCopyGraph::EdgeMap<bool>* _forbidden;
  WorkingCopyGraph::EdgeMap<bool>* _permanent;

  lemon::FullGraph::NodeMap<bool>* _nodes;
  WorkingCopyGraph::EdgeMap<double>* _weight;
  WorkingCopyGraph::NodeMap<std::vector<int>*>* _clusters;

  WorkingCopyGraph::NodeMap<std::string>* _nodeNames;

};

} // namespace ysk

#endif	/* WORKINGCOPYINSTANCE_H */
