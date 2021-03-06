//------------------------------------------------------------------------------
/*
    This file is part of rippled: https://github.com/ripple/rippled
    Copyright (c) 2012, 2013 Ripple Labs Inc.

    Permission to use, copy, modify, and/or distribute this software for any
    purpose  with  or without fee is hereby granted, provided that the above
    copyright notice and this permission notice appear in all copies.

    THE  SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
    WITH  REGARD  TO  THIS  SOFTWARE  INCLUDING  ALL  IMPLIED  WARRANTIES  OF
    MERCHANTABILITY  AND  FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
    ANY  SPECIAL ,  DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
    WHATSOEVER  RESULTING  FROM  LOSS  OF USE, DATA OR PROFITS, WHETHER IN AN
    ACTION  OF  CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
    OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
*/
//==============================================================================


#ifndef RIPPLE_TESTOVERLAY_H_INCLUDED
#define RIPPLE_TESTOVERLAY_H_INCLUDED

#include "beast/modules/beast_core/system/BeforeBoost.h"
#include <boost/unordered_set.hpp>

#include "beast/modules/beast_core/beast_core.h"

/** Provides a template based peer to peer network simulator.

    A TestOverlay::Network simulates an entire peer to peer network.
    It provides peer connectivity and message passing services, while
    allowing domain specific customization through user provided types.

    This system is designed to allow business logic to be exercised
    in unit tests, using a simulated large scale network.
*/

namespace ripple
{

using namespace beast;

#  include "api/Results.h"
#  include "api/SimplePayload.h"
#  include "api/MessageType.h"
#  include "api/ConnectionType.h"
#  include "api/PeerType.h"
#  include "api/NetworkType.h"
#  include "api/StateBase.h"
#  include "api/PeerLogicBase.h"
#  include "api/InitPolicy.h"
# include "api/ConfigType.h"

}

#endif
