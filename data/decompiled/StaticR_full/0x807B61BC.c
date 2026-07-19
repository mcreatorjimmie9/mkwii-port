/* Function at 0x807B61BC, size=20 bytes */
/* Stack frame: 0 bytes */

void FUN_807B61BC(int r3)
{
    r3 = *(0 + r3); // lwz @ 0x807B61BC
    r3 = *(4 + r3); // lwz @ 0x807B61C0
    r0 = *(4 + r3); // lwz @ 0x807B61C4
    r3 = r0 rlwinm 4; // rlwinm
    return;
}