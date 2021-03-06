#ifndef CLUSTEREDITINGINSTANCE_H
#define	CLUSTEREDITINGINSTANCE_H

#include <lemon/adaptors.h>
#include <lemon/lgf_writer.h>
#include <lemon/full_graph.h>

#include <cstddef>
#include <vector>
#include <cmath>
#include <string>
#include <limits>
#include <map>

#include "WorkingCopyInstance.h"
#include "Helpers.h"
#include "Globals.h"

namespace ysk {

    /**
     * Compile reference for WCI
     */
    class WorkingCopyInstance;

    /**
     * Describes an instance of the double-weighted graph clustering problem. Note that this class
     * should not be directly used to modify the graph, instead a working copy should be used.
     */
    class ClusterEditingInstance {

    public:

        /**
         * Default constructor, initializes an empty instance of the dwgc-problem. This instance is by default unweighted and adjusts its specification when edges, matching a more specific instance, are added.
         */
        ClusterEditingInstance()
                : isOriginalInstance(false) 
                , _isInitialized(false)
                ,  _unweighted(true)
                , _dualWeighted(true)
                , _realValued(false)
                , _costInsertion(0.0)
                , _costDeletion(0.0)
                , _initializedCostInsertion(false)
                , _initializedCostDeletion(false)
                , _nodeNames(_orig)
                , _weight(_orig)
                , _permanent(_orig)
                , _forbidden(_orig)
                , _clusters(_orig)
                , _workingCopyInstance(nullptr)
        {
        }

        /**
         * Destructor
         */
        virtual ~ClusterEditingInstance();

        /**
         * Creates a full graph with a given amount of nodes and initializes internal variables for working with this graph
         * @param size The number of nodes the graph contains
         */
        void init(int size);

        void initNode(lemon::FullGraph::Node node,
                      std::string name,
                      std::vector<int>& cluster);
        /**
         * Adds an edge to the given instance with associated information relevant to the dwgc problem
         * @param edge The edge as lemon::FullGraph::Edge
         * @param weight The edge-weight
         * @param edgeType FORBIDDEN/PERMANENT markers for the edge
         */
        void initEdge(lemon::FullGraph::Edge edge,
                      double weight,
                      EdgeType edgeType);

        WorkingCopyInstance& getWorkingCopyInstance();

        const lemon::FullGraph& getOrig() const;

        double computeCost() const;

        double getWeight(const lemon::FullGraph::Edge& e) const;

        bool isUnweighted() const;

        bool isDualWeighted() const;

        bool isRealValued() const;

        std::string getEdgeName(const lemon::FullGraph::Edge e) const;

        std::string getNodeName(const lemon::FullGraph::Node node) const;

        bool isPermanent(const lemon::FullGraph::Edge& e) const;

        bool isForbidden(const lemon::FullGraph::Edge& e) const;

        bool isDirty() const;

        std::vector<int>* getCluster(lemon::FullGraph::Node u) const;

        unsigned int getSize() const;

        friend std::ostream& operator <<(std::ostream &os, ClusterEditingInstance &inst);
        
        bool isOriginalInstance; //TODO: Hacky workaround for now ... don't like this at all

    private:

        /**
        * Describes whether the instance has already been initialized.
        * This is essential because before initialization _orig and _workingCopyInstance will not be initialized and calling their destructors will result in unpredictable behaviour.
        */
        bool _isInitialized;


        bool _unweighted;
        bool _dualWeighted;
        bool _realValued;

        double _costInsertion;
        double _costDeletion;
        bool _initializedCostInsertion;
        bool _initializedCostDeletion;

        lemon::FullGraph _orig;
        /**
         * Maps each node to a name (identifier)
         */
        lemon::FullGraph::NodeMap<std::string> _nodeNames;
        lemon::FullGraph::EdgeMap<double> _weight;
        lemon::FullGraph::EdgeMap<bool> _permanent;
        lemon::FullGraph::EdgeMap<bool> _forbidden;
        /**
     * A NodeMap mapping each node to an integer that identifies the cluster to which the node will belong in the solution
     */
        lemon::FullGraph::NodeMap<std::vector<int>* > _clusters;

        WorkingCopyInstance* _workingCopyInstance;

    };

} // namespace ysk

#endif	/* CLUSTEREDITINGINSTANCE_H */
