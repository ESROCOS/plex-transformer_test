/* User code: This file will not be overwritten by TASTE. */

#include "printer.h"
#include <iostream>
#include <fstream>
#include "base_support/Base-samples-RigidBodyStateConvert.hpp"
#include "base_support/OpaqueConversion.hpp"
#include <Eigen/Core>
#include <vector>

void printer_startup()
{
    /* Write your initialization code here,
       but do not make any call to a required interface. */
}

// EIGEN HELPER METHODS
void to4d(Eigen::Matrix3d r, Eigen::Vector3d t, Eigen::Matrix4d & h){
	
  h<< r(0,0), r(0,1), r(0,2), t[0],
      r(1,0), r(1,1), r(1,2), t[1],
      r(2,0), r(2,1), r(2,2), t[2],
          0,      0,      0,    1;
}

void printer_PI_update_amp(const asn1SccBase_samples_RigidBodyState *IN_pose)
{
  base::Vector3d t;
  base::Quaterniond q;
  Eigen::Matrix3d r;

  static int i = 0;

  // extract orientation / translation
  asn1Scc_Vector3d_fromAsn1(t, IN_pose->position);
  asn1Scc_Quaterniond_fromAsn1(q, IN_pose->orientation);
  // convert quaternion to rotation mat
  r = q.normalized().toRotationMatrix();

  Eigen::Matrix4d p;

  to4d(r,t,p);
  
  std::ifstream f("marker.csv");
  bool good = f.good();
  
  std::ofstream myfile;
  if (good) myfile.open ("marker.csv", std::ios::app);
  else myfile.open ("marker.csv", std::ios::out);

  myfile << "\n" << std::floor(((p(0,3)) * 100000) + .5) / 100000 
	 << ","  << std::floor(((p(1,3)) * 100000) + .5) / 100000 
	 << ","  << std::floor(((p(2,3)) * 100000) + .5) / 100000;   

  myfile.close();

  i++;

  std::cout << "got marker position:\n" << p << std::endl;
}

void printer_PI_update_arp(const asn1SccBase_samples_RigidBodyState *IN_pose)
{
  base::Vector3d t;
  base::Quaterniond q;
  Eigen::Matrix3d r;
  // extract orientation / translation
  asn1Scc_Vector3d_fromAsn1(t, IN_pose->position);
  asn1Scc_Quaterniond_fromAsn1(q, IN_pose->orientation);
  // convert quaternion to rotation mat
  r = q.normalized().toRotationMatrix();

  Eigen::Matrix4d p;

  to4d(r,t,p);

  std::ifstream f("marker.csv");
  bool good = f.good();
  
  std::ofstream myfile;
  if (good) myfile.open ("marker.csv", std::ios::app);
  else myfile.open ("marker.csv", std::ios::out);

  myfile << "\n" << std::floor(((p(0,3)) * 100000) + .5) / 100000 
	 << ","  << std::floor(((p(1,3)) * 100000) + .5) / 100000 
	 << ","  << std::floor(((p(2,3)) * 100000) + .5) / 100000;   

  myfile.close();
  std::cout << "got robot position:\n" << p << std::endl;
}

