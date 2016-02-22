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
  double maxChannel = 8192;//channels
  double maxNeutronEnergy;//keV
  double CSchannel, COchannel;//channels
  double CSedge, COedge;//keVee
  const double eRestMass = 511;//keV
  double neutron_keVee;//kevee

  //Calculates Compton Edge for 137Cs and 60Co
  CSedge = CSenergy-(CSenergy/(1+(2*CSenergy/eRestMass));
  COedge = C0energy-(COenergy/(1+(2*COenergy/eRestMass));

  //Captures user input for variables
  cout << "Enter maximum neutron energy(keV): " << endl;
  cin >> maxNeutronEnergy;
  cou << "Enter maximum histogram channel(default=8192): " << endl;
  cin >> maxChannel;

  //Calculates neutron keVee using Madees? formula


  //Calculates where to put gamma edges
  CSchannel = CSedge * (maxChannel/neutron_keVee)
  COchannel = COedge * (maxChannel/neutron_keVee)
  
  //Outputs where to place compton edge:
  cout << "Place Compton edge here in QDC spectrum: " << endl;
  cout << "137Cs in channel " << CSchannel << ", 60Co in channel " << COchannel;


  return 0;
}
