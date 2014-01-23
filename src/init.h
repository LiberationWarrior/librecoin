// Copyright (c) 2009-2010 Satoshi Nakamoto
// Copyright (c) 2009-2012 The Bitcoin developers
// Copyright (c) 2014 Librecoin developers
// Distributed under the GPLv3 software license, see the accompanying
// file COPYING or https://www.gnu.org/licenses/gpl-3.0.html.
#ifndef BITCOIN_INIT_H
#define BITCOIN_INIT_H

#include "wallet.h"

extern CWallet* pwalletMain;

void StartShutdown();
bool ShutdownRequested();
void Shutdown();
bool AppInit2(boost::thread_group& threadGroup);
std::string HelpMessage();

#endif
