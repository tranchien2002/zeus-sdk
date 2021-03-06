#include "../dappservices/sign.hpp"
#include "../Common/events.hpp"

#define DAPPSERVICES_ACTIONS() \
  XSIGNAL_DAPPSERVICE_ACTION \
  SIGN_DAPPSERVICE_ACTIONS
#define DAPPSERVICE_ACTIONS_COMMANDS() \
  SIGN_SVC_COMMANDS() 

#define CONTRACT_NAME() signer

CONTRACT_START()
 [[eosio::action]] void sendsigreq(std::string id, std::string destination, std::string trx_data, std::string chain, std::string chain_type, std::string sigs, std::string account, uint16_t sigs_required)
  {
    svc_sign_signtrx(id, destination, trx_data, chain, chain_type, sigs, account, sigs_required);
  }
CONTRACT_END((sendsigreq))
