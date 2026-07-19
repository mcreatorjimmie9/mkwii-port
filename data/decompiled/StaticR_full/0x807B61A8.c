/* Function at 0x807B61A8, size=20 bytes */
/* Stack frame: 0 bytes */

void FUN_807B61A8(int r3)
{
    r3 = *(0 + r3); // lwz @ 0x807B61A8
    r3 = *(4 + r3); // lwz @ 0x807B61AC
    r0 = *(4 + r3); // lwz @ 0x807B61B0
    r3 = r0 rlwinm 0xd; // rlwinm
    return;
}