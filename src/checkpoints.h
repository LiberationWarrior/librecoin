// Copyright (c) 2009-2012 The Bitcoin developers
// Copyright (c) 2014 Librecoin developers
// Distributed under the GPLv3 software license, see the accompanying
// file COPYING or https://www.gnu.org/licenses/gpl-3.0.html.
#ifndef BITCOIN_CHECKPOINT_H
#define BITCOIN_CHECKPOINT_H

#include <map>

class uint256;
class CBlockIndex;

/** Block-chain checkpoints are compiled-in sanity checks.
 * They are updated every release or three.
 */
namespace Checkpoints
{
    // Returns true if block passes checkpoint checks
    bool CheckBlock(int nHeight, const uint256& hash);

    // Return conservative estimate of total number of blocks, 0 if unknown
    int GetTotalBlocksEstimate();

    // Returns last CBlockIndex* in mapBlockIndex that is a checkpoint
    CBlockIndex* GetLastCheckpoint(const std::map<uint256, CBlockIndex*>& mapBlockIndex);

    // Returns the block hash of latest hardened checkpoint
    uint256 GetLatestHardenedCheckpoint();

    double GuessVerificationProgress(CBlockIndex *pindex);
}

#endif
