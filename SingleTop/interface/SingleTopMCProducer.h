#ifndef Single_Top_TChannel_MC_Producer_h
#define Single_Top_TChannel_MC_Producer_h

/* \Class SingleTopMCProducer
 *
 * \Authors: A. Giammanco, A. Orso M. Iorio
 * 
 * \ version $Id: SingleTopMCProducer.h,v 1.1.2.2 2013/06/21 20:40:24 oiorio Exp $
 */

//Single Top MC Producer
// Original 
// Adapted by O.Iorio

#include "FWCore/Framework/interface/Frameworkfwd.h"
#include "FWCore/Framework/interface/EDAnalyzer.h"

#include "FWCore/Framework/interface/Event.h"
#include <FWCore/Framework/interface/Run.h>

#include "FWCore/Framework/interface/MakerMacros.h"
#include "FWCore/ParameterSet/interface/ParameterSet.h"

#include "DataFormats/Common/interface/TriggerResults.h"
#include "FWCore/Framework/interface/TriggerNamesService.h"
#include "FWCore/ServiceRegistry/interface/Service.h" 


#include "FWCore/Framework/interface/EDProducer.h"

#include "FWCore/ParameterSet/interface/ParameterSet.h"
//#include "FWCore/ParameterSet/interface/InputTag.h"
#include "FWCore/Utilities/interface/InputTag.h"
#include "DataFormats/Common/interface/View.h"

#include "DataFormats/PatCandidates/interface/Jet.h"
#include "DataFormats/PatCandidates/interface/Electron.h"
#include "DataFormats/PatCandidates/interface/Muon.h"

#include "DataFormats/PatCandidates/interface/UserData.h"
#include "PhysicsTools/PatAlgos/interface/PATUserDataHelper.h"


#include "DataFormats/PatCandidates/interface/Lepton.h"
#include "DataFormats/PatCandidates/interface/Electron.h"
#include "DataFormats/PatCandidates/interface/Muon.h"
#include "DataFormats/PatCandidates/interface/CompositeCandidate.h"
#include "DataFormats/PatCandidates/interface/Jet.h"
#include "DataFormats/PatCandidates/interface/MET.h"
#include "DataFormats/PatCandidates/interface/PATObject.h"

#include "DataFormats/Candidate/interface/NamedCompositeCandidate.h"



//class JetFlavourIdentifier;



  class SingleTopMCProducer : public edm::EDProducer {

    public:

      explicit SingleTopMCProducer(const edm::ParameterSet & iConfig);
      ~SingleTopMCProducer();
      virtual void produce(edm::Event & iEvent, const edm::EventSetup & iSetup);
    //       static void fillDescriptions(edm::ConfigurationDescriptions & descriptions);
    private:

    //InputTags
    edm::InputTag genParticlesSrc_,genJetsSrc_; 

    //cuts for genJets Matching
    double genJetsDeltarMatching_;

    bool isSingleTopTChan_, isSingleTopCompHEP_;
  };



#endif
