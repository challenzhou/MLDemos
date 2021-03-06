#include "DBSCAN.hpp"
#include "kmedoids.hpp"
#include "Meanshift.hpp"
#include "xmeans.hpp"
//#include "generalized-kmeans.hpp"

#include "Eigen/Eigen"
using namespace Eigen;

using namespace clustering;

void Test()
{
    int kernel_type=0; // 0: Epanechnikov, 1: truncated multivariate normal
    double kernel_bandwidth=0;
    int dim=0;
    double mode_tolerance=0;
    Meanshift ms(kernel_type, kernel_bandwidth, dim, mode_tolerance);

    double eps=0; // search space for neighbors in the range [0,1], where 0.0 is exactly self and 1.0 is entire dataset
    int min_elems=0;
    DBSCAN<Vector2d,Matrix2d> db(eps, min_elems);
    Matrix2d clusterData;
    db.fit(clusterData);
}
