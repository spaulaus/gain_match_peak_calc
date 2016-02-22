//Program for calculating where to put the gamma peak
//to gain match VANDLE bars.
//
//Written by S. Taylor, 2/22/16

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  const double CSenergy = 662;//keV
  const double COenergy = 1333;//keV, of higher gamma
  double maxChannel = 0.0;//channels
  double maxNeutronEnergy = 0.0;//MeV
  double CSchannel = 0.0, COchannel = 0.0;//channels
  double CSedge = 0.0, COedge = 0.0;//keVee
  const double eRestMass = 511;//keV
  double neutron_keVee = 0.0;//kevee
  double x = 0.0;//MeV 

  //Calculates Compton Edge for 137Cs and 60Co
  CSedge = CSenergy-(CSenergy/(1+(2*CSenergy/eRestMass)));
  COedge = COenergy-(COenergy/(1+(2*COenergy/eRestMass)));
  
  //Captures user input for variables
  cout << "Enter maximum neutron energy(MeV): " << endl;
  cin >> maxNeutronEnergy;
  cout << "Enter maximum histogram channel(default=8192): " << endl;
  cin >> maxChannel;

  //Calculates neutron keVee using Madey's/Cecil's(derived from Birk's) formula
  x = (0.95*maxNeutronEnergy)-(8.0*(1-exp(-0.1*pow(maxNeutronEnergy,0.9))));
  neutron_keVee = x*1000;
  
  //Calculates where to put gamma edges
  CSchannel = CSedge * (maxChannel/neutron_keVee);
  COchannel = COedge * (maxChannel/neutron_keVee);
  
  //Outputs where to place compton edge:
  cout << "Place Compton edge here in QDC spectrum: " << endl;
  cout << "137Cs in channel " << CSchannel << ", 60Co in channel " << COchannel << endl;

  return 0;
}
