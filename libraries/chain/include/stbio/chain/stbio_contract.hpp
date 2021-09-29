#pragma once

#include <eosio/chain/types.hpp>
#include <eosio/chain/contract_types.hpp>

namespace eosio { namespace chain {

   class apply_context;

   /**
    * @defgroup native_action_handlers Native Action Handlers
    */
   ///@{
   void apply_stbio_newaccount(apply_context&);
   void apply_stbio_updateauth(apply_context&);
   void apply_stbio_deleteauth(apply_context&);
   void apply_stbio_linkauth(apply_context&);
   void apply_stbio_unlinkauth(apply_context&);

   /*
   void apply_stbio_postrecovery(apply_context&);
   void apply_stbio_passrecovery(apply_context&);
   void apply_stbio_vetorecovery(apply_context&);
   */

   void apply_stbio_setcode(apply_context&);
   void apply_stbio_setabi(apply_context&);

   void apply_stbio_canceldelay(apply_context&);
   ///@}  end action handlers

} } /// namespace eosio::chain
